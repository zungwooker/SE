#include <fstream>
#include <iostream>
#include "CtrlMemberManagement.h"
#include "ShoppingSystem.h"
#include "member.h"
#include "MemberInfoDatabase.h"
using namespace std;

void CtrlMemberManagement::addNewMember(ShoppingSystem* curService, member newbie) {

    if (!(curService->memberInfoDatabase->doesExistMember(curService, newbie))) {
        curService->memberInfoDatabase->addMember(curService, newbie);
    }
};

void CtrlMemberManagement::logInRequest(ShoppingSystem* curService, member logInInfo) {

    curService->memberInfoDatabase->logInInfoCheck(curService, logInInfo);
}

void CtrlMemberManagement::logOutRequest(ShoppingSystem* curService) {

    curService->memberInfoDatabase->logOutCheck(curService);
}

void CtrlMemberManagement::withdrawalRequest(ShoppingSystem* curService) {

    curService->memberInfoDatabase->withdrawalCheck(curService);
}