#include "PhoneBook.hpp"

int main(int argc, char **argv)
{
    Phonebook phonebook;

    std::string input;
    while (1)
    {
        std::cout << "🕻 My Phonebook: ";
        std::getline(std::cin, input);

        if (input == "ADD"){
            phonebook.add();
        }
        else if (input == "SEARCH")
        {
            phonebook.search();
        }
        else if (input == "EXIT"){
            return 0;
        }
    }
}