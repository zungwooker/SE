#pragma once
#include <iostream>
using namespace std;

class ShoppingSystem;

class UIProfile {
public:
    void logOut(ShoppingSystem* curService);
    void withdrawal(ShoppingSystem* curService);
};
