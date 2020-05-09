#include "UnitLocation.h"
using namespace std;

// ###################################################
// Declarations
// ###################################################


UnitLocation::UnitLocation()
{
}

UnitLocation::UnitLocation(Unit d_unit, list<int> d_location)
{
	unit = d_unit;
	location = d_location;
}

UnitLocation::~UnitLocation()
{
}

// ###################################################
// Getters
// ###################################################

Unit UnitLocation::getUnit()
{
	return unit;
}

std::list<int> UnitLocation::getLocation()
{
	return location;
}


// ###################################################
// Setters
// ###################################################

void UnitLocation::setUnit(Unit newUnit)
{
	unit = newUnit;
}

void UnitLocation::setlocation(std::list<int> newLocation)
{
	location = newLocation;
}


// ###################################################
// Methods
// ###################################################

void UnitLocation::moveUnit(std::list<int> movement)
{
	location.front() += movement.front();
	location.back() += movement.back();
}

