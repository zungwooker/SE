#pragma once
#include <iostream>
using namespace std;

class ShoppingSystem;

class UIinit
{
public:
    void startInterface();
    void signUp(ShoppingSystem* shoppingSystem, string name, string personalCode, string id, string password);
    void logIn(ShoppingSystem* shoppingSystem, string& id, string& password);
};
