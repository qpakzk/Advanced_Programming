#include <iostream>
#include "campus.h"
using namespace std;

void campus(){
    int arr[151][101] = {};
    
    //캠퍼스 윤곽선
    //세로줄
    for (int i = 40; i < 117; i++){
        arr[i][1] = 1;
    }
    for (int i = 0; i < 134; i++){
        arr[i][75] = 1;
    }
    
    for (int i = 133; i < 151; i++){
        arr[i][38] = 1;
    }
    
    for (int i = 117; i < 133; i++){
        arr[i][20] = 1;
    }
    
    arr[148][54] = 1;
    arr[149][54] = 1;
    
    
    //가로줄
    for (int i = 38; i < 59; i++){
        arr[150][i] = 1;
    }
    
    for (int i = 20; i < 38; i++){
        
        arr[133][i] = 1;
    }
    
    for (int i = 1; i < 20; i++){
        arr[117][i] = 1;
    }
    
    arr[40][1] = 1;
    arr[40][2] = 1;
    arr[40][3] = 1;
    arr[40][4] = 1;
    
    for (int i = 8; i < 11; i++){
        arr[44][i] = 1;
    }
    
    
    
    for (int i = 65; i < 75; i++){
        arr[0][i] = 1;
    }
    
    for (int i = 51; i < 60; i++){
        arr[5][i] = 1;
    }
    
    for (int i = 0; i < 134; i++){
        arr[i][79] = 1;
    }
    
    //대각선
    for (int i = 0; i < 16; i++){
        
        arr[134 + i][74 - i] = 3;
        
    }
    
    for (int i = 0; i < 5; i++){
        arr[40 + i][4 + i] = 1;
    }
    
    for (int i = 0; i < 40; i++){
        arr[44 - i][11 + i] = 1;
    }
    
    
    
    
    for (int i = 0; i < 6; i++){
        arr[i][65 - i] = 1;
    }
    
    
    
    
    
    
    //지하철
    for (int i = 0; i < 14; i++){
        
        arr[134 + i][79 - i] = 1;
        arr[135 + i][79 - i] = 1;
        arr[135 + i][80 - i] = 1;
        arr[136 + i][80 - i] = 1;
        arr[136 + i][81 - i] = 1;
        arr[137 + i][81 - i] = 1;
        arr[137 + i][82 - i] = 1;
        
    }
    
    //길
    for (int i = 83; i < 148; i++){
        arr[i][54] = 1;
        
    }
    for (int i = 83; i < 134; i++){
        
        arr[i][58] = 1;
    }
    
    for (int i = 58; i < 75; i++){
        
        arr[80][i] = 1;
        arr[83][i] = 1;
    }
    for (int i = 38; i < 54; i++){
        
        arr[80][i] = 1;
        arr[83][i] = 1;
    }
    
    for (int i = 83; i < 117; i++){
        
        arr[i][38] = 1;
    }
    
    for (int i = 21; i < 39; i++){
        
        arr[117][i] = 1;
    }
    
    for (int i = 58; i < 75; i++){
        arr[42][i] = 1;
        arr[45][i] = 1;
    }
    for (int i = 45; i < 80; i++){
        arr[i][58] = 1;
    }
    
    for (int i = 60; i < 81; i++){
        arr[i][54] = 1;
    }
    for (int i = 38; i < 55; i++){
        arr[60][i] = 1;
    }
    for (int i = 60; i < 81; i++){
        
        arr[i][38] = 1;
    }
    for (int i = 5; i < 58; i++){
        arr[i][54] = 1;
    }
    for (int i = 45; i < 58; i++){
        arr[i][58] = 1;
    }
    for (int i = 5; i < 43; i++){
        arr[i][58] = 1;
    }
    for (int i = 58; i < 75; i++){
        arr[42][i] = 1;
    }
    
    for (int i = 38; i < 59; i++){
        arr[80][i] = 1;
        
    }
    
    for (int i = 80; i < 115; i++){
        arr[i][35] = 1;
    }
    for (int i = 35; i < 55; i++){
        arr[57][i] = 1;
    }
    
    for (int i = 57; i < 78; i++){
        arr[i][35] = 1;
    }
    
    for (int i = 10; i < 36; i++){
        arr[114][i] = 1;
    }
    
    for (int i = 80; i < 114; i++){
        arr[i][10] = 1;
    }
    for (int i = 7; i < 35; i++){
        arr[77][i] = 1;
    }
    for (int i = 10; i < 35; i++){
        arr[80][i] = 1;
    }
    
    for (int i = 77; i < 115; i++){
        arr[i][7] = 1;
    }
    
    for (int i = 1; i < 7; i++){
        arr[114][i] = 1;
    }
    for (int i = 59; i < 75; i++){
        arr[133][i] = 1;
        
    }
    
    for (int i = 0; i < 7; i++){
        arr[57 - i][59 + i] = 1;
        
    }
    
    for (int i = 0; i < 10; i++){
        
        arr[60 - i][59 + i] = 1;
    }
    
    for (int i = 46; i < 51; i++){
        arr[i][65] = 1;
    }
    for (int i = 46; i < 51; i++){
        arr[i][68] = 1;
    }
    
    for (int i = 10; i < 42; i++){
        arr[i][65] = 1;
        arr[i][68] = 1;
    }
    
    for (int i = 39; i < 54; i++){
        arr[135][i] = 1;
    }
    for (int i = 41; i < 54; i++){
        arr[132][i] = 1;
    }
    
    for (int i = 117; i < 133; i++){
        arr[i][38] = 1;
    }
    
    for (int i = 114; i < 132; i++){
        arr[i][41] = 1;
    }
    
    for (int i = 39; i < 41; i++){
        arr[114][i] = 1;
    }
    
    
    //계단
    for (int i = 84; i < 133; i++){
        for (int j = 55; j < 58; j++){
            arr[i][j] = 6;
        }
    }
    //분수대
    for (int i = 61; i < 80; i++){
        for (int j = 39; j < 54; j++){
            arr[i][j] = 4;
        }
    }
    
    
    //운동장
    //대운동장
    for (int i = 81; i < 114; i++){
        for (int j = 11; j < 35; j++){
            arr[i][j] = 5;
        }
    }
    
    //테니스장
    
    //농구장
    
    for (int i = 47; i < 51; i++){
        for (int j = 70; j < 74; j++){
            arr[i][j] = 5;
        }
    }
    
    //건물
    //교육관
    for (int i = 80; i < 91; i++){
        for (int j = 3; j < 6; j++){
            arr[i][j] = 1;
        }
    }
    
    
    
    //백마관
    for (int i = 92; i < 111; i++){
        for (int j = 3; j < 6; j++){
            arr[i][j] = 1;
        }
    }
    
    //미래관
    for (int i = 47; i < 53; i++){
        for (int j = 60; j < 64; j++){
            arr[i][j] = 1;
        }
    }
    //안익태
    for (int i = 115; i < 132; i++){
        for (int j = 68; j < 74; j++){
            arr[i][j] = 1;
        }
    }
    
    //형남
    for (int i = 85; i < 110; i++){
        for (int j = 63; j < 74; j++){
            arr[i][j] = 1;
        }
    }
    
    
    //문화관
    for (int i = 138; i < 142; i++){
        for (int j = 41; j < 53; j++){
            arr[i][j] = 1;
        }
    }
    
    for (int i = 142; i < 149; i++){
        for (int j = 41; j < 45; j++){
            arr[i][j] = 1;
            
        }
        
    }
    
    
    
    
    //경상관
    for (int i = 115; i < 131; i++){
        for (int j = 45; j < 53; j++){
            arr[i][j] = 1;
        }
    }
    //베어드
    for (int i = 85; i < 111; i++){
        for (int j = 45; j < 53; j++){
            arr[i][j] = 1;
        }
    }
    
    
    
    //박물관 + 한경직
    
    for (int i = 60; i < 71; i++){
        for (int j = 63; j < 74; j++){
            arr[i][j] = 1;
            
        }
        
    }
    for (int i = 70; i < 74; i++){
        for (int j = 70; j < 74; j++){
            arr[i][j] = 1;
            
        }
        
    }
    for (int i = 73; i < 79; i++){
        for (int j = 63; j < 74; j++){
            
            arr[i][j] = 1;
        }
        
    }
    
    //기숙사
    
    for (int i = 2; i < 11; i++){
        for (int j = 65; j < 74; j++){
            
            
            arr[i][j] = 1;
            
        }
        
    }
    
    
    //전산관
    
    for (int i = 15; i < 41; i++){
        for (int j = 60; j < 64; j++){
            
            
            arr[i][j] = 1;
            
        }
        
    }
    
    
    //정보관
    
    for (int i = 10; i < 21; i++){
        for (int j = 81; j < 92; j++){
            
            
            arr[i][j] = 1;
            
        }
        
    }
    
    
    //창의관
    for (int i = 23; i < 29; i++){
        for (int j = 81; j < 87; j++){
            
            
            arr[i][j] = 1;
            
        }
        
    }
    //벤처관
    
    for (int i = 61; i < 78; i++){
        for (int j = 7; j < 13; j++){
            
            
            arr[i][j] = 1;
            
        }
        
    }
    
    
    //진리관
    
    for (int i = 74; i < 78; i++){
        for (int j = 15; j < 36; j++){
            
            
            arr[i][j] = 1;
            
        }
        
    }
    
    
    for (int i = 61; i < 74; i++){
        for (int j = 32; j < 35; j++){
            
            
            arr[i][j] = 1;
            
        }
        
    }
    
    
    //조만식
    
    for (int i = 55; i < 59; i++){
        for (int j = 12; j < 36; j++){
            
            
            arr[i][j] = 1;
            
        }
        
    }
    
    
    
    for (int i = 45; i < 55; i++){
        for (int j = 12; j < 16; j++){
            arr[i][j] = 1;
            
        }
        
    }
    
    
    //웨스트민스터 
    for (int i = 47; i < 53; i++){
        for (int j = 30; j < 36; j++){
            
            
            arr[i][j] = 1;
            
        }
        
    }
    
    //생활문화관
    for (int i = 47; i < 53; i++){
        for (int j = 37; j < 46; j++){
            
            
            arr[i][j] = 1;
            
        }
        
    }
    for (int i = 46; i < 55; i++){
        arr[47][i] = 1;
    }
    for (int i = 47; i < 54; i++){
        arr[48][i] = 1;
    }
    for (int i = 48; i < 53; i++){
        arr[49][i] = 1;
    }
    for (int i = 49; i < 52; i++){
        arr[50][i] = 1;
    }
    
    arr[51][50] = 1;
    //중앙도서관
    
    for (int i = 40; i < 46; i++){
        for (int j = 37; j < 47; j++){
            
            
            arr[i][j] = 1;
            
        }
        
    }
    
    //글로벌 브레인
    
    
    for (int i = 0; i < 10; i++){
        
        arr[9 + i][49 - i] = 1;
        arr[10 + i][49 - i] = 1;
        arr[10 + i][50 - i] = 1;
        arr[11 + i][50 - i] = 1;
        arr[11 + i][51 - i] = 1;
        
        //커밍홀
        arr[21 + i][37 - i] = 1;
        arr[22 + i][37 - i] = 1;
        arr[22 + i][38 - i] = 1;
        arr[23 + i][38 - i] = 1;
        arr[23 + i][39 - i] = 1;
        
        //연구관
        arr[35 + i][27 - i] = 1;
        arr[36 + i][27 - i] = 1;
        arr[36 + i][28 - i] = 1;
        arr[37 + i][28 - i] = 1;
        arr[37 + i][29 - i] = 1;
        
    }
    
    //학생회관
    for (int i = 85; i < 89; i++){
        for (int j = 15; j < 33; j++){
            arr[i][j] = 1;
            
        }
        
    }
    
    for (int i = 85; i < 106; i++){
        for (int j = 32; j < 36; j++){
            
            
            arr[i][j] = 1;
            
        }
        
    }
    
    
    //테니스장
    
    for (int i = 121; i < 130; i++){
        for (int j = 26; j < 33; j++){
            arr[i][j] = 5;
        }
    }
    
    
    
    
    
    
    
    
    
    
    //길 수정
    
    arr[80][55] = 0;
    arr[80][56] = 0;
    arr[80][57] = 0;
    
    arr[45][66] = 0;
    arr[45][67] = 0;
    
    arr[42][66] = 0;
    arr[42][67] = 0;
    
    arr[58][58] = 0;
    arr[59][58] = 0;
    
    arr[81][75] = 3;
    arr[82][75] = 3;
    
    arr[43][75] = 3;
    arr[44][75] = 3;
    
    arr[5][55] = 3;
    arr[5][56] = 3;
    arr[5][57] = 3;
    
    arr[115][1] = 3;
    arr[116][1] = 3;
    
    arr[115][38] = 0;
    arr[116][38] = 0;
    
    
    arr[133][54] = 0;
    arr[134][54] = 0;
    
    
    
    
    
    //도구
    for (int i = 0; i < 151; ++i){
        for (int j = 0; j < 101; ++j){
            if (arr[i][j] == 0) cout << "□";
            else if (arr[i][j] == 1) cout << "■";
            else if (arr[i][j] == 2) cout << "☆";
            else if (arr[i][j] == 3) cout << "●";
            else if (arr[i][j] == 4) cout << "▒";
            else if (arr[i][j] == 5) cout << "▦";
            else if (arr[i][j] == 6) cout << "▤";
        }
        cout << "\n";
        
    }
    cout << "특수 부호 정보\n";
    cout << "■ : 경계, 건물, ";
    cout << "● : 출입문, ";
    cout << "▤ : 계단, ";
    cout << "▒ : 분수대, ";
    cout << "▦: 운동장\n";
    
}
