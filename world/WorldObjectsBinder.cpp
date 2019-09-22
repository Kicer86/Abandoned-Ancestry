#include "WorldObjectsBinder.hpp"

void WorldObjectsBinder::addObjectBinding(uint id, const std::string& resource)
{
    _binding.emplace(id, resource);
}

std::map<uint, std::string>::const_iterator WorldObjectsBinder::getObjectIterator() const
{
    return _binding.begin();
}