#ifndef ASSET_HPP
#define ASSET_HPP

#include <vector>     
#include "Node.hpp"   

class Asset {
public:
    std::vector<Node> GetLocations(); 
private:
    std::vector<Node> locations;     
};

#endif // ASSET_HPP
