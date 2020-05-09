#ifndef DEF_UNITLOCATION
#define DEF_UNITLOCATION

#include <string>
#include <list>
#include "Unit.h"

class UnitLocation
{
public:

    // ###################################################
    // Declarations
    // ###################################################

    UnitLocation();
    UnitLocation(Unit d_unit, std::list<int> d_location);
    ~UnitLocation();

    // ###################################################
    // Getters
    // ###################################################

    Unit getUnit();
    std::list<int> getLocation();

    // ###################################################
    // Setters
    // ###################################################

    void setUnit(Unit newUnit);
    void setlocation(std::list<int> newLocation);

    // ###################################################
    // Methods
    // ###################################################

    void moveUnit(std::list<int> movement);

private:
    
    Unit unit;
    std::list<int> location;

};
#endif