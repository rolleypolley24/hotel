
#include "roomFeature.h"

RoomFeature::RoomFeature(const std::string& _name, double _cost)
    : name(_name), cost(_cost) {
    
}

//returns name of roomFeature
std::string RoomFeature::getName() const {
    return name;
}
//returns cost of roomFeature
double RoomFeature::getCost() const {
    return cost;
}
