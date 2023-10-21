#include "Phonebook.hpp"

PhoneBook::PhoneBook(){
    current = 0;
}

void PhoneBook::addContact(std::string &fn, std::string &ln, std::string &nn, std::string &phn, std::string &ds)
{
    int i = 0;

    std::cout << current << std::endl;
    if(current < 8)
    {
        contacts[current].set_First_name(fn);
        contacts[current].set_Last_name(ln);
        contacts[current].set_Nick_name(nn);
        contacts[current].set_Phone_number(phn);
        contacts[current].set_Darkest_secret(ds);
        current++;
    }
    else
    {
        while(i < 7)
        {
            contacts[i] = contacts[i + 1];
            i++;
        }
        contacts[7].set_First_name(fn);
        contacts[7].set_Last_name(ln);
        contacts[7].set_Nick_name(nn);
        contacts[7].set_Phone_number(phn);
        contacts[7].set_Darkest_secret(ds);
    }
}

void PhoneBook::displayContacts() const
{
    int i = 0;
    
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << std::endl;

    while(i < current)
    {
        std::string first_name = contacts[i].get_First_name();
        std::string last_name = contacts[i].get_Last_name();
        std::string nickname = contacts[i].get_Nick_name();

        if(first_name.length() > 10)
            first_name = first_name.substr(0, 9) + ".";
        if(last_name.length() > 10)
            last_name = last_name.substr(0, 9) + ".";
        if(nickname.length() > 10)
            nickname = nickname.substr(0, 9) + ".";

        std::cout << std::setw(10) << i + 1 << "|";
        std::cout << std::setw(10) << first_name << "|";
        std::cout << std::setw(10) << last_name << "|";
        std::cout << std::setw(10) << nickname << std::endl;

        i++;
    }
}

void PhoneBook::displayContactDetails(int index) const
{
    if(index < 1 || index > current)
    {
        std::cout << "Index invalide!" << std::endl;
        return;
    }

    std::cout << "First Name: " << contacts[index - 1].get_First_name() << std::endl;
    std::cout << "Last Name: " << contacts[index - 1].get_Last_name() << std::endl;
    std::cout << "Nickname: " << contacts[index - 1].get_Nick_name() << std::endl;
    std::cout << "Phone Number: " << contacts[index - 1].get_Phone_number() << std::endl;
    std::cout << "Darkest Secret: " << contacts[index - 1].get_Darkest_secret() << std::endl;
}
