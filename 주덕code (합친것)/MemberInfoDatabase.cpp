#include <fstream>
#include <iostream>
#include "MemberInfoDatabase.h"
#include "ShoppingSystem.h"
#include "member.h"
#include "CtrlMemberManagement.h"

int MemberInfoDatabase::doesExistMember(ShoppingSystem* shoppingSystem, member newbie) {

    ofstream ofs;
    int exist = 0;

    ofs.open(shoppingSystem->outputurl, ios::out | ios::app);

    for (int i = 0; i < memberList.size(); i++) {
        if (memberList[i].id == newbie.id || memberList[i].personalCode == newbie.personalCode) {
            ofs << "이미 등록된 회원입니다" << curID << endl;
            exist = 1;
        }
    }
    ofs.close();

    return exist;
};

void MemberInfoDatabase::addMember(ShoppingSystem* shoppingSystem, member newbie) {


    memberList.push_back(newbie);
};

void MemberInfoDatabase::logInInfoCheck(ShoppingSystem* shoppingSystem, member logInInfo) {


    int logInSuccess = 0;

    for (int i = 0; i < memberList.size(); i++) {
        if (memberList[i].id == logInInfo.id && memberList[i].password == logInInfo.password) {
            curID = memberList[i].id;
            logInSuccess = 1;
            break;
        }
    }

    if (!logInSuccess) {

    }
};

void MemberInfoDatabase::logOutCheck(ShoppingSystem* shoppingSystem) {


    ofstream ofs;

    if (curID != "none") {
        ofs.open(shoppingSystem->outputurl, ios::out | ios::app);
        ofs << "> " << curID << endl << endl;
        curID = "none";
        ofs.close();
    }
    else {
        ofs.open(shoppingSystem->outputurl, ios::out | ios::app);
        ofs << "로그인상태가 아닙니다." << endl << curID << endl;
        ofs.close();
    }
}

void MemberInfoDatabase::withdrawalCheck(ShoppingSystem* shoppingSystem) {

    ofstream ofs;
    ofs.open(shoppingSystem->outputurl, ios::out | ios::app);

    if (curID == "none") {
        ofs << "로그인상태가 아닙니다." << endl << curID << endl;
        ofs.close();
        return;
    }

    ofs << "> " << curID << endl << endl;
    ofs.close();
    for (int i = 0; i < memberList.size(); i++) {
        if (curID == memberList[i].id) {
            memberList.erase(memberList.begin() + i);
            curID = "none";
            break;
        }
    }
}

string MemberInfoDatabase::getCurID() {

    return curID;
}