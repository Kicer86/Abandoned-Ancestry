#include "WorldSimulation.hpp"

void WorldSimulation::addLogicable(std::unique_ptr<ILogicable> logicable, const std::string& resourceName)
{
    _logicables.emplace(resourceName, std::move(logicable));
}

void WorldSimulation::processObject(IObject& object, const std::string& resource)
{
    try
    {
        _logicables.at(resource)->process(object);
    }
    catch(const std::out_of_range&)
    {

    }
}
