#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

#include <contact.hpp>
class PhoneBook
{
    private:
        Contact contacts[9];
        void add(Contact contact);
        Contact search(Contact contact);


};
#endif