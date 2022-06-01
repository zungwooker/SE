#pragma once
#include <iostream>
#include "member.h"
using namespace std;

class ShoppingSystem;

class CtrlMemberManagement {
public:
    void addNewMember(ShoppingSystem* curService, member newbie);
    void logInRequest(ShoppingSystem* curService, member logInInfo);
    void logOutRequest(ShoppingSystem* curService);
    void withdrawalRequest(ShoppingSystem* curService);
};
