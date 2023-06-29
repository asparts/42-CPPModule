#include "phonebook.hpp"

int contactCount = 0;

PhoneBook::PhoneBook()
{

}
void PhoneBook::add(Contact contact)
{
    //not full yet
    if(contactCount < 8)
    {
        for(int i = 0; i < 8; i++)
        {
            if(contacts[i].GetFirstName().compare("") == 0)
            {
                contacts[i] = contact;
                contactCount++;
                std::cout << "Contact count " << contactCount << std::endl; //TODO: REMOVE
                break;
            }
        }
    }
    else
    {
    //full
    //TODO: Use loop here, this is just for demo purposes
    contacts[7] = contacts[6];
    contacts[6] = contacts[5];
    contacts[5] = contacts[4];
    contacts[4] = contacts[3];
    contacts[3] = contacts[2];
    contacts[2] = contacts[1];
    contacts[1] = contacts[0];
    contacts[0] = contact;
    }
    
    
}
Contact PhoneBook::search(int index)
{
        return contacts[index];
}
void PhoneBook::printContacts()
{
    for(int i = 0; i < 8; i++)
    {
        std::cout << i << std::right << "|" << std::right << truncateIfNeeded(contacts[i].GetFirstName()) << std::right << "|" << std::right << truncateIfNeeded(contacts[i].GetLastName()) << std::right << "|" << std::right << truncateIfNeeded(contacts[i].GetNickName()) << std::endl;
    }
}
std::string PhoneBook::truncateIfNeeded(std::string s)
{
    std::string returnString = s;
    if(s.length() > 9)
    {
        returnString = s.substr(0, 9);
        returnString.append(".");
    }
    return returnString;
}