#include <iostream>
#include <string>
#include "campus.h"
#include "menu.h"
#include "FindRoute.h"
using namespace std;

// 콘솔창 300X300
int main(){
    
    menu();
    
    int startN;
    
    
    cout << "현재(시작) 위치를 입력하세요\n";
    cout << "→";
    cin >> startN;
    
    cout << "\n\n";
    
    
    int destN;
    
    cout << "도착 위치를 입력하세요.\n";
    cout << "→";
    cin >> destN;
    while (startN == destN){
        cout << "시작 위치와 도착 위치가 동일합니다.\n";
        cout << "도착 위치를 다시 입력하세요.\n";
        cout << "→";
        cin >> destN;
    }
    cout << "현재 위치로 " << startN << "를(을) 입력하셨습니다.\n";
    cout << "도착 위치로 " << destN << "를(을) 입력하셨습니다.\n\n";
    
    campus();
    
    FindRoute(startN, destN);
    
    return 0;
}
