#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <cstdlib>
#include <iostream>

class Zombie {
    private:
        std::string name;
    public:
        Zombie() {}
        Zombie(std::string zombieName) : name(zombieName) {}
        ~Zombie() {
            std::cout << name << " is destroyed" << std::endl;
        }
        void announce() {
            std::cout << name <<": BraiiiiiiinnnzzzZ\n";
        }
        void setName(std::string newName){
            name = newName;
        }
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
Zombie* zombieHorde(int N, std::string name);

#endif