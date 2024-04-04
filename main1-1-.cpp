#include <iostream>
#include <ctime>

// Base class Vehicle
class Vehicle {
private:
    std::time_t timeofEntry;
    int ID;
public:
    Vehicle(int id) : ID(id) {
        time(&timeofEntry); // Initialize timeofEntry to current time
    }

    int getID() const {
        return ID;
    }