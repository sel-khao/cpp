#include "Weapon.hpp"

int main()
{
    Weapon sword("spada");

    std::cout << "Weapon: " << sword.getType() << std::endl;
    return 0;
}