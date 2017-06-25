#include "FindRoute.h"
#include <iostream>
using namespace std;

void FindRoute(int start, int dest){
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
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    // 시작, 도착위치 지정
    //지하철: 0
    if (0 == start){
        for (int i = 0; i < 14; i++){
            
            arr[134 + i][79 - i] = 2;
            arr[135 + i][79 - i] = 2;
            arr[135 + i][80 - i] = 2;
            arr[136 + i][80 - i] = 2;
            arr[136 + i][81 - i] = 2;
            arr[137 + i][81 - i] = 2;
            arr[137 + i][82 - i] = 2;
        }
        
        
    }
    
    //운동장
    //대운동장: 23
    if (23 == start){
        for (int i = 81; i < 114; i++){
            for (int j = 11; j < 35; j++){
                arr[i][j] = 2;
            }
        }
        
        
    }
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
    
    
    //농구장 :25
    
    if (25 == start){
        for (int i = 47; i < 51; i++){
            for (int j = 70; j < 74; j++){
                arr[i][j] = 2;
            }
        }
        
        
    }
    
    //건물
    //교육관 : 6
    
    if (6 == start){
        for (int i = 80; i < 91; i++){
            for (int j = 3; j < 6; j++){
                arr[i][j] = 2;
            }
        }
        
        
    }
    
    
    //백마관 : 7
    if (7 == start){
        for (int i = 92; i < 111; i++){
            for (int j = 3; j < 6; j++){
                arr[i][j] = 2;
            }
        }
        
        
    }
    //미래관 : 20
    if (20 == start){
        for (int i = 47; i < 53; i++){
            for (int j = 60; j < 64; j++){
                arr[i][j] = 2;
            }
        }
        
    }
    //안익태 : 4
    if (4 == start){
        for (int i = 115; i < 132; i++){
            for (int j = 68; j < 74; j++){
                arr[i][j] = 2;
            }
        }
        
        
    }
    //형남 : 5
    if (5 == start){
        for (int i = 85; i < 110; i++){
            for (int j = 63; j < 74; j++){
                arr[i][j] = 2;
            }
        }
        
        
    }
    
    //문화관 : 3
    if (3 == start){
        for (int i = 138; i < 142; i++){
            for (int j = 41; j < 53; j++){
                arr[i][j] = 2;
            }
            
        }
        
        for (int i = 142; i < 149; i++){
            for (int j = 41; j < 45; j++){
                arr[i][j] = 2;
                
            }
            
        }
        
    }
    
    
    
    //경상관
    
    if (2 == start){
        for (int i = 115; i < 131; i++){
            for (int j = 45; j < 53; j++){
                arr[i][j] = 2;
            }
        }
        
        
    }
    //베어드
    if (1 == start){
        for (int i = 85; i < 111; i++){
            for (int j = 45; j < 53; j++){
                arr[i][j] = 2;
            }
        }
        
        
    }
    
    
    //박물관 + 한경직
    if (8 == start){
        for (int i = 60; i < 71; i++){
            for (int j = 63; j < 74; j++){
                arr[i][j] = 2;
                
            }
            
        }
        
        
    }
    for (int i = 72; i < 74; i++){
        for (int j = 71; j < 72; j++){
            arr[i][j] = 1;
            
        }
        
    }
    if (13 == start){
        for (int i = 73; i < 79; i++){
            for (int j = 63; j < 74; j++){
                
                arr[i][j] = 2;
            }
            
        }
        
    }
    
    //기숙사
    if (18 == start){
        for (int i = 2; i < 11; i++){
            for (int j = 65; j < 74; j++){
                
                
                arr[i][j] = 2;
                
            }
            
        }
        
    }
    
    //전산관
    if (19 == start){
        for (int i = 15; i < 41; i++){
            for (int j = 60; j < 64; j++){
                
                
                arr[i][j] = 2;
                
            }
            
        }
        
    }
    
    //정보관
    if (21 == start){
        for (int i = 10; i < 21; i++){
            for (int j = 81; j < 92; j++){
                
                
                arr[i][j] = 2;
                
            }
            
        }
        
    }
    //창의관
    if (26 == start){
        for (int i = 23; i < 29; i++){
            for (int j = 81; j < 87; j++){
                
                
                arr[i][j] = 2;
                
            }
            
        }
        
    }
    //벤처관
    if (10 == start){
        for (int i = 61; i < 78; i++){
            for (int j = 7; j < 13; j++){
                
                
                arr[i][j] = 2;
                
            }
            
        }
        
        
    }
    
    //진리관
    if (11 == start){
        for (int i = 74; i < 78; i++){
            for (int j = 15; j < 36; j++){
                
                
                arr[i][j] = 2;
                
            }
            
            
            
        }
        
        
        for (int i = 61; i < 74; i++){
            for (int j = 32; j < 36; j++){
                
                
                arr[i][j] = 2;
                
            }
            
        }
        
        
    }
    
    //조만식
    if (12 == start){
        for (int i = 55; i < 59; i++){
            for (int j = 12; j < 36; j++){
                
                
                arr[i][j] = 2;
                
            }
            
        }
        
        
        
        for (int i = 45; i < 55; i++){
            for (int j = 12; j < 16; j++){
                arr[i][j] = 2;
                
            }
            
        }
        
    }
    
    //웨스트민스터
    if (22 == start){
        for (int i = 47; i < 53; i++){
            for (int j = 30; j < 36; j++){
                
                
                arr[i][j] = 2;
                
            }
            
        }
        
    }
    //생활문화관
    if (9 == start){
        for (int i = 47; i < 53; i++){
            for (int j = 37; j < 46; j++){
                
                
                arr[i][j] = 2;
                
            }
            
        }
        for (int i = 46; i < 55; i++){
            arr[47][i] = 2;
        }
        for (int i = 47; i < 54; i++){
            arr[48][i] = 2;
        }
        for (int i = 48; i < 53; i++){
            arr[49][i] = 2;
        }
        for (int i = 49; i < 52; i++){
            arr[50][i] = 2;
        }
        
        arr[51][50] = 2;
        
        
        
    }
    //중앙도서관
    if (14 == start){
        for (int i = 40; i < 46; i++){
            for (int j = 37; j < 47; j++){
                
                
                arr[i][j] = 2;
                
            }
            
        }
        
    }
    //글로벌 브레인
    
    if (17 == start){
        for (int i = 0; i < 10; i++){
            
            
            arr[9 + i][49 - i] = 2;
            arr[10 + i][49 - i] = 2;
            arr[10 + i][50 - i] = 2;
            arr[11 + i][50 - i] = 2;
            arr[11 + i][51 - i] = 2;
        }
        
        
    }
    //커밍홀
    if (16 == start){
        for (int i = 0; i < 10; i++){
            arr[21 + i][37 - i] = 2;
            arr[22 + i][37 - i] = 2;
            arr[22 + i][38 - i] = 2;
            arr[23 + i][38 - i] = 2;
            arr[23 + i][39 - i] = 2;
        }
        
        
    }
    //연구관
    
    if (15 == start){
        for (int i = 0; i < 10; i++){
            arr[35 + i][27 - i] = 2;
            arr[36 + i][27 - i] = 2;
            arr[36 + i][28 - i] = 2;
            arr[37 + i][28 - i] = 2;
            arr[37 + i][29 - i] = 2;
            
        }
    }
    //학생회관
    if (27 == start){
        for (int i = 85; i < 89; i++){
            for (int j = 15; j < 33; j++){
                arr[i][j] = 2;
                
            }
            
            
        }
        
        for (int i = 85; i < 106; i++){
            for (int j = 32; j < 36; j++){
                
                
                arr[i][j] = 2;
                
            }
            
        }
        
        
        
    }
    //테니스장
    if (24 == start){
        for (int i = 121; i < 130; i++){
            for (int j = 26; j < 33; j++){
                arr[i][j] = 2;
            }
        }
        
    }
    
    
    
    
    //지하철: 0
    if (0 == dest){
        for (int i = 0; i < 14; i++){
            
            arr[134 + i][79 - i] = 7;
            arr[135 + i][79 - i] = 7;
            arr[135 + i][80 - i] = 7;
            arr[136 + i][80 - i] = 7;
            arr[136 + i][81 - i] = 7;
            arr[137 + i][81 - i] = 7;
            arr[137 + i][82 - i] = 7;
            
        }
    }
    
    
    //운동장
    //대운동장: 23
    if (23 == dest){
        for (int i = 81; i < 114; i++){
            for (int j = 11; j < 35; j++){
                arr[i][j] = 7;
            }
        }
        
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
    }
    
    
    
    
    //농구장 :25
    
    if (25 == dest){
        for (int i = 47; i < 51; i++){
            for (int j = 70; j < 74; j++){
                arr[i][j] = 7;
            }
        }
    }
    
    //건물
    //교육관 : 6
    
    if (6 == dest){
        for (int i = 80; i < 91; i++){
            for (int j = 3; j < 6; j++){
                arr[i][j] = 7;
            }
        }
    }
    
    
    //백마관 : 7
    if (7 == dest){
        for (int i = 92; i < 111; i++){
            for (int j = 3; j < 6; j++){
                arr[i][j] = 7;
            }
        }
    }
    //미래관 : 20
    if (20 == dest){
        for (int i = 47; i < 53; i++){
            for (int j = 60; j < 64; j++){
                arr[i][j] = 7;
            }
        }
    }
    //안익태 : 4
    if (4 == dest){
        for (int i = 115; i < 132; i++){
            for (int j = 68; j < 74; j++){
                arr[i][j] = 7;
            }
        }
    }
    //형남 : 5
    if (5 == dest){
        for (int i = 85; i < 110; i++){
            for (int j = 63; j < 74; j++){
                arr[i][j] = 7;
            }
        }
    }
    
    //문화관 : 3
    if (3 == dest){
        for (int i = 138; i < 142; i++){
            for (int j = 41; j < 53; j++){
                arr[i][j] = 7;
            }
        }
        
        for (int i = 142; i < 149; i++){
            for (int j = 41; j < 45; j++){
                arr[i][j] = 7;
                
            }
            
        }
    }
    
    
    
    //경상관
    
    if (2 == dest){
        for (int i = 115; i < 131; i++){
            for (int j = 45; j < 53; j++){
                arr[i][j] = 7;
            }
        }
    }
    //베어드
    if (1 == dest){
        for (int i = 85; i < 111; i++){
            for (int j = 45; j < 53; j++){
                arr[i][j] = 7;
            }
        }
    }
    
    
    //박물관 + 한경직
    if (8 == dest){
        for (int i = 60; i < 71; i++){
            for (int j = 63; j < 74; j++){
                arr[i][j] = 7;
                
            }
            
        }
    }
    
    //}
    if (13 == dest){
        for (int i = 72; i < 79; i++){
            for (int j = 63; j < 74; j++){
                
                arr[i][j] = 7;
            }
            
        }
    }
    
    //기숙사
    if (18 == dest){
        for (int i = 2; i < 11; i++){
            for (int j = 65; j < 74; j++){
                
                
                arr[i][j] = 7;
                
            }
            
        }
    }
    
    //전산관
    if (19 == dest){
        for (int i = 15; i < 41; i++){
            for (int j = 60; j < 64; j++){
                
                
                arr[i][j] = 7;
                
            }
            
        }
    }
    
    //정보관
    if (21 == dest){
        for (int i = 10; i < 21; i++){
            for (int j = 81; j < 92; j++){
                
                
                arr[i][j] = 7;
                
            }
            
        }
        
    }
    
    
    
    
    
    //창의관
    if (26 == dest){
        for (int i = 23; i < 29; i++){
            for (int j = 81; j < 87; j++){
                
                
                arr[i][j] = 7;
                
            }
            
        }
    }
    //벤처관
    if (10 == dest){
        for (int i = 61; i < 78; i++){
            for (int j = 7; j < 13; j++){
                
                
                arr[i][j] = 7;
                
            }
            
        }
    }
    
    //진리관
    if (11 == dest){
        for (int i = 74; i < 78; i++){
            for (int j = 15; j < 36; j++){
                
                
                arr[i][j] = 7;
                
            }
            
        }
        
        
        for (int i = 61; i < 74; i++){
            for (int j = 32; j < 36; j++){
                
                
                arr[i][j] = 7;
                
            }
            
        }
    }
    
    //조만식
    if (12 == dest){
        for (int i = 55; i < 59; i++){
            for (int j = 12; j < 36; j++){
                
                
                arr[i][j] = 7;
                
            }
            
        }
        
        
        
        
        for (int i = 45; i < 55; i++){
            for (int j = 12; j < 16; j++){
                arr[i][j] = 7;
                
            }
            
        }
    }
    
    //웨스트민스터
    if (22 == dest){
        for (int i = 47; i < 53; i++){
            for (int j = 30; j < 36; j++){
                
                
                arr[i][j] = 7;
                
            }
            
        }
    }
    //생활문화관
    if (9 == dest){
        for (int i = 47; i < 53; i++){
            for (int j = 37; j < 46; j++){
                
                
                arr[i][j] = 7;
                
            }
            
        }
        for (int i = 46; i < 55; i++){
            arr[47][i] = 7;
        }
        for (int i = 47; i < 54; i++){
            arr[48][i] = 7;
        }
        for (int i = 48; i < 53; i++){
            arr[49][i] = 7;
        }
        for (int i = 49; i < 52; i++){
            arr[50][i] = 7;
        }
        
        arr[51][50] = 7;
    }
    //중앙도서관
    if (14 == dest){
        for (int i = 40; i < 46; i++){
            for (int j = 37; j < 47; j++){
                
                
                arr[i][j] = 7;
                
            }
            
        }
    }
    //글로벌 브레인
    
    if (17 == dest){
        for (int i = 0; i < 10; i++){
            
            
            arr[9 + i][49 - i] = 7;
            arr[10 + i][49 - i] = 7;
            arr[10 + i][50 - i] = 7;
            arr[11 + i][50 - i] = 7;
            arr[11 + i][51 - i] = 7;
        }
    }
    //커밍홀
    if (16 == dest){
        for (int i = 0; i < 10; i++){
            arr[21 + i][37 - i] = 7;
            arr[22 + i][37 - i] = 7;
            arr[22 + i][38 - i] = 7;
            arr[23 + i][38 - i] = 7;
            arr[23 + i][39 - i] = 7;
        }
    }
    //연구관
    
    if (15 == dest){
        for (int i = 0; i < 10; i++){
            arr[35 + i][27 - i] = 7;
            arr[36 + i][27 - i] = 7;
            arr[36 + i][28 - i] = 7;
            arr[37 + i][28 - i] = 7;
            arr[37 + i][29 - i] = 7;
            
        }
    }
    //학생회관
    if (27 == dest){
        for (int i = 85; i < 89; i++){
            for (int j = 15; j < 33; j++){
                arr[i][j] = 7;
                
            }
            
        }
        
        for (int i = 85; i < 106; i++){
            for (int j = 32; j < 36; j++){
                
                
                arr[i][j] = 7;
                
            }
            
        }
        
    }
    //테니스장
    if (24 == dest){
        for (int i = 121; i < 130; i++){
            for (int j = 26; j < 33; j++){
                arr[i][j] = 7;
            }
        }
        
    }
    
    
    
    
    //연결
    //정보대 지하철
    if ((0 == start) && (21 == dest)){
        
        for (int i = 15; i < 136; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
        
    }
    
    
    if ((0 == dest) && (21 == start)){
        
        for (int i = 15; i < 136; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
        
    }
    //창의관 지하철
    if ((0 == start) && (26 == dest)){
        
        for (int i = 25; i < 136; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
        
    }
    
    if ((0 == dest) && (26 == start)){
        
        for (int i = 25; i < 136; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
        
    }
    //기숙사 지하철
    if ((0 == start) && (18 == dest)){
        
        for (int i = 6; i < 136; i++){
            
            arr[i][77] = 8;
            
        }
        arr[6][74] = 8;
        arr[6][75] = 8;
        arr[6][76] = 8;
        
    }
    
    if ((0 == dest) && (18 == start)){
        
        for (int i = 6; i < 136; i++){
            
            arr[i][77] = 8;
            
        }
        
        
        arr[6][74] = 8;
        arr[6][75] = 8;
        arr[6][76] = 8;
        
    }
    
    
    
    
    
    
    
    
    
    //지하철 안익태
    if ((0 == dest) && (4 == start)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 123; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
    }
    
    
    if ((0 == start) && (4 == dest)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 123; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
    }
    //지하철 형남
    if ((0 == dest) && (5 == start)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 97; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
    }
    if ((0 == start) && (5 == dest)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 97; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
    }
    
    
    //지하철 문화관
    
    if ((0 == start) && (3 == dest)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 134; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
    }
    
    
    if ((3 == start) && (0 == dest)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 134; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
    }
    
    //지하철 경상관
    
    if ((2 == start) && (0 == dest)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 134; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 122; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 41; i < 45; i++){
            arr[122][i] = 8;
        }
        
        
    }
    
    if ((0 == start) && (2 == dest)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 134; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 122; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 41; i < 45; i++){
            arr[122][i] = 8;
        }
        
        
    }
    
    //지하철 대운동장
    if ((0 == start) && (23 == dest)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 134; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 115; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 14; i < 40; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        
    }
    
    if ((23 == start) && (0 == dest)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 134; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 115; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 14; i < 40; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        
    }
    
    
    //지하철 백마관
    
    if ((0 == start) && (7 == dest)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 134; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 115; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 8; i < 40; i++){
            arr[115][i] = 8;
        }
        for (int i = 101; i < 115; i++){
            arr[i][8] = 8;
        }
        arr[101][6] = 8;
        arr[101][7] = 8;
        
    }
    
    if ((7 == start) && (0 == dest)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 134; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 115; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 8; i < 40; i++){
            arr[115][i] = 8;
        }
        for (int i = 101; i < 115; i++){
            arr[i][8] = 8;
        }
        arr[101][6] = 8;
        arr[101][7] = 8;
        
    }
    
    
    
    
    //지하철 교육관
    
    if ((0 == start) && (6 == dest)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 134; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 115; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 8; i < 40; i++){
            arr[115][i] = 8;
        }
        for (int i = 85; i < 115; i++){
            arr[i][8] = 8;
        }
        arr[85][6] = 8;
        arr[85][7] = 8;
        
    }
    
    if ((6 == start) && (0 == dest)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 134; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 115; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 8; i < 40; i++){
            arr[115][i] = 8;
        }
        for (int i = 85; i < 115; i++){
            arr[i][8] = 8;
        }
        arr[85][6] = 8;
        arr[85][7] = 8;
        
    }
    
    
    
    //지하철 박물관
    if ((0 == dest) && (13 == start)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 75; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[75][i] = 8;
        }
    }
    
    if ((0 == start) && (13 == dest)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 75; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[75][i] = 8;
        }
    }
    //지하철 한경직
    
    if ((0 == dest) && (8 == start)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 65; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
    }
    if ((0 == start) && (8 == dest)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 65; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
    }
    
    //지하철 미래관
    if ((0 == dest) && (20 == start)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 49; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
    }
    
    if ((0 == start) && (20 == dest)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 49; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
    }
    
    
    //지하철 전산관
    
    if ((0 == dest) && (19 == start)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 27; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
    }
    
    if ((0 == start) && (19 == dest)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 27; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
    }
    //지하철 연구관
    
    if ((0 == start) && (15 == dest)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 38; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    
    if ((0 == dest) && (15 == start)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 38; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    
    //지하철 커밍홀
    
    if ((0 == start) && (16 == dest)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 26; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    
    if ((0 == dest) && (16 == start)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 26; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    //지하철 브레인홀
    
    if ((0 == start) && (17 == dest)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 14; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    
    if ((0 == dest) && (17 == start)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 14; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    
    
    //지하철 중앙도서관
    if ((0 == start) && (14 == dest)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 42; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
    }
    
    if ((0 == dest) && (14 == start)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 42; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
    }
    //지하철 베어드
    if ((0 == dest) && (1 == start)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 82; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 48; i < 56; i++){
            arr[82][i] = 8;
        }
        arr[84][48] = 8;
        arr[83][48] = 8;
    }
    if ((1 == dest) && (0 == start)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 82; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 48; i < 56; i++){
            arr[82][i] = 8;
        }
        arr[84][48] = 8;
        arr[83][48] = 8;
    }
    //지하철 학생회관
    if ((27 == dest) && (0 == start)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 82; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 56; i++){
            arr[82][i] = 8;
        }
        arr[83][37] = 8;
        arr[84][37] = 8;
        arr[85][37] = 8;
        arr[86][37] = 8;
        arr[87][37] = 8;
        arr[87][36] = 8;
        
    }
    
    if ((0 == dest) && (27 == start)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 82; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 56; i++){
            arr[82][i] = 8;
        }
        arr[83][37] = 8;
        arr[84][37] = 8;
        arr[85][37] = 8;
        arr[86][37] = 8;
        arr[87][37] = 8;
        arr[87][36] = 8;
        
    }
    //지하철 벤처관
    if ((10 == dest) && (0 == start)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 82; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 56; i++){
            arr[82][i] = 8;
        }
        arr[81][37] = 8;
        arr[80][37] = 8;
        arr[79][37] = 8;
        for (int i = 9; i < 37; i++){
            arr[79][i] = 8;
        }
        arr[78][9] = 8;
        
    }
    
    if ((0 == dest) && (10 == start)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 82; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 56; i++){
            arr[82][i] = 8;
        }
        arr[81][37] = 8;
        arr[80][37] = 8;
        arr[79][37] = 8;
        for (int i = 9; i < 37; i++){
            arr[79][i] = 8;
        }
        arr[78][9] = 8;
        
    }
    
    //지하철 진리관
    if ((11 == dest) && (0 == start)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 82; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 56; i++){
            arr[82][i] = 8;
        }
        arr[81][37] = 8;
        arr[80][37] = 8;
        arr[79][37] = 8;
        arr[78][37] = 8;
        arr[77][37] = 8;
        arr[76][37] = 8;
        arr[75][37] = 8;
        arr[75][36] = 8;
        
    }
    if ((0 == dest) && (11 == start)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 82; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 56; i++){
            arr[82][i] = 8;
        }
        arr[81][37] = 8;
        arr[80][37] = 8;
        arr[79][37] = 8;
        arr[78][37] = 8;
        arr[77][37] = 8;
        arr[76][37] = 8;
        arr[75][37] = 8;
        arr[75][36] = 8;
        
    }
    
    //지하철 생활문화관
    if ((9 == start) && (0 == dest)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 58; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 40; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 53; i < 58; i++){
            arr[i][40] = 8;
        }
    }
    
    if ((0 == start) && (9 == dest)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 58; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 40; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 53; i < 58; i++){
            arr[i][40] = 8;
        }
    }
    //지하철 조만식
    if ((0 == start) && (12 == dest)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 58; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 36; i < 57; i++){
            arr[58][i] = 8;
        }
    }
    if ((12 == start) && (0 == dest)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 58; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 36; i < 57; i++){
            arr[58][i] = 8;
        }
    }
    //지하철 웨스트민스터홀
    if ((0 == start) && (22 == dest)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 46; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
    }
    if ((22 == start) && (0 == dest)){
        
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 46; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
    }
    
    //지하철 농구장
    if ((0 == dest) && (25 == start)){
        
        for (int i = 44; i < 136; i++){
            
            arr[i][77] = 8;
            
        }
        arr[44][76] = 8;
        arr[44][75] = 8;
        arr[44][74] = 8;
        arr[44][73] = 8;
        arr[44][72] = 8;
        arr[45][72] = 8;
        arr[46][72] = 8;
    }
    if ((25 == dest) && (0 == start)){
        
        for (int i = 44; i < 136; i++){
            
            arr[i][77] = 8;
            
        }
        arr[44][76] = 8;
        arr[44][75] = 8;
        arr[44][74] = 8;
        arr[44][73] = 8;
        arr[44][72] = 8;
        arr[45][72] = 8;
        arr[46][72] = 8;
    }
    //지하철 테니스장
    if ((0 == start) && (24 == dest)){
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 134; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        for (int i = 130; i < 135; i++){
            arr[i][40] = 8;
        }
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        
    }
    
    if ((24 == start) && (0 == dest)){
        for (int i = 56; i < 71; i++){
            arr[142][i] = 8;
        }
        for (int i = 134; i < 142; i++){
            arr[i][56] = 8;
        }
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        for (int i = 130; i < 135; i++){
            arr[i][40] = 8;
        }
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        
    }
    
    //베어드 경상관
    if ((1 == start) && (2 == dest)){
        
        arr[111][48] = 8;
        arr[112][48] = 8;
        arr[113][48] = 8;
        arr[114][48] = 8;
        
    }
    
    if ((2 == start) && (1 == dest)){
        
        arr[111][48] = 8;
        arr[112][48] = 8;
        arr[113][48] = 8;
        arr[114][48] = 8;
        
    }
    
    //베어드 안익태
    if ((1 == dest) && (4 == start)){
        
        arr[84][48] = 8;
        arr[83][48] = 8;
        for (int i = 82; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 48; i < 56; i++){
            arr[82][i] = 8;
        }
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
    }
    
    if ((4 == dest) && (1 == start)){
        
        arr[84][48] = 8;
        arr[83][48] = 8;
        
        for (int i = 82; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 48; i < 56; i++){
            arr[82][i] = 8;
        }
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
    }
    
    
    //베어드 형남
    
    if ((5 == dest) && (1 == start)){
        
        
        for (int i = 82; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 48; i < 56; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        
        arr[83][48] = 8;
        arr[84][48] = 8;
    }
    if ((1 == dest) && (5 == start)){
        
        
        for (int i = 82; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 48; i < 56; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        arr[83][48] = 8;
        arr[84][48] = 8;
    }
    
    //베어드 학생회관
    
    if ((27 == dest) && (1 == start)){
        
        for (int i = 37; i < 49; i++){
            arr[82][i] = 8;
        }
        arr[83][37] = 8;
        arr[84][37] = 8;
        arr[85][37] = 8;
        arr[86][37] = 8;
        arr[87][37] = 8;
        arr[87][36] = 8;
        arr[84][48] = 8;
        arr[83][48] = 8;
    }
    if ((1 == dest) && (27 == start)){
        
        for (int i = 37; i < 49; i++){
            arr[82][i] = 8;
        }
        arr[83][37] = 8;
        arr[84][37] = 8;
        arr[85][37] = 8;
        arr[86][37] = 8;
        arr[87][37] = 8;
        arr[87][36] = 8;
        arr[84][48] = 8;
        arr[83][48] = 8;
    }
    //베어드 정보대
    if ((1 == dest) && (21 == start)){
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
        
        for (int i = 15; i < 82; i++){
            
            arr[i][77] = 8;
            
        }
        for (int i = 48; i < 78; i++){
            arr[82][i] = 8;
        }
        arr[84][48] = 8;
        arr[83][48] = 8;
    }
    
    if ((21 == dest) && (1 == start)){
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
        
        for (int i = 15; i < 82; i++){
            
            arr[i][77] = 8;
            
        }
        for (int i = 48; i < 78; i++){
            arr[82][i] = 8;
        }
        arr[84][48] = 8;
        arr[83][48] = 8;
    }
    //창의관 베어드
    if ((26 == dest) && (1 == start)){
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
        
        for (int i = 25; i < 82; i++){
            
            arr[i][77] = 8;
            
        }
        for (int i = 48; i < 78; i++){
            arr[82][i] = 8;
        }
        arr[84][48] = 8;
        arr[83][48] = 8;
        
    }
    if ((1 == dest) && (26 == start)){
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
        
        for (int i = 25; i < 82; i++){
            
            arr[i][77] = 8;
            
        }
        for (int i = 48; i < 78; i++){
            arr[82][i] = 8;
        }
        arr[84][48] = 8;
        arr[83][48] = 8;
        
    }
    
    
    //기숙사 베어드
    if ((18 == dest) && (1 == start)){
        arr[6][74] = 8;
        arr[6][75] = 8;
        arr[6][76] = 8;
        
        for (int i = 6; i < 82; i++){
            
            arr[i][77] = 8;
            
        }
        for (int i = 48; i < 78; i++){
            arr[82][i] = 8;
        }
        arr[84][48] = 8;
        arr[83][48] = 8;
        
    }
    if ((1 == dest) && (18 == start)){
        arr[6][74] = 8;
        arr[6][75] = 8;
        arr[6][76] = 8;
        
        for (int i = 6; i < 82; i++){
            
            arr[i][77] = 8;
            
        }
        for (int i = 48; i < 78; i++){
            arr[82][i] = 8;
        }
        arr[84][48] = 8;
        arr[83][48] = 8;
        
    }
    
    //베어드 문화관
    if ((3 == dest) && (1 == start)){
        
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        
        for (int i = 82; i < 135; i++){
            arr[i][56] = 8;
        }
        for (int i = 48; i < 56; i++){
            arr[82][i] = 8;
        }
        arr[84][48] = 8;
        arr[83][48] = 8;
    }
    
    if ((1 == dest) && (3 == start)){
        
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        
        for (int i = 82; i < 135; i++){
            arr[i][56] = 8;
        }
        for (int i = 48; i < 56; i++){
            arr[82][i] = 8;
        }
        arr[84][48] = 8;
        arr[83][48] = 8;
    }
    
    
    //베어드 대운동장
    if ((1 == dest) && (23 == start)){
        
        arr[84][48] = 8;
        arr[83][48] = 8;
        for (int i = 37; i < 49; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 37; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        
    }
    
    if ((23 == dest) && (1 == start)){
        
        arr[84][48] = 8;
        arr[83][48] = 8;
        for (int i = 37; i < 49; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 37; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        
    }
    //베어드 백마관
    if ((1 == dest) && (7 == start)){
        
        arr[84][48] = 8;
        arr[83][48] = 8;
        for (int i = 37; i < 49; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        for (int i = 8; i < 37; i++){
            arr[115][i] = 8;
        }
        for (int i = 101; i < 115; i++){
            arr[i][8] = 8;
        }
        arr[101][6] = 8;
        arr[101][7] = 8;
        
    }
    
    if ((7 == dest) && (1 == start)){
        
        arr[84][48] = 8;
        arr[83][48] = 8;
        for (int i = 37; i < 49; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        for (int i = 8; i < 37; i++){
            arr[115][i] = 8;
        }
        for (int i = 101; i < 115; i++){
            arr[i][8] = 8;
        }
        arr[101][6] = 8;
        arr[101][7] = 8;
        
    }
    //베어드 교육관
    
    if ((1 == dest) && (6 == start)){
        
        arr[84][48] = 8;
        arr[83][48] = 8;
        for (int i = 37; i < 49; i++){
            arr[82][i] = 8;
        }
        arr[81][37] = 8;
        arr[80][37] = 8;
        arr[79][37] = 8;
        for (int i = 9; i < 37; i++){
            arr[79][i] = 8;
        }
        for (int i = 80; i < 86; i++){
            arr[i][9] = 8;
        }
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        
    }
    if ((6 == dest) && (1 == start)){
        
        arr[84][48] = 8;
        arr[83][48] = 8;
        for (int i = 37; i < 49; i++){
            arr[82][i] = 8;
        }
        arr[81][37] = 8;
        arr[80][37] = 8;
        arr[79][37] = 8;
        for (int i = 9; i < 37; i++){
            arr[79][i] = 8;
        }
        for (int i = 80; i < 86; i++){
            arr[i][9] = 8;
        }
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        
    }
    
    //베어드 박물관
    if ((13 == dest) && (1 == start)){
        
        
        for (int i = 75; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[75][i] = 8;
        }
        for (int i = 48; i < 57; i++){
            arr[82][i] = 8;
        }
        arr[84][48] = 8;
        arr[83][48] = 8;
    }
    
    if ((1 == dest) && (13 == start)){
        
        
        for (int i = 75; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[75][i] = 8;
        }
        for (int i = 48; i < 57; i++){
            arr[82][i] = 8;
        }
        arr[84][48] = 8;
        arr[83][48] = 8;
    }
    //베어드 한경직
    if ((1 == dest) && (8 == start)){
        
        
        for (int i = 65; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 48; i < 57; i++){
            arr[82][i] = 8;
        }
        arr[84][48] = 8;
        arr[83][48] = 8;
    }
    
    if ((8 == dest) && (1 == start)){
        
        
        for (int i = 65; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 48; i < 57; i++){
            arr[82][i] = 8;
        }
        arr[84][48] = 8;
        arr[83][48] = 8;
    }
    //베어드 미래관
    if ((20 == dest) && (1 == start)){
        
        
        for (int i = 49; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
        for (int i = 48; i < 57; i++){
            arr[82][i] = 8;
        }
        arr[84][48] = 8;
        arr[83][48] = 8;
    }
    
    if ((1 == dest) && (20 == start)){
        
        
        for (int i = 49; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
        for (int i = 48; i < 57; i++){
            arr[82][i] = 8;
        }
        arr[84][48] = 8;
        arr[83][48] = 8;
    }
    
    //베어드 전산관
    if ((1 == dest) && (19 == start)){
        
        
        for (int i = 27; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
        for (int i = 48; i < 57; i++){
            arr[82][i] = 8;
        }
        arr[84][48] = 8;
        arr[83][48] = 8;
    }
    if ((19 == dest) && (1 == start)){
        
        for (int i = 27; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
        for (int i = 48; i < 57; i++){
            arr[82][i] = 8;
        }
        arr[84][48] = 8;
        arr[83][48] = 8;
    }
    //베어드 연구관
    if ((15 == dest) && (1 == start)){
        
        
        for (int i = 38; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
        for (int i = 48; i < 57; i++){
            arr[82][i] = 8;
        }
        arr[84][48] = 8;
        arr[83][48] = 8;
    }
    if ((1 == dest) && (15 == start)){
        
        
        for (int i = 38; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
        for (int i = 48; i < 57; i++){
            arr[82][i] = 8;
        }
        arr[84][48] = 8;
        arr[83][48] = 8;
    }
    
    //베어드 커밍홀
    if ((1 == dest) && (16 == start)){
        
        
        for (int i = 26; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
        for (int i = 48; i < 57; i++){
            arr[82][i] = 8;
        }
        arr[84][48] = 8;
        arr[83][48] = 8;
    }
    
    if ((16 == dest) && (1 == start)){
        
        
        for (int i = 26; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
        for (int i = 48; i < 57; i++){
            arr[82][i] = 8;
        }
        arr[84][48] = 8;
        arr[83][48] = 8;
    }
    
    //베어드 브레인홀
    if ((1 == dest) && (17 == start)){
        
        
        for (int i = 14; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
        for (int i = 48; i < 57; i++){
            arr[82][i] = 8;
        }
        arr[84][48] = 8;
        arr[83][48] = 8;
    }
    if ((17 == dest) && (1 == start)){
        
        for (int i = 14; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
        for (int i = 48; i < 57; i++){
            arr[82][i] = 8;
        }
        arr[84][48] = 8;
        arr[83][48] = 8;
    }
    //베어드 중앙도서관
    if ((14 == dest) && (1 == start)){
        
        
        for (int i = 42; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 48; i < 57; i++){
            arr[82][i] = 8;
        }
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
        arr[84][48] = 8;
        arr[83][48] = 8;
    }
    
    if ((1 == dest) && (14 == start)){
        
        
        for (int i = 42; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 48; i < 57; i++){
            arr[82][i] = 8;
        }
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
        arr[84][48] = 8;
        arr[83][48] = 8;
    }
    //베어드 벤처관
    if ((10 == dest) && (1 == start)){
        
        arr[84][48] = 8;
        arr[83][48] = 8;
        for (int i = 37; i < 49; i++){
            arr[82][i] = 8;
        }
        arr[81][37] = 8;
        arr[80][37] = 8;
        arr[79][37] = 8;
        for (int i = 9; i < 37; i++){
            arr[79][i] = 8;
        }
        arr[78][9] = 8;
        
    }
    if ((1 == dest) && (10 == start)){
        
        arr[84][48] = 8;
        arr[83][48] = 8;
        for (int i = 37; i < 49; i++){
            arr[82][i] = 8;
        }
        arr[81][37] = 8;
        arr[80][37] = 8;
        arr[79][37] = 8;
        for (int i = 9; i < 37; i++){
            arr[79][i] = 8;
        }
        arr[78][9] = 8;
        
    }
    
    //베어드 진리관
    if ((11 == dest) && (1 == start)){
        
        
        arr[84][48] = 8;
        arr[83][48] = 8;
        for (int i = 37; i < 49; i++){
            arr[82][i] = 8;
        }
        arr[81][37] = 8;
        arr[80][37] = 8;
        arr[79][37] = 8;
        arr[78][37] = 8;
        arr[77][37] = 8;
        arr[76][37] = 8;
        arr[75][37] = 8;
        arr[75][36] = 8;
        
    }
    
    if ((1 == dest) && (11 == start)){
        
        
        arr[84][48] = 8;
        arr[83][48] = 8;
        for (int i = 37; i < 49; i++){
            arr[82][i] = 8;
        }
        arr[81][37] = 8;
        arr[80][37] = 8;
        arr[79][37] = 8;
        arr[78][37] = 8;
        arr[77][37] = 8;
        arr[76][37] = 8;
        arr[75][37] = 8;
        arr[75][36] = 8;
        
    }
    
    //베어드 생활문화관
    if ((9 == start) && (1 == dest)){
        
        arr[84][48] = 8;
        arr[83][48] = 8;
        
        for (int i = 48; i < 57; i++){
            arr[82][i] = 8;
        }
        for (int i = 58; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 40; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 53; i < 58; i++){
            arr[i][40] = 8;
        }
    }
    
    if ((1 == start) && (9 == dest)){
        
        arr[84][48] = 8;
        arr[83][48] = 8;
        
        for (int i = 48; i < 57; i++){
            arr[82][i] = 8;
        }
        for (int i = 58; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 40; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 53; i < 58; i++){
            arr[i][40] = 8;
        }
    }
    //베어드 조만식
    if ((1 == start) && (12 == dest)){
        arr[84][48] = 8;
        arr[83][48] = 8;
        
        for (int i = 37; i < 49; i++){
            arr[82][i] = 8;
        }
        for (int i = 58; i < 82; i++){
            arr[i][37] = 8;
        }
        arr[58][36] = 8;
    }
    if ((12 == start) && (1 == dest)){
        arr[84][48] = 8;
        arr[83][48] = 8;
        
        for (int i = 37; i < 49; i++){
            arr[82][i] = 8;
        }
        for (int i = 58; i < 82; i++){
            arr[i][37] = 8;
        }
        arr[58][36] = 8;
    }
    
    //베어드 웨스트민스터홀
    if ((1 == start) && (22 == dest)){
        
        arr[84][48] = 8;
        arr[83][48] = 8;
        for (int i = 48; i < 57; i++){
            arr[82][i] = 8;
        }
        for (int i = 46; i < 83; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
    }
    
    if ((22 == start) && (1 == dest)){
        
        arr[84][48] = 8;
        arr[83][48] = 8;
        for (int i = 48; i < 57; i++){
            arr[82][i] = 8;
        }
        for (int i = 46; i < 83; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
    }
    
    //베어드 테니스장
    
    if ((1 == start) && (24 == dest)){
        
        arr[84][48] = 8;
        arr[83][48] = 8;
        
        for (int i = 37; i < 49; i++){
            arr[82][i] = 8;
        }
        
        
        for (int i = 82; i < 116; i++){
            arr[i][37] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        
        for (int i = 115; i < 130; i++){
            arr[i][40] = 8;
        }
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
    }
    
    if ((24 == start) && (1 == dest)){
        
        arr[84][48] = 8;
        arr[83][48] = 8;
        
        for (int i = 37; i < 49; i++){
            arr[82][i] = 8;
        }
        
        
        for (int i = 82; i < 116; i++){
            arr[i][37] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        
        for (int i = 115; i < 130; i++){
            arr[i][40] = 8;
        }
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        
    }
    //베어드 농구장
    if ((1 == start) && (25 == dest)){
        arr[84][48] = 8;
        arr[83][48] = 8;
        for (int i = 48; i < 57; i++){
            arr[82][i] = 8;
        }
        for (int i = 58; i < 83; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 61; i++){
            arr[58][i] = 8;
        }
        for (int i = 0; i < 7; i++){
            arr[58 - i][60 + i] = 8;
        }
        arr[51][66] = 8;
        arr[50][66] = 8;
        arr[49][66] = 8;
        arr[49][67] = 8;
        arr[49][68] = 8;
        arr[49][69] = 8;
        
    }
    if ((25 == start) && (1 == dest)){
        arr[84][48] = 8;
        arr[83][48] = 8;
        for (int i = 48; i < 57; i++){
            arr[82][i] = 8;
        }
        for (int i = 58; i < 83; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 61; i++){
            arr[58][i] = 8;
        }
        for (int i = 0; i < 7; i++){
            arr[58 - i][60 + i] = 8;
        }
        arr[51][66] = 8;
        arr[50][66] = 8;
        arr[49][66] = 8;
        arr[49][67] = 8;
        arr[49][68] = 8;
        arr[49][69] = 8;
        
    }
    
    
    
    //경상관 문화관
    
    if ((2 == start) && (3 == dest)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        
        for (int i = 40; i < 46; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 122; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 41; i < 45; i++){
            arr[122][i] = 8;
        }
        
        
    }
    
    if ((3 == start) && (2 == dest)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        
        for (int i = 40; i < 46; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 122; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 41; i < 45; i++){
            arr[122][i] = 8;
        }
        
        
    }
    
    
    //경상관 안익태
    
    if ((2 == start) && (4 == dest)){
        
        for (int i = 123; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        
        
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 122; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 41; i < 45; i++){
            arr[122][i] = 8;
        }
        
        
    }
    if ((4 == start) && (2 == dest)){
        
        for (int i = 123; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        
        
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 122; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 41; i < 45; i++){
            arr[122][i] = 8;
        }
        
        
    }
    
    //경상관 형남
    if ((2 == dest) && (5 == start)){
        
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 122; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 41; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 97; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
    }
    
    if ((5 == dest) && (2 == start)){
        
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 122; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 41; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 97; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
    }
    //경상관 교육관
    
    if ((2 == start) && (6 == dest)){
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
        }
        for (int i = 8; i < 40; i++){
            arr[115][i] = 8;
        }
        for (int i = 85; i < 115; i++){
            arr[i][8] = 8;
        }
        arr[85][6] = 8;
        arr[85][7] = 8;
        
        
        
    }
    
    if ((6 == start) && (2 == dest)){
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
        }
        for (int i = 8; i < 40; i++){
            arr[115][i] = 8;
        }
        for (int i = 85; i < 115; i++){
            arr[i][8] = 8;
        }
        arr[85][6] = 8;
        arr[85][7] = 8;
        
        
        
    }
    
    //경상관 백마관
    if ((2 == start) && (7 == dest)){
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
        }
        for (int i = 8; i < 40; i++){
            arr[115][i] = 8;
        }
        for (int i = 101; i < 115; i++){
            arr[i][8] = 8;
        }
        arr[101][6] = 8;
        arr[101][7] = 8;
        
        
        
    }
    
    if ((7 == start) && (2 == dest)){
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
        }
        for (int i = 8; i < 40; i++){
            arr[115][i] = 8;
        }
        for (int i = 101; i < 115; i++){
            arr[i][8] = 8;
        }
        arr[101][6] = 8;
        arr[101][7] = 8;
        
        
        
    }
    
    
    //경상관 한경직
    if ((2 == dest) && (8 == start)){
        
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 122; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 41; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 65; i < 135; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
    }
    if ((8 == dest) && (2 == start)){
        
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 122; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 41; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 65; i < 135; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
    }
    
    
    
    //경상관 생활문화관
    if ((9 == dest) && (2 == start)){
        
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        
        for (int i = 53; i < 116; i++){
            arr[i][37] = 8;
        }
    }
    if ((2 == dest) && (9 == start)){
        
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        
        for (int i = 53; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        
        
    }
    //경상관 벤처관
    
    if ((10 == dest) && (2 == start)){
        
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        
        for (int i = 79; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        for (int i = 9; i < 37; i++){
            arr[79][i] = 8;
        }
        arr[78][9] = 8;
        
    }
    
    if ((2 == dest) && (10 == start)){
        
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        
        for (int i = 79; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        for (int i = 9; i < 37; i++){
            arr[79][i] = 8;
        }
        arr[78][9] = 8;
        
    }
    //경상관 진리관
    if ((11 == dest) && (2 == start)){
        
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        
        for (int i = 79; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        for (int i = 26; i < 37; i++){
            arr[79][i] = 8;
        }
        arr[78][26] = 8;
        
    }
    
    if ((2 == dest) && (11 == start)){
        
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        
        for (int i = 79; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        for (int i = 26; i < 37; i++){
            arr[79][i] = 8;
        }
        arr[78][26] = 8;
        
    }
    //경상관 조만식
    
    if ((12 == dest) && (2 == start)){
        
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        
        for (int i = 58; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        arr[58][36] = 8;
        
    }
    
    if ((2 == dest) && (12 == start)){
        
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        
        for (int i = 58; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        arr[58][36] = 8;
        
    }
    //경상관 박물관
    if ((2 == dest) && (13 == start)){
        
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 122; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 41; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 75; i < 135; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[75][i] = 8;
        }
    }
    
    if ((13 == dest) && (2 == start)){
        
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 122; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 41; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 75; i < 135; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[75][i] = 8;
        }
    }
    //경상관 중앙도서관
    
    
    if ((2 == start) && (14 == dest)){
        
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        for (int i = 42; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
    }
    
    if ((14 == start) && (2 == dest)){
        
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        for (int i = 42; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
    }
    //경상관 연구관
    if ((2 == start) && (15 == dest)){
        
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        for (int i = 38; i < 82; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
        
    }
    if ((15 == start) && (2 == dest)){
        
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        for (int i = 38; i < 82; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
        
    }
    
    
    
    //
    
    //경상관 커밍홀
    if ((2 == start) && (16 == dest)){
        
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        for (int i = 26; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
        
    }
    
    if ((16 == start) && (2 == dest)){
        
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        for (int i = 26; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
        
    }
    
    //경상관 브레인홀
    
    if ((2 == start) && (17 == dest)){
        
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        for (int i = 14; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
        
    }
    
    if ((17 == start) && (2 == dest)){
        
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        for (int i = 14; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
        
    }
    //경상관 기숙사
    if ((2 == start) && (18 == dest)){
        
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 6; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
        
    }
    
    if ((18 == start) && (2 == dest)){
        
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        for (int i = 6; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
        
    }
    
    
    
    
    //경상관 전산관
    
    if ((2 == start) && (19 == dest)){
        
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        for (int i = 27; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 60; i++){
            arr[27][i] = 8;
        }
    }
    
    if ((19 == start) && (2 == dest)){
        
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        for (int i = 27; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 60; i++){
            arr[27][i] = 8;
        }
        
        
        
        
        
        
    }
    
    //경상관 미래관
    if ((2 == dest) && (20 == start)){
        
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 122; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 41; i < 45; i++){
            arr[122][i] = 8;
        }
        
        
        for (int i = 49; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
    }
    if ((20 == dest) && (2 == start)){
        
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 122; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 41; i < 45; i++){
            arr[122][i] = 8;
        }
        
        
        for (int i = 49; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
    }
    //경상관 정보관
    
    if ((2 == start) && (21 == dest)){
        
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        for (int i = 44; i < 82; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
    }
    
    if ((21 == start) && (2 == dest)){
        
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        for (int i = 44; i < 82; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
    }
    
    
    
    //경상관 웨스트민스터홀
    if ((2 == start) && (22 == dest)){
        
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        for (int i = 46; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
    }
    if ((22 == start) && (2 == dest)){
        
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        for (int i = 46; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
    }
    
    //경상관 대운동장
    if ((2 == start) && (23 == dest)){
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
        }
        for (int i = 14; i < 40; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        
    }
    
    if ((23 == start) && (2 == dest)){
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
        }
        for (int i = 14; i < 40; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        
    }
    //경상관 테니스장
    
    if ((2 == start) && (24 == dest)){
        
        for (int i = 29; i < 45; i++){
            arr[130][i] = 8;
        }
    }
    if ((24 == start) && (2 == dest)){
        
        for (int i = 29; i < 45; i++){
            arr[130][i] = 8;
        }
    }
    //경상관 농구장
    if ((2 == start) && (25 == dest)){
        
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        for (int i = 43; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[43][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
    }
    
    if ((25 == start) && (2 == dest)){
        
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        for (int i = 43; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[43][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
    }
    
    //경상관 창의관
    
    if ((2 == start) && (26 == dest)){
        
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        for (int i = 44; i < 82; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
    }
    if ((26 == start) && (2 == dest)){
        
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        for (int i = 44; i < 82; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
    }
    
    
    //경상관 학생회관
    
    if ((27 == dest) && (2 == start)){
        
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        
        for (int i = 88; i < 116; i++){
            arr[i][37] = 8;
        }
        arr[87][37] = 8;
        arr[87][36] = 8;
        
    }
    
    if ((2 == dest) && (27 == start)){
        
        for (int i = 40; i < 45; i++){
            arr[122][i] = 8;
        }
        
        for (int i = 115; i < 122; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        
        for (int i = 88; i < 116; i++){
            arr[i][37] = 8;
        }
        arr[87][37] = 8;
        arr[87][36] = 8;
        
    }
    
    
    
    
    //문화관 안익태
    if ((3 == dest) && (4 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 123; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
    }
    
    if ((4 == dest) && (3 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 123; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
    }
    
    //문화관 형남
    if ((5 == dest) && (3 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 97; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
    }
    if ((3 == dest) && (5 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 97; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
    }
    
    //문화관 교육관
    if ((3 == start) && (6 == dest)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 40; i < 47; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 115; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 8; i < 40; i++){
            arr[115][i] = 8;
        }
        for (int i = 85; i < 115; i++){
            arr[i][8] = 8;
        }
        arr[85][6] = 8;
        arr[85][7] = 8;
        
    }
    
    if ((6 == start) && (3 == dest)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 40; i < 47; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 115; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 8; i < 40; i++){
            arr[115][i] = 8;
        }
        for (int i = 85; i < 115; i++){
            arr[i][8] = 8;
        }
        arr[85][6] = 8;
        arr[85][7] = 8;
        
    }
    //문화관 백마관
    
    if ((3 == start) && (7 == dest)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 40; i < 47; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 115; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 8; i < 40; i++){
            arr[115][i] = 8;
        }
        for (int i = 101; i < 115; i++){
            arr[i][8] = 8;
        }
        arr[101][6] = 8;
        arr[101][7] = 8;
        
        
    }
    
    if ((7 == start) && (3 == dest)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 40; i < 47; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 115; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 8; i < 40; i++){
            arr[115][i] = 8;
        }
        for (int i = 101; i < 115; i++){
            arr[i][8] = 8;
        }
        arr[101][6] = 8;
        arr[101][7] = 8;
        
        
    }
    //문화관 한경직
    if ((8 == dest) && (3 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 65; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
    }
    if ((3 == dest) && (8 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 65; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
    }
    
    
    
    //문화관 생활문화관
    if ((3 == dest) && (9 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 58; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 40; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 53; i < 58; i++){
            arr[i][40] = 8;
        }
    }
    if ((9 == dest) && (3 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 58; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 40; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 53; i < 58; i++){
            arr[i][40] = 8;
        }
    }
    //문화관 벤처관
    if ((10 == dest) && (3 == start)){
        
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 40; i < 46; i++){
            
            arr[134][i] = 8;
        }
        for (int i = 115; i < 134; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        
        for (int i = 79; i < 116; i++){
            arr[i][37] = 8;
        }
        
        for (int i = 9; i < 37; i++){
            arr[79][i] = 8;
        }
        arr[78][9] = 8;
        
        
        
    }
    
    if ((3 == dest) && (10 == start)){
        
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 40; i < 46; i++){
            
            arr[134][i] = 8;
        }
        for (int i = 115; i < 134; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        
        for (int i = 79; i < 116; i++){
            arr[i][37] = 8;
        }
        
        for (int i = 9; i < 37; i++){
            arr[79][i] = 8;
        }
        arr[78][9] = 8;
        
        
        
    }
    //문화관 진리관
    
    if ((11 == dest) && (3 == start)){
        
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 40; i < 46; i++){
            
            arr[134][i] = 8;
        }
        for (int i = 115; i < 134; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        
        for (int i = 75; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        arr[75][36] = 8;
        
    }
    
    if ((3 == dest) && (11 == start)){
        
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 40; i < 46; i++){
            
            arr[134][i] = 8;
        }
        for (int i = 115; i < 134; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        
        for (int i = 75; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        arr[75][36] = 8;
        
    }
    //문화관 조만식
    if ((12 == dest) && (3 == start)){
        
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 40; i < 46; i++){
            
            arr[134][i] = 8;
        }
        for (int i = 115; i < 134; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        
        for (int i = 58; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        arr[58][36] = 8;
        
    }
    if ((3 == dest) && (12 == start)){
        
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 40; i < 46; i++){
            
            arr[134][i] = 8;
        }
        for (int i = 115; i < 134; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        
        for (int i = 58; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        arr[58][36] = 8;
        
    }
    //문화관 박물관
    if ((13 == dest) && (3 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 75; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[75][i] = 8;
        }
    }
    
    
    if ((3 == dest) && (13 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 75; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[75][i] = 8;
        }
    }
    
    //문화관 중앙도서관
    if ((3 == dest) && (14 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 42; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
    }
    
    if ((14 == dest) && (3 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 42; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
    }
    //문화관 연구관
    if ((3 == dest) && (15 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 38; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    
    if ((15 == dest) && (3 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 38; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    //문화관 커밍홀
    if ((3 == dest) && (16 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 26; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    
    if ((16 == dest) && (3 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 26; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    //문화관 브레인홀
    if ((3 == dest) && (17 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 14; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    
    if ((17 == dest) && (3 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 14; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    //문화관 기숙사
    if ((18 == dest) && (3 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 6; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
    }
    
    if ((3 == dest) && (18 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 6; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
    }
    //문화관 전산관
    if ((19 == dest) && (3 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 27; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
    }
    
    if ((3 == dest) && (19 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 27; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
    }
    //문화관 미래관
    
    if ((20 == dest) && (3 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 49; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
    }
    
    if ((3 == dest) && (20 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 49; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
    }
    
    
    //문화관 정보관
    if ((21 == dest) && (3 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 43; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 78; i++){
            arr[43][i] = 8;
        }
        for (int i = 15; i < 43; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
        
    }
    
    if ((3 == dest) && (21 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 43; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 78; i++){
            arr[43][i] = 8;
        }
        for (int i = 15; i < 43; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
        
    }
    //문화관 웨스트민스터홀
    if ((3 == dest) && (22 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 46; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
    }
    if ((22 == dest) && (3 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 46; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
    }
    //문화관 대운동장
    if ((3 == start) && (23 == dest)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 40; i < 47; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 115; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 14; i < 40; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        
    }
    
    if ((23 == start) && (3 == dest)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 40; i < 47; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 115; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 14; i < 40; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        
    }
    //문화관 테니스장
    if ((3 == start) && (24 == dest)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        
        for (int i = 40; i < 47; i++){
            arr[134][i] = 8;
        }
        for (int i = 130; i < 135; i++){
            arr[i][40] = 8;
        }
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        
    }
    
    if ((24 == start) && (3 == dest)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        
        for (int i = 40; i < 47; i++){
            arr[134][i] = 8;
        }
        for (int i = 130; i < 135; i++){
            arr[i][40] = 8;
        }
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        
    }
    
    
    
    
    
    //문화관 농구장
    if ((3 == dest) && (25 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 43; i < 134; i++){
            arr[i][56] = 8;
        }
        
        
        for (int i = 57; i < 72; i++){
            
            arr[43][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
        
    }
    if ((25 == dest) && (3 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 43; i < 134; i++){
            arr[i][56] = 8;
        }
        
        
        for (int i = 57; i < 72; i++){
            
            arr[43][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
        
    }
    //문화관 창의관
    if ((3 == dest) && (26 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 43; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 78; i++){
            arr[43][i] = 8;
        }
        for (int i = 25; i < 43; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
        
    }
    if ((26 == dest) && (3 == start)){
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 46; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 43; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 78; i++){
            arr[43][i] = 8;
        }
        for (int i = 25; i < 43; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
        
    }
    //문화관 학생회관
    if ((27 == dest) && (3 == start)){
        
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 40; i < 46; i++){
            
            arr[134][i] = 8;
        }
        for (int i = 115; i < 134; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        
        for (int i = 87; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        arr[87][36] = 8;
        
    }
    
    if ((3 == dest) && (27 == start)){
        
        for (int i = 134; i < 138; i++){
            arr[i][46] = 8;
        }
        for (int i = 40; i < 46; i++){
            
            arr[134][i] = 8;
        }
        for (int i = 115; i < 134; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        
        for (int i = 87; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        arr[87][36] = 8;
        
    }
    
    
    
    
    
    
    
    
    //안익태 형남
    if ((4 == start) && (5 == dest)){
        
        arr[114][69] = 8;
        arr[113][69] = 8;
        arr[112][69] = 8;
        arr[111][69] = 8;
        arr[110][69] = 8;
        
    }
    
    if ((5 == start) && (4 == dest)){
        
        arr[114][69] = 8;
        arr[113][69] = 8;
        arr[112][69] = 8;
        arr[111][69] = 8;
        arr[110][69] = 8;
        
    }
    //안익태 교육관
    if ((4 == start) && (6 == dest)){
        
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 123; i < 134; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 115; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 8; i < 40; i++){
            arr[115][i] = 8;
        }
        for (int i = 85; i < 115; i++){
            arr[i][8] = 8;
        }
        arr[85][6] = 8;
        arr[85][7] = 8;
        
        
    }
    if ((6 == start) && (4 == dest)){
        
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 123; i < 134; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 115; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 8; i < 40; i++){
            arr[115][i] = 8;
        }
        for (int i = 85; i < 115; i++){
            arr[i][8] = 8;
        }
        arr[85][6] = 8;
        arr[85][7] = 8;
        
        
    }
    //안익태 백마관
    if ((4 == start) && (7 == dest)){
        
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 123; i < 134; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 115; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 8; i < 40; i++){
            arr[115][i] = 8;
        }
        for (int i = 101; i < 115; i++){
            arr[i][8] = 8;
        }
        arr[101][6] = 8;
        arr[101][7] = 8;
        
        
    }
    if ((7 == start) && (4 == dest)){
        
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 123; i < 134; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 115; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 8; i < 40; i++){
            arr[115][i] = 8;
        }
        for (int i = 101; i < 115; i++){
            arr[i][8] = 8;
        }
        arr[101][6] = 8;
        arr[101][7] = 8;
        
        
    }
    //안익태 한경직
    if ((8 == dest) && (4 == start)){
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 65; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        
        
    }
    
    if ((4 == dest) && (8 == start)){
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 65; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        
        
    }
    //안익태 생활문화관
    if ((4 == start) && (9 == dest)){
        
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 58; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 40; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 53; i < 58; i++){
            arr[i][40] = 8;
        }
    }
    if ((9 == start) && (4 == dest)){
        
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 58; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 40; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 53; i < 58; i++){
            arr[i][40] = 8;
        }
    }
    //안익태 벤처관
    if ((10 == dest) && (4 == start)){
        
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 82; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 56; i++){
            arr[82][i] = 8;
        }
        arr[81][37] = 8;
        arr[80][37] = 8;
        arr[79][37] = 8;
        for (int i = 9; i < 37; i++){
            arr[79][i] = 8;
        }
        arr[78][9] = 8;
        
    }
    
    if ((4 == dest) && (10 == start)){
        
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 82; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 56; i++){
            arr[82][i] = 8;
        }
        arr[81][37] = 8;
        arr[80][37] = 8;
        arr[79][37] = 8;
        for (int i = 9; i < 37; i++){
            arr[79][i] = 8;
        }
        arr[78][9] = 8;
        
    }
    //안익태 진리관
    if ((11 == dest) && (4 == start)){
        
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 82; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 56; i++){
            arr[82][i] = 8;
        }
        arr[81][37] = 8;
        arr[80][37] = 8;
        arr[79][37] = 8;
        arr[78][37] = 8;
        arr[77][37] = 8;
        arr[76][37] = 8;
        arr[75][37] = 8;
        arr[75][36] = 8;
        
    }
    if ((4 == dest) && (11 == start)){
        
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 82; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 56; i++){
            arr[82][i] = 8;
        }
        arr[81][37] = 8;
        arr[80][37] = 8;
        arr[79][37] = 8;
        arr[78][37] = 8;
        arr[77][37] = 8;
        arr[76][37] = 8;
        arr[75][37] = 8;
        arr[75][36] = 8;
        
    }
    //안익태 조만식
    if ((4 == start) && (12 == dest)){
        
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 58; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 36; i < 57; i++){
            arr[58][i] = 8;
        }
    }
    if ((12 == start) && (4 == dest)){
        
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 58; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 36; i < 57; i++){
            arr[58][i] = 8;
        }
    }
    //안익태 박물관
    if ((13 == dest) && (4 == start)){
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 75; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[75][i] = 8;
        }
        
        
    }
    if ((4 == dest) && (13 == start)){
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 75; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[75][i] = 8;
        }
        
        
    }
    //안익태 중앙도서관
    if ((4 == start) && (14 == dest)){
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        
        for (int i = 42; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
    }
    if ((14 == start) && (4 == dest)){
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        
        for (int i = 42; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
    }
    
    //안익태 연구관
    if ((4 == start) && (15 == dest)){
        
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 38; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    if ((15 == start) && (4 == dest)){
        
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 38; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    
    //안익태 커밍홀
    if ((4 == start) && (16 == dest)){
        
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 26; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    
    if ((16 == start) && (4 == dest)){
        
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 26; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    
    //안익태 브레인홀
    if ((4 == start) && (17 == dest)){
        
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 14; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    if ((17 == start) && (4 == dest)){
        
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 14; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    //안익태 기숙사
    if ((4 == start) && (18 == dest)){
        
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        
        //
        
        for (int i = 6; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
        
    }
    if ((18 == start) && (4 == dest)){
        
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        
        //
        
        for (int i = 6; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
        
    }
    
    
    
    
    //안익태 전산관
    if ((19 == dest) && (4 == start)){
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 27; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
        
        
    }
    
    if ((4 == dest) && (19 == start)){
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 27; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
        
        
    }
    //안익태 미래관
    if ((20 == dest) && (4 == start)){
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 49; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
        
        
    }
    
    if ((4 == dest) && (20 == start)){
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 49; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
        
        
    }
    //안익태 정보관
    
    
    if ((4 == start) && (21 == dest)){
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        
        
        for (int i = 44; i < 124; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
    }
    if ((21 == start) && (4 == dest)){
        
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        
        
        for (int i = 44; i < 124; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
    }
    //안익태 웨스트민스터홀
    if ((4 == start) && (22 == dest)){
        
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 46; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
    }
    if ((22 == start) && (4 == dest)){
        
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 46; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
    }
    //안익태 대운동장
    if ((4 == start) && (23 == dest)){
        
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 123; i < 134; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 115; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 14; i < 40; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        
    }
    if ((23 == start) && (4 == dest)){
        
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 123; i < 134; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 115; i < 134; i++){
            arr[i][40] = 8;
        }
        for (int i = 14; i < 40; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        
    }
    
    //안익태 테니스장
    
    if ((4 == start) && (24 == dest)){
        
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        for (int i = 130; i < 135; i++){
            arr[i][40] = 8;
        }
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 123; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        
        
    }
    
    
    if ((24 == start) && (4 == dest)){
        
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        for (int i = 130; i < 135; i++){
            arr[i][40] = 8;
        }
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        //
        
        for (int i = 123; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        
        
    }
    //안익태 농구장
    if ((4 == start) && (25 == dest)){
        
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 43; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[43][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
    }
    if ((25 == start) && (4 == dest)){
        
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 43; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[43][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
    }
    
    //안익태 창의관
    if ((4 == start) && (26 == dest)){
        
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        
        
        for (int i = 44; i < 124; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
    }
    if ((26 == start) && (4 == dest)){
        
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        
        
        for (int i = 44; i < 124; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
    }
    //안익태 학생회관
    if ((27 == dest) && (4 == start)){
        
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 82; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 56; i++){
            arr[82][i] = 8;
        }
        arr[83][37] = 8;
        arr[84][37] = 8;
        arr[85][37] = 8;
        arr[86][37] = 8;
        arr[87][37] = 8;
        arr[87][36] = 8;
        
    }
    if ((4 == dest) && (27 == start)){
        
        for (int i = 57; i < 68; i++){
            arr[123][i] = 8;
        }
        for (int i = 82; i < 124; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 56; i++){
            arr[82][i] = 8;
        }
        arr[83][37] = 8;
        arr[84][37] = 8;
        arr[85][37] = 8;
        arr[86][37] = 8;
        arr[87][37] = 8;
        arr[87][36] = 8;
        
    }
    
    
    
    //
    
    //형남 교육관
    if ((6 == dest) && (5 == start)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        for (int i = 82; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 56; i++){
            arr[82][i] = 8;
        }
        arr[81][37] = 8;
        arr[80][37] = 8;
        arr[79][37] = 8;
        
        for (int i = 9; i < 37; i++){
            arr[79][i] = 8;
        }
        for (int i = 80; i < 86; i++){
            arr[i][9] = 8;
        }
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        
    }
    
    if ((5 == dest) && (6 == start)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        for (int i = 82; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 56; i++){
            arr[82][i] = 8;
        }
        arr[81][37] = 8;
        arr[80][37] = 8;
        arr[79][37] = 8;
        
        for (int i = 9; i < 37; i++){
            arr[79][i] = 8;
        }
        for (int i = 80; i < 86; i++){
            arr[i][9] = 8;
        }
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        
    }
    
    //형남 백마관
    if ((7 == dest) && (5 == start)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        for (int i = 82; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 56; i++){
            arr[82][i] = 8;
        }
        arr[81][37] = 8;
        arr[80][37] = 8;
        arr[79][37] = 8;
        
        for (int i = 9; i < 37; i++){
            arr[79][i] = 8;
        }
        for (int i = 80; i < 102; i++){
            arr[i][9] = 8;
        }
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        
    }
    if ((5 == dest) && (7 == start)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        for (int i = 82; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 56; i++){
            arr[82][i] = 8;
        }
        arr[81][37] = 8;
        arr[80][37] = 8;
        arr[79][37] = 8;
        
        for (int i = 9; i < 37; i++){
            arr[79][i] = 8;
        }
        for (int i = 80; i < 102; i++){
            arr[i][9] = 8;
        }
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        
    }
    //형남 한경직
    
    
    if ((8 == dest) && (5 == start)){
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        
        for (int i = 65; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        
        
    }
    if ((5 == dest) && (8 == start)){
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        
        for (int i = 65; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        
        
    }
    
    
    //형남 생활문화관
    if ((5 == start) && (9 == dest)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        for (int i = 58; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 40; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 53; i < 58; i++){
            arr[i][40] = 8;
        }
    }
    if ((9 == start) && (5 == dest)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        for (int i = 58; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 40; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 53; i < 58; i++){
            arr[i][40] = 8;
        }
    }
    //형남 벤처관
    if ((10 == dest) && (5 == start)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        for (int i = 82; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 56; i++){
            arr[82][i] = 8;
        }
        arr[81][37] = 8;
        arr[80][37] = 8;
        arr[79][37] = 8;
        for (int i = 9; i < 37; i++){
            arr[79][i] = 8;
        }
        arr[78][9] = 8;
        
    }
    
    if ((5 == dest) && (10 == start)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        for (int i = 82; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 56; i++){
            arr[82][i] = 8;
        }
        arr[81][37] = 8;
        arr[80][37] = 8;
        arr[79][37] = 8;
        for (int i = 9; i < 37; i++){
            arr[79][i] = 8;
        }
        arr[78][9] = 8;
        
    }
    //형남 진리관
    if ((11 == dest) && (5 == start)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        for (int i = 82; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 56; i++){
            arr[82][i] = 8;
        }
        arr[81][37] = 8;
        arr[80][37] = 8;
        arr[79][37] = 8;
        arr[78][37] = 8;
        arr[77][37] = 8;
        arr[76][37] = 8;
        arr[75][37] = 8;
        arr[75][36] = 8;
        
    }
    if ((5 == dest) && (11 == start)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        for (int i = 82; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 56; i++){
            arr[82][i] = 8;
        }
        arr[81][37] = 8;
        arr[80][37] = 8;
        arr[79][37] = 8;
        arr[78][37] = 8;
        arr[77][37] = 8;
        arr[76][37] = 8;
        arr[75][37] = 8;
        arr[75][36] = 8;
        
    }
    //형남 조만식
    if ((5 == start) && (12 == dest)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        for (int i = 58; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 36; i < 57; i++){
            arr[58][i] = 8;
        }
    }
    if ((12 == start) && (5 == dest)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        for (int i = 58; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 36; i < 57; i++){
            arr[58][i] = 8;
        }
    }
    //형남 박물관
    if ((13 == start) && (5 == dest)){
        arr[79][69] = 8;
        arr[80][69] = 8;
        arr[81][69] = 8;
        arr[82][69] = 8;
        arr[83][69] = 8;
        arr[84][69] = 8;
        
    }
    if ((5 == start) && (13 == dest)){
        arr[79][69] = 8;
        arr[80][69] = 8;
        arr[81][69] = 8;
        arr[82][69] = 8;
        arr[83][69] = 8;
        arr[84][69] = 8;
        
    }
    //형남 중앙도서관
    if ((5 == start) && (14 == dest)){
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        
        for (int i = 42; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
    }
    if ((14 == start) && (5 == dest)){
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        
        for (int i = 42; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
    }
    //형남 연구관
    if ((5 == start) && (15 == dest)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        for (int i = 38; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    if ((15 == start) && (5 == dest)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        for (int i = 38; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    //형남 커밍홀
    if ((5 == start) && (16 == dest)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        for (int i = 26; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    if ((16 == start) && (5 == dest)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        for (int i = 26; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    
    //형남 브레인홀
    if ((5 == start) && (17 == dest)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        for (int i = 14; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    if ((17 == start) && (5 == dest)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        for (int i = 14; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    //형남 기숙사
    if ((5 == start) && (18 == dest)){
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        
        
        
        //
        
        for (int i = 6; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
        
    }
    
    if ((18 == start) && (5 == dest)){
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        
        
        
        //
        
        for (int i = 6; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
        
    }
    //형남 전산관
    if ((19 == dest) && (5 == start)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        
        
        
        for (int i = 27; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
        
        
    }
    
    if ((5 == dest) && (19 == start)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        
        
        for (int i = 27; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
        
        
    }
    //형남 미래관
    if ((20 == dest) && (5 == start)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        
        //
        
        for (int i = 49; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
        
        
    }
    
    if ((5 == dest) && (20 == start)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        
        //
        
        for (int i = 49; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
        
        
    }
    //형남 정보관
    if ((21 == start) && (5 == dest)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        
        
        for (int i = 44; i < 98; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
    }
    if ((5 == start) && (21 == dest)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        
        
        for (int i = 44; i < 98; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
    }
    //형남 웨스트민스터홀
    if ((5 == start) && (22 == dest)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        for (int i = 46; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
    }
    if ((22 == start) && (5 == dest)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        for (int i = 46; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
    }
    //형남 대운동장
    if ((23 == dest) && (5 == start)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        for (int i = 82; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 56; i++){
            arr[82][i] = 8;
        }
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        
        
    }
    
    if ((5 == dest) && (23 == start)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        for (int i = 82; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 56; i++){
            arr[82][i] = 8;
        }
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        
        
    }
    //형남 테니스장
    if ((5 == start) && (24 == dest)){
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        for (int i = 130; i < 135; i++){
            arr[i][40] = 8;
        }
        
        
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 97; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
    }
    
    if ((24 == start) && (5 == dest)){
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        for (int i = 130; i < 135; i++){
            arr[i][40] = 8;
        }
        
        
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        
        for (int i = 97; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
    }
    
    
    //형남 농구장
    if ((5 == start) && (25 == dest)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        for (int i = 43; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[43][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
    }
    if ((25 == start) && (5 == dest)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        for (int i = 43; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[43][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
    }
    //형남 창의관
    if ((5 == start) && (26 == dest)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        
        
        for (int i = 44; i < 98; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
    }
    
    if ((26 == start) && (5 == dest)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        
        
        for (int i = 44; i < 98; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
    }
    //형남 학생회관
    if ((27 == dest) && (5 == start)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        for (int i = 82; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 56; i++){
            arr[82][i] = 8;
        }
        arr[83][37] = 8;
        arr[84][37] = 8;
        arr[85][37] = 8;
        arr[86][37] = 8;
        arr[87][37] = 8;
        arr[87][36] = 8;
        
        
    }
    
    if ((5 == dest) && (27 == start)){
        
        for (int i = 57; i < 63; i++){
            arr[97][i] = 8;
        }
        for (int i = 82; i < 98; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 56; i++){
            arr[82][i] = 8;
        }
        arr[83][37] = 8;
        arr[84][37] = 8;
        arr[85][37] = 8;
        arr[86][37] = 8;
        arr[87][37] = 8;
        arr[87][36] = 8;
        
        
    }
    
    
    //교육관 백마관
    if ((6 == start) && (7 == dest)){
        arr[91][4] = 8;
    }
    if ((7 == start) && (6 == dest)){
        arr[91][4] = 8;
    }
    
    
    //교육관 한경직
    if ((6 == start) && (8 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        arr[80][37] = 8;
        arr[81][37] = 8;
        for (int i = 37; i < 57; i++){
            arr[81][i] = 8;
        }
        for (int i = 65; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
    }
    
    
    if ((8 == start) && (6 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        arr[80][37] = 8;
        arr[81][37] = 8;
        for (int i = 37; i < 57; i++){
            arr[81][i] = 8;
        }
        for (int i = 65; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
    }
    //교육관 생활문화관
    if ((6 == start) && (9 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 53; i < 80; i++){
            arr[i][37] = 8;
        }
        
    }
    
    if ((9 == start) && (6 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 53; i < 80; i++){
            arr[i][37] = 8;
        }
        
    }
    //교육관 벤처관
    if ((6 == start) && (10 == dest)){
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 78; i < 85; i++){
            arr[i][9] = 8;
        }
        
    }
    
    if ((10 == start) && (6 == dest)){
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 78; i < 85; i++){
            arr[i][9] = 8;
        }
    }
    //교육관 진리관
    if ((6 == start) && (11 == dest)){
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 19; i++){
            arr[79][i] = 8;
        }
        
        arr[78][18] = 8;
        
    }
    if ((11 == start) && (6 == dest)){
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 19; i++){
            arr[79][i] = 8;
        }
        
        arr[78][18] = 8;
        
    }
    //교육관 조만식
    
    if ((6 == start) && (12 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        arr[58][36] = 8;
    }
    if ((12 == start) && (6 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        arr[58][36] = 8;
    }
    
    
    //교육관 박물관
    if ((6 == start) && (13 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        arr[80][37] = 8;
        arr[81][37] = 8;
        for (int i = 37; i < 57; i++){
            arr[81][i] = 8;
        }
        for (int i = 75; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[75][i] = 8;
        }
    }
    if ((13 == start) && (6 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        arr[80][37] = 8;
        arr[81][37] = 8;
        for (int i = 37; i < 57; i++){
            arr[81][i] = 8;
        }
        for (int i = 75; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[75][i] = 8;
        }
    }
    
    //교육관 중앙도서관
    if ((6 == start) && (14 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 42; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
    }
    
    if ((14 == start) && (6 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 42; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
    }
    //교육관 연구관
    if ((6 == start) && (15 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 38; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    
    if ((15 == start) && (6 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 38; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    //교육관 커밍홀
    if ((6 == start) && (16 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 26; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    
    if ((16 == start) && (6 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 26; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    //교육관 브레인홀
    if ((6 == start) && (17 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 14; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    if ((17 == start) && (6 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 14; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    //교육관 기숙사
    if ((6 == start) && (18 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 6; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
    }
    if ((18 == start) && (6 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 6; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
    }
    //교육관 전산관
    if ((6 == start) && (19 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 27; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
        
    }
    if ((19 == start) && (6 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 27; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
        
    }
    //교육관 미래관
    if ((6 == start) && (20 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 49; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
    }
    
    if ((20 == start) && (6 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 49; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
    }
    //교육관 정보관
    if ((6 == start) && (21 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
    }
    
    if ((21 == start) && (6 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
    }
    //교육관 웨스트민스터홀
    if ((6 == start) && (22 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 46; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
        
    }
    if ((22 == start) && (6 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 46; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
        
    }
    //교육관 대운동장
    if ((23 == start) && (6 == dest)){
        arr[114][14] = 8;
        
        for (int i = 8; i < 15; i++){
            arr[115][i] = 8;
        }
        for (int i = 85; i < 115; i++){
            arr[i][8] = 8;
        }
        arr[85][6] = 8;
        arr[85][7] = 8;
        
        
        
    }
    
    if ((6 == start) && (23 == dest)){
        arr[114][14] = 8;
        
        for (int i = 8; i < 15; i++){
            arr[115][i] = 8;
        }
        for (int i = 85; i < 115; i++){
            arr[i][8] = 8;
        }
        arr[85][6] = 8;
        arr[85][7] = 8;
        
        
        
    }
    //교육관 테니스장
    if ((6 == start) && (24 == dest)){
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
        }
        for (int i = 8; i < 40; i++){
            arr[115][i] = 8;
        }
        for (int i = 85; i < 115; i++){
            arr[i][8] = 8;
        }
        arr[85][6] = 8;
        arr[85][7] = 8;
        
    }
    
    if ((24 == start) && (6 == dest)){
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
        }
        for (int i = 8; i < 40; i++){
            arr[115][i] = 8;
        }
        for (int i = 85; i < 115; i++){
            arr[i][8] = 8;
        }
        arr[85][6] = 8;
        arr[85][7] = 8;
        
    }
    
    
    //교육관 농구장
    if ((6 == start) && (25 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 43; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[43][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
    }
    
    if ((25 == start) && (6 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 43; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[43][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
    }
    //교육관 창의관
    if ((6 == start) && (26 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
    }
    
    if ((26 == start) && (6 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
    }
    //교육관 학생회관
    
    if ((6 == start) && (27 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 80; i < 86; i++){
            
            arr[i][37] = 8;
        }
        arr[85][36] = 8;
    }
    if ((27 == start) && (6 == dest)){
        
        arr[85][6] = 8;
        arr[85][7] = 8;
        arr[85][8] = 8;
        arr[85][9] = 8;
        for (int i = 79; i < 85; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 80; i < 86; i++){
            
            arr[i][37] = 8;
        }
        arr[85][36] = 8;
    }
    
    //백마관 한경직
    if ((7 == start) && (8 == dest)){
        
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        arr[80][37] = 8;
        arr[81][37] = 8;
        for (int i = 37; i < 57; i++){
            arr[81][i] = 8;
        }
        for (int i = 65; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
    }
    
    if ((8 == start) && (7 == dest)){
        
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        arr[80][37] = 8;
        arr[81][37] = 8;
        for (int i = 37; i < 57; i++){
            arr[81][i] = 8;
        }
        for (int i = 65; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
    }
    //백마관 생활문화관
    if ((7 == start) && (9 == dest)){
        
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 53; i < 80; i++){
            arr[i][37] = 8;
        }
        
    }
    if ((9 == start) && (7 == dest)){
        
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 53; i < 80; i++){
            arr[i][37] = 8;
        }
        
    }
    //백마관 벤처관
    if ((7 == start) && (10 == dest)){
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 78; i < 102; i++){
            arr[i][9] = 8;
        }
        
        
    }
    if ((10 == start) && (7 == dest)){
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 78; i < 102; i++){
            arr[i][9] = 8;
        }
        
        
    }
    
    //백마관 진리관
    if ((7 == start) && (11 == dest)){
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 19; i++){
            arr[79][i] = 8;
        }
        
        arr[78][18] = 8;
        
    }
    if ((11 == start) && (7 == dest)){
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 19; i++){
            arr[79][i] = 8;
        }
        
        arr[78][18] = 8;
        
    }
    //백마관 조만식
    if ((7 == start) && (12 == dest)){
        
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        arr[58][36] = 8;
    }
    if ((12 == start) && (7 == dest)){
        
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        arr[58][36] = 8;
    }
    //백마관 박물관
    if ((7 == start) && (13 == dest)){
        
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        arr[80][37] = 8;
        arr[81][37] = 8;
        for (int i = 37; i < 57; i++){
            arr[81][i] = 8;
        }
        for (int i = 75; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[75][i] = 8;
        }
    }
    if ((13 == start) && (7 == dest)){
        
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        arr[80][37] = 8;
        arr[81][37] = 8;
        for (int i = 37; i < 57; i++){
            arr[81][i] = 8;
        }
        for (int i = 75; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[75][i] = 8;
        }
    }
    //백마관 중앙도서관
    if ((7 == start) && (14 == dest)){
        
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 42; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
    }
    if ((14 == start) && (7 == dest)){
        
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 42; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
    }
    //백마관 연구관
    
    if ((7 == start) && (15 == dest)){
        
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 38; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    
    if ((15 == start) && (7 == dest)){
        
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 38; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    //백마관 커밍홀
    if ((7 == start) && (16 == dest)){
        
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 26; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    
    if ((16 == start) && (7 == dest)){
        
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 26; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    
    //백마관 브레인홀
    if ((7 == start) && (17 == dest)){
        
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 14; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    
    if ((17 == start) && (7 == dest)){
        
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 14; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    //백마관 기숙사
    if ((7 == start) && (18 == dest)){
        
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 6; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
    }
    if ((18 == start) && (7 == dest)){
        
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 6; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
    }
    //백마관 전산관
    if ((7 == start) && (19 == dest)){
        
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 27; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
        
    }
    if ((19 == start) && (7 == dest)){
        
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 27; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
        
    }
    //백마관 미래관
    if ((7 == start) && (20 == dest)){
        
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 49; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
    }
    if ((20 == start) && (7 == dest)){
        
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 49; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
    }
    
    //백마관 정보관
    if ((7 == start) && (21 == dest)){
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
    }
    if ((21 == start) && (7 == dest)){
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
    }
    
    //백마관 웨스트민스터홀
    if ((7 == start) && (22 == dest)){
        
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 46; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
        
    }
    if ((22 == start) && (7 == dest)){
        
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 46; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
        
    }
    //백마관 대운동장
    if ((23 == start) && (7 == dest)){
        arr[114][14] = 8;
        
        for (int i = 8; i < 15; i++){
            arr[115][i] = 8;
        }
        for (int i = 101; i < 115; i++){
            arr[i][8] = 8;
        }
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        
        
        
        
    }
    if ((7 == start) && (23 == dest)){
        arr[114][14] = 8;
        
        for (int i = 8; i < 15; i++){
            arr[115][i] = 8;
        }
        for (int i = 101; i < 115; i++){
            arr[i][8] = 8;
        }
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        
        
        
        
    }
    //백마관 테니스장
    if ((7 == start) && (24 == dest)){
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
        }
        for (int i = 8; i < 40; i++){
            arr[115][i] = 8;
        }
        for (int i = 101; i < 115; i++){
            arr[i][8] = 8;
        }
        arr[101][6] = 8;
        arr[101][7] = 8;
        
    }
    
    if ((24 == start) && (7 == dest)){
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
        }
        for (int i = 8; i < 40; i++){
            arr[115][i] = 8;
        }
        for (int i = 101; i < 115; i++){
            arr[i][8] = 8;
        }
        arr[101][6] = 8;
        arr[101][7] = 8;
        
    }
    
    
    //백마관 농구장
    if ((7 == start) && (25 == dest)){
        
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 43; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[43][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
    }
    if ((25 == start) && (7 == dest)){
        
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 43; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[43][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
    }
    //백마관 창의관
    if ((7 == start) && (26 == dest)){
        
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
    }
    if ((26 == start) && (7 == dest)){
        
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
    }
    //백마관 학생회관
    
    if ((7 == start) && (27 == dest)){
        
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 80; i < 86; i++){
            
            arr[i][37] = 8;
        }
        arr[85][36] = 8;
    }
    
    if ((27 == start) && (7 == dest)){
        
        arr[101][6] = 8;
        arr[101][7] = 8;
        arr[101][8] = 8;
        for (int i = 79; i < 102; i++){
            arr[i][9] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 80; i < 86; i++){
            
            arr[i][37] = 8;
        }
        arr[85][36] = 8;
    }
    
    
    
    
    
    
    //한경직 생활문화관
    if ((9 == start) && (8 == dest)){
        
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 58; i < 66; i++){
            arr[i][56] = 8;
        }
        for (int i = 40; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 53; i < 58; i++){
            arr[i][40] = 8;
        }
    }
    if ((8 == start) && (9 == dest)){
        
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 58; i < 66; i++){
            arr[i][56] = 8;
        }
        for (int i = 40; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 53; i < 58; i++){
            arr[i][40] = 8;
        }
    }
    //한경직 벤처관
    if ((10 == dest) && (8 == start)){
        
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 65; i < 83; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 56; i++){
            arr[82][i] = 8;
        }
        arr[81][37] = 8;
        arr[80][37] = 8;
        arr[79][37] = 8;
        for (int i = 9; i < 37; i++){
            arr[79][i] = 8;
        }
        arr[78][9] = 8;
        
    }
    if ((8 == dest) && (10 == start)){
        
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 65; i < 83; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 56; i++){
            arr[82][i] = 8;
        }
        arr[81][37] = 8;
        arr[80][37] = 8;
        arr[79][37] = 8;
        for (int i = 9; i < 37; i++){
            arr[79][i] = 8;
        }
        arr[78][9] = 8;
        
    }
    
    //한경직 진리관
    if ((11 == dest) && (8 == start)){
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 65; i < 83; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 56; i++){
            arr[82][i] = 8;
        }
        arr[81][37] = 8;
        arr[80][37] = 8;
        arr[79][37] = 8;
        arr[78][37] = 8;
        arr[77][37] = 8;
        arr[76][37] = 8;
        arr[75][37] = 8;
        arr[75][36] = 8;
        
    }
    if ((8 == dest) && (11 == start)){
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 65; i < 83; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 56; i++){
            arr[82][i] = 8;
        }
        arr[81][37] = 8;
        arr[80][37] = 8;
        arr[79][37] = 8;
        arr[78][37] = 8;
        arr[77][37] = 8;
        arr[76][37] = 8;
        arr[75][37] = 8;
        arr[75][36] = 8;
        
    }
    //한경직 조만식
    if ((8 == dest) && (12 == start)){
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 58; i < 66; i++){
            arr[i][56] = 8;
        }
        for (int i = 36; i < 57; i++){
            arr[58][i] = 8;
        }
    }
    if ((12 == dest) && (8 == start)){
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 58; i < 66; i++){
            arr[i][56] = 8;
        }
        for (int i = 36; i < 57; i++){
            arr[58][i] = 8;
        }
    }
    
    //한경직 박물관
    if ((8 == start) && (13 == dest)){
        arr[72][72] = 8;
        arr[71][72] = 8;
        arr[70][72] = 8;
    }
    
    if ((13 == start) && (8 == dest)){
        arr[72][72] = 8;
        arr[71][72] = 8;
        arr[70][72] = 8;
    }
    
    //한경직 중앙도서관
    if ((8 == dest) && (14 == start)){
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 42; i < 66; i++){
            arr[i][56] = 8;
        }
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
    }
    
    if ((14 == dest) && (8 == start)){
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 42; i < 66; i++){
            arr[i][56] = 8;
        }
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
    }
    //한경직 연구관
    if ((8 == dest) && (15 == start)){
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 38; i < 66; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    if ((15 == dest) && (8 == start)){
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 38; i < 66; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    //한경직 커밍홀
    if ((8 == dest) && (16 == start)){
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 26; i < 66; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    
    if ((16 == dest) && (8 == start)){
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 26; i < 66; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    //한경직 브레인홀
    if ((8 == dest) && (17 == start)){
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 14; i < 66; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    
    if ((17 == dest) && (8 == start)){
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 14; i < 66; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    //한경직 기숙사
    if ((8 == dest) && (18 == start)){
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 6; i < 66; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
    }
    if ((18 == dest) && (8 == start)){
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 6; i < 66; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
    }
    //한경직 전산관
    
    if ((8 == dest) && (19 == start)){
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 27; i < 66; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
    }
    
    if ((19 == dest) && (8 == start)){
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 27; i < 66; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
    }
    //한경직 미래관
    if ((8 == dest) && (20 == start)){
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 49; i < 66; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
    }
    
    if ((20 == dest) && (8 == start)){
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 49; i < 66; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
    }
    //한경직 정보관
    if ((8 == start) && (21 == dest)){
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        
        
        for (int i = 44; i < 66; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
    }
    if ((21 == start) && (8 == dest)){
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        
        
        for (int i = 44; i < 66; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
    }
    //한경직 웨스트민스터홀
    if ((8 == start) && (22 == dest)){
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 46; i < 66; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
    }
    if ((22 == start) && (8 == dest)){
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 46; i < 66; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
    }
    //한경직 대운동장
    if ((23 == dest) && (8 == start)){
        
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 65; i < 83; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 37; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        
    }
    if ((8 == dest) && (23 == start)){
        
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 65; i < 83; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 37; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        
    }
    //한경직 테니스장
    
    //경상관 한경직
    if ((24 == dest) && (8 == start)){
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        for (int i = 130; i < 135; i++){
            arr[i][40] = 8;
        }
        
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        for (int i = 65; i < 135; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
    }
    
    if ((8 == dest) && (24 == start)){
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        for (int i = 130; i < 135; i++){
            arr[i][40] = 8;
        }
        
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        for (int i = 65; i < 135; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
    }
    //한경직 농구장
    if ((8 == start) && (25 == dest)){
        
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 43; i < 66; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[43][i] = 8;
        }
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
    }
    if ((25 == start) && (8 == dest)){
        
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 43; i < 66; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[43][i] = 8;
        }
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
    }
    //한경직 창의관
    if ((8 == start) && (26 == dest)){
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        
        
        for (int i = 44; i < 66; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
    }
    if ((26 == start) && (8 == dest)){
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        
        
        for (int i = 44; i < 66; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
    }
    //한경직 학생회관
    if ((27 == dest) && (8 == start)){
        
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 65; i < 83; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        arr[83][37] = 8;
        arr[84][37] = 8;
        arr[85][37] = 8;
        arr[86][37] = 8;
        arr[87][37] = 8;
        arr[87][36] = 8;
    }
    
    if ((8 == dest) && (27 == start)){
        
        for (int i = 57; i < 63; i++){
            arr[65][i] = 8;
        }
        for (int i = 65; i < 83; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        arr[83][37] = 8;
        arr[84][37] = 8;
        arr[85][37] = 8;
        arr[86][37] = 8;
        arr[87][37] = 8;
        arr[87][36] = 8;
    }
    
    
    
    
    
    
    //생활문화관 벤처관
    if ((10 == start) && (9 == dest)){
        
        arr[78][10] = 8;
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 53; i < 80; i++){
            arr[i][37] = 8;
        }
        
        
        
        
    }
    if ((9 == start) && (10 == dest)){
        
        arr[78][10] = 8;
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 53; i < 80; i++){
            arr[i][37] = 8;
        }
        
        
        
        
    }
    //생활문화관 진리관
    if ((11 == start) && (9 == dest)){
        for (int i = 53; i < 75; i++){
            arr[i][37] = 8;
        }
        arr[74][36] = 8;
    }
    if ((9 == start) && (11 == dest)){
        for (int i = 53; i < 75; i++){
            arr[i][37] = 8;
        }
        arr[74][36] = 8;
    }
    //생활문화관 조만식
    if ((12 == start) && (9 == dest)){
        for (int i = 53; i < 59; i++){
            arr[i][37] = 8;
        }
        arr[58][36] = 8;
    }
    
    if ((9 == start) && (12 == dest)){
        for (int i = 53; i < 59; i++){
            arr[i][37] = 8;
        }
        arr[58][36] = 8;
    }
    //생활문화관 박물관
    if ((13 == dest) && (9 == start)){
        for (int i = 53; i < 57; i++){
            arr[49][i] = 8;
        }
        for (int i = 49; i < 76; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[75][i] = 8;
        }
        
        
    }
    if ((9 == dest) && (13 == start)){
        for (int i = 53; i < 57; i++){
            arr[49][i] = 8;
        }
        for (int i = 49; i < 76; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[75][i] = 8;
        }
        
        
    }
    //생활문화관 중앙도서관
    if ((9 == start) && (14 == dest)){
        
        arr[46][37] = 8;
    }
    if ((14 == start) && (9 == dest)){
        
        arr[46][37] = 8;
    }
    //생활문화관 연구관
    if ((9 == start) && (15 == dest)){
        
        for (int i = 53; i < 57; i++){
            arr[49][i] = 8;
        }
        for (int i = 38; i < 50; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    if ((15 == start) && (9 == dest)){
        
        for (int i = 53; i < 57; i++){
            arr[49][i] = 8;
        }
        for (int i = 38; i < 50; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    //생활문화관 커밍홀
    if ((9 == start) && (16 == dest)){
        
        for (int i = 53; i < 57; i++){
            arr[49][i] = 8;
        }
        for (int i = 26; i < 50; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
        
    }
    
    if ((16 == start) && (9 == dest)){
        
        for (int i = 53; i < 57; i++){
            arr[49][i] = 8;
        }
        for (int i = 26; i < 50; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    //생활문화관 브레인홀
    if ((9 == start) && (17 == dest)){
        for (int i = 53; i < 57; i++){
            arr[49][i] = 8;
        }
        for (int i = 14; i < 50; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    if ((17 == start) && (9 == dest)){
        for (int i = 53; i < 57; i++){
            arr[49][i] = 8;
        }
        for (int i = 14; i < 50; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    //생활문화관 기숙사
    if ((9 == start) && (18 == dest)){
        
        for (int i = 53; i < 57; i++){
            arr[49][i] = 8;
        }
        
        for (int i = 6; i < 50; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
        
    }
    
    if ((18 == start) && (9 == dest)){
        
        for (int i = 53; i < 57; i++){
            arr[49][i] = 8;
        }
        
        for (int i = 6; i < 50; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
        
    }
    //생활문화관 전산관
    if ((9 == start) && (19 == dest)){
        
        for (int i = 53; i < 57; i++){
            arr[49][i] = 8;
        }
        for (int i = 27; i < 50; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
    }
    if ((19 == start) && (9 == dest)){
        
        for (int i = 53; i < 57; i++){
            arr[49][i] = 8;
        }
        for (int i = 27; i < 50; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
    }
    //생활문화관 미래관
    if ((9 == start) && (20 == dest)){
        
        for (int i = 53; i < 60; i++){
            arr[49][i] = 8;
        }
        
        
        
    }
    if ((20 == start) && (9 == dest)){
        
        for (int i = 53; i < 60; i++){
            arr[49][i] = 8;
        }
        
        
        
        
    }
    
    
    //생활문화관 정보관
    if ((9 == start) && (21 == dest)){
        
        for (int i = 53; i < 57; i++){
            arr[49][i] = 8;
        }
        
        
        for (int i = 44; i < 49; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
    }
    if ((21 == start) && (9 == dest)){
        
        for (int i = 53; i < 57; i++){
            arr[49][i] = 8;
        }
        
        
        for (int i = 44; i < 49; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
    }
    //생활문화관 웨스트민스터홀
    if ((9 == start) && (22 == dest)){
        
        arr[46][37] = 8;
        arr[46][36] = 8;
        arr[46][35] = 8;
        arr[46][34] = 8;
        arr[46][33] = 8;
    }
    if ((22 == start) && (9 == dest)){
        
        arr[46][37] = 8;
        arr[46][36] = 8;
        arr[46][35] = 8;
        arr[46][34] = 8;
        arr[46][33] = 8;
    }
    //생활문화관 대운동장
    if ((23 == start) && (9 == dest)){
        for (int i = 53; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
    }
    if ((9 == start) && (23 == dest)){
        for (int i = 53; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
    }
    //생활문화관 테니스장
    
    if ((24 == dest) && (9 == start)){
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        
        for (int i = 53; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        
        
    }
    
    
    if ((9 == dest) && (24 == start)){
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        
        for (int i = 53; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        
        
    }
    
    //생활문화관 농구장
    if ((9 == start) && (25 == dest)){
        
        for (int i = 53; i < 57; i++){
            arr[49][i] = 8;
        }
        
        for (int i = 43; i < 49; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[43][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
    }
    if ((25 == start) && (9 == dest)){
        
        for (int i = 53; i < 57; i++){
            arr[49][i] = 8;
        }
        
        for (int i = 43; i < 49; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[43][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
    }
    //생활문화관 창의관
    if ((9 == start) && (26 == dest)){
        
        for (int i = 53; i < 57; i++){
            arr[49][i] = 8;
        }
        
        
        for (int i = 44; i < 49; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
    }
    if ((26 == start) && (9 == dest)){
        
        for (int i = 53; i < 57; i++){
            arr[49][i] = 8;
        }
        
        
        for (int i = 44; i < 49; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
    }
    //생활문화관 학생회관
    if ((27 == start) && (9 == dest)){
        for (int i = 53; i < 88; i++){
            arr[i][37] = 8;
        }
        arr[87][36] = 8;
    }
    if ((9 == start) && (27 == dest)){
        for (int i = 53; i < 88; i++){
            arr[i][37] = 8;
        }
        arr[87][36] = 8;
    }
    
    
    
    //벤처관 진리관
    if ((10 == dest) && (11 == start)){
        arr[75][14] = 8;
        
        arr[75][13] = 8;
        
        
    }
    if ((11 == dest) && (10 == start)){
        arr[75][14] = 8;
        
        arr[75][13] = 8;
        
        
    }
    //벤처관 조만식
    if ((10 == start) && (12 == dest)){
        arr[78][9] = 8;
        for (int i = 9; i < 37; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        arr[58][36] = 8;
    }
    if ((12 == start) && (10 == dest)){
        arr[78][9] = 8;
        for (int i = 9; i < 37; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        arr[58][36] = 8;
    }
    //벤처관 박물관
    if ((10 == start) && (13 == dest)){
        
        arr[78][9] = 8;
        for (int i = 9; i < 38; i++){
            arr[79][i] = 8;
        }
        
        arr[80][37] = 8;
        arr[81][37] = 8;
        for (int i = 37; i < 57; i++){
            arr[81][i] = 8;
        }
        for (int i = 75; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[75][i] = 8;
        }
    }
    if ((13 == start) && (10 == dest)){
        
        arr[78][9] = 8;
        for (int i = 9; i < 38; i++){
            arr[79][i] = 8;
        }
        
        arr[80][37] = 8;
        arr[81][37] = 8;
        for (int i = 37; i < 57; i++){
            arr[81][i] = 8;
        }
        for (int i = 75; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[75][i] = 8;
        }
    }
    //벤처관 중앙도서관
    if ((10 == start) && (14 == dest)){
        
        arr[78][9] = 8;
        for (int i = 9; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 42; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
    }
    if ((14 == start) && (10 == dest)){
        
        arr[78][9] = 8;
        for (int i = 9; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 42; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
    }
    //벤처관 연구관
    if ((10 == start) && (15 == dest)){
        
        arr[78][9] = 8;
        for (int i = 9; i < 38; i++){
            arr[79][i] = 8;
        }
        
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 38; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    if ((15 == start) && (10 == dest)){
        
        arr[78][9] = 8;
        for (int i = 9; i < 38; i++){
            arr[79][i] = 8;
        }
        
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 38; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    //벤처관 커밍홀
    if ((10 == start) && (16 == dest)){
        
        arr[78][9] = 8;
        for (int i = 9; i < 38; i++){
            arr[79][i] = 8;
        }
        
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 26; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    if ((16 == start) && (10 == dest)){
        
        arr[78][9] = 8;
        for (int i = 9; i < 38; i++){
            arr[79][i] = 8;
        }
        
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 26; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    //벤처관 브레인홀
    if ((10 == start) && (17 == dest)){
        
        arr[78][9] = 8;
        for (int i = 9; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 14; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    if ((17 == start) && (10 == dest)){
        
        arr[78][9] = 8;
        for (int i = 9; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 14; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    //벤처관 기숙사
    if ((10 == start) && (18 == dest)){
        
        arr[78][9] = 8;
        for (int i = 9; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 6; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
    }
    if ((18 == start) && (10 == dest)){
        
        arr[78][9] = 8;
        for (int i = 9; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 6; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
    }
    //벤처관 전산관
    if ((10 == start) && (19 == dest)){
        
        arr[78][9] = 8;
        for (int i = 9; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 27; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
        
    }
    if ((19 == start) && (10 == dest)){
        
        arr[78][9] = 8;
        for (int i = 9; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 27; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
        
    }
    //벤처관 미래관
    if ((10 == start) && (20 == dest)){
        
        arr[78][9] = 8;
        for (int i = 9; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 49; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
    }
    if ((20 == start) && (10 == dest)){
        
        arr[78][9] = 8;
        for (int i = 9; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 49; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
    }
    
    //벤처관 정보관
    if ((10 == start) && (21 == dest)){
        
        arr[78][9] = 8;
        for (int i = 9; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
    }
    if ((21 == start) && (10 == dest)){
        
        arr[78][9] = 8;
        for (int i = 9; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
    }
    
    //벤처관 웨스트민스터홀
    if ((10 == start) && (22 == dest)){
        
        arr[78][9] = 8;
        for (int i = 9; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 46; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
        
    }
    if ((22 == start) && (10 == dest)){
        
        arr[78][9] = 8;
        for (int i = 9; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 46; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
        
    }
    //벤처관 대운동장
    if ((23 == start) && (10 == dest)){
        arr[114][14] = 8;
        
        for (int i = 8; i < 15; i++){
            arr[115][i] = 8;
        }
        for (int i = 78; i < 115; i++){
            arr[i][8] = 8;
        }
        
        
        
        
    }
    if ((10 == start) && (23 == dest)){
        arr[114][14] = 8;
        
        for (int i = 8; i < 15; i++){
            arr[115][i] = 8;
        }
        for (int i = 78; i < 115; i++){
            arr[i][8] = 8;
        }
        
        
        
        
    }
    //벤처관 테니스장
    
    if ((10 == dest) && (24 == start)){
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
            
        }
        
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        
        for (int i = 79; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        for (int i = 9; i < 37; i++){
            arr[79][i] = 8;
        }
        arr[78][9] = 8;
    }
    
    if ((24 == dest) && (10 == start)){
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
            
        }
        
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        
        for (int i = 79; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        for (int i = 9; i < 37; i++){
            arr[79][i] = 8;
        }
        arr[78][9] = 8;
    }
    
    //벤처관 농구장
    if ((10 == start) && (25 == dest)){
        
        arr[78][9] = 8;
        for (int i = 9; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 43; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[43][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
    }
    if ((25 == start) && (10 == dest)){
        
        arr[78][9] = 8;
        for (int i = 9; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 43; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[43][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
    }
    //벤처관 창의관
    
    if ((10 == start) && (26 == dest)){
        
        arr[78][9] = 8;
        for (int i = 9; i < 38; i++){
            arr[79][i] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
    }
    if ((26 == start) && (10 == dest)){
        
        arr[78][9] = 8;
        for (int i = 9; i < 38; i++){
            arr[79][i] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 58; i < 80; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
    }
    //벤처관 학생회관
    if ((10 == start) && (27 == dest)){
        
        arr[78][9] = 8;
        for (int i = 9; i < 38; i++){
            arr[79][i] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 80; i < 86; i++){
            
            arr[i][37] = 8;
        }
        arr[85][36] = 8;
    }
    if ((27 == start) && (10 == dest)){
        
        arr[78][9] = 8;
        for (int i = 9; i < 38; i++){
            arr[79][i] = 8;
        }
        
        for (int i = 10; i < 38; i++){
            arr[79][i] = 8;
        }
        for (int i = 80; i < 86; i++){
            
            arr[i][37] = 8;
        }
        arr[85][36] = 8;
    }
    
    //진리관 조만식
    if ((12 == start) && (11 == dest)){
        arr[59][33] = 8;
        arr[60][33] = 8;
        
    }
    if ((11 == start) && (12 == dest)){
        arr[59][33] = 8;
        arr[60][33] = 8;
        
    }
    //진리관 박물관
    if ((11 == start) && (13 == dest)){
        arr[78][18] = 8;
        for (int i = 18; i < 38; i++){
            arr[79][i] = 8;
        }
        
        arr[80][37] = 8;
        arr[81][37] = 8;
        for (int i = 37; i < 57; i++){
            arr[81][i] = 8;
        }
        for (int i = 75; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[75][i] = 8;
        }
    }
    if ((13 == start) && (11 == dest)){
        arr[78][18] = 8;
        for (int i = 18; i < 38; i++){
            arr[79][i] = 8;
        }
        
        arr[80][37] = 8;
        arr[81][37] = 8;
        for (int i = 37; i < 57; i++){
            arr[81][i] = 8;
        }
        for (int i = 75; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[75][i] = 8;
        }
    }
    //진리관 중앙도서관
    if ((11 == start) && (14 == dest)){
        
        arr[62][36] = 8;
        
        for (int i = 58; i < 63; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 42; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
    }
    if ((14 == start) && (11 == dest)){
        
        arr[62][36] = 8;
        
        for (int i = 58; i < 63; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 42; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
    }
    //진리관 연구관
    if ((15 == start) && (11 == dest)){
        
        arr[62][36] = 8;
        for (int i = 58; i < 63; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 38; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    if ((11 == start) && (15 == dest)){
        
        arr[62][36] = 8;
        for (int i = 58; i < 63; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 38; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    //진리관 커밍홀
    if ((11 == start) && (16 == dest)){
        
        arr[62][36] = 8;
        for (int i = 58; i < 63; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 26; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    if ((16 == start) && (11 == dest)){
        
        arr[62][36] = 8;
        for (int i = 58; i < 63; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 26; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    //진리관 브레인홀
    if ((11 == start) && (17 == dest)){
        
        arr[62][36] = 8;
        for (int i = 58; i < 63; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 14; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    if ((17 == start) && (11 == dest)){
        
        arr[62][36] = 8;
        for (int i = 58; i < 63; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 14; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    //진리관 기숙사
    if ((18 == start) && (11 == dest)){
        
        arr[62][36] = 8;
        for (int i = 58; i < 63; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 6; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
    }
    
    if ((11 == start) && (18 == dest)){
        
        arr[62][36] = 8;
        for (int i = 58; i < 63; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 6; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
    }
    
    //진리관 전산관
    if ((19 == start) && (11 == dest)){
        
        arr[62][36] = 8;
        for (int i = 58; i < 63; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 27; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
        
    }
    if ((11 == start) && (19 == dest)){
        
        arr[62][36] = 8;
        for (int i = 58; i < 63; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 27; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
        
    }
    
    //진리관 미래관
    if ((11 == start) && (20 == dest)){
        
        arr[62][36] = 8;
        for (int i = 58; i < 63; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 49; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
        
    }
    if ((20 == start) && (11 == dest)){
        
        arr[62][36] = 8;
        for (int i = 58; i < 63; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 49; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
        
    }
    //진리관 정보관
    if ((11 == start) && (21 == dest)){
        
        arr[62][36] = 8;
        for (int i = 58; i < 63; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
        
    }
    if ((21 == start) && (11 == dest)){
        
        arr[62][36] = 8;
        for (int i = 58; i < 63; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
        
    }
    //진리관 웨스트민스터홀
    if ((22 == start) && (11 == dest)){
        
        arr[62][36] = 8;
        for (int i = 58; i < 63; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 46; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
        
        
    }
    if ((11 == start) && (22 == dest)){
        
        arr[62][36] = 8;
        for (int i = 58; i < 63; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 46; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
        
        
    }
    //진리관 대운동장
    
    if ((23 == start) && (11 == dest)){
        
        arr[65][36] = 8;
        for (int i = 65; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        
    }
    if ((11 == start) && (23 == dest)){
        
        arr[65][36] = 8;
        for (int i = 65; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        
    }
    //진리관 테니스장
    if ((11 == dest) && (24 == start)){
        
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        
        for (int i = 79; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        for (int i = 26; i < 37; i++){
            arr[79][i] = 8;
        }
        arr[78][26] = 8;
        
    }
    
    if ((24 == dest) && (11 == start)){
        
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        
        for (int i = 79; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        for (int i = 26; i < 37; i++){
            arr[79][i] = 8;
        }
        arr[78][26] = 8;
        
    }
    
    //진리관 농구장
    if ((25 == start) && (11 == dest)){
        
        arr[62][36] = 8;
        for (int i = 58; i < 63; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 43; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[43][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
        
        
    }
    if ((11 == start) && (25 == dest)){
        
        arr[62][36] = 8;
        for (int i = 58; i < 63; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 43; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[43][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
        
        
    }
    //진리관 창의관
    if ((11 == start) && (26 == dest)){
        
        arr[62][36] = 8;
        for (int i = 58; i < 63; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
        
    }
    if ((26 == start) && (11 == dest)){
        
        arr[62][36] = 8;
        for (int i = 58; i < 63; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
        
    }
    //진리관 학생회관
    if ((27 == start) && (11 == dest)){
        
        arr[75][36] = 8;
        for (int i = 75; i < 88; i++){
            arr[i][37] = 8;
        }
        arr[87][36] = 8;
        
    }
    if ((11 == start) && (27 == dest)){
        
        arr[75][36] = 8;
        for (int i = 75; i < 88; i++){
            arr[i][37] = 8;
        }
        arr[87][36] = 8;
        
    }
    
    //조만식 박물관
    if ((12 == start) && (13 == dest)){
        
        
        for (int i = 36; i < 57; i++){
            arr[58][i] = 8;
        }
        
        for (int i = 57; i < 63; i++){
            arr[75][i] = 8;
        }
        for (int i = 58; i < 76; i++){
            arr[i][57] = 8;
        }
        
    }
    if ((13 == start) && (12 == dest)){
        
        
        for (int i = 36; i < 57; i++){
            arr[58][i] = 8;
        }
        
        for (int i = 57; i < 63; i++){
            arr[75][i] = 8;
        }
        for (int i = 58; i < 76; i++){
            arr[i][57] = 8;
        }
        
    }
    //조만식 중앙도서관
    if ((12 == start) && (14 == dest)){
        for (int i = 36; i < 57; i++){
            arr[58][i] = 8;
        }
        
        for (int i = 42; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
    }
    if ((14 == start) && (12 == dest)){
        for (int i = 36; i < 57; i++){
            arr[58][i] = 8;
        }
        
        for (int i = 42; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
    }
    //조만식 연구관
    if ((12 == start) && (15 == dest)){
        for (int i = 36; i < 57; i++){
            arr[58][i] = 8;
        }
        
        
        for (int i = 38; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    if ((15 == start) && (12 == dest)){
        for (int i = 36; i < 57; i++){
            arr[58][i] = 8;
        }
        
        
        for (int i = 38; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    //조만식 커밍홀
    if ((16 == start) && (12 == dest)){
        for (int i = 36; i < 57; i++){
            arr[58][i] = 8;
        }
        
        
        for (int i = 26; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    if ((12 == start) && (16 == dest)){
        for (int i = 36; i < 57; i++){
            arr[58][i] = 8;
        }
        
        
        for (int i = 26; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    //조만식 브레인홀
    if ((12 == start) && (17 == dest)){
        for (int i = 36; i < 57; i++){
            arr[58][i] = 8;
        }
        
        
        for (int i = 14; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    
    if ((17 == start) && (12 == dest)){
        for (int i = 36; i < 57; i++){
            arr[58][i] = 8;
        }
        
        
        for (int i = 14; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    //조만식 기숙사
    if ((12 == start) && (18 == dest)){
        for (int i = 36; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 6; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
    }
    if ((18 == start) && (12 == dest)){
        for (int i = 36; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 6; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
    }
    //조만식 전산관
    if ((12 == start) && (19 == dest)){
        for (int i = 36; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 27; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
        
    }
    if ((19 == start) && (12 == dest)){
        for (int i = 36; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 27; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
        
    }
    
    //조만식 미래관
    if ((12 == start) && (20 == dest)){
        for (int i = 36; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 49; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
        
    }
    if ((20 == start) && (12 == dest)){
        for (int i = 36; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 49; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
        
    }
    
    //조만식 정보관
    if ((12 == start) && (21 == dest)){
        for (int i = 36; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
        
    }
    if ((21 == start) && (12 == dest)){
        for (int i = 36; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
        
    }
    //조만식 웨스트민스터홀
    if ((22 == start) && (12 == dest)){
        arr[54][32] = 8;
        arr[53][32] = 8;
        
    }
    if ((12 == start) && (22 == dest)){
        arr[54][32] = 8;
        arr[53][32] = 8;
        
    }
    //조만식 대운동장
    if ((23 == start) && (12 == dest)){
        
        arr[58][36] = 8;
        for (int i = 58; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        
    }
    if ((12 == start) && (23 == dest)){
        
        arr[58][36] = 8;
        for (int i = 58; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        
    }
    //조만식 테니스장
    
    if ((12 == dest) && (24 == start)){
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        
        for (int i = 58; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        arr[58][36] = 8;
        
    }
    
    if ((24 == dest) && (12 == start)){
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        
        for (int i = 58; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        arr[58][36] = 8;
        
    }
    //조만식 농구장
    if ((12 == start) && (25 == dest)){
        
        
        
        for (int i = 36; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 43; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[43][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
    }
    if ((25 == start) && (12 == dest)){
        
        
        
        for (int i = 36; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 43; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[43][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
    }
    //조만식 창의관
    if ((12 == start) && (26 == dest)){
        for (int i = 36; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
        
    }
    if ((26 == start) && (12 == dest)){
        for (int i = 36; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
        
    }
    //조만식 학생회관
    if ((27 == start) && (12 == dest)){
        
        arr[58][36] = 8;
        for (int i = 58; i < 88; i++){
            arr[i][37] = 8;
        }
        arr[87][36] = 8;;
        
    }
    if ((12 == start) && (27 == dest)){
        
        arr[58][36] = 8;
        for (int i = 58; i < 88; i++){
            arr[i][37] = 8;
        }
        arr[87][36] = 8;;
        
    }
    //박물관 중앙도서관
    if ((14 == dest) && (13 == start)){
        
        
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
        for (int i = 56; i < 63; i++){
            arr[75][i] = 8;
        }
        for (int i = 42; i < 75; i++){
            arr[i][56] = 8;
        }
        
    }
    if ((13 == dest) && (14 == start)){
        
        
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
        for (int i = 56; i < 63; i++){
            arr[75][i] = 8;
        }
        for (int i = 42; i < 75; i++){
            arr[i][56] = 8;
        }
        
    }
    
    
    //박물관 연구관
    if ((13 == dest) && (15 == start)){
        
        
        for (int i = 56; i < 63; i++){
            arr[75][i] = 8;
        }
        for (int i = 38; i < 76; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    if ((15 == dest) && (13 == start)){
        
        
        for (int i = 56; i < 63; i++){
            arr[75][i] = 8;
        }
        for (int i = 38; i < 76; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    
    //박물관 커밍홀
    if ((13 == dest) && (16 == start)){
        
        
        for (int i = 56; i < 63; i++){
            arr[75][i] = 8;
        }
        for (int i = 26; i < 76; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    if ((16 == dest) && (13 == start)){
        
        
        for (int i = 56; i < 63; i++){
            arr[75][i] = 8;
        }
        for (int i = 26; i < 76; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    //박물관 브레인홀
    if ((13 == dest) && (17 == start)){
        
        
        for (int i = 56; i < 63; i++){
            arr[75][i] = 8;
        }
        for (int i = 14; i < 76; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    
    if ((17 == dest) && (13 == start)){
        
        
        for (int i = 56; i < 63; i++){
            arr[75][i] = 8;
        }
        for (int i = 14; i < 76; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    
    
    //박물관 기숙사
    if ((13 == dest) && (18 == start)){
        
        
        for (int i = 56; i < 63; i++){
            arr[75][i] = 8;
        }
        for (int i = 6; i < 76; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
    }
    if ((18 == dest) && (13 == start)){
        
        
        for (int i = 56; i < 63; i++){
            arr[75][i] = 8;
        }
        for (int i = 6; i < 76; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
    }
    //박물관 전산관
    if ((13 == dest) && (19 == start)){
        
        
        for (int i = 56; i < 63; i++){
            arr[75][i] = 8;
        }
        for (int i = 27; i < 76; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
    }
    if ((19 == dest) && (13 == start)){
        
        
        for (int i = 56; i < 63; i++){
            arr[75][i] = 8;
        }
        for (int i = 27; i < 76; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
    }
    //박물관 미래관
    if ((13 == dest) && (20 == start)){
        
        
        for (int i = 56; i < 63; i++){
            arr[75][i] = 8;
        }
        for (int i = 49; i < 76; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
    }
    if ((20 == dest) && (13 == start)){
        
        
        for (int i = 56; i < 63; i++){
            arr[75][i] = 8;
        }
        for (int i = 49; i < 76; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
    }
    //박물관 정보관
    if ((13 == dest) && (21 == start)){
        
        
        for (int i = 56; i < 63; i++){
            arr[75][i] = 8;
        }
        for (int i = 44; i < 76; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
    }
    if ((21 == dest) && (13 == start)){
        
        
        for (int i = 56; i < 63; i++){
            arr[75][i] = 8;
        }
        for (int i = 44; i < 76; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
    }
    //박물관 웨스트민스터홀
    if ((22 == dest) && (13 == start)){
        
        
        for (int i = 56; i < 63; i++){
            arr[75][i] = 8;
        }
        for (int i = 46; i < 76; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
    }
    if ((13 == dest) && (22 == start)){
        
        
        for (int i = 56; i < 63; i++){
            arr[75][i] = 8;
        }
        for (int i = 46; i < 76; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
    }
    //박물관 대운동장
    if ((13 == dest) && (23 == start)){
        for (int i = 56; i < 63; i++){
            arr[75][i] = 8;
        }
        
        for (int i = 75; i < 83; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 37; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        
    }
    if ((23 == dest) && (13 == start)){
        for (int i = 56; i < 63; i++){
            arr[75][i] = 8;
        }
        
        for (int i = 75; i < 83; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 37; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        
    }
    //박물관 테니스장
    if ((24 == dest) && (13 == start)){
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        for (int i = 130; i < 135; i++){
            arr[i][40] = 8;
        }
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        
        
        for (int i = 75; i < 135; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[75][i] = 8;
        }
    }
    
    if ((13 == dest) && (24 == start)){
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        for (int i = 130; i < 135; i++){
            arr[i][40] = 8;
        }
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        
        
        for (int i = 75; i < 135; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 63; i++){
            arr[75][i] = 8;
        }
    }
    //박물관 농구장
				if ((25 == dest) && (13 == start)){
                    
                    
                    for (int i = 56; i < 63; i++){
                        arr[75][i] = 8;
                    }
                    for (int i = 43; i < 76; i++){
                        arr[i][56] = 8;
                    }
                    for (int i = 57; i < 72; i++){
                        
                        arr[43][i] = 8;
                    }
                    
                    arr[44][71] = 8;
                    arr[45][71] = 8;
                    arr[46][71] = 8;
                }
				if ((13 == dest) && (25 == start)){
                    
                    
                    for (int i = 56; i < 63; i++){
                        arr[75][i] = 8;
                    }
                    for (int i = 43; i < 76; i++){
                        arr[i][56] = 8;
                    }
                    for (int i = 57; i < 72; i++){
                        
                        arr[43][i] = 8;
                    }
                    
                    arr[44][71] = 8;
                    arr[45][71] = 8;
                    arr[46][71] = 8;
                }
    
    //박물관 창의관
    if ((13 == dest) && (26 == start)){
        
        
        for (int i = 56; i < 63; i++){
            arr[75][i] = 8;
        }
        for (int i = 44; i < 76; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
    }
    if ((26 == dest) && (13 == start)){
        
        
        for (int i = 56; i < 63; i++){
            arr[75][i] = 8;
        }
        for (int i = 44; i < 76; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
    }
    //박물관 학생회관
    
    if ((13 == dest) && (27 == start)){
        
        for (int i = 56; i < 63; i++){
            arr[75][i] = 8;
        }
        
        for (int i = 75; i < 83; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 37; i < 57 ; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 90; i++){
            arr[i][37] = 8;
        }
        arr[89][36] = 8;
        
        
    }
    if ((27 == dest) && (13 == start)){
        
        for (int i = 56; i < 63; i++){
            arr[75][i] = 8;
        }
        
        for (int i = 75; i < 83; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 90; i++){
            arr[i][37] = 8;
        }
        arr[89][36] = 8;
        
        
    }
    
    
    
    
    //중앙도서관 연구관
    if ((14 == dest) && (15 == start)){
        for (int i = 24; i < 37; i++){
            arr[43][i] = 8;
        }
        
    }
    if ((15 == dest) && (14 == start)){
        for (int i = 24; i < 37; i++){
            arr[43][i] = 8;
        }
        
    }
    
    //중앙도서관 커밍홀
    if ((14 == start) && (16 == dest)){
        
        for (int i = 47; i < 57; i++){
            arr[43][i] = 8;
        }
        
        for (int i = 26; i < 44; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    if ((16 == start) && (14 == dest)){
        
        for (int i = 47; i < 57; i++){
            arr[43][i] = 8;
        }
        
        for (int i = 26; i < 44; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    //중앙도서관 브레인홀
    if ((17 == start) && (14 == dest)){
        
        for (int i = 47; i < 57; i++){
            arr[43][i] = 8;
        }
        
        for (int i = 14; i < 44; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    if ((14 == start) && (17 == dest)){
        
        for (int i = 47; i < 57; i++){
            arr[43][i] = 8;
        }
        
        for (int i = 14; i < 44; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    //중앙도서관 기숙사
    if ((18 == start) && (14 == dest)){
        
        for (int i = 47; i < 57; i++){
            arr[43][i] = 8;
        }
        
        for (int i = 6; i < 44; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
    }
    if ((14 == start) && (18 == dest)){
        
        for (int i = 47; i < 57; i++){
            arr[43][i] = 8;
        }
        
        for (int i = 6; i < 44; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
    }
    //중앙도서관 전산관
    if ((19 == start) && (14 == dest)){
        
        for (int i = 47; i < 57; i++){
            arr[43][i] = 8;
        }
        
        for (int i = 27; i < 44; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
    }
    if ((14 == start) && (19 == dest)){
        
        for (int i = 47; i < 57; i++){
            arr[43][i] = 8;
        }
        
        for (int i = 27; i < 44; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
    }
    //중앙도서관 미래관
    if ((20 == start) && (14 == dest)){
        
        for (int i = 47; i < 57; i++){
            arr[43][i] = 8;
        }
        
        for (int i = 43; i < 50; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
    }
    if ((14 == start) && (20 == dest)){
        
        for (int i = 47; i < 57; i++){
            arr[43][i] = 8;
        }
        
        for (int i = 43; i < 50; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
    }
    //중앙도서관 정보관
    if ((14 == start) && (21 == dest)){
        
        for (int i = 47; i < 77; i++){
            arr[43][i] = 8;
        }
        for (int i = 15; i < 44; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
        
    }
    if ((21 == start) && (14 == dest)){
        
        for (int i = 47; i < 77; i++){
            arr[43][i] = 8;
        }
        for (int i = 15; i < 44; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
        
    }
    //중앙도서관 웨스트민스터홀
    if ((14 == dest) && (22 == start)){
        for (int i = 32; i < 37; i++){
            arr[43][i] = 8;
        }
        for (int i = 44; i < 47; i++){
            arr[i][32] = 8;
        }
        
    }
    if ((22 == dest) && (14 == start)){
        for (int i = 32; i < 37; i++){
            arr[43][i] = 8;
        }
        for (int i = 44; i < 47; i++){
            arr[i][32] = 8;
        }
        
    }
    //중앙도서관 대운동장
    if ((23 == start) && (14 == dest)){
        
        arr[114][14] = 8;
        
        for (int i = 58; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 42; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
    }
    if ((14 == start) && (23 == dest)){
        arr[114][14] = 8;
        
        for (int i = 58; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 42; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
    }
    
    //중앙도서관 테니스장
    if ((24 == start) && (14 == dest)){
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        for (int i = 42; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
    }
    
    if ((14 == start) && (24 == dest)){
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        for (int i = 42; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
    }
    
    //중앙도서관 농구장
    if ((14 == start) && (25 == dest)){
        
        for (int i = 47; i < 72; i++){
            arr[43][i] = 8;
        }
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
        
    }
    if ((25 == start) && (14 == dest)){
        
        for (int i = 47; i < 72; i++){
            arr[43][i] = 8;
        }
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
        
    }
    //중앙도서관 창의관
    if ((14 == start) && (26 == dest)){
        
        for (int i = 47; i < 77; i++){
            arr[43][i] = 8;
        }
        for (int i = 25; i < 44; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
        
    }
    if ((26 == start) && (14 == dest)){
        
        for (int i = 47; i < 77; i++){
            arr[43][i] = 8;
        }
        for (int i = 25; i < 44; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
        
    }
    //중앙도서관 학생회관
    if ((27 == start) && (14 == dest)){
        arr[85][36] = 8;
        for (int i = 58; i < 86; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 42; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
    }
    if ((14 == start) && (27 == dest)){
        arr[85][36] = 8;
        for (int i = 58; i < 86; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 42; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 47; i < 57; i++){
            arr[42][i] = 8;
        }
    }
    
    
    
    //연구관 커밍홀
    if ((16 == start) && (15 == dest)){
        
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
        for (int i = 26; i < 39; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    if ((15 == start) && (16 == dest)){
        
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
        for (int i = 26; i < 39; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    //연구관 브레인홀
    if ((17 == start) && (15 == dest)){
        
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
        for (int i = 14; i < 39; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    if ((15 == start) && (17 == dest)){
        
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
        for (int i = 14; i < 39; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    //연구관 기숙사
    if ((18 == start) && (15 == dest)){
        
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
        for (int i = 6; i < 39; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    if ((15 == start) && (18 == dest)){
        
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
        for (int i = 6; i < 39; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    //연구관 전산관
    if ((19 == start) && (15 == dest)){
        
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
        for (int i = 27; i < 39; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    if ((15 == start) && (19 == dest)){
        
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
        for (int i = 27; i < 39; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    //연구관 미래관
    if ((20 == start) && (15 == dest)){
        
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
        
        for (int i = 39; i < 50; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
        
    }
    if ((15 == start) && (20 == dest)){
        
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
        
        for (int i = 39; i < 50; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
        
    }
    //연구관 정보관
    if ((15 == start) && (21 == dest)){
        
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
        
        for (int i = 39; i < 45; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
        }
        
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
        
        
    }
    if ((21 == start) && (15 == dest)){
        
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
        
        for (int i = 39; i < 45; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
        }
        
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
        
        
    }
    //연구관 웨스트민스터홀
    if ((15 == start) && (22 == dest)){
        
        
        
        for (int i = 38; i < 47; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
        
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    if ((22 == start) && (15 == dest)){
        
        
        
        for (int i = 38; i < 47; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
        
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    //연구관 대운동장
    if ((23 == start) && (15 == dest)){
        
        for (int i = 58; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 38; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    if ((15 == start) && (23 == dest)){
        
        for (int i = 58; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 38; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    //연구관 테니스장
    if ((24 == start) && (15 == dest)){
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        for (int i = 38; i < 82; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
        
    }
    if ((15 == start) && (24 == dest)){
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        for (int i = 38; i < 82; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
        
    }
    
    //연구관 농구장
    if ((15 == start) && (25 == dest)){
        
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
        
        for (int i = 39; i < 45; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[44][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
    }
    if ((25 == start) && (15 == dest)){
        
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
        
        for (int i = 39; i < 45; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[44][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
    }
    
    
    //연구관 창의관
    if ((15 == start) && (26 == dest)){
        
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
        
        for (int i = 39; i < 45; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
        }
        
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
        
        
    }
    if ((26 == start) && (15 == dest)){
        
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
        
        for (int i = 39; i < 45; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
        }
        
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
        
        
    }
    //연구관 학생회관
    if ((27 == start) && (15 == dest)){
        
        arr[85][36] = 8;
        for (int i = 58; i < 86; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 38; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    if ((15 == start) && (27 == dest)){
        
        arr[85][36] = 8;
        for (int i = 58; i < 86; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 38; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 29; i < 57; i++){
            arr[38][i] = 8;
        }
    }
    
    //커밍홀 브레인홀
    if ((17 == start) && (16 == dest)){
        
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
        for (int i = 14; i < 27; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    if ((16 == start) && (17 == dest)){
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
        for (int i = 14; i < 27; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    //커밍홀 기숙사
    if ((18 == start) && (16 == dest)){
        
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
        for (int i = 6; i < 27; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    if ((16 == start) && (18 == dest)){
        
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
        for (int i = 6; i < 27; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    //커밍홀 전산관
    if ((19 == start) && (16 == dest)){
        
        
        for (int i = 37; i < 60; i++){
            arr[26][i] = 8;
        }
    }
    if ((16 == start) && (19 == dest)){
        
        
        for (int i = 37; i < 60; i++){
            arr[26][i] = 8;
        }
    }
    //커밍홀 미래관
    if ((20 == start) && (16 == dest)){
        
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
        
        for (int i = 26; i < 50; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
        
    }
    if ((16 == start) && (20 == dest)){
        
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
        
        for (int i = 26; i < 50; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
        
    }
    //커밍홀 정보관
    if ((16 == start) && (21 == dest)){
        
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
        
        for (int i = 26; i < 45; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
        }
        
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
        
        
    }
    if ((21 == start) && (16 == dest)){
        
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
        
        for (int i = 26; i < 45; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
        }
        
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
        
        
    }
    //커밍홀 웨스트민스터홀
    if ((16 == start) && (22 == dest)){
        
        
        
        for (int i = 26; i < 47; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
        
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    if ((22 == start) && (16 == dest)){
        
        
        
        for (int i = 26; i < 47; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
        
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    //커밍홀 대운동장
    if ((23 == start) && (16 == dest)){
        
        for (int i = 58; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 26; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    if ((16 == start) && (23 == dest)){
        
        for (int i = 58; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 26; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    //커밍홀 테니스장
    if ((24 == start) && (16 == dest)){
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        for (int i = 26; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
        
    }
    
    if ((16 == start) && (24 == dest)){
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        for (int i = 26; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
        
    }
    
    //커밍홀 농구장
    if ((16 == start) && (25 == dest)){
        
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
        
        for (int i = 26; i < 45; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[44][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
    }
    if ((25 == start) && (16 == dest)){
        
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
        
        for (int i = 26; i < 45; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[44][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
    }
    //커밍홀 창의관
    if ((16 == start) && (26 == dest)){
        
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
        
        
        for (int i = 26; i < 45; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
        }
        
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
        
        
    }
    if ((26 == start) && (16 == dest)){
        
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
        
        
        for (int i = 26; i < 45; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
        }
        
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
        
        
    }
    //커밍홀 학생회관
    if ((16 == start) && (27 == dest)){
        
        arr[85][36] = 8;
        for (int i = 58; i < 86; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 26; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    if ((27 == start) && (16 == dest)){
        
        arr[85][36] = 8;
        for (int i = 58; i < 86; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 26; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 37; i < 57; i++){
            arr[26][i] = 8;
        }
    }
    
    
    
    //브레인홀 기숙사
    if ((18 == start) && (17 == dest)){
        
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
        for (int i = 6; i < 15; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    if ((17 == start) && (18 == dest)){
        
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
        for (int i = 6; i < 15; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    //브레인홀 전산관
    if ((19 == start) && (17 == dest)){
        
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
        for (int i = 14; i < 28; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
    }
    if ((17 == start) && (19 == dest)){
        
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
        for (int i = 14; i < 28; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
    }
    //브레인홀 미래관
    if ((20 == start) && (17 == dest)){
        
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
        
        for (int i = 14; i < 50; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
        
    }
    if ((17 == start) && (20 == dest)){
        
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
        
        for (int i = 14; i < 50; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
        
    }
    //브레인홀 정보관
    if ((17 == start) && (21 == dest)){
        
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
        
        for (int i = 14; i < 45; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
        }
        
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
        
        
    }
    if ((21 == start) && (17 == dest)){
        
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
        
        for (int i = 14; i < 45; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
        }
        
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
        
        
    }
    //브레인홀 웨스트민스터홀
    if ((17 == start) && (22 == dest)){
        
        
        
        for (int i = 14; i < 47; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
        
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    if ((22 == start) && (17 == dest)){
        
        
        
        for (int i = 14; i < 47; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
        
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    //브레인홀 대운동장
    if ((23 == start) && (17 == dest)){
        
        for (int i = 58; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 14; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    if ((17 == start) && (23 == dest)){
        
        for (int i = 58; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 14; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    //브레인홀 테니스장
    if ((24 == start) && (17 == dest)){
        
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        for (int i = 14; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
        
    }
    if ((17 == start) && (24 == dest)){
        
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        
        for (int i = 14; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
        
    }
    
    
    
    //브레인홀 농구장
    if ((17 == start) && (25 == dest)){
        
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
        
        for (int i = 14; i < 45; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[44][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
    }
    if ((25 == start) && (17 == dest)){
        
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
        
        for (int i = 14; i < 45; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[44][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
    }
    //브레인홀 창의관
    if ((17 == start) && (26 == dest)){
        
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
        
        for (int i = 14; i < 45; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
        }
        
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
        
        
    }
    if ((26 == start) && (17 == dest)){
        
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
        
        for (int i = 14; i < 45; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
        }
        
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
        
        
    }
    //브레인홀 학생회관
    if ((27 == start) && (17 == dest)){
        
        arr[85][36] = 8;
        for (int i = 58; i < 86; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 14; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    if ((17 == start) && (27 == dest)){
        
        arr[85][36] = 8;
        for (int i = 58; i < 86; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 14; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 49; i < 57; i++){
            arr[14][i] = 8;
        }
    }
    
    //기숙사 전산관
    if ((18 == start) && (19 == dest)){
        
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
        
        for (int i = 6; i < 28; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
        
        
    }
    if ((19 == start) && (18 == dest)){
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
        
        for (int i = 6; i < 28; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
        
    }
    
    //기숙사 미래관
    if ((18 == start) && (20 == dest)){
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
        
        for (int i = 6; i < 50; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
        
    }
    if ((20 == start) && (18 == dest)){
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
        
        for (int i = 6; i < 50; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
        
    }
    //기숙사 정보관
    if ((18 == start) && (21 == dest)){
        for (int i = 6; i < 16; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
        
        
        arr[6][74] = 8;
        arr[6][75] = 8;
        arr[6][76] = 8;
        arr[6][77] = 8;
        
    }
    if ((21 == start) && (18 == dest)){
        for (int i = 6; i < 16; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
        
        
        arr[6][74] = 8;
        arr[6][75] = 8;
        arr[6][76] = 8;
        arr[6][77] = 8;
        
    }
    //기숙사 웨스트민스터홀
    if ((18 == start) && (22 == dest)){
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
        for (int i = 6; i < 47; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
        
    }
    if ((22== start) && (18 == dest)){
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
        for (int i = 6; i < 47; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
        
    }
    //기숙사 대운동장
    if ((18 == start) && (23 == dest)){
        for (int i = 58; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 6; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
        
    }
    if ((23 == start) && (18 == dest)){
        for (int i = 58; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 6; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
        
    }
    //기숙사 테니스장
    if ((18 == start) && (24 == dest)){
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 6; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
    }
    if ((24 == start) && (18 == dest)){
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 6; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
        
    }
    //기숙사 농구장
    if ((18 == start) && (25 == dest)){
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
        
        for (int i = 6; i < 45; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[44][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
        
    }
    if ((25 == start) && (18 == dest)){
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
        
        for (int i = 6; i < 45; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[44][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
        
    }
    //기숙사 창의관
    if ((18 == start) && (26 == dest)){
        for (int i = 6; i < 26; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
        
        arr[6][74] = 8;
        arr[6][75] = 8;
        arr[6][76] = 8;
        
        
    }
    if ((26 == start) && (18 == dest)){
        for (int i = 6; i < 26; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
        
        arr[6][74] = 8;
        arr[6][75] = 8;
        arr[6][76] = 8;
        
    }
    //기숙사 학생회관
    if ((18 == start) && (27 == dest)){
        arr[85][36] = 8;
        for (int i = 58; i < 86; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 6; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
        
    }
    if ((27 == start) && (18 == dest)){
        arr[85][36] = 8;
        for (int i = 58; i < 86; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 6; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 65; i++){
            arr[6][i] = 8;
        }
        
    }
    
    
    
    
    //전산관 미래관
    if ((20 == start) && (19 == dest)){
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
        
        for (int i = 27; i < 50; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
        
    }
    if ((19 == start) && (20 == dest)){
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
        
        for (int i = 27; i < 50; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
        
    }
    //전산관 정보관
    if ((19 == start) && (21 == dest)){
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
        
        for (int i = 27; i < 45; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
    }
    if ((21 == start) && (19 == dest)){
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
        for (int i = 27; i < 45; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
    }
    
    //전산관 웨스트민스터홀
    if ((22 == start) && (19 == dest)){
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
        for (int i = 27; i < 47; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
        
        
    }
    if ((19 == start) && (22 == dest)){
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
        for (int i = 27; i < 47; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
        
        
    }
    
    //전산관 대운동장
    if ((23 == start) && (19 == dest)){
        
        for (int i = 58; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 27; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
    }
    if ((19 == start) && (23 == dest)){
        
        for (int i = 58; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 27; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
    }
    //전산관 테니스장
    if ((24 == start) && (19 == dest)){
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        for (int i = 27; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 60; i++){
            arr[27][i] = 8;
        }
    }
    
    if ((19 == start) && (24 == dest)){
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        for (int i = 27; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 56; i < 60; i++){
            arr[27][i] = 8;
        }
    }
    
    
    
    
    //전산관 농구장
    if ((19 == start) && (25 == dest)){
        
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
        
        for (int i = 27; i < 45; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[44][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
    }
    if ((25 == start) && (19 == dest)){
        
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
        
        for (int i = 27; i < 45; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[44][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
    }
    //전산관 창의관
    if ((26 == start) && (19 == dest)){
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
        for (int i = 27; i < 45; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
    }
    if ((19 == start) && (26 == dest)){
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
        for (int i = 27; i < 45; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
    }
    //전산관 학생회관
    
    if ((27 == start) && (19 == dest)){
        
        arr[85][36] = 8;
        for (int i = 58; i < 86; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 27; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
    }
    if ((19 == start) && (27 == dest)){
        
        arr[85][36] = 8;
        for (int i = 58; i < 86; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 27; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[27][i] = 8;
        }
    }
    
    
    
    
    //미래관 정보관
    if ((20 == start) && (21 == dest)){
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 44; i < 50; i++){
            arr[i][57] = 8;
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
    }
    if ((21 == start) && (20 == dest)){
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 44; i < 50; i++){
            arr[i][57] = 8;
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
    }
    //미래관 웨스트민스터홀
    if ((22 == start) && (20 == dest)){
        
        
        
        for (int i = 46; i < 50; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
        
    }
    if ((20 == start) && (22 == dest)){
        
        
        
        for (int i = 46; i < 50; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
        
    }
    //미래관 대운동장
    if ((23 == start) && (20 == dest)){
        
        for (int i = 58; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 49; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
    }
    if ((20 == start) && (23 == dest)){
        
        for (int i = 58; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 49; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
    }
    //미래관 테니스장
    if ((24 == dest) && (20 == start)){
        
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        for (int i = 130; i < 135; i++){
            arr[i][40] = 8;
        }
        
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        
        
        
        for (int i = 49; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
    }
    
    if ((20 == dest) && (24 == start)){
        
        
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        for (int i = 130; i < 135; i++){
            arr[i][40] = 8;
        }
        
        for (int i = 40; i < 57; i++){
            arr[134][i] = 8;
        }
        
        
        
        for (int i = 49; i < 134; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
    }
    
    //미래관 농구장
    if ((20 == start) && (25 == dest)){
        for (int i = 64; i < 70; i++){
            arr[49][i] = 8;
        }
        
        
    }
    if ((25 == start) && (20 == dest)){
        for (int i = 64; i < 70; i++){
            arr[49][i] = 8;
        }
        
        
    }
    //미래관 창의관
    if ((26 == start) && (20 == dest)){
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 44; i < 50; i++){
            arr[i][57] = 8;
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
    }
    if ((20 == start) && (26 == dest)){
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 44; i < 50; i++){
            arr[i][57] = 8;
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
    }
    //미래관 학생회관
    if ((27 == start) && (20 == dest)){
        
        arr[85][36] = 8;
        for (int i = 58; i < 86; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 49; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
    }
    if ((20 == start) && (27 == dest)){
        
        arr[85][36] = 8;
        for (int i = 58; i < 86; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 49; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 60; i++){
            arr[49][i] = 8;
        }
    }
    
    //정보관 웨스트민스터홀
    if ((22 == start) && (21 == dest)){
        
        arr[45][56] = 8;
        arr[44][56] = 8;
        
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
        }
        
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
        
        
    }
    if ((21 == start) && (22 == dest)){
        arr[45][56] = 8;
        arr[44][56] = 8;
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
        }
        
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
        
        
    }
    //정보관 대운동장
    if ((23 == start) && (21 == dest)){
        
        for (int i = 58; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
        }
        
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
        
        
    }
    if ((21 == start) && (23 == dest)){
        
        for (int i = 58; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
        }
        
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
        
        
    }
    
    //정보관 테니스장
    if ((24 == start) && (21 == dest)){
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        for (int i = 44; i < 82; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
    }
    
    if ((21 == start) && (24 == dest)){
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        for (int i = 44; i < 82; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
    }
    
    
    //정보관 농구장
    if ((21 == start) && (25 == dest)){
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
        
        for (int i = 72; i < 78; i++){
            arr[44][i] = 8;
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
    }
    if ((25 == start) && (21 == dest)){
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
        
        for (int i = 72; i < 78; i++){
            arr[44][i] = 8;
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
    }
    //정보관 창의관
    if ((26 == start) && (21 == dest)){
        
        arr[21][83] = 8;
        arr[22][83] = 8;
    }
    if ((21 == start) && (26 == dest)){
        
        arr[21][83] = 8;
        arr[22][83] = 8;
    }
    //정보관 학생회관
    if ((27 == start) && (21 == dest)){
        
        arr[85][36] = 8;
        for (int i = 58; i < 86; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        for (int i = 56; i < 78; i++){
            arr[44][i] = 8;
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
    }
    if ((21 == start) && (27 == dest)){
        
        arr[85][36] = 8;
        for (int i = 58; i < 86; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 15; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        for (int i = 56; i < 78; i++){
            arr[44][i] = 8;
        }
        arr[15][78] = 8;
        arr[15][79] = 8;
        arr[15][80] = 8;
    }
    
    //웨스트민스터홀 대운동장
    if ((23 == start) && (22 == dest)){
        for (int i = 58; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 46; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
    }
    
    if ((22 == start) && (23 == dest)){
        for (int i = 58; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 46; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
    }
    
    //웨스트민스터홀 테니스장
    if ((22 == start) && (24 == dest)){
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        for (int i = 46; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
    }
    if ((24 == start) && (22 == dest)){
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        for (int i = 46; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
    }
    
    //웨스트민스터홀 농구장
    if ((22 == start) && (25 == dest)){
        
        arr[45][56] = 8;
        arr[44][56] = 8;
        
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
        
        for (int i = 57; i < 72; i++){
            
            arr[44][i] = 8;
        }
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
        
    }
    if ((25 == start) && (22 == dest)){
        
        arr[45][56] = 8;
        arr[44][56] = 8;
        
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
        
        for (int i = 57; i < 72; i++){
            
            arr[44][i] = 8;
        }
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
        
    }
    
    //웨스트민스터홀 창의관
    if ((22 == start) && (26 == dest)){
        
        arr[45][56] = 8;
        arr[44][56] = 8;
        
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            
            arr[44][i] = 8;
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
        
        
    }
    if ((26 == start) && (22 == dest)){
        
        arr[45][56] = 8;
        arr[44][56] = 8;
        
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            
            arr[44][i] = 8;
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
        
        
    }
    //웨스트민스터홀 학생회관
    if ((27 == start) && (22 == dest)){
        
        arr[85][36] = 8;
        for (int i = 58; i < 86; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 46; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
    }
    if ((22 == start) && (27 == dest)){
        
        arr[85][36] = 8;
        for (int i = 58; i < 86; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 46; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 32; i < 57; i++){
            arr[46][i] = 8;
        }
    }
    //대운동장 테니스장
    if ((24 == start) && (23 == dest)){
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
        }
        for (int i = 14; i < 40; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        
    }
    if ((23 == start) && (24 == dest)){
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
        }
        for (int i = 14; i < 40; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        
    }
    
    //대운동장 농구장
    if ((23 == start) && (25 == dest)){
        
        for (int i = 58; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[44][i] = 8;
        }
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
        
        
    }
    if ((25 == start) && (23 == dest)){
        
        for (int i = 58; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[44][i] = 8;
        }
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
        
        
    }
    
    
    //대운동장 창의관
    
    if ((23 == start) && (26 == dest)){
        
        for (int i = 58; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
        }
        
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
        
        
    }
    if ((26 == start) && (23 == dest)){
        
        for (int i = 58; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
        }
        
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
        
        
    }
    //대운동장 학생회관
    
    if ((23 == start) && (27 == dest)){
        arr[87][36] = 8;
        for (int i = 87; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
    }
    
    if ((27 == start) && (23 == dest)){
        arr[87][36] = 8;
        for (int i = 87; i < 116; i++){
            arr[i][37] = 8;
        }
        for (int i = 14; i < 38; i++){
            arr[115][i] = 8;
        }
        arr[114][14] = 8;
    }
    
    //테니스장 농구장
    
    if ((24 == start) && (25 == dest)){
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        for (int i = 43; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[43][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
    }
    
    if ((25 == start) && (24 == dest)){
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        for (int i = 43; i < 82; i++){
            arr[i][56] = 8;
        }
        for (int i = 57; i < 72; i++){
            
            arr[43][i] = 8;
        }
        
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
    }
    //테니스장 창의관
    if ((24 == start) && (26 == dest)){
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        for (int i = 44; i < 82; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
    }
    
    if ((26 == start) && (24 == dest)){
        
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        for (int i = 37; i < 57; i++){
            arr[82][i] = 8;
        }
        
        for (int i = 83; i < 116; i++){
            arr[i][37] = 8;
        }
        
        for (int i = 44; i < 82; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 57; i < 77; i++){
            
            arr[44][i] = 8;
            
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
    }
    
    //테니스장 학생회관 
    if ((27 == dest) && (24 == start)){
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        
        for (int i = 88; i < 116; i++){
            arr[i][37] = 8;
        }
        arr[87][37] = 8;
        arr[87][36] = 8;
        
    }
    if ((24 == dest) && (27 == start)){
        for (int i = 29; i < 41; i++){
            arr[130][i] = 8;
        }
        
        for (int i = 115; i < 131; i++){
            arr[i][40] = 8;
            
        }
        
        arr[115][39] = 8;
        arr[115][38] = 8;
        
        for (int i = 88; i < 116; i++){
            arr[i][37] = 8;
        }
        arr[87][37] = 8;
        arr[87][36] = 8;
        
    }
    //농구장 창의관
    if ((26 == start) && (25 == dest)){
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
        
        for (int i = 72; i < 78; i++){
            arr[44][i] = 8;
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
    }
    if ((25 == start) && (26 == dest)){
        
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
        
        for (int i = 72; i < 78; i++){
            arr[44][i] = 8;
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
    }
    
    //창의관 학생회관
    if ((27 == start) && (26 == dest)){
        
        arr[85][36] = 8;
        for (int i = 58; i < 86; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        for (int i = 56; i < 78; i++){
            arr[44][i] = 8;
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
    }
    if ((26 == start) && (27 == dest)){
        
        arr[85][36] = 8;
        for (int i = 58; i < 86; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        for (int i = 25; i < 45; i++){
            
            arr[i][77] = 8;
            
        }
        for (int i = 56; i < 78; i++){
            arr[44][i] = 8;
        }
        arr[25][78] = 8;
        arr[25][79] = 8;
        arr[25][80] = 8;
    }
    //농구장 학생회관
    
    if ((25 == start) && (27 == dest)){
        
        
        arr[85][36] = 8;
        for (int i = 58; i < 86; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 56; i < 72; i++){
            arr[44][i] = 8;
        }
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
        
    }
    if ((27 == start) && (25 == dest)){
        
        
        arr[85][36] = 8;
        for (int i = 58; i < 86; i++){
            arr[i][37] = 8;
        }
        for (int i = 38; i < 57; i++){
            arr[58][i] = 8;
        }
        for (int i = 44; i < 59; i++){
            arr[i][56] = 8;
        }
        
        for (int i = 56; i < 72; i++){
            arr[44][i] = 8;
        }
        arr[44][71] = 8;
        arr[45][71] = 8;
        arr[46][71] = 8;
        
    }
    //_______________________________________________________________________________________________________//
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    //도구
    for (int i = 0; i < 151; ++i){
        for (int j = 0; j < 101; ++j){
            if (arr[i][j] == 0) cout << "□";
            else if (arr[i][j] == 1) cout << "■";
            else if (arr[i][j] == 2) cout << "★";
            else if (arr[i][j] == 3) cout << "●";
            else if (arr[i][j] == 4) cout << "▒";
            else if (arr[i][j] == 5) cout << "▦";
            else if (arr[i][j] == 6) cout << "▤";
            else if (arr[i][j] == 7) cout << "◆";
            else if (arr[i][j] == 8) cout << "◈";
        }
        cout << "\n";
        
    }
    
    cout << "특수 부호 정보\n";
    cout << "■ : 경계, 건물, ";
    cout << "● : 출입문, ";
    cout << "▤ : 계단, ";
    cout << "▒ : 분수대, ";
    cout << "▦: 운동장\n";
    cout << "★: 출발지점\n";
    cout << "◆: 도착지점\n";
    cout << "◈: 가는 방법\n";
}
