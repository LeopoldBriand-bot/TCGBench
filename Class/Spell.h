#ifndef DEF_SPELL
#define DEF_SPELL
#include "Effect.h"
#include "Unit.h"
#include "Building.h"
#include <string>
#include <list>

    // ###################################################
    // The different cards in game are all spells
    // ###################################################
class Spell
{
    public:
        // ###################################################
        // Declarations
        // ###################################################

        Spell(std::string d_id,
        std::string d_name,
        std::string d_description,
        std::list<Effect> d_effects,
        std::list<Building> d_buildings,
        std::list<Unit> d_units,
        int d_limitNumber);

        ~Spell();

        // ###################################################
        // Getters
        // ###################################################

        std::string getId();
        std::string getName();
        std::string getDescription();
        std::list<Effect> getEffects();
        std::list<Unit> getUnits();
        std::list<Building> getBuildings();
        int getLimitNumber();

        // ###################################################
        // Setters
        // ###################################################

        void setId(std::string newId);
        void setName(std::string newName);
        void setDescription(std::string newDescription);
        void setEffects(std::list <Effect> newEffects);
        void setUnits(std::list <Unit> newUnits);
        void setBuildings(std::list <Building> newBuildings);
        void setLimitNumber(int newLimitNumber);

        // ###################################################
        // Methods
        // ###################################################

        private:
            std::string name;
            std::string id;
            std::string description;
            std::list<Effect> effects;
            std::list<Unit> units;
            std::list<Building> buildings;
            int limitNumber;

};
#endif