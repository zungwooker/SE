#include <fstream>
#include <iostream>
#include "ShoppingSystem.h"
#include "member.h"
#include "UIProfile.h"
#include "CtrlMemberManagement.h"

using namespace std;

void UIProfile::logOut(ShoppingSystem* curService){
    printf("UIProfile::logOut called.\n");

    ofstream ofs;

    ofs.open("C:\\Users\\Seo Jungwook\\Desktop\\output.txt", ios::out | ios::app);
    ofs << "2.2. 로그아웃" << endl;

    curService -> ctrlMemberManagement -> logOutRequest(curService);
}

void UIProfile::withdrawal(ShoppingSystem* curService){
    printf("UIProfile::withdrawal called.\n");

    ofstream ofs;

    ofs.open("C:\\Users\\Seo Jungwook\\Desktop\\output.txt", ios::out | ios::app);
    ofs << "1.2. 회원탈퇴" << endl;

    curService -> ctrlMemberManagement ->withdrawalRequest(curService);
}