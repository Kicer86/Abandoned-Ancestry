#include "UniversalLogic.hpp"

UniversalLogic::UniversalLogic(std::function<void(IObject&)>& function):
_function(function)
{
}

void UniversalLogic::process(IObject& model)
{
    _function(model);
}