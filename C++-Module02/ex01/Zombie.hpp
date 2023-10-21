#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
private:
    std::string name;
public:
    void setName(const std::string & zombieName);
    void    announce();
    Zombie* zombieHorde(int N, std::string name);
    ~Zombie();
};
#endif