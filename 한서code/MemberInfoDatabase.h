#pragma once
#include <iostream>
#include <vector>
#include "member.h"
using namespace std;

class ShoppingSystem;

class MemberInfoDatabase {
private:
    vector<member> memberList;
    string curID = "none";
public:
    int doesExistMember(ShoppingSystem* curService, member newbie);
    void addMember(ShoppingSystem* curService, member newbie);
    void logInInfoCheck(ShoppingSystem* curService, member newbie);
    void logOutCheck(ShoppingSystem* curService);
    void withdrawalCheck(ShoppingSystem* curService);
    string getCurID();
};