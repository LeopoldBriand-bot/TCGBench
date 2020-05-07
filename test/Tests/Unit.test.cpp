
#include "../catch.hpp"

#include "../Class/Unit.h"

SCENARIO( "Verify equality", "[Unit.test.cpp]" )
{
    REQUIRE( 1 == 1 );
}

SCENARIO( "Verify failure" )
{
    REQUIRE( 1 == 2 );
}