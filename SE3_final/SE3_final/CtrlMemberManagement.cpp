#include <fstream>
#include <iostream>
#include "CtrlMemberManagement.h"
#include "ShoppingSystem.h"
#include "member.h"
#include "MemberInfoDatabase.h"
using namespace std;

void CtrlMemberManagement::addNewMember(ShoppingSystem* shoppingSystem, member newbie) {

    if (!(shoppingSystem->memberInfoDatabase->doesExistMember(shoppingSystem, newbie))) {
        shoppingSystem->memberInfoDatabase->addMember(shoppingSystem, newbie);
    }
};

void CtrlMemberManagement::logInRequest(ShoppingSystem* shoppingSystem, member logInInfo) {

    shoppingSystem->memberInfoDatabase->logInInfoCheck(shoppingSystem, logInInfo);
}

void CtrlMemberManagement::logOutRequest(ShoppingSystem* shoppingSystem) {

    shoppingSystem->memberInfoDatabase->logOutCheck(shoppingSystem);
}

void CtrlMemberManagement::withdrawalRequest(ShoppingSystem* shoppingSystem) {

    shoppingSystem->memberInfoDatabase->withdrawalCheck(shoppingSystem);
}