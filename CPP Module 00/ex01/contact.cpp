#include "contact.hpp"

Contact::Contact()
{
    this->firstName = "";
    this->lastName = "";
    this->nickName = "";
    this->phoneNumber = "";
    this->darkestSecret = "";
}
Contact::Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
    this->firstName = firstName;
    this->lastName = lastName;
    this->nickName = nickName;
    this->phoneNumber = phoneNumber;
    this->darkestSecret = darkestSecret;
}
std::string Contact::GetFirstName()
{
    return this->firstName;
}
std::string Contact::GetLastName()
{
    return this->lastName;
}
std::string Contact::GetNickName()
{
    return this->nickName;
}
std::string Contact::GetPhoneNumber()
{
    return this->phoneNumber;
}
std::string Contact::GetDarkestSecret()
{
    return this->darkestSecret;
}