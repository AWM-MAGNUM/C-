#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

public:
    Contact();
    Contact(std::string fn, std::string ln, std::string nn, std::string phn, std::string ds);
    ~Contact();
    std::string get_First_name() const;
    std::string get_Last_name() const;
    std::string get_Nick_name() const;
    std::string get_Phone_number() const;
    std::string get_Darkest_secret() const;

    void set_First_name(const std::string &fn);
    void set_Last_name(const std::string &ln);
    void set_Nick_name(const std::string &nn);
    void set_Phone_number(const std::string &phn); 
    void set_Darkest_secret(const std::string &ds);
};
#endif

    


