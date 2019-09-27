#ifndef WORLDSIMULATION_HPP
#define WORLDSIMULATION_HPP

#include "ILogicable.hpp"

class WorldSimulation
{
private:
    std::map<std::string, std::unique_ptr<ILogicable>> _logicable;
public:
    void addLogicable(std::unique_ptr<ILogicable> logicable, const std::string& resourceName);
};

#endif //WORLDSIMULATION_HPP