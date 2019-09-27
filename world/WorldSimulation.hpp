#ifndef WORLDSIMULATION_HPP
#define WORLDSIMULATION_HPP

#include "ILogicable.hpp"

class WorldSimulation
{
private:
    std::map<std::string, std::unique_ptr<ILogicable>> _logicables;
public:
    void addLogicable(std::unique_ptr<ILogicable> logicable, const std::string& resourceName);
    void processObject(IObject& object, const std::string& resource);
};

#endif //WORLDSIMULATION_HPP