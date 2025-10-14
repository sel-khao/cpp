#include <iostream>

class Contacts {
    public:
        std::string LastName;
        std::string Nickname;
        std::string FirstName;
        int         PhoneNumber;
        std::string DarkestSecret;
};

class Phonebook {
    public:
        Contacts contact[8];
        int i = 0;
        void add(){
            if (i > 7)
                i = 0;
            std::string input;
            std::cout << " First Name : ";
            std::getline(std::cin, input);
            contact[i].FirstName = input;
            std::cout << " Last Name : ";
            std::getline(std::cin, input);
            contact[i].LastName = input;
            std::cout << " Nickname : ";
            std::getline(std::cin, input);
            contact[i].Nickname = input;
            std::cout << " Phone Number : ";
            std::getline(std::cin, input);
            contact[i].PhoneNumber = stoi(input);
            std::cout << " Darkest Secret : ";
            std::getline(std::cin, input);
            contact[i].DarkestSecret = input;
            i++;
        }
        char search() {
            std::cout << "index | first name | last name | nickname" << std::endl;
        }
};


