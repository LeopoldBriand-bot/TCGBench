#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <iostream>
using namespace std;

SCENARIO( "Verify equality in main" )
{
    REQUIRE( 1 == 1 );
}

SCENARIO( "Verify failurein main" )
{
    std::cin.get();
    REQUIRE( 1 == 2 );
}

SCENARIO( "Verify pause main" )
{
    
    REQUIRE( 1 == 2 );
}