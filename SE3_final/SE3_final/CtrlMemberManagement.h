#pragma once
#include "member.h"


class ShoppingSystem;
class CtrlMemberManagement
{
public:
    void addNewMember(ShoppingSystem* shoppingSystem, member newbie);
    void logInRequest(ShoppingSystem* shoppingSystem, member logInInfo);
    void logOutRequest(ShoppingSystem* shoppingSystem);
    void withdrawalRequest(ShoppingSystem* shoppingSystem);

};
