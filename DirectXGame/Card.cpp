#include "Card.h"
#include <iostream>

Card::Card(int id, const std::string& name, const std::string& effectDescription) : id_(id), name_(name), effectDescription_(effectDescription) {}

void Card::ActivateEffect(Player* self, Player* opponent) {
	if (effect_) {
		effect_(self, opponent);
	}
}

std::string Card::ToString() const { return name_ + " - " + effectDescription_; }
