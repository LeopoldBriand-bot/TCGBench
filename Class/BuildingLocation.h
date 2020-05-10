#ifndef DEF_BUILDINGLOCATION
#define DEF_BUILDINGLOCATION

#include <string>
#include <list>
#include "Building.h"

class BuildingLocation
{
public:

    // ###################################################
    // Declarations
    // ###################################################

    BuildingLocation();
    BuildingLocation(int d_location, Building d_building);
    ~BuildingLocation();

    // ###################################################
    // Getters
    // ###################################################

    int getLocation();
    Building getBuilding();
    

    // ###################################################
    // Setters
    // ###################################################

    void setLocation(int newLocation);
    void setBuilding(Building newBuilding);

    // ###################################################
    // Methods
    // ###################################################




private:
    int location;
    Building building;

};
#endif