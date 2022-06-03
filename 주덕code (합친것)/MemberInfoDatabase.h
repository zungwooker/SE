#pragma once
#include <vector>
#include <iostream>
#include "member.h"
using namespace std;

class ShoppingSystem;

class MemberInfoDatabase
{
private:
    vector<member> memberList;
    string curID = "none";
public:
    int doesExistMember(ShoppingSystem* shoppingSystem, member newbie);
    void addMember(ShoppingSystem* shoppingSystem, member newbie);
    void logInInfoCheck(ShoppingSystem* shoppingSystem, member newbie);
    void logOutCheck(ShoppingSystem* shoppingSystem);
    void withdrawalCheck(ShoppingSystem* shoppingSystem);
    string getCurID();

};