#ifndef WORLDSIMULATION_HPP
#define WORLDSIMULATION_HPP

#include "ILogic.hpp"

class WorldSimulation
{
private:
    std::map<std::string, std::unique_ptr<ILogic>> _logics;
public:
    void addLogicable(std::unique_ptr<ILogic> logic, const std::string& resourceName);
    void processObject(IObject& object, const std::string& resource);
};

#endif //WORLDSIMULATION_HPP