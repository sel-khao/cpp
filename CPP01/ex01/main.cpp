#include "Zombie.hpp"

int main()
{
    Zombie* myHorde = zombieHorde(5, "bob");
    for (int i = 0; i < 5; i++){
        myHorde[i].announce();
    }
    delete[] myHorde;
    return 0;
}