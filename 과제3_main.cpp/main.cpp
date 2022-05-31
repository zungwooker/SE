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
        ofs << "1.1. 회원가입" << endl;
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

/*    파일 쓰는 방법
        
        파일 쓰려는 uiclass에 아래와 같이 작성

       #include <fstream>
       ofstream ofs;
       ofs.open("C:\\Users\\한주덕\\Desktop\\SE_3_file\\fout.txt", ios::out | ios::app); 경로는 알아서 바꾸기
       open시 항상 path 일치해야함
       ofs<< "~~~~~"<< endl; 이처럼 작성하면 됨
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

    shoppingSystem service; // 모든 객체가 포함 된 하나의 서비스
    shoppingSystem* curService = &service; // 서비스 포인터
    string line;
    ifstream input;

    curService->init = &init;
    curService->memberManagement = &memberManagement;

    input.open("C:\\Users\\Seo Jungwook\\Desktop\\input.txt"); // 읽는 파일 open
    
    int is_program_exit = 1;

    while (is_program_exit) {//한줄씩 읽는 루프
        getline(input, line);
        is_program_exit = menuSwitch(line, curService); // menuSwitch가 return 값이 항상 1이어야 반복
        // 메뉴 번호가 6일때만 return 값이 0
    }
}

int menuSwitch(string line, shoppingSystem* curService) //switch 및 해당하는 함수 사용
{
    int menu_level_1 = 0, menu_level_2 = 0;
    shoppingSystem* Service;
    istringstream ss(line);
    string stringBuffer;

    //얻은 문장에서 slice 해서 입력값 얻기
    vector<string> x;
    x.clear();
    while (getline(ss, stringBuffer, ' ')) {
        x.push_back(stringBuffer);
    }


    stringstream ssInt1(x[0]);
    stringstream ssInt2(x[1]);
    ssInt1 >> menu_level_1; 
    ssInt2 >> menu_level_2;

    /*  변수얻는 방법
     x[0] 은 메뉴 1, x[1] 은 메뉴 2
     입력값이 존재 한다면 추가적으로 x[2], x[3]
     x[~] 값은 string이어서 int로 바꾸려면 
     예시: x[3] string 값을 int값으로 변경하는 법
     int point;
     stringstream prmeter2(x[3]);
     prmeter2 >> point;
    
    */

    switch (menu_level_1)
    {
    case 1:
        switch (menu_level_2)
        {
        case 1: // 회원가입
            curService->init->signUp(curService, x[2], x[3], x[4], x[5]);
            return 1;

        case 2: // 회원탈퇴
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
        case 1: // 로그인
            /* code */
            return 1;

        case 2: //로그아웃
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
