#include <fstream>
#include <iostream>
#include "ShoppingSystem.h"
#include "member.h"
#include "UIProfile.h"
#include "CtrlMemberManagement.h"

using namespace std;

void UIProfile::logOut(ShoppingSystem* shoppingSystem){
    printf("UIProfile::logOut called.\n");

    ofstream ofs;

    ofs.open("C:\\Users\\Seo Jungwook\\Desktop\\output.txt", ios::out | ios::app);
    ofs << "2.2. 로그아웃" << endl;

    shoppingSystem -> ctrlMemberManagement -> logOutRequest(shoppingSystem);
}

void UIProfile::withdrawal(ShoppingSystem* shoppingSystem){
    printf("UIProfile::withdrawal called.\n");

    ofstream ofs;

    ofs.open("C:\\Users\\Seo Jungwook\\Desktop\\output.txt", ios::out | ios::app);
    ofs << "1.2. 회원탈퇴" << endl;

    shoppingSystem -> ctrlMemberManagement ->withdrawalRequest(shoppingSystem);
}