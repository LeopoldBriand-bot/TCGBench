#include "Player.h"

using namespace std;

// ###################################################
// Declarations
// ###################################################

Player::Player()
{
}

Player::~Player()
{
}

// ###################################################
// Getters
// ###################################################

std::string Player::getId()
{
	return id;
}

std::string Player::getName()
{
	return name;
}

std::list<Spell> Player::getDeck()
{
	return deck;
}

std::list<Spell> Player::getHand()
{
	return hand;
}

std::list<BuildingLocation> Player::getBuildingLocations()
{
	return buildingLocations;
}

std::list<UnitLocation> Player::getUnitLocations()
{
	return unitLocations;
}

std::list<Unit> Player::getGraveyard()
{
	return graveyard;
}

int Player::getCommonRessources()
{
	return ressources.front();
}

int Player::getRareRessources()
{
	return ressources.back();
}

// ###################################################
// Setters
// ###################################################

void Player::setId(std::string newId)
{
	id = newId;
}

void Player::setName(std::string newName)
{
	name = newName;
}

void Player::setDeck(std::list<Spell> newDeck)
{
	deck = newDeck;
}

void Player::setHand(std::list<Spell> newHand)
{
	hand = newHand;
}

void Player::setBuildingLocations(std::list<BuildingLocation> newBuildingLocations)
{
	buildingLocations = newBuildingLocations;
}

void Player::setUniLocations(std::list<UnitLocation> newUnitLocations)
{
	unitLocations = newUnitLocations;
}

void Player::setGraveYard(std::list<Unit> newGraveyard)
{
	graveyard = newGraveyard;
}

void Player::setCommonRessources(int commonRessource)
{
	ressources.front() = commonRessource;
}

void Player::setRareRessources(int rareRessources)
{
	ressources.back() = rareRessources;
}


// ###################################################
// Methods
// ###################################################

void Player::playTurn()
{
}

void Player::addUnitOnBoard(UnitLocation newUnitLocation)
{
}

void Player::sendUnitToGraveyard(UnitLocation &unitLocation)
{
	graveyard.push_back(unitLocation.getUnit());
	//TODO: delete it from unitLocations list
}

std::list<int> Player::getTargetLocation()
{
	return { 0,0 }; // Add Here the function that select placement on board
}
