#include "BuildingLocation.h"

// ###################################################
// Declarations
// ###################################################

BuildingLocation::BuildingLocation()
{
}

BuildingLocation::BuildingLocation(int d_location, Building d_building)
{
	setLocation(d_location);
	setBuilding(d_building);
}

BuildingLocation::~BuildingLocation()
{
}

// ###################################################
// Getters
// ###################################################

int BuildingLocation::getLocation()
{
	return location;
}

Building BuildingLocation::getBuilding()
{
	return building;
}

// ###################################################
// Setters
// ###################################################

void BuildingLocation::setLocation(int newLocation)
{
	location = newLocation;
}

void BuildingLocation::setBuilding(Building newBuilding)
{
	building = newBuilding;
}

// ###################################################
// Methods
// ###################################################