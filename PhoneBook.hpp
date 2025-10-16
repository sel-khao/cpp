#include <iostream>
#include <stdio.h>

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
        void init()
        {
            for(int a = 0; a < 8; a++)
                contact[a].PhoneNumber = 0;
        }
        void add(){
            if (i > 7)
                i = 0;
            std::string input;
            std::cout << "› First Name : ";
            std::getline(std::cin, input);
            contact[i].FirstName = input;
            std::cout << "› Last Name : ";
            std::getline(std::cin, input);
            contact[i].LastName = input;
            std::cout << "› Nickname : ";
            std::getline(std::cin, input);
            contact[i].Nickname = input;
            std::cout << "› Phone Number : ";
            std::getline(std::cin, input);
            contact[i].PhoneNumber = stoi(input);
            std::cout << "› Darkest Secret : ";
            std::getline(std::cin, input);
            contact[i].DarkestSecret = input;
            i++;
        }
        void count(std::string str)
        {
            if (str.size() < 10) {
                int n = str.size();
                for (n; n < 10; n++) {
                    std::cout << " ";
                }
                std::cout << str;
                return ;
            }
            else if (str.size() > 10) {
                for (int y = 0; y < 9; y++) {
                    std::cout << str[y];
                }
                std::cout << '.';
                return ;
            }
            else
                std::cout << str;
        }
        void search() {
            std::cout << "     index| firstname|  lastname|  nickname" << std::endl;
            std::string input;
            int n;
            for (int j = 0; contact[j].PhoneNumber != 0; j++)
            {
                std::cout << "         " << j << "|";
                count(contact[j].FirstName);
                std::cout << "|";
                count(contact[j].LastName);
                std::cout << "|";
                count(contact[j].Nickname);
                std::cout << std::endl;
            }
            std::cout << "› enter contact index : ";
            std::getline(std::cin, input);
            n = stoi(input);
            if (contact[n].PhoneNumber == 0 || n > 7  || n < 0) {
                std::cout << "non existing\n";
                return ;
            }
            std::cout << "First Name: " << contact[n].FirstName << std::endl;
            std::cout << "Last Name: " << contact[n].LastName << std::endl;
            std::cout << "Nickname: " << contact[n].Nickname << std::endl;
            std::cout << "Phone Number: " << contact[n].PhoneNumber << std::endl;
            std::cout << "Darkest Secret: " << contact[n].DarkestSecret << std::endl;
        }
};

//contact[n].PhoneNumber.empty()
//if phonenumber string is empty
//std::string::empty() function is a member function of the std::string class.
//It checks if the string is empty. true if empty, false if not