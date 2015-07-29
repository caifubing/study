#include "coffeewithhook.h"
#include <iostream>
#include <string>
#include <memory>
using std::string; using std::cin;
using std::cout;   using std::endl;
CoffeeWithHook::CoffeeWithHook()
{

}

CoffeeWithHook::~CoffeeWithHook()
{

}

void CoffeeWithHook::brew()
{
    cout << "Dripping coffee through filter."  << endl;
}

void CoffeeWithHook::addCondiments()
{
    cout << "Adding sugar and Milk." << endl;
}

bool CoffeeWithHook::customerWantsCondiments()
{
    string answer = getUserInput();

    if(answer == "y")
    {
        return true;
    }
    else
        return false;
}

string CoffeeWithHook::getUserInput()
{
    string answer;
    cout << "Would you like milk and sugar with your coffee(y/n)? : ";
    cin >> answer;

    return answer;
}

