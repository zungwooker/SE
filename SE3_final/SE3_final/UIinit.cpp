#include <fstream>
#include <iostream>
#include "UIinit.h"
#include "ShoppingSystem.h"
#include "member.h"
#include "CtrlMemberManagement.h"

using namespace std;

void UIinit::startInterface() {
};

void UIinit::signUp(ShoppingSystem* shoppingSystem, string name, string personalCode, string id, string password) {

    ofstream ofs;
    member newbie;

    ofs.open(shoppingSystem->outputurl, ios::out | ios::app);
    ofs << "1.1. 회원가입" << endl;
    ofs << "> " << name << " " << personalCode << " " << id << " " << password << endl << endl;
    ofs.close();

    newbie.name = name;
    newbie.personalCode = personalCode;
    newbie.id = id;
    newbie.password = password;

    shoppingSystem->ctrlMemberManagement->addNewMember(shoppingSystem, newbie);
};

void UIinit::logIn(ShoppingSystem* shoppingSystem, string& id, string& password) {

    ofstream ofs;
    member logInInfo;

    ofs.open(shoppingSystem->outputurl, ios::out | ios::app);
    ofs << "2.1. 로그인" << endl;
    ofs << "> " << id << " " << password << endl << endl;
    ofs.close();


    logInInfo.id = id;
    logInInfo.password = password;

    shoppingSystem->ctrlMemberManagement->logInRequest(shoppingSystem, logInInfo);
};