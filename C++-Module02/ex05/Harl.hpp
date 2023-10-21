#ifndef HARL_2_0_HPP
#define HARL_2_0_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <map>

class Harl {
public:
    void complain( std::string level );
    Harl();

private:
    //void (Harl::*ptrFunction)() = &Harl::debeug;
    typedef void (Harl::*funcPTR)();
    std::map<std::string, funcPTR> funcMAP;
    void debug();
    void info();
    void warning();
    void error();
};

#endif