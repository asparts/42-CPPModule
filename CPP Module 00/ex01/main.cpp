#include <iostream>
#include <string>
#include "phonebook.hpp"
#include "contact.hpp"
int main(void)
{
    PhoneBook* phonebook = new PhoneBook();
    while(true)
    {
        std::cout << "Enter a command" << std::endl;
        std::cout << "1. ADD" << std::endl;
        std::cout << "2. SEARCH" << std::endl;
        std::cout << "3. EXIT" << std::endl;

        int n;
        std::cin >> n;

        if(n == 1)
        {
            std::string firstName;
            std::cout << "Enter first name: " << std::endl;
            std::cin >> firstName;
            std::string lastName;
            std::cout << "Enter last name: " << std::endl;
            std::cin >> lastName;
            std::string nickName;
            std::cout << "Enter nick name: " << std::endl;
            std::cin >> nickName;
            std::string phoneNum;
            std::cout << "Enter phone number: " << std::endl;
            std::cin >> phoneNum;
            std::string darkestSecret;
            std::cout << "Enter darkest secret: " << std::endl;
            std::cin >> darkestSecret;

            Contact* contact = new Contact(firstName, lastName, nickName, phoneNum, darkestSecret);
            phonebook->add(*contact);
        }
        else if(n == 2)
        {
            phonebook->printContacts();
        }
        else if(n == 3)
        {
            return 0;
        }

    }

    return 0;
}