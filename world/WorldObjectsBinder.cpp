#include "WorldObjectsBinder.hpp"

void WorldObjectsBinder::addObjectBinding(uint id, const std::string& graphicsResource, const std::string& logicResource)
{
    if(graphicsResource != "") 
    {
        _graphicsBinding.emplace(id, graphicsResource);
    }
    if(logicResource != "")
    {
        _logicBinding.emplace(id, logicResource);
    }
}

const std::map<uint, std::string>& WorldObjectsBinder::getGraphicalObjectMap() const
{
    return _graphicsBinding;
}

const std::map<uint, std::string>& WorldObjectsBinder::getLogicalObjectMap() const
{
    return _logicBinding;
}