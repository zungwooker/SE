#include <iostream>
#include <string>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <list>

using namespace std;

class UIinit;
class CtrlMemberManagement;

struct member
{
    string name;
    string personalCode;
    string id;
    string password;
};

class shoppingSystem
{
private:
    /* data */
public:
    UIinit* init;
    CtrlMemberManagement* memberManagement;
    // CtrlMemberManagement;
    // ...
};

class MemberInfoDatabase
{
private:
    vector<member> memberList;
public:
    MemberInfoDatabase(/* args */);
    ~MemberInfoDatabase();

    int isExistInfo(){
        
    }
};

MemberInfoDatabase::MemberInfoDatabase(/* args */)
{
}

MemberInfoDatabase::~MemberInfoDatabase()
{
}


class CtrlMemberManagement
{
private:
    /* data */
public:
    CtrlMemberManagement(/* args */);
    ~CtrlMemberManagement();

    void addNewMember(shoppingSystem* curService, member newbie){
        printf("CtrlMemberManagement::addNewMember called.\n");


    }
};

CtrlMemberManagement::CtrlMemberManagement(/* args */)
{
}

CtrlMemberManagement::~CtrlMemberManagement()
{
}

class UIinit
{
private:
    
public:
    UIinit();
    ~UIinit();

    void signUp(shoppingSystem* curService, string name, string personalCode, string id, string password){
        ofstream ofs;

        printf("UIinit::signUp called.\n");

        ofs.open("C:\\Users\\Seo Jungwook\\Desktop\\output.txt", ios::out | ios::app);
        ofs << "1.1. ȸ������" << endl;
        ofs << name << " " << personalCode << " " << id << " " << password << "\n" << endl;

        member newbie;
        newbie.name = name;
        newbie.personalCode = personalCode;
        newbie.id = id;
        newbie.password = password;

        curService->memberManagement->addNewMember(curService, newbie);
    }

    void logIn(string& id, string& password){

    };
};

UIinit::UIinit(/* args */)
{
}

UIinit::~UIinit()
{
}

/*    ���� ���� ���
        
        ���� ������ uiclass�� �Ʒ��� ���� �ۼ�

       #include <fstream>
       ofstream ofs;
       ofs.open("C:\\Users\\���ִ�\\Desktop\\SE_3_file\\fout.txt", ios::out | ios::app); ��δ� �˾Ƽ� �ٲٱ�
       open�� �׻� path ��ġ�ؾ���
       ofs<< "~~~~~"<< endl; ��ó�� �ۼ��ϸ� ��
*/


void doTask();
int menuSwitch(string line, shoppingSystem* curSevice);

int main(void){
    doTask();
}

void doTask(void){
    //int menu_level_1 = 0, mene_level_2 = 0;
    //int is_program_exit = 0;
    //member tmpMemberInfo;
    UIinit init;
    CtrlMemberManagement memberManagement;

    shoppingSystem service; // ��� ��ü�� ���� �� �ϳ��� ����
    shoppingSystem* curService = &service; // ���� ������
    string line;
    ifstream input;

    curService->init = &init;
    curService->memberManagement = &memberManagement;

    input.open("C:\\Users\\Seo Jungwook\\Desktop\\input.txt"); // �д� ���� open
    
    int is_program_exit = 1;

    while (is_program_exit) {//���پ� �д� ����
        getline(input, line);
        is_program_exit = menuSwitch(line, curService); // menuSwitch�� return ���� �׻� 1�̾�� �ݺ�
        // �޴� ��ȣ�� 6�϶��� return ���� 0
    }
}

int menuSwitch(string line, shoppingSystem* curService) //switch �� �ش��ϴ� �Լ� ���
{
    int menu_level_1 = 0, menu_level_2 = 0;
    shoppingSystem* Service;
    istringstream ss(line);
    string stringBuffer;

    //���� ���忡�� slice �ؼ� �Է°� ���
    vector<string> x;
    x.clear();
    while (getline(ss, stringBuffer, ' ')) {
        x.push_back(stringBuffer);
    }


    stringstream ssInt1(x[0]);
    stringstream ssInt2(x[1]);
    ssInt1 >> menu_level_1; 
    ssInt2 >> menu_level_2;

    /*  ������� ���
     x[0] �� �޴� 1, x[1] �� �޴� 2
     �Է°��� ���� �Ѵٸ� �߰������� x[2], x[3]
     x[~] ���� string�̾ int�� �ٲٷ��� 
     ����: x[3] string ���� int������ �����ϴ� ��
     int point;
     stringstream prmeter2(x[3]);
     prmeter2 >> point;
    
    */

    switch (menu_level_1)
    {
    case 1:
        switch (menu_level_2)
        {
        case 1: // ȸ������
            curService->init->signUp(curService, x[2], x[3], x[4], x[5]);
            return 1;

        case 2: // ȸ��Ż��
            /* code */
            cout << "great" << endl;
            return 1;

        default:
            return 1;
        }
        return 1;
    case 2:
        switch (menu_level_2)
        {
        case 1: // �α���
            /* code */
            return 1;

        case 2: //�α׾ƿ�
            /* code */
            return 1;

        default:
            return 1;
        }
        return 1;
    case 3:
        switch (menu_level_2)
        {
        case 1:
            /* code */
            return 1;

        case 2:
            /* code */
            return 1;

        case 3:
            /* code */
            return 1;

        default:
            return 1;
        }
    case 4:
        switch (menu_level_2)
        {
        case 1:
            /* code */
            return 1;

        case 2:
            /* code */
            return 1;

        case 3:
            /* code */
            return 1;

        case 4:
            /* code */
            return 1;

        default:
            return 1;
        }

    case 5:
        switch (menu_level_2)
        {
        case 1:
            /* code */
            return 1;

        default:
            return 1;
        }

    case 6:
        switch (menu_level_2)
        {
        case 1:
            /* code */
            return 0;

        default:
            break;
        }

    default:
        return 0;
    }

}
