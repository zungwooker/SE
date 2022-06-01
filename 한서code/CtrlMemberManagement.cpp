#include <fstream>
#include <iostream>
#include "CtrlMemberManagement.h"
#include "ShoppingSystem.h"
#include "member.h"
#include "MemberInfoDatabase.h"
using namespace std;

void CtrlMemberManagement::addNewMember(ShoppingSystem* curService, member newbie){
    printf("CtrlMemberManagement::addNewMember called.\n");

    if(!(curService -> memberInfoDatabase -> doesExistMember(curService, newbie))){
        curService -> memberInfoDatabase -> addMember(curService, newbie);
    }
};

void CtrlMemberManagement::logInRequest(ShoppingSystem* curService, member logInInfo){
    printf("CtrlMemberManagement::logInRequest called.\n");

    curService -> memberInfoDatabase -> logInInfoCheck(curService, logInInfo);
}

void CtrlMemberManagement::logOutRequest(ShoppingSystem* curService){
    printf("CtrlMemberManagement::logOutRequest called.\n");

    curService -> memberInfoDatabase -> logOutCheck(curService);
}

void CtrlMemberManagement::withdrawalRequest(ShoppingSystem* curService){
    printf("CtrlMemberManagement::withdrawalRequest called.\n");

    curService -> memberInfoDatabase -> withdrawalCheck(curService);
}