#ifndef DEF_BUILDING
#define DEF_BUILDING

#include <string>
#include <list>
#include "Effect.h"
#include "Unit.h"
#include "../Enum/state.h"
#include "UnitLocation.h"
#include "Player.h"

class Building
{
    public:

        // ###################################################
        // Declarations
        // ###################################################

        Building();
        ~Building();

        // ###################################################
        // Getters
        // ###################################################

        std::string getId();
        std::string getName();
        std::string getDescription();
        int getLife();
        std::list<Effect> getEffects();
        bool getIsUsable();
        State::State getState();
        std::list<int> getCost();
        std::list<Unit> getAvailableUnits();

        // ###################################################
        // Setters
        // ###################################################

        void setId(std::string newId);
        void setName(std::string newName);
        void setDescription(std::string newDescription);
        void setLife(int newLife);
        void setEffects(std::list<Effect> newEffects);
        void setIsUsable(bool newIsUsable);
        void setState(State::State newState);
        void setCoset(std::list<int> newCost);
        void setAvailableUnits(std::list<Unit> newAvailableUnits);

        // ###################################################
        // Methods
        // ###################################################

        void buyUnit(Unit unit, Player& player);



    private:
        std::string id;
        std::string name;
        std::string description;
        int life;
        std::list<Effect> effects;
        bool isUsable;
        State::State state;
        std::list<int> cost;
        std::list<Unit> availableUnits;

};
#endif