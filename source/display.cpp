#include "../headers/display.h"

#include <iostream>
Display::Display(int width , int height ,const std::string & title)
{
    std::cout << "Display constructor called" << std::endl;
}

Display::~Display()
{
    std::cout << "Display destructor called" << std::endl;
}