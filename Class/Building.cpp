#include "Building.h"

// ###################################################
// Declarations
// ###################################################

Building::Building()
{
}

Building::~Building()
{
}

// ###################################################
// Getters
// ###################################################

std::string Building::getId()
{
	return id;
}

std::string Building::getName()
{
	return name;
}

std::string Building::getDescription()
{
	return description;
}

int Building::getLife()
{
	return life;
}

std::list<Effect> Building::getEffects()
{
	return effects;
}

bool Building::getIsUsable()
{
	return isUsable;
}

State::State Building::getState()
{
	return state;
}

std::list<int> Building::getCost()
{
	return cost;
}

std::list<Unit> Building::getAvailableUnits()
{
	return availableUnits;
}

// ###################################################
// Setters
// ###################################################

void Building::setId(std::string newId)
{
	id = newId;
}

void Building::setName(std::string newName)
{
	name = newName;
}

void Building::setDescription(std::string newDescription)
{
	description = newDescription;
}

void Building::setLife(int newLife)
{
	life = newLife;
}

void Building::setEffects(std::list<Effect> newEffects)
{
	effects = newEffects;
}

void Building::setIsUsable(bool newIsUsable)
{
	isUsable = newIsUsable;
}

void Building::setState(State::State newState)
{
	state = newState;
}

void Building::setCoset(std::list<int> newCost)
{
	cost = newCost;
}

void Building::setAvailableUnits(std::list<Unit> newAvailableUnits)
{
	availableUnits = newAvailableUnits;
}


// ###################################################
// Methods
// ###################################################

void Building::buyUnit(Unit unit, Player& player)
{
	std::list<int> location = player.getTargetLocation();
	player.addUnitOnBoard(UnitLocation(unit, location));
}
