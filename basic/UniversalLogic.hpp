#ifndef UNIVERSALLOGIC_HPP
#define UNIVERSALLOGIC_HPP

#include <functional>

#include "IObject.hpp"
#include "ILogic.hpp"

class UniversalLogic : public ILogic
{
public:
    UniversalLogic(const std::function<void(IObject&)>& function);
    void process(IObject& model) override;
private:
    std::function<void(IObject&)> _function;
};

#endif //UNIVERSALLOGIC_HPP