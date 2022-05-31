#pragma once
#include <iostream>
#include "member.h"
using namespace std;

class ShoppingSystem;

class CtrlMemberManagement {
public:
    CtrlMemberManagement(/* args */);
    ~CtrlMemberManagement();

    void addNewMember(ShoppingSystem* curService, member newbie);
};
