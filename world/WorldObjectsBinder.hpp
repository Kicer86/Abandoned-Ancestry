#ifndef WORLDOBJECTSBINDER_HPP
#define WORLDOBJECTSBINDER_HPP

#include <map>
#include <string>
#include <sys/types.h>

class WorldObjectsBinder
{
private:
    std::map<uint, std::string> _graphicsBinding;
    std::map<uint, std::string> _logicBinding;
public:
    void addObjectBinding(uint id, const std::string& graphicsResource = "", const std::string& logicResource = "");
    const std::map<uint, std::string>& getGraphicalObjectMap() const;
    const std::map<uint, std::string>& getLogicalObjectMap() const;
};

#endif //WORLDOBJECTSBINDER_HPP
