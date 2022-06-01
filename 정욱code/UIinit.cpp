#include <fstream>
#include <iostream>
#include "UIinit.h"
#include "ShoppingSystem.h"
#include "member.h"
#include "CtrlMemberManagement.h"
using namespace std;

void UIinit::signUp(ShoppingSystem* curService, string name, string personalCode, string id, string password){
    printf("UIinit::signUp called.\n");

    ofstream ofs;
    member newbie;

    ofs.open("C:\\Users\\blair\\Desktop\\output.txt", ios::out | ios::app);
    ofs << "1.1. 회원가입" << endl;
    //ofs << name << " " << personalCode << " " << id << " " << password << "\n" << endl;

    newbie.name = name;
    newbie.personalCode = personalCode;
    newbie.id = id;
    newbie.password = password;

    curService -> ctrlMemberManagement -> addNewMember(curService, newbie);
};

void UIinit::logIn(ShoppingSystem* curService, string& id, string& password){
    printf("UIinit::logIn called.\n");

    //ofstream ofs;
    member logInInfo;

    //ofs.open("C:\\Users\\Seo Jungwook\\Desktop\\output.txt", ios::out | ios::app);
    //ofs << "2.1. 회원가입" << endl;
    //ofs << id << " " << password << "\n" << endl;

    
    logInInfo.id = id;
    logInInfo.password = password;

    curService -> ctrlMemberManagement -> logInRequest(curService, logInInfo);
};