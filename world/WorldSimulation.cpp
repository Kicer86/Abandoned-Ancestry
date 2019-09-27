#include "WorldSimulation.hpp"

void WorldSimulation::addLogicable(std::unique_ptr<ILogic> logic, const std::string& resourceName)
{
    _logics.emplace(resourceName, std::move(logic));
}

void WorldSimulation::processObject(IObject& object, const std::string& resource)
{
    try
    {
        _logics.at(resource)->process(object);
    }
    catch(const std::out_of_range&)
    {

    }
}
