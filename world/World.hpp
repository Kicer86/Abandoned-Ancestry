#ifndef WORLD_HPP
#define WORLD_HPP
#include <memory>
#include <map>

#include "IObject.hpp"
#include "IDrawable.hpp"
#include "WorldDrawer.hpp"
#include "WorldController.hpp"

class World {
public:
    World();
    uint addObject(std::unique_ptr<IObject> object);
    const IObject* getObject(uint id);
private:

    uint _objectCounter;

    std::map<uint, std::unique_ptr<IObject>> _objects;
};

#endif //WORLD_HPP