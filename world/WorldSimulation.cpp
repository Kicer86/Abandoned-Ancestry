#include "WorldSimulation.hpp"

void WorldSimulation::addLogicable(std::unique_ptr<ILogicable> logicable, const std::string& resourceName)
{
    _logicable.emplace(resourceName, std::move(logicable));
}