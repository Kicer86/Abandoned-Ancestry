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

class World {
public:
    World();
private:
    std::unique_ptr<WorldDrawer> _drawer;
    std::unique_ptr<WorldController> _controller;
};

#endif //WORLD_HPP