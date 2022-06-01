#include <fstream>
#include <iostream>
#include "ShoppingSystem.h"
#include "member.h"
#include "UIProfile.h"
#include "CtrlMemberManagement.h"

using namespace std;

void UIProfile::logOut(ShoppingSystem* curService) {
    printf("UIProfile::logOut called.\n");

    ofstream ofs;

    ofs.open(curService->outputurl, ios::out | ios::app);
    ofs << "2.2. ·Î±×¾Æ¿ô" << endl;
    ofs.close();

    curService->ctrlMemberManagement->logOutRequest(curService);
}

void UIProfile::withdrawal(ShoppingSystem* curService) {
    printf("UIProfile::withdrawal called.\n");

    ofstream ofs;

    ofs.open(curService->outputurl, ios::out | ios::app);
    ofs << "1.2. È¸¿øÅ»Åð" << endl;
    ofs.close();

    curService->ctrlMemberManagement->withdrawalRequest(curService);
}