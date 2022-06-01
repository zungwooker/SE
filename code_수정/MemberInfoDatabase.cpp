#include <fstream>
#include <iostream>
#include "MemberInfoDatabase.h"
#include "ShoppingSystem.h"
#include "member.h"
#include "CtrlMemberManagement.h"

int MemberInfoDatabase::doesExistMember(ShoppingSystem* curService, member newbie) {

    ofstream ofs;
    int exist = 0;

    ofs.open("C:\\Users\\���ִ�\\Desktop\\SE_3_file\\fout.txt", ios::out | ios::app);

    for (int i = 0; i < memberList.size(); i++) {
        if (memberList[i].id == newbie.id || memberList[i].personalCode == newbie.personalCode) {
            ofs << "�̹� ��ϵ� ȸ���Դϴ�." << curID << endl;
            exist = 1;
        }
    }
    ofs.close();

    return exist;
};

void MemberInfoDatabase::addMember(ShoppingSystem* curService, member newbie) {


    memberList.push_back(newbie);
};

void MemberInfoDatabase::logInInfoCheck(ShoppingSystem* curService, member logInInfo) {


    int logInSuccess = 0;

    for (int i = 0; i < memberList.size(); i++) {
        if (memberList[i].id == logInInfo.id && memberList[i].personalCode == logInInfo.password) {
            curID = memberList[i].id;
            logInSuccess = 1;
            break;
        }
    }

    if (!logInSuccess) {

    }
};

void MemberInfoDatabase::logOutCheck(ShoppingSystem* curService) {


    ofstream ofs;

    if (curID != "none") {
        ofs.open("C:\\Users\\���ִ�\\Desktop\\SE_3_file\\fout.txt", ios::out | ios::app);
        ofs << ">" << curID << endl;
        curID = "none";
        ofs.close();
    }
    else {
        ofs.open("C:\\Users\\���ִ�\\Desktop\\SE_3_file\\fout.txt", ios::out | ios::app);
        ofs << "�α��� ���°� �ƴմϴ�.\n" << curID << endl;
        ofs.close();
    }
}

void MemberInfoDatabase::withdrawalCheck(ShoppingSystem* curService) {

    ofstream ofs;
    ofs.open("C:\\Users\\���ִ�\\Desktop\\SE_3_file\\fout.txt", ios::out | ios::app);

    if (curID == "none") {
        ofs << "�α��� ���°� �ƴմϴ�.\n" << curID << endl;
        return;
    }

    ofs << ">" << curID << endl;
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