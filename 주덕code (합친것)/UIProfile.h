#pragma once

class ShoppingSystem;

class UIProfile
{
public:
    void startInterface();
    void logOut(ShoppingSystem* curService);
    void withdrawal(ShoppingSystem* curService);
};
