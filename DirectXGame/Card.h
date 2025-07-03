#pragma once
#include <functional>
#include <string>

class Player; // 前方宣言

class Card {
public:
	using EffectFunction = std::function<void(Player*, Player*)>;

	Card(int id, const std::string& name, const std::string& effectDescription);

	void ActivateEffect(Player* self, Player* opponent);
	std::string ToString() const;

	int GetId() const { return id_; }
	std::string GetName() const { return name_; }
	std::string GetEffectDescription() const { return effectDescription_; }
	void SetEffectFunction(EffectFunction effect) { effect_ = effect; }

private:
	int id_;
	std::string name_;
	std::string effectDescription_;
	EffectFunction effect_ = nullptr;
};
