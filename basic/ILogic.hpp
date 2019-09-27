#ifndef ILOGIC_HPP
#define ILOGIC_HPP

#include "IObject.hpp"

class ILogic {
public:
    virtual void process(IObject& model) = 0;
    virtual ~ILogic() = default;
};

#endif //ILOGIC_HPP