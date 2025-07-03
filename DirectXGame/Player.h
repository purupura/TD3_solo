#pragma once
#include <string>

class Player {
public:
	Player(const std::string& name) : name_(name) {}
	std::string GetName() const { return name_; }

private:
	std::string name_;
};
