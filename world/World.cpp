#include "World.hpp"

World::World():
_drawer(std::make_unique<WorldDrawer>())
{
    
}