cmake_minimum_required(VERSION 3.5)
set (CMAKE_CXX_STANDARD 14)
project(TCGBench)

set (VERSION_MAJOR 1)
set (VERSION_MINOR 0)


list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/Modules")

include(CTest)
enable_testing()

#
# Create a library target for the Catch header-only test framework.
#
add_library(Catch INTERFACE)
target_include_directories(Catch
	INTERFACE
		test/
)

#
# Create a target for executing the Catch unit tests.
#
add_executable(unit_tests
	"test/main.cpp" "Class/UnitLocation.cpp" "Class/BuildingLocation.cpp" "Class/Building.cpp" "Class/Effect.cpp" "Class/Player.cpp" "Class/Unit.cpp" "Class/Spell.cpp" "Class/Game.cpp")
target_include_directories(unit_tests
	PUBLIC
		test/
)
target_link_libraries(unit_tests
	Catch
)
target_compile_options(unit_tests
	PRIVATE
		$<$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:AppleClang>,$<CXX_COMPILER_ID:GNU>>:
			-Werror -Wall -Wextra>
		$<$<CXX_COMPILER_ID:MSVC>:
			/W4>
)

# Load and use the .cmake file provided by Catch so all the test cases
# are made available to CTest.
include(ParseAndAddCatchTests)
ParseAndAddCatchTests(unit_tests)

install(
	TARGETS unit_tests
	RUNTIME DESTINATION bin
)


set(SOURCE main.cpp)

add_executable(${PROJECT_NAME} ${SOURCE} "Class/UnitLocation.cpp" "Class/BuildingLocation.cpp" "Class/Building.cpp" "Class/Effect.cpp" "Class/Player.cpp" "Class/Unit.cpp" "Class/Spell.cpp" "Class/Game.cpp")