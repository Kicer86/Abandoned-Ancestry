#ifndef ILOGICABLE_HPP
#define ILOGICABLE_HPP

#include "IObject.hpp"

class ILogicable {
public:
    virtual void process(const IObject& model) = 0;
    virtual ~ILogicable() = default;
};

#endif //ILOGICABLE_HPP