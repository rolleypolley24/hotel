#ifndef ROOMFEATURE_H
#define ROOMFEATURE_H

#include <string>

class RoomFeature {
public:
    RoomFeature(const std::string& _name, double _cost);

    std::string getName() const;
    double getCost() const;

private:
    std::string name;
    double cost;
};

#endif // ROOMFEATURE_H
