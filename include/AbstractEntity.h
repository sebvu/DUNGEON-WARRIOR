#ifndef INCLUDE_ABSTRACTENTITY_H_
#define INCLUDE_ABSTRACTENTITY_H_

// base implementation for all entities

#include <string>

class AbstractEntity {
 public:
    double health;
    std::string name;
    int experience;

 public:
    AbstractEntity(double health, std::string name, int experience)
        : health(health), name(name), experience(experience) {}

    void setHealth(double newHealth) { health = newHealth; }
    double getHealth() { return health; }
    std::string getName() { return name; }

    virtual void attack() = 0;
    virtual void specialAttack() = 0;
};

#endif  // INCLUDE_ABSTRACTENTITY_H_
