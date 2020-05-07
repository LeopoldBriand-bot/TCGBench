#include "Unit.h"
#include "../Enum/category.h"
#include "../Enum/range.h"
#include "../Enum/state.h"
#include "../Enum/type.h"
using namespace std;

// ###################################################
// Declarations
// ###################################################

Unit::Unit(std::string d_id, std::string d_name, std::string d_description)
{
	id = d_id;
	name = d_name;
	description = d_description;
	damage = 0;
	life = 0;
	effects = {};
	isUsable = false;
	hasBeenUsed = false;
	category = Category::Category::undefined;
	range = Range::Range::undefined;
	state = State::State::None;
	type = Type::Type::common;
	cost = {0, 0};

	

}

Unit::Unit(std::string d_id, std::string d_name, std::string d_description, int d_damage, int d_life, Category::Category d_category, Range::Range d_range, Type::Type  d_type, std::list<int> d_cost)
{
	id = d_id;
	name = d_name;
	description = d_description;
	damage = d_damage;
	life = d_life;
	effects = {};
	isUsable = false;
	hasBeenUsed = false;
	category = d_category;
	range = d_range;
	state = State::State::None;
	type = d_type;
	cost = d_cost;
}

Unit::Unit(std::string d_id, std::string d_name, std::string d_description, int d_damage, int d_life, std::list<Effect> d_effect, bool d_isUsable, bool d_hasBeenUsed, Category::Category d_category, Range::Range d_range, State::State d_state, Type::Type  d_type, std::list<int> d_cost)
{
	id = d_id;
	name = d_name;
	description = d_description;
	damage = d_damage;
	life = d_life;
	effects = {};
	isUsable = d_isUsable;
	hasBeenUsed = d_hasBeenUsed;
	category = d_category;
	range = d_range;
	state = d_state;
	type = d_type;
	cost = d_cost;
}

Unit::~Unit()
{
}



// ###################################################
// Getters
// ###################################################



std::string Unit::getId()
{
	return id;
}

std::string Unit::getName()
{
	return name;
}

std::string Unit::getDescription()
{
	return description;
}

int Unit::getDamage()
{
	return damage;
}

int Unit::getLife()
{
	return life;
}

std::list<Effect> Unit::getEffects()
{
	return effects;
}

bool Unit::getIsUsable()
{
	return isUsable;
}

bool Unit::getHasBeenUsed()
{
	return hasBeenUsed;
}

Category::Category Unit::getCategory()
{
	return category;
}

Range::Range Unit::getRange()
{
	return range;
}

State::State Unit::getState()
{
	return state;
}

Type::Type  Unit::getType()
{
	return type;
}

std::list<int> Unit::getCost()
{
	return cost;
}

// ###################################################
// Setters
// ###################################################

void Unit::setId(std::string newId)
{
	id = newId;
}

void Unit::setName(std::string newName)
{
	name = newName;
}

void Unit::setDescription(std::string newDescription)
{
	description = newDescription;
}

void Unit::setDamage(int newDamage)
{
	damage = newDamage;
}

void Unit::setLife(int newLife)
{
	life = newLife;
}

void Unit::setEffects(std::list<Effect> newEffects)
{
	effects = newEffects;
}

void Unit::setIsUsable(bool newIsUsable)
{
	isUsable = newIsUsable;
}

void Unit::setHasBeenUsed(bool newHasBeenUsed)
{
	hasBeenUsed = newHasBeenUsed;
}

void Unit::setCategory(Category::Category newCategory)
{
	category = newCategory;
}

void Unit::setRange(Range::Range newRange)
{
	range = newRange;
}

void Unit::setType(Type::Type  newType)
{
	type = newType;
}

void Unit::setCost(std::list<int> newCost)
{
	cost = newCost;
}


// ###################################################
// Methods
// ###################################################


void Unit::attackUnits(std::list<Unit> targets, int damage)
{
	for each (Unit target in targets)
	{
		target.sufferDamage(damage);
	}
}

void Unit::sufferDamage(int damage)
{
	setLife(getLife() - damage);
}
