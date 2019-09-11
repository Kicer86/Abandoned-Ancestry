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
    std::map<uint, std::unique_ptr<IObject>> _objects;
    std::vector<std::unique_ptr<IDrawable>> _drawableObjects;
};

#endif //WORLD_HPP