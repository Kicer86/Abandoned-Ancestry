#ifndef WORLDOBJECTSBINDER_HPP
#define WORLDOBJECTSBINDER_HPP

#include <map>
#include <string>
#include <sys/types.h>

class WorldObjectsBinder
{
private:
    std::map<uint, std::string> _binding;
public:
    void addObjectBinding(uint id, const std::string& resource);
    const std::map<uint, std::string>& getObjectMap() const;
};

#endif //WORLDOBJECTSBINDER_HPP
