#pragma once
#include <iostream>
using namespace std;

class ShoppingSystem;

class UIinit {
public:
    void signUp(ShoppingSystem* curService, string name, string personalCode, string id, string password);
    void logIn(string& id, string& password);
};