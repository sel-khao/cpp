#include "PhoneBook.hpp"

int main(int argc, char **argv)
{
    Phonebook phonebook;

    std::string input;
    while (1)
    {
        std::cout << "test: ";
        std::getline(std::cin,input);

        if (input == "ADD"){
            phonebook.add();
        }
        else if (input == "SEARCH")
        {
            std::cout << "search";
        }
        else if (input == "EXIT"){
            return ;
        }
        else
            std::cout << "available commands are ADD SEARCH EXIT\n";
    }
}