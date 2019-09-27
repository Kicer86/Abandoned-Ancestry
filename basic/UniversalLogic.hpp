#ifndef UNIVERSALLOGIC_HPP
#define UNIVERSALLOGIC_HPP

#include <functional>

#include "IObject.hpp"
#include "ILogicable.hpp"

class UniversalLogic : public ILogicable
{
public:
    UniversalLogic(std::function<void(IObject&)>& function);
    void process(IObject& model) override;
private:
    std::function<void(IObject&)> _function;
};

#endif //UNIVERSALLOGIC_HPP