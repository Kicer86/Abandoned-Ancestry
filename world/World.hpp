#ifndef WORLD_HPP
#define WORLD_HPP
#include <memory>
#include <list>
#include <vector>
#include <string>
#include <map>

#include "basic/IObject.hpp"
#include "basic/IDrawable.hpp"
#include "WorldDrawer.hpp"
#include "WorldController.hpp"

class World {
public:
    World();
private:
    WorldDrawer _drawer;
    WorldController _controller;
};

#endif //WORLD_HPP