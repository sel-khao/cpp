#include <iostream>

int main()
{
    std::string uno = "HI THIS IS BRAIN";//house' address
    std::string* stringPTR = &uno;//points to the address of house, it doesnt contain the house
    std::string& stringREF = uno;//directly attached to the 

    std::cout << &uno << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    return 0;
}