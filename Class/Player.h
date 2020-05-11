#pragma once
#ifndef DEF_PLAYER
#define DEF_PLAYER

#include <string>
#include <list>
#include "Spell.h"
#include "Building.h"
#include "BuildingLocation.h"
#include "Unit.h"
#include "UnitLocation.h"

class Player
{
    public:

        // ###################################################
        // Declarations
        // ###################################################

        Player();
        ~Player();

        // ###################################################
        // Getters
        // ###################################################

        std::string getId();
        std::string getName();
        std::list<Spell> getDeck();
        std::list<Spell> getHand();
        std::list<BuildingLocation> getBuildingLocations();
        std::list<UnitLocation> getUnitLocations();
        std::list<Unit> getGraveyard();
        int getCommonRessources();
        int getRareRessources();

        // ###################################################
        // Setters
        // ###################################################

        void setId(std::string newId);
        void setName(std::string newName);
        void setDeck(std::list<Spell> newDeck);
        void setHand(std::list<Spell> newHand);
        void setBuildingLocations(std::list<BuildingLocation> newBuildingLocations);
        void setUniLocations(std::list<UnitLocation> newUnitLocations);
        void setGraveYard(std::list<Unit> newGraveyard);
        void setCommonRessources(int commonRessource);
        void setRareRessources(int rareRessources);

        // ###################################################
        // Methods
        // ###################################################

        void playTurn();
        void addUnitOnBoard(UnitLocation newUnitLocation);
        void sendUnitToGraveyard(UnitLocation &unitLocation);
        std::list<int> getTargetLocation();

    private:
         std::string id;
         std::string name;
         std::list<Spell> deck;
         std::list<Spell> hand;
         std::list<BuildingLocation> buildingLocations;
         std::list<UnitLocation> unitLocations;
         std::list<Unit> graveyard;
         std::list<int> ressources;

};
#endif