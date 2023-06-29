#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

#include "contact.hpp"
class PhoneBook
{
    private:
        Contact contacts[8];
    public:
        PhoneBook();
        void printContacts();
        void add(Contact contact);
        Contact search(int index);
        std::string truncateIfNeeded(std::string s);
};
#endif