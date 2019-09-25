#include "WorldObjectsBinder.hpp"

void WorldObjectsBinder::addObjectBinding(uint id, const std::string& resource)
{
    _binding.emplace(id, resource);
}

const std::map<uint, std::string>& WorldObjectsBinder::getObjectMap() const
{
    return _binding;
}