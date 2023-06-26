//#define _CRT_SECURE_NO_WARNINGS // _getch 사용을 위함
//
//#include <stdio.h>
//#include <windows.h> // COORD 자료형, CONSOLE_CURSOR_INFO 구조체 포인터 등을 사용하기 위한 헤더 파일
//#include <conio.h> // _getch(), _kbhit() 함수 사용을 위한 헤더 파일
//#include <time.h> // 난수 매번 랜덤으로 생성 위한 헤더 파일
//#include <stdlib.h> // 난수 생성, system() 함수 등을 사용하기 위한 헤더 파일
//
//
//
//// #define => 매크로 함수. 일반 함수와는 달리 단순 치환만
//// #define (매크로 함수 이름) (매크로 함수 기능)
//
//// 키보드값 지정 매크로 함수(뒤의 숫자는 아스키코드값)
//// 자주 쓰는 값들을 이해하고, 작성하기 쉽게 선언해 주는 것
//#define LEFT 75 // 좌로 이동    
//#define RIGHT 77 // 우로 이동 
//#define UP 72 // 회전 
//#define DOWN 80 // soft drop
//#define SPACE 32 // hard drop
//#define p 112 // 일시정지 
//#define P 80 // 일시정지
//#define ESC 27 // 게임 종료 
//
//#define false 0
//#define true 1
//
//
//// 블럭 및 게임판 관련 매크로 함수
//#define ACTIVE_BLOCK -2  // 게임판 배열에 저장될 블럭의 상태들 
//#define CEILLING -1      // 블럭이 이동할 수 있는 공간은 0 또는 음수로 표현 
//#define EMPTY 0          
//#define WALL 1           // 블럭이 이동할 수 없는 공간은 양수로 표현
//#define INACTIVE_BLOCK 2 // 이동이 완료된 블럭값 
//
//#define MAIN_X 11    // 게임판 가로 크기 
//#define MAIN_Y 23    // 게임판 세로 크기 
//#define MAIN_X_ADJ 3 // 게임판 가로 위치 조정 
//#define MAIN_Y_ADJ 1 // 게임판 세로 위치 조정 
//
//#define STATUS_X_ADJ (MAIN_X_ADJ+MAIN_X+1) // 게임 정보 표시 위치 조정 
//
//
//
//// 사용할 전역변수 선언
//int STATUS_Y_GOAL;  // GOAL  정보 표시 위치Y 좌표 저장 
//int STATUS_Y_LEVEL; // LEVEL 정보 표시 위치Y 좌표 저장
//int STATUS_Y_SCORE; // SCORE 정보 표시 위치Y 좌표 저장
//
//
//int blocks[7][4][4][4] = {
//    { // 1) T모양 블럭
//        {
//            {0,0,0,0},
//            {0,1,0,0},
//            {1,1,1,0},
//            {0,0,0,0}
//        },
//        {
//            {0,0,0,0},
//            {0,1,0,0},
//            {0,1,1,0},
//            {0,1,0,0}
//        },
//        {
//            {0,0,0,0},
//            {0,0,0,0},
//            {1,1,1,0},
//            {0,1,0,0}
//        },
//        {
//            {0,0,0,0},
//            {0,1,0,0},
//            {1,1,0,0},
//            {0,1,0,0}
//        }
//    },
//    {    // 2) 번개 블럭
//        {
//            {0,0,0,0},
//            {0,1,1,0},
//            {1,1,0,0},
//            {0,0,0,0}
//        },
//        {
//            {0,0,0,0},
//            {1,0,0,0},
//            {1,1,0,0},
//            {0,1,0,0}
//        },
//        {
//            {0,0,0,0},
//            {0,1,1,0},
//            {1,1,0,0},
//            {0,0,0,0}
//        },
//        {
//            {0,0,0,0},
//            {1,0,0,0},
//            {1,1,0,0},
//            {0,1,0,0}
//        }
//    },
//    {   // 3) 번개 블럭 반대
//        {
//            {0,0,0,0},
//            {1,1,0,0},
//            {0,1,1,0},
//            {0,0,0,0}
//        },
//        {
//            {0,0,0,0},
//            {0,1,0,0},
//            {1,1,0,0},
//            {1,0,0,0}
//        },
//        {
//            {0,0,0,0},
//            {1,1,0,0},
//            {0,1,1,0},
//            {0,0,0,0}
//        },
//        {
//            {0,0,0,0},
//            {0,1,0,0},
//            {1,1,0,0},
//            {1,0,0,0}
//        }
//    },
//    {   // 4) 1자형 블럭
//        {
//            {0,1,0,0},
//            {0,1,0,0},
//            {0,1,0,0},
//            {0,1,0,0}
//        },
//        {
//            {0,0,0,0},
//            {0,0,0,0},
//            {1,1,1,1},
//            {0,0,0,0}
//        },
//        {
//            {0,1,0,0},
//            {0,1,0,0},
//            {0,1,0,0},
//            {0,1,0,0}
//        },
//        {
//            {0,0,0,0},
//            {0,0,0,0},
//            {1,1,1,1},
//            {0,0,0,0}
//        }
//    },
//    {   // 5) L자형 블럭
//        {
//            {0,0,0,0},
//            {1,0,0,0},
//            {1,1,1,0},
//            {0,0,0,0}
//        },
//        {
//            {0,0,0,0},
//            {1,1,0,0},
//            {1,0,0,0},
//            {1,0,0,0}
//        },
//        {
//            {0,0,0,0},
//            {1,1,1,0},
//            {0,0,1,0},
//            {0,0,0,0}
//        },
//        {
//            {0,1,0,0},
//            {0,1,0,0},
//            {1,1,0,0},
//            {0,0,0,0}
//        }
//    },
//    {   // 6) L자형 블럭 반대
//        {
//            {0,0,0,0},
//            {0,0,1,0},
//            {1,1,1,0},
//            {0,0,0,0}
//        },
//        {
//            {1,0,0,0},
//            {1,0,0,0},
//            {1,1,0,0},
//            {0,0,0,0}
//        },
//        {
//            {0,0,0,0},
//            {1,1,1,0},
//            {1,0,0,0},
//            {0,0,0,0}
//        },
//        {
//            {0,0,0,0},
//            {1,1,0,0},
//            {0,1,0,0},
//            {0,1,0,0}
//        }
//    },
//    {   // 7) 네모 블럭
//        {
//            {0,0,0,0},
//            {0,1,1,0},
//            {0,1,1,0},
//            {0,0,0,0}
//        },
//        {
//            {0,0,0,0},
//            {0,1,1,0},
//            {0,1,1,0},
//            {0,0,0,0}
//        },
//        {
//            {0,0,0,0},
//            {0,1,1,0},
//            {0,1,1,0},
//            {0,0,0,0}
//        },
//        {
//            {0,0,0,0},
//            {0,1,1,0},
//            {0,1,1,0},
//            {0,0,0,0}
//        }
//    }
//}; // 블럭모양 저장 4*4공간에 블럭을 표현 blcoks[b_type][b_rotation][i][j]로 사용 
//
//
//// 블럭 관련 전역변수 선언.
//int b_type;      // 블럭 종류 저장 
//int b_rotation;  // 블럭 회전값 저장 
//int b_type_next; // 다음 블럭값 저장 
//
//
//// 게임판 전역변수 선언
//// #define MAIN_X 11    // 게임판 가로 크기 
//// #define MAIN_Y 23    // 게임판 세로 크기 
//int main_org[MAIN_Y][MAIN_X]; // 게임판의 정보(블럭이 쌓인 상태)를 저장하는 배열. 모니터에 표시 후 main_cpy로 복사함
//int main_cpy[MAIN_Y][MAIN_X]; // 즉, main_cpy는 게임판이 모니터에 표시되기 전의 정보를 가지고 있음
//// main의 전체를 계속 모니터에 표시하지 않고, (이렇게 하면 계속 전체 콘솔 화면이 깜빡거림) 
//// main_cpy와 main_org의 배열을 비교해서 값이 달라진 곳만 모니터에 고치기 위해 두 개로 선언
//
//
//// flag 전역변수 선언
//int new_block_on = 0; // 새로운 블럭이 필요함을 알리는 flag 
//int crush_on = 0; // 현재 이동 중인 블럭이 충돌 상태인지 알려 주는 flag 
//int level_up_on = 0; // 다음 레벨로 진행(현재 레벨 목표가 완료되었음을) 알리는 flag 
//int space_key_on = 0; // hard drop(빨리 떨어지는 기능) 상태임을 알려 주는 flag 
//
//
//// 이외 게임 진행 시 필요한 전역변수 선언
//int bx, by; // 이동 중인 블럭의 게임판 상의 x, y좌표를 저장
//
//int key; // 키보드로 입력(_getch()) 받은 키값을 저장
//
//int speed; // 게임 진행 속도 
//int level; // 현재 level 
//int level_goal; // 다음 레벨로 넘어가기 위한 목표 점수 
//int cnt; // 현재 레벨에서 제거한 줄 수를 저장 
//int score; // 현재 점수 
//int last_score = 0; // 마지막 게임 점수 선언 및 초기화
//int best_score = 0; // 최고 게임 점수 선언 및 초기화
//
//
//// 게임 실행 관련 사용자 지정 함수
//void title(void); // 게임 시작 화면
//void reset(void); // 게임판 초기화 
//void reset_main(void); // 메인 게임판(main_org[][]를 초기화)
//void reset_main_cpy(void); // copy 게임판(main_cpy[][]를 초기화)
//void draw_map(void); // 게임 전체 인터페이스 
//void draw_main(void); // 게임판을 그림 
//void new_block(void); // 새로운 블럭을 하나 만듦 
//void stop_block(void); // 게임 오버 시 블록 생성 멈춤
//void check_key(void); // 키보드로 키를 입력 받음 
//void drop_block(void); // 블럭을 아래로 떨어뜨림 
//int check_crush(int bx, int by, int rotation); // bx, by 위치에 rotation 회전값을 갖는 경우 충돌 판단 
//void move_block(int dir); // dir(해당 함수의 매개변수) 방향으로 블럭을 움직임 
//void check_line(void); // 줄이 가득 찼는지를 판단하고 지움 
//void check_level_up(void); // 레벨 목표가 달성되었는지를 판단하고 level up 시킴 
//void check_game_over(void); // 게임 오버인지 판단하고 게임 오버를 진행 
//void pause(void); // 게임을 일시 정지시킴 
//
//
//
//void gotoxy(int x, int y) { // gotoxy 함수: 콘솔창의 어디서부터 출력할지 결정하는 함수
//    COORD pos = { 2 * x, y };
//    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//}
//// setconxolecursorposition(콘솔창 핸들, 좌표); => 커서의 위치를 이동시키는 함수
//// getstdhandle(콘솔의 번호)로 콘솔창의 핸들 알 수 있음
//// std_output_handle => 표준 콘솔 출력의 핸들을 반환함
//// 사용 예) gotoxy(10, 5); => 콘솔의 커서를 좌표(10, 5)로 이동
//
//
//
//typedef enum { NOCURSOR, SOLIDCURSOR, NORMALCURSOR } CURSOR_TYPE;
//// 커서 숨기는 함수에 사용되는 열거형 enum 타입
//// typedef는 타입의 별칭을 생성하고, 실제 타입 이름 대신 별칭을 사용할 수 있게 함
//// typedef enum { 명시적 타입 열거 } 별칭;
//
//void setcursortype(CURSOR_TYPE c) { // 커서 숨기는 함수 
//    // 함수의 인자로 1이 전달되면 커서가 나타남
//
//    CONSOLE_CURSOR_INFO CurInfo;
//    // CONSOLE_CURSOR_INFO => 구조체 포인터.
//
//    switch (c) {
//    case NOCURSOR:
//        CurInfo.dwSize = 1; // 커서 굵기 (1 ~ 100)
//        CurInfo.bVisible = FALSE; // 커서 Visible TRUE(보임), FALSE(숨김)
//        break;
//    case SOLIDCURSOR:
//        CurInfo.dwSize = 100;
//        CurInfo.bVisible = TRUE;
//        break;
//    case NORMALCURSOR:
//        CurInfo.dwSize = 20;
//        CurInfo.bVisible = TRUE;
//        break;
//    }
//
//    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &CurInfo);
//    // SetConsoleCursorInfo => 지정된 콘솔 스크린 버퍼에 대하여 커서의 형태 (두께 or 노출 여부) 설정
//    // SetConsoleCursorInfo(표준 출력 핸들, CONSOR_CURSOR_INFO 구조체)
//    // GetStdHandle(STD_OUTPUT_HANDLE) => 표준 출력 핸들을 가지고 오고,
//    // CONSOR_CURSOR_INFO 구조체 포인터의 curinfo 주소(0) 가져와서 안 보이게 하겠다는 것
//}
//
//
//
//// 게임에서 사용될 숫자 관련 함수
//int main() {
//    int i;
//
//    srand((unsigned)time(NULL)); // 난수표 생성 (마이너스 없이)
//    setcursortype(NOCURSOR); // 커서 없앰 
//    title(); // 메인 타이틀 화면 호출
//    reset(); // 게임판 리셋
//
//    while (1) {
//        for (i = 0; i < 5; i++) { // 블럭이 한 칸 떨어지는 동안 5번 키 입력 가능
//            check_key(); // 키 입력 확인 
//            draw_main(); // 게임판 화면을 그림 
//            Sleep(speed); // 게임 속도 조절(레벨별로)
//
//            if (crush_on && check_crush(bx, by + 1, b_rotation) == false) 
//                // 아래로 내려갈 수는 없지만 회전시켜서 x축 방향으로는 옮길 수 있는 경우
//                // crush_on: 아래로 이동 불가 시 0에서 1로 변경시킴
//                // check_crush(bx, by + 1, b_rotation) == false: 현재 위치에서 y축+1 아래 좌표 위치에서 내려오는 블록과 비교했을 때 내려갈 수는 없음
//                Sleep(100);
//            // 블럭이 충돌 중인 경우 추가로 이동 및 회전할 시간을 가짐
//
//            if (space_key_on == 1) { 
//            // 스페이스바를 누른 경우(hard drop) 추가로 이동 및 회전할 수 없음 break; 
//                space_key_on = 0;
//                break;
//            }
//        }
//
//        drop_block(); // 블럭을 한칸 내림 
//        check_level_up(); // 레벨 업을 체크 
//        check_game_over(); // 게임 오버를 체크 
//
//        if (new_block_on == 1) 
//            new_block(); // 뉴 블럭 flag가 있는 경우 새로운 블럭 생성 
//    }
//}
//
//
//
//// 게임 시작 타이틀 화면 생성 및 게임판으로 넘어가는 함수
//void title(void) {
//    int x = 5; // 타이틀 화면이 표시되는 x좌표 
//    int y = 4; // 타이틀 화면이 표시되는 y좌표 
//    int cnt; // 타이틀 프레임을 세는 변수  
//
//    // gotoxy 함수를 이용해서 어디부터 어떤 모양의 타이틀 화면 출력할지 
//    // Sleep(100); => // 0.1초씩 딜레이 하면서 출력
//    gotoxy(x, y + 0); printf("■□ □□■■■□■□□ ■■□□■■"); Sleep(100); 
//    gotoxy(x, y + 1); printf("■■■□ ■□□  ■■□■□  □■"); Sleep(100);
//    gotoxy(x, y + 2); printf("□□■             □■■"); Sleep(100);
//    gotoxy(x, y + 3); printf("■■□■■  □ ■ □■□ □■□□"); Sleep(100);
//    gotoxy(x, y + 4); printf("■■ ■□□■□□■  ■■□■■□□"); Sleep(100);
//    gotoxy(x, y + 2); printf("□□■ T E T R I S □■■"); Sleep(100);
//    gotoxy(x, y + 7); printf("Please Enter Any Key to Start..");
//    gotoxy(x, y + 9); printf("  △   : Shift");
//    gotoxy(x, y + 10); printf("◁  ▷ : Left / Right");
//    gotoxy(x, y + 11); printf("  ▽   : Soft Drop");
//    gotoxy(x, y + 12); printf(" SPACE : Hard Drop");
//    gotoxy(x, y + 13); printf("   P   : Pause");
//    gotoxy(x, y + 14); printf("  ESC  : Quit");
//    gotoxy(x, y + 16); printf("BONUS FOR HARD DROPS / COMBOS");
//
//    // 아직 활용 안 한 cnt를 1씩 증가시키면서 계속 반복(조건식 없으니 무한 루프)     
//    for (cnt = 0 ; ; cnt++) { 
//        if (_kbhit()) 
//            break; // 키 입력이 있으면 무한 루프 종료 후 게임판 생성으로 넘어감
//    }
//
//    // 키보드 눌렀다면 true, 안 눌렀다면 false
//    // _kbhit() 함수는 입력 들어올 때까지 대기하다가 입력 있으면 반복문 들어감
//    while (_kbhit()) 
//        _getch(); // 키 값을 입력 받고 바로 실행하고 버퍼 바로 비움
//}
//
//
//
//// 게임판 초기화 함수
//void reset(void) {
//    FILE* file = fopen("score.dat", "rt"); 
//    // score.dat파일을 연결,  rt는 해당 파일의 텍스트 데이터를 읽기 위한 스트림 
//    
//    if (file == 0) {
//        best_score = 0; 
//    } // 파일이 없으면 최고점수에 0을 넣음 
//    
//    else {
//        fscanf(file, "%d", &best_score); 
//        fclose(file); // 파일 닫음
//    } // 파일이 열리면 최고점수를 불러옴 
//
//    // 각종변수 초기화
//    level = 1;  
//    score = 0;
//    level_goal = 1000;
//    key = 0;
//    crush_on = 0;
//    cnt = 0;
//    speed = 100;
//
//    system("cls"); // system() 함수 활용해 화면 지움. cls => clean screen의 약자 
//    reset_main(); // main_org를 초기화 
//    draw_map(); // 게임화면을 그림
//    draw_main(); // 게임판을 그림 
//
//    b_type_next = rand() % 7;
//    // 다음번에 나올 블럭 종류를 랜덤하게 생성.
//    // % 7을 이용해 0~6까지 블럭 중 랜덤 값이 나오도록.
//
//    new_block(); //새로운 블럭을 하나 만듦  
//}
//
//
//
//// 메인 게임판 초기화하는 함수(main_org[][]를 초기화)
//void reset_main(void) {
//    int i, j;
//
//    // 게임판을 0으로 초기화
//    for (i = 0; i < MAIN_Y; i++) {     // for(0부터 ; 게임판 세로 크기까지 ; +1씩 증가)
//        for (j = 0; j < MAIN_X; j++) { // for(0부터 ; 게임판 가로 크기까지 ; +1씩 증가)
//            main_org[i][j] = 0;
//            main_cpy[i][j] = 100; 
//            // main_org와 main_cpy 비교해야 해서 다르게 선언
//        }
//    }
//
//    // y값이 3인 위치에 천장 만들어질 값 대입
//    // for(왼쪽 벽[0] 제외한 [1]부터 ; 벽 제외 게임판 가로 크기까지 ; +1씩 증가)
//    for (j = 1; j < MAIN_X; j++) {  // for(
//        main_org[3][j] = CEILLING; 
//        // #define CEILLING - 1 (블럭 이동 가능 공간은 0 또는 음수)
//    }
//
//    // 좌우 벽 만들어질 값 대입
//    // for(세로 크기에서 [1]부터 ; 바닥 제외(-1) 아래까지 ; +1씩 증가)
//    for (i = 1; i < MAIN_Y - 1; i++) { 
//        main_org[i][0] = WALL;
//        main_org[i][MAIN_X - 1] = WALL; 
//        // #define WALL 1
//    }
//
//    // 바닥 만들어질 값 대입 
//    // for(0부터 ; 게임판 가로 크기까지 ; +1씩 증가)
//    for (j = 0; j < MAIN_X; j++) { 
//        main_org[MAIN_Y - 1][j] = WALL;
//    }
//}
//
//
//
//// copy 게임판(main_cpy[][]를 초기화)
//void reset_main_cpy(void) { 
//    int i, j;
//
//    // 게임에 사용되지 않는 숫자를 넣음 
//    for (i = 0; i < MAIN_Y; i++) {     // for(0부터 ; 게임판 세로 크기까지 ; +1씩 증가)
//        for (j = 0; j < MAIN_X; j++) { // for(0부터 ; 게임판 가로 크기까지 ; +1씩 증가)  
//            main_cpy[i][j] = 100;
//            // main_org와 같은 숫자가 없게 하기 위함
//        }
//    }
//}
//
//
//
//// 게임 전체 인터페이스, 게임 상태 표시 나타내는 함수
//void draw_map(void) {  
//    int y = 3;             
//    // level, goal, score만 게임 중에 값이 바뀌면 자릿수가 달라질 수 있으니 그 y값을 따로 저장해 둠
//    // 혹시 게임 상태 표시 위치가 바뀌어도 그 함수에서 따로 안 바꿔도 되게 함
//
//
//    // #define STATUS_X_ADJ (MAIN_X_ADJ+MAIN_X+1) 게임 정보 표시 위치조정
//    // #define MAIN_X_ADJ 3 게임판 가로 위치 조정 
//    // int STATUS_Y_GOAL;  GOAL  정보 표시 위치Y 좌표 저장 
//    // int STATUS_Y_LEVEL; LEVEL 정보 표시 위치Y 좌표 저장
//    // int STATUS_Y_SCORE; SCORE 정보 표시 위치Y 좌표 저장
//    
//    gotoxy(STATUS_X_ADJ, STATUS_Y_LEVEL = y); printf(" LEVEL : %5d", level);
//    gotoxy(STATUS_X_ADJ, STATUS_Y_GOAL = y + 1); printf(" GOAL  : %5d", 10 - cnt); // int cnt; 현재 레벨에서 제거한 줄 수를 저장 
//    gotoxy(STATUS_X_ADJ, y + 2); printf("+-  N E X T  -+ ");
//    gotoxy(STATUS_X_ADJ, y + 3); printf("|             | ");
//    gotoxy(STATUS_X_ADJ, y + 4); printf("|             | ");
//    gotoxy(STATUS_X_ADJ, y + 5); printf("|             | ");
//    gotoxy(STATUS_X_ADJ, y + 6); printf("|             | ");
//    gotoxy(STATUS_X_ADJ, y + 7); printf("+-------------+ ");
//    gotoxy(STATUS_X_ADJ, y + 8); printf(" YOUR SCORE :");
//    gotoxy(STATUS_X_ADJ, STATUS_Y_SCORE = y + 9); printf("        %6d", score);
//    gotoxy(STATUS_X_ADJ, y + 10); printf(" LAST SCORE :");
//    gotoxy(STATUS_X_ADJ, y + 11); printf("        %6d", last_score);
//    gotoxy(STATUS_X_ADJ, y + 12); printf(" BEST SCORE :");
//    gotoxy(STATUS_X_ADJ, y + 13); printf("        %6d", best_score);
//    gotoxy(STATUS_X_ADJ, y + 15); printf("  △   : Shift        SPACE : Hard Drop");
//    gotoxy(STATUS_X_ADJ, y + 16); printf("◁  ▷ : Left / Right   P   : Pause");
//    gotoxy(STATUS_X_ADJ, y + 17); printf("  ▽   : Soft Drop     ESC  : Quit");
//}
//
//
//
//// 게임판 그리는 함수
//void draw_main(void) { 
//    int i, j;
//
//    // 천장은 계속 새로운 블럭이 지나가서 지워지면 새로 그려 줌
//    for (j = 1; j < MAIN_X - 1; j++) {  // for(왼쪽 벽[0] 제외한 [1]부터 ; 벽 제외 게임판 가로 크기까지 ; +1씩 증가)
//        if (main_org[3][j] == EMPTY) 
//            main_org[3][j] = CEILLING;
//    }
//
//    for (i = 0; i < MAIN_Y; i++) {      // for(0부터 ; 게임판 세로 크기까지 ; +1씩 증가)
//        for (j = 0; j < MAIN_X; j++) {  // for(0부터 ; 게임판 가로 크기까지 ; +1씩 증가)
//            if (main_cpy[i][j] != main_org[i][j]) { 
//                // cpy랑 비교해서 값이 달라진 부분만 새로 그려 줌
//                // 위 코드가 없으면 게임판 전체를 계속 그려서 느려지고 반짝거림
//                
//                gotoxy(MAIN_X_ADJ + j, MAIN_Y_ADJ + i);
//
//                // switch문으로 해당 좌표의 값을 확인해서 모양 출력
//                switch (main_org[i][j]) { 
//                case EMPTY: // 비어있으면(EMPTY 0) 빈 칸 모양 출력
//                    printf("  ");
//                    break;
//                case CEILLING: // 천장(CELLING -1) 모양 출력
//                    printf(". ");
//                    break;
//                case WALL: // 벽(WALL 1) 모양 출력
//                    printf("▩");
//                    break;
//                case INACTIVE_BLOCK: // 바닥에 굳은 블럭(INACTIVE_BLOCK 2) 모양 출력
//                    printf("□");
//                    break;
//                case ACTIVE_BLOCK: // 움직이고 있는 블럭(ACTIVE_BLOCK -2) 모양 출력
//                    printf("■");
//                    break;
//                }
//            }
//        }
//    }
//
//    // 게임판을 그린 후 main_cpy에 복사
//    for (i = 0; i < MAIN_Y; i++) {     // for(0부터 ; 게임판 세로 크기까지 ; +1씩 증가)
//        for (j = 0; j < MAIN_X; j++) { // for(0부터 ; 게임판 가로 크기까지 ; +1씩 증가)
//            main_cpy[i][j] = main_org[i][j];
//        }
//    }
//}
//
//
//
//// 새로운 블럭 생성하는 함수
//void new_block(void) { 
//    int i, j;
//
//    bx = (MAIN_X / 2) - 1; // 블럭 생성 위치 x좌표(게임판의 중앙(그래서 게임판 가로 크기/2) 
//    by = 0;  // 블럭 생성위치 y좌표(제일 위)
//    b_type = b_type_next; // 다음 블럭값을 가져와서 지금 블럭으로 씀
//    b_type_next = rand() % 7; // 다음 블럭을 새로 만들어 둠 
//    b_rotation = 0;  // 회전은 0번으로 가져와야 기본 형태이기 때문에 0으로 초기화
//
//    new_block_on = 0; // new_block flag를 끔
//
//    for (i = 0; i < 4; i++) { // 게임판 bx, by 위치에 블럭 생성
//        for (j = 0; j < 4; j++) { // 블럭 [4][4]라서 i = 0; i < 4; i++
//            if (blocks[b_type][b_rotation][i][j] == 1) // 블럭[종류][회전값][4][4]
//                main_org[by + i][bx + j] = ACTIVE_BLOCK;
//                // 메인 게임판 좌표에 움직이고 있는 블럭(ACTIVE_BLOCK -2) printf("■");
//        }
//    }
//
//    for (i = 1; i < 3; i++) { // 게임 상태 표시에 다음 블럭을 그림 
//        for (j = 0; j < 4; j++) {
//            if (blocks[b_type_next][0][i][j] == 1) { 
//                // 블럭 배열 중 1에 해당하는 위치에 블럭 모양 출력
//
//                gotoxy((STATUS_X_ADJ + 2 + j), i + 6);
//                // #define STATUS_X_ADJ (MAIN_X_ADJ+MAIN_X+1) 게임 정보 표시 위치조정
//                // #define MAIN_X_ADJ 3 게임판 가로 위치 조정
//
//                printf("■");
//            }
//
//            else {
//                gotoxy((STATUS_X_ADJ + 2 + j), i + 6);
//                printf("  ");
//            }
//        }
//    }
//}
//
//
//// 게임 오버 시 블록 그만 만드는 함수
//void stop_block(void) {
//    new_block_on = 0; // new_block flag를 끔
//};
//
//
//// 키보드로 키를 입력 받는 함수
//void check_key(void) {
//    key = 0; // 키값 초기화  
//
//    if (_kbhit()) { // 키 입력이 있는 경우  
//
//        key = _getch(); // 키값을 받음
//
//
//        // 키보드값 지정 매크로 함수
//        // #define LEFT 75 // 좌로 이동    
//        // #define RIGHT 77 // 우로 이동 
//        // #define UP 72 // 회전 
//        // #define DOWN 80 // soft drop
//
//        // ↑: 224, 72
//        // ↓ : 224, 80
//        // ← : 224, 75
//        // → : 224, 77
//
//        // 방향키인 경우
//        if (key == 224) {  
//            do {
//                key = _getch();
//            } while (key == 224);
//            // 방향키 지시값 버리고 switch문 해당되는 key 변수에 저장
//
//            switch (key) {
//            case LEFT: // 왼쪽 방향키 
//                if (check_crush(bx - 1, by, b_rotation) == true) 
//                    move_block(LEFT);
//                // 갈 수 있는지 체크 후 가능하면 이동
//                break;
//
//            case RIGHT: // 오른쪽 방향키 
//                if (check_crush(bx + 1, by, b_rotation) == true) 
//                    move_block(RIGHT);
//                break;
//
//            case DOWN: // 아래쪽 방향키
//                if (check_crush(bx, by + 1, b_rotation) == true) 
//                    move_block(DOWN);
//                break;
//
//            case UP: // 위쪽 방향키
//                if (check_crush(bx, by, (b_rotation + 1) % 4) == true) 
//                    move_block(UP);
//                    // 회전할 수 있는지 체크 후 가능하면 회전
//                else if (crush_on == 1 && check_crush(bx, by - 1, (b_rotation + 1) % 4) == true) 
//                    // crush_on이 켜져 있고, 회전 가능하면 특수 동작 실행해야 함
//                    // 이는 바닥에 닿은 경우 위쪽으로 한 칸 띄워서 회전이 가능하면 실행한다는 뜻
//                    move_block(100); 
//            } 
//        } 
//
//
//        // #define SPACE 32 // hard drop
//        // #define p 112 // 일시정지 
//        // #define P 80 // 일시정지
//        // #define ESC 27 // 게임 종료 
//
//        // 방향키가 아닌 경우
//        else {  
//            switch (key) {
//            case SPACE: // 스페이스 키
//                space_key_on = 1; // 스페이스키 flag를 띄움 
//                while (crush_on == 0) { // 바닥에 닿을 때까지 한 번에 쭉 이동 
//                    drop_block();
//                    score += level; // hard drop 보너스
//                    gotoxy(STATUS_X_ADJ, STATUS_Y_SCORE); 
//                    printf("        %6d", score); // 점수 표시  
//                }
//                break;
//
//            case P: // P(대문자)
//            case p: // p(소문자) 
//                pause(); // 일시정지 
//                break;
//
//            case ESC: // ESC 눌렀을 때 
//                system("cls"); // 화면을 지우고 
//                exit(0); // 게임 종료 
//            }
//        }
//    }
//
//    // 키보드 눌렀다면 true, 안 눌렀다면 false
//    // _kbhit() 함수는 입력 들어올 때까지 대기하다가 입력 있으면 반복문 들어감
//    while (_kbhit())
//        _getch(); // 키 값을 입력 받고 바로 실행하고 버퍼 바로 비움
//}
//
//
//
//// 블럭을 아래로 떨어트리는 함수 
//void drop_block(void) {
//    int i, j;
//
//    // check_crush() => 지정된 위치의 게임판과 블럭 모양을 비교해서 겹치면 false
//   
//    // crush_on flag가 켜져 있고 밑이 비어있으면 crush flag 끔(밑으로 이동 불가했는데 회전시키고 가능한 경우)
//    if (crush_on && check_crush(bx, by + 1, b_rotation) == true) // 동등 연산자 우선, 다음에 논리 연산자
//        crush_on = 0; 
//
//    // crush_on flag가 켜져 있고 밑이 바닥이면 회전 불가
//    if (crush_on && check_crush(bx, by + 1, b_rotation) == false) { 
//        // 아래로 내려갈 수는 없지만 회전시켜서 x축 방향으로는 옮길 수 있는 경우
//        // crush_on: 아래로 이동 불가 시 0에서 1로 변경시킴
//        // check_crush(bx, by + 1, b_rotation) == false: 현재 위치에서 y축+1 아래 좌표 위치에서 내려오는 블록과 비교했을 때 내려갈 수는 없음
//
//        for (i = 0; i < MAIN_Y; i++) { // 현재 조작 중인 블럭을 굳혀야 함, for(0부터 ; 게임판 세로 크기까지 ; +1씩 증가)
//            for (j = 0; j < MAIN_X; j++) { // for(0부터 ; 게임판 가로 크기까지 ; +1씩 증가)
//                if (main_org[i][j] == ACTIVE_BLOCK) // 이동 중인 블럭일 때 
//                    main_org[i][j] = INACTIVE_BLOCK; // 굳은 블럭으로 만들기
//            }
//        }
//
//        crush_on = 0; // flag를 끔 
//        check_line(); // 라인 체크를 함 
//        new_block_on = 1; // 새로운 블럭 생성 flag를 켬    
//        return; // 함수 종료 
//    }
//
//    if (check_crush(bx, by + 1, b_rotation) == true) 
//        move_block(DOWN); // 밑이 비어있으면 블럭 밑으로 한 칸 이동 
//
//    if (check_crush(bx, by + 1, b_rotation) == false) 
//        crush_on++; // 밑으로 이동이 안 되면 crush flag를 켬(특수 동작 때 활용)
//}
//
//
//
//// 지정된 좌표 bx, by 위치에서 rotation 회전값을 갖는 경우 충돌 판단하는 함수
//int check_crush(int bx, int by, int b_rotation) { // 게임판 x, y좌표, 회전값
//    int i, j;
//
//    // 지정된 위치의 게임판과 블럭 모양을 비교해서 겹치면 false 리턴
//    // if(블럭 모양 1이면서 게임판 좌표 한 칸씩 확인했을 때 양수(블럭 이동 불가))
//    for (i = 0; i < 4; i++) {
//        for (j = 0; j < 4; j++) {  
//            if (blocks[b_type][b_rotation][i][j] == 1 && main_org[by + i][bx + j] > 0) 
//                return false;
//        }
//    }
//
//    return true; // 하나도 안 겹치면 true 리턴 
//};
//
//
//
//// 블럭 이동 함수
//// dir(해당 함수의 매개변수) 방향으로 블럭을 움직임 
//void move_block(int dir) { // 블럭을 이동시킴 
//    int i, j;
//
//    switch (dir) {
//    case LEFT: // 왼쪽 방향키 
//        // 현재 좌표의 블럭을 지움 
//        for (i = 0; i < 4; i++) { 
//            for (j = 0; j < 4; j++) {
//                if (blocks[b_type][b_rotation][i][j] == 1) 
//                    main_org[by + i][bx + j] = EMPTY;
//            }
//        }
//
//        // 왼쪽으로 한 칸 가서 active block 새로 찍음 
//        for (i = 0; i < 4; i++) { 
//            for (j = 0; j < 4; j++) {
//                if (blocks[b_type][b_rotation][i][j] == 1) 
//                    main_org[by + i][bx + j - 1] = ACTIVE_BLOCK;
//            }
//        }
//        bx--; // 좌표값 이동 
//        break;
//
//    case RIGHT:// 오른쪽 방향키
//        for (i = 0; i < 4; i++) {
//            for (j = 0; j < 4; j++) {
//                if (blocks[b_type][b_rotation][i][j] == 1) 
//                    main_org[by + i][bx + j] = EMPTY;
//            }
//        }
//
//        for (i = 0; i < 4; i++) {
//            for (j = 0; j < 4; j++) {
//                if (blocks[b_type][b_rotation][i][j] == 1) 
//                    main_org[by + i][bx + j + 1] = ACTIVE_BLOCK;
//            }
//        }
//        bx++;
//        break;
//
//    case DOWN: // 아래쪽 방향키
//        for (i = 0; i < 4; i++) {
//            for (j = 0; j < 4; j++) {
//                if (blocks[b_type][b_rotation][i][j] == 1) 
//                    main_org[by + i][bx + j] = EMPTY;
//            }
//        }
//
//        for (i = 0; i < 4; i++) {
//            for (j = 0; j < 4; j++) {
//                if (blocks[b_type][b_rotation][i][j] == 1) 
//                    main_org[by + i + 1][bx + j] = ACTIVE_BLOCK;
//            }
//        }
//        by++;
//        break;
//
//    case UP: // 위쪽 방향키
//        for (i = 0; i < 4; i++) { 
//            for (j = 0; j < 4; j++) {
//                if (blocks[b_type][b_rotation][i][j] == 1) 
//                    main_org[by + i][bx + j] = EMPTY;
//            }
//        }
//
//        b_rotation = (b_rotation + 1) % 4; 
//        // 회전값을 1 증가 시킴(3에서 4가 되는 경우는 0으로 되돌림) 
//        
//        for (i = 0; i < 4; i++) { // 회전된 블럭을 새로 찍음 
//            for (j = 0; j < 4; j++) {
//                if (blocks[b_type][b_rotation][i][j] == 1) 
//                    main_org[by + i][bx + j] = ACTIVE_BLOCK;
//            }
//        }
//        break;
//
//    case 100: // 블럭이 바닥, 혹은 다른 블럭과 닿은 상태에서 한 칸 위로 올려 회전 가능한 경우 
//        // 이를 동작시키는 특수 동작  
//        for (i = 0; i < 4; i++) {
//            for (j = 0; j < 4; j++) {
//                if (blocks[b_type][b_rotation][i][j] == 1) 
//                    main_org[by + i][bx + j] = EMPTY;
//            }
//        }
//
//        b_rotation = (b_rotation + 1) % 4;
//
//        for (i = 0; i < 4; i++) {
//            for (j = 0; j < 4; j++) {
//                if (blocks[b_type][b_rotation][i][j] == 1) 
//                    main_org[by + i - 1][bx + j] = ACTIVE_BLOCK;
//            }
//        }
//        by--;
//        break;
//    }
//}
//
//
//
//// 줄이 가득 찼는지 판단하고 지우는 함수
//void check_line(void) {
//    int i, j, k, l;
//
//    int block_amount; // 한 줄의 블럭 갯수를 저장하는 변수 
//    int combo = 0; // 콤보 갯수 저장하는 변수 선언 및 초기화 
//
//    // for(바닥의 바로 윗줄에서부터(게임판 세로 크기 - 바닥&천장) ; 천장(3) 아래까지 검사 ; )
//    for (i = MAIN_Y - 2; i > 3;) {
//        block_amount = 0; // 블럭 갯수 저장 변수 초기화 
//
//        // 왼쪽 벽과 오른쪽 벽 사이의 블럭 갯수를 셈 
//        for (j = 1; j < MAIN_X - 1; j++) { 
//            if (main_org[i][j] > 0) // 해당 좌표의 값이 양수면 블럭 이동 불가, 이미 블럭이 있는 것
//                block_amount++; // 블럭 갯수 +1
//        }
//
//        // 블럭이 한 줄 가득 찬 경우 (MAIN_X - 2 = 양쪽 벽 제외 빈 공간의 크기)
//        if (block_amount == MAIN_X - 2) {  
//            if (level_up_on == 0) { // 레벨 업 상태가 아닌 경우는 (레벨 업이 되면 자동 줄 삭제가 있음) 
//                score += 100 * level; // 점수 추가 
//                cnt++; // 지운 줄 갯수 카운트 증가 
//                combo++; // 콤보 수 증가  
//            }
//
//            // 윗줄을 한 칸씩 모두 내림 (윗줄이 천장이 아닌 경우에만) 
//            for (k = i; k > 1; k--) {
//                for (l = 1; l < MAIN_X - 1; l++) {
//                    if (main_org[k - 1][l] != CEILLING) // 해당 좌표의 값이 천장이 아니면
//                        main_org[k][l] = main_org[k - 1][l]; // k줄에 k-1(바로 위)줄 내려오게 함.
//
//                    if (main_org[k - 1][l] == CEILLING) // 해당 좌표의 값이 천장이면
//                        main_org[k][l] = EMPTY;
//                         // 윗줄이 천장인 경우에는 천장을 내리면 안 되니까 빈 줄 넣음 
//                }
//            }
//        }
//
//        else i--;
//    }
//
//    // 줄 삭제가 있는 경우 점수와 레벨 목표를 새로 표시함  
//    if (combo) { 
//        if (combo > 1) { // 2 콤보 이상인 경우 경우 보너스 및 메세지를 게임판에 띄웠다가 지움 
//
//            gotoxy(MAIN_X_ADJ + (MAIN_X / 2) - 1, MAIN_Y_ADJ + by - 2); 
//            printf("%d COMBO!", combo);
//            // 게임판 가로 크기 조정 + (게임판 가로 크기 중간 위치), 게임판 세로 크기 조정 + 이동 중인 블럭의 게임판 위 y좌표 - 바닥&천장
//            Sleep(500); // 0.5초 딜레이
//            printf("         ");
//
//            score += (combo * level * 100);
//            reset_main_cpy(); // 텍스트를 지우기 위해 main_cpy을 초기화.
//            // (main_cpy와 main_org가 전부 다르므로 다음 draw() 호출 시 게임판 전체를 새로 그리게 됨) 
//        }
//
//        // 진행 중인 게임의 목표 출력
//        gotoxy(STATUS_X_ADJ, STATUS_Y_GOAL); 
//        printf(" GOAL  : %5d", (cnt <= 10) ? 10 - cnt : 0); 
//        // 삼항연산자 => 참/거짓 판단 변수 ? 참일 때 사용할 값 : 거짓일 때 사용할 값;
//        // 제거한 줄이 10줄 이하인가 ? 참이면 목표를 10 - cnt로 : 거짓이면 목표를 0으로
//
//        // 진행 중인 게임의 점수 출력
//        gotoxy(STATUS_X_ADJ, STATUS_Y_SCORE); 
//        printf("        %6d", score); 
//    }
//}
//
//
//
//// 레벨 목표 달성 여부 판단하고 레벨 업 시키는 함수
//void check_level_up(void) {
//    int i, j;
//
//    if (cnt >= 10) { // 레벨 별로 10줄씩 없애야 함. 10줄 이상 없앤 경우 
//        draw_main();
//        level_up_on = 1; // 레벨 업 flag를 띄움 
//        level += 1; // 레벨을 1 올림 
//        cnt = 0; // 지운 줄수 초기화   
//
//        for (i = 0; i < 4; i++) { // 반복문 이용해 깜빡이는 효과
//            // 게임판 내부에 글자 출력하기 위한 코드
//            gotoxy(MAIN_X_ADJ + (MAIN_X / 2) - 3, MAIN_Y_ADJ + 4);
//            printf("             ");
//            gotoxy(MAIN_X_ADJ + (MAIN_X / 2) - 2, MAIN_Y_ADJ + 6);
//            printf("             ");
//            Sleep(200);
//
//            // 공백 출력했다가 그 위에 문자 다시 출력
//            gotoxy(MAIN_X_ADJ + (MAIN_X / 2) - 3, MAIN_Y_ADJ + 4);
//            printf("☆LEVEL UP!☆");
//            gotoxy(MAIN_X_ADJ + (MAIN_X / 2) - 2, MAIN_Y_ADJ + 6);
//            printf("☆SPEED UP!☆");
//            Sleep(200);
//        }
//
//        reset_main_cpy(); // 텍스트를 지우기 위해 main_cpy을 초기화
//        // (main_cpy와 main_org가 전부 다르므로 다음번 draw() 호출 시 게임판 전체를 새로 그리게 됨) 
//
//        // 레벨 업 보상으로 각 레벨 - 1의 갯수만큼 아랫쪽 줄을 지워 줌
//        // for(i = 게임판 세로 - 바닥&천장 ; (세로 - 바닥&천장 - 레벨 - 1)이 i 초과할 때만 ; 아랫줄에서부터 올라오는 증감식)
//        for (i = MAIN_Y - 2; i > MAIN_Y - 2 - (level - 1); i--) {
//
//            // for(왼쪽 벽[0] 제외한 [1]부터 ; 벽 제외 게임판 가로 크기까지 ; +1씩 증가)
//            for (j = 1; j < MAIN_X - 1; j++) { 
//                main_org[i][j] = INACTIVE_BLOCK; // 줄을 블럭으로 모두 채우고 
//                gotoxy(MAIN_X_ADJ + j, MAIN_Y_ADJ + i); // 별을 찍어 줌
//                printf("★");
//                Sleep(20);
//            }
//        }
//
//        Sleep(100); // 별 보여 주기 위해 delay 
//        check_line(); // 블럭으로 모두 채운 것 지우기
//        // check_line() 함수 내부에서 level up flag가 켜져있는 경우 점수는 없음
//
//        switch (level) { // 레벨 별로 속도를 조절해 줌
//        case 2:
//            speed = 50;
//            break;
//        case 3:
//            speed = 25;
//            break;
//        case 4:
//            speed = 10;
//            break;
//        case 5:
//            speed = 5;
//            break;
//        case 6:
//            speed = 4;
//            break;
//        case 7:
//            speed = 3;
//            break;
//        case 8:
//            speed = 2;
//            break;
//        case 9:
//            speed = 1;
//            break;
//        case 10:
//            speed = 0;
//            break;
//        }
//        level_up_on = 0; // 레벨 업 flag 꺼 줌
//
//        // 레벨 출력 
//        gotoxy(STATUS_X_ADJ, STATUS_Y_LEVEL); 
//        printf(" LEVEL : %5d", level); 
//        
//        // 레벨 목표 출력
//        gotoxy(STATUS_X_ADJ, STATUS_Y_GOAL); 
//        printf(" GOAL  : %5d", 10 - cnt); 
//    }
//}
//
//
//
//// 게임 오버 판단하고 게임 오버를 진행하는 함수
//void check_game_over(void) {
//    int i;
//    int x = 5;
//    int y = 5;
//
//    for (i = 1; i < MAIN_X - 2; i++) { // for(왼쪽 벽[0] 제외한 [1]부터 ; 벽 제외 게임판 가로 크기까지 ; +1씩 증가)
//        if (main_org[3][i] > 0) { // 천장(위에서 세번째 줄)에 inactive block 생성되면 게임 오버 
//            gotoxy(x, y + 0); printf("▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤"); // 게임 오버 메세지 
//            gotoxy(x, y + 1); printf("▤                              ▤");
//            gotoxy(x, y + 2); printf("▤  +-----------------------+   ▤");
//            gotoxy(x, y + 3); printf("▤  |  G A M E  O V E R...  |   ▤");
//            gotoxy(x, y + 4); printf("▤  +-----------------------+   ▤");
//            gotoxy(x, y + 5); printf("▤   YOUR SCORE: %6d         ▤", score);
//            gotoxy(x, y + 6); printf("▤                              ▤");
//            gotoxy(x, y + 7); printf("▤  Press any key to restart..  ▤");
//            gotoxy(x, y + 8); printf("▤                              ▤");
//            gotoxy(x, y + 9); printf("▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤");
//            last_score = score; // 게임 점수 대입
//
//            if (score > best_score) { // 최고 기록 갱신 시 멘트 출력
//                FILE* file = fopen("score.dat", "wt"); // score.dat에 점수 저장 위해 파일 열기            
//
//                gotoxy(x, y + 6); printf("▤  ★★★ BEST SCORE ! ★★★  ▤  ");
//
//                if (file == 0) { // 파일 에러 발생 시 에러 메시지 출력
//                    gotoxy(0, 0);
//                    printf("FILE ERROR: SYSTEM CANNOT WRITE BEST SCORE ON \"SCORE.DAT\"");
//                }
//                else {
//                    fprintf(file, "%d", score); // 파일에 최고 점수 저장
//                    fclose(file);
//                }
//            }
//
//            stop_block();
//            Sleep(1000);
//
//            // 키보드 눌렀다면 true, 안 눌렀다면 false
//            // _kbhit() 함수는 입력 들어올 때까지 대기하다가 입력 있으면 반복문 들어감
//            while (_kbhit()) {
//                _getch(); // 키 값을 입력 받고 바로 실행하고 버퍼 바로 비움
//                reset(); // 키 입력하면 while() 빠져 나와서 리셋 후 다시 시작
//            }
//        }
//    }
//}
//
//
//
//// 게임을 일시 정지시키는 함수
//void pause(void) {  
//    int i, j;
//    int x = 5;
//    int y = 5;
//
//    // for(왼쪽 벽[0] 제외한 [1]부터 ; 벽 제외 게임판 가로 크기까지 ; +1씩 증가)
//    for (i = 1; i < MAIN_X - 2; i++) { // 게임 일시 정지 창 출력
//        gotoxy(x, y + 0); printf("▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤");
//        gotoxy(x, y + 1); printf("▤                              ▤");
//        gotoxy(x, y + 2); printf("▤  +------------------------+  ▤");
//        gotoxy(x, y + 3); printf("▤  |        P A U S E       |  ▤");
//        gotoxy(x, y + 4); printf("▤  +------------------------+  ▤");
//        gotoxy(x, y + 5); printf("▤  Press any key to resume...  ▤");
//        gotoxy(x, y + 6); printf("▤                              ▤");
//        gotoxy(x, y + 7); printf("▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤");
//    }
//
//    _getch(); // 키 입력 시까지 대기 후 키 입력되면
//    system("cls"); // 화면 지우고 새로 그림 
//    reset_main_cpy();
//    draw_main();
//    draw_map();
//
//    for (i = 1; i < 3; i++) { // 다음 블럭 그림 
//        for (j = 0; j < 4; j++) {
//            if (blocks[b_type_next][0][i][j] == 1) {
//                gotoxy(MAIN_X + MAIN_X_ADJ + 3 + j, i + 6);
//                printf("■");
//            }
//            else {
//                gotoxy(MAIN_X + MAIN_X_ADJ + 3 + j, i + 6);
//                printf("  ");
//            }
//        }
//    }
//}