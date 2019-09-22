#ifndef WORLDOBJECTSBINDER_HPP
#define WORLDOBJECTSBINDER_HPP

#include <map>
#include <string>

class WorldObjectsBinder
{
private:
    std::map<uint, std::string> _binding;
public:
    void addObjectBinding(uint id, const std::string& resource);
    std::map<uint, std::string>::const_iterator getObjectIterator() const;
};

#endif //WORLDOBJECTSBINDER_HPP
