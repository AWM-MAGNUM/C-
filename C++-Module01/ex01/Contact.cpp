#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

void Contact::set_First_name(const std::string &fn) 
{
    first_name = fn;
}

void Contact::set_Last_name(const std::string &ln)
{
    last_name = ln;
}

void Contact::set_Nick_name(const std::string &nn)
{
    nickname = nn;
}

void Contact::set_Phone_number(const std::string &pn)
{
    phone_number = pn;
}

void Contact::set_Darkest_secret(const std::string &ds)
{
    darkest_secret = ds;
}

std::string Contact::get_First_name() const
{
    return first_name;
}

std::string Contact::get_Last_name() const
{
    return last_name;
}

std::string Contact::get_Nick_name() const
{
    return nickname;
}

std::string Contact::get_Phone_number() const
{
    return phone_number;
}

std::string Contact::get_Darkest_secret() const
{
    return darkest_secret;
}
