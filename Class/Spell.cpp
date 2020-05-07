#include "Spell.h"
using namespace std;

// ###################################################
// Declarations
// ###################################################

Spell::Spell(string d_id, 
string d_name, 
string d_description, 
list<Effect> d_effects, 
list<Building> d_buildings, 
list<Unit> d_units, 
int d_limitNumber)
{
	id = d_id;
	name = d_name;
	description = d_description;
	effects = d_effects;
    units = d_units;
    buildings = d_buildings;
	limitNumber = d_limitNumber;
}

Spell::~Spell(){}

// ###################################################
// Getters
// ###################################################

string Spell::getId()
{
	return id;
}

string Spell::getName()
{
	return name;
}

string Spell::getDescription()
{
	return description;
}

list<Effect> Spell::getEffects()
{
	return effects;
}

list<Building> Spell::getBuildings()
{
	return buildings;
}

list<Unit> Spell::getUnits()
{
	return units;
}

// ###################################################
// Setters
// ###################################################

void Spell::setId(string newId)
{
	id = newId;
}

void Spell::setName(string newName)
{
	name = newName;
}

void Spell::setDescription(string newDescription)
{
	description = newDescription;
}

void Spell::setEffects(list<Effect> newEffects)
{
	effects = newEffects;
}

void Spell::setBuildings(list<Building> newBuildings)
{
	buildings = newBuildings;
}

void Spell::setUnits(list<Unit> newUnits)
{
	units = newUnits;
}

// ###################################################
// Methods
// ###################################################