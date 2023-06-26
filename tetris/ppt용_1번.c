//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <windows.h> 
//#include <conio.h>
//#include <time.h>
//#include <stdlib.h> 
//
//
//// 키보드값 지정 매크로 함수(뒤의 숫자는 아스키코드값)
//#define left 75
//#define right 77
//#define up 72 
//#define down 80 
//#define space 32 
//#define esc 27 
//
//#define false 0
//#define true 1
//
//
//// 블럭 및 게임판 관련 매크로 함수
//#define active_block -2  
//#define ceilling -1     
//#define empty 0          
//#define wall 1         
//#define inactive_block 2 
//
//#define main_x 11   
//#define main_y 23   
//#define main_x_adj 3 
//#define main_y_adj 1 
//
//#define status_x_adj (main_x_adj+main_x+1)
//
//
//
//int blocks[7][4][4][4] = {
//    { // 1) t모양 블럭
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
//    {   // 5) l자형 블럭
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
//    {   // 6) l자형 블럭 반대
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
//};
//
//
//// 블럭 관련 전역변수 선언.
//int b_type;
//int b_rotation;
//int b_type_next;
//
//
//// 게임판 전역변수 선언
//int main_org[main_y][main_x];
//int main_cpy[main_y][main_x];
//
//
//// flag 전역변수 선언
//int new_block_on = 0;
//int crush_on = 0;
//int space_key_on = 0;
//
//
//// 이외 게임 진행 시 필요한 전역변수 선언
//int bx, by;
//int key;
//int speed;
//int cnt;
//
//
//// 게임 실행 관련 사용자 지정 함수
//void reset(void);
//void reset_main(void);
//void reset_main_cpy(void);
//void draw_main(void);
//void new_block(void);
//void stop_block(void);
//void check_key(void);
//void drop_block(void);
//int check_crush(int bx, int by, int rotation);
//void move_block(int dir);
//void check_line(void);
//void check_game_over(void);
//
//
//
//// gotoxy 함수: 콘솔창의 어디서부터 출력할지 결정하는 함수
//void gotoxy(int x, int y) { 
//    COORD pos = { 2 * x,y };
//    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//    
//}
//
//
//// 커서 숨기는 함수에 사용되는 열거형 enum 타입
//typedef enum { NOCURSOR, SOLIDCURSOR, NORMALCURSOR } CURSOR_TYPE;
//
//
//// 커서 숨기는 함수
//void setcursortype(CURSOR_TYPE c) {  
//
//    CONSOLE_CURSOR_INFO CurInfo;
//
//    switch (c) {
//    case NOCURSOR:
//        CurInfo.dwSize = 1; 
//        CurInfo.bVisible = FALSE; 
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
//}
//
//
//// 게임에서 사용될 숫자 관련 함수
//int main() {
//    int i;
//
//    srand((unsigned)time(NULL));
//    setcursortype(NOCURSOR);
//    reset();
//
//    while (1) {
//        for (i = 0; i < 5; i++) {
//            check_key();
//            draw_main();
//            Sleep(100);
//
//            if (crush_on && check_crush(bx, by + 1, b_rotation) == false)
//                Sleep(100);
//
//            if (space_key_on == 1) {
//                space_key_on = 0;
//                break;
//            }
//        }
//
//        drop_block();
//        check_game_over();
//
//        if (new_block_on == 1)
//            new_block();
//    }
//}
//
//
//// 게임판 초기화 함수
//void reset(void) {
//    key = 0;
//    crush_on = 0;
//    cnt = 0;
//    speed = 100;
//
//    system("cls");
//    reset_main();
//    draw_main();
//
//    b_type_next = rand() % 7;
//
//    new_block();
//}
//
//
//    // 메인 게임판 초기화하는 함수(main_org[][]를 초기화)
//    void reset_main(void) {
//        int i, j;
//
//        for (i = 0; i < main_y; i++) {
//            for (j = 0; j < main_x; j++) {
//                main_org[i][j] = 0;
//                main_cpy[i][j] = 100;
//            }
//        }
//
//        for (j = 1; j < main_x; j++) {
//            main_org[3][j] = ceilling;
//        }
//
//        for (i = 1; i < main_y - 1; i++) {
//            main_org[i][0] = wall;
//            main_org[i][main_x - 1] = wall;
//        }
//
//        for (j = 0; j < main_x; j++) {
//            main_org[main_y - 1][j] = wall;
//        }
//    }
//
//
//
//    // copy 게임판(main_cpy[][]를 초기화)
//    void reset_main_cpy(void) {
//        int i, j;
//
//        for (i = 0; i < main_y; i++) {
//            for (j = 0; j < main_x; j++) {
//                main_cpy[i][j] = 100;
//            }
//        }
//    }
//
//
//    // 게임판 그리는 함수
//
//    void draw_main(void) {
//        int i, j;
//
//        for (j = 1; j < main_x - 1; j++) {
//            if (main_org[3][j] == empty)
//                main_org[3][j] = ceilling;
//        }
//
//        for (i = 0; i < main_y; i++) {
//            for (j = 0; j < main_x; j++) {
//                if (main_cpy[i][j] != main_org[i][j]) {
//
//                    gotoxy(main_x_adj + j, main_y_adj + i);
//
//                    switch (main_org[i][j]) {
//                    case empty:
//                        printf("  ");
//                        break;
//                    case ceilling:
//                        printf(". ");
//                        break;
//                    case wall:
//                        printf("▩");
//                        break;
//                    case inactive_block:
//                        printf("□");
//                        break;
//                    case active_block:
//                        printf("■");
//                        break;
//                    }
//                }
//            }
//        }
//
//        for (i = 0; i < main_y; i++) {
//            for (j = 0; j < main_x; j++) {
//                main_cpy[i][j] = main_org[i][j];
//            }
//        }
//    }
//
//
//
//    // 새로운 블럭 생성하는 함수
//    void new_block(void) {
//        int i, j;
//
//        bx = (main_x / 2) - 1;
//        by = 0;
//        b_type = b_type_next;
//        b_type_next = rand() % 7;
//        b_rotation = 0;
//
//        new_block_on = 0;
//
//        for (i = 0; i < 4; i++) {
//            for (j = 0; j < 4; j++) {
//                if (blocks[b_type][b_rotation][i][j] == 1)
//                    main_org[by + i][bx + j] = active_block;
//            }
//        }
//    }
//
//
//    // 게임 오버 시 블록 그만 만드는 함수
//    void stop_block(void) {
//        new_block_on = 0;
//    };
//
//
//    // 키보드로 키를 입력 받는 함수
//
//
//    void check_key(void) {
//        key = 0;
//        if (_kbhit()) {
//
//            key = _getch();
//
//
//            if (key == 224) {
//                do {
//                    key = _getch();
//                } while (key == 224);
//
//
//                switch (key) {
//                case left:
//                    if (check_crush(bx - 1, by, b_rotation) == true)
//                        move_block(left);
//                    break;
//
//                case right:
//                    if (check_crush(bx + 1, by, b_rotation) == true)
//                        move_block(right);
//                    break;
//
//                case down:
//                    if (check_crush(bx, by + 1, b_rotation) == true)
//                        move_block(down);
//                    break;
//
//                case up:
//                    if (check_crush(bx, by, (b_rotation + 1) % 4) == true)
//                        move_block(up);
//                    else if (crush_on == 1 && check_crush(bx, by - 1, (b_rotation + 1) % 4) == true)
//                        move_block(100);
//                }
//            }
//
//
//            // 방향키가 아닌 경우
//            else {
//                switch (key) {
//                case space:
//                    space_key_on = 1;
//                    while (crush_on == 0) {
//                        drop_block();
//                    }
//                    break;
//
//                case esc:
//                    system("cls");
//                    exit(0);
//                }
//            }
//        }
//
//        while (_kbhit())
//            _getch();
//    }
//
//
//
//    // 블럭을 아래로 떨어트리는 함수 
//    void drop_block(void) {
//        int i, j;
//
//
//        if (crush_on && check_crush(bx, by + 1, b_rotation) == true)
//            crush_on = 0;
//
//        if (crush_on && check_crush(bx, by + 1, b_rotation) == false) {
//
//            for (i = 0; i < main_y; i++) {
//                for (j = 0; j < main_x; j++) {
//                    if (main_org[i][j] == active_block)
//                        main_org[i][j] = inactive_block;
//                }
//            }
//
//            crush_on = 0;
//            check_line();
//            new_block_on = 1;
//            return;
//        }
//
//        if (check_crush(bx, by + 1, b_rotation) == true)
//            move_block(down);
//
//        if (check_crush(bx, by + 1, b_rotation) == false)
//            crush_on++;
//    }
//
//
//
//    // 지정된 좌표 bx, by 위치에서 rotation 회전값을 갖는 경우 충돌 판단하는 함수
//    int check_crush(int bx, int by, int b_rotation) {
//        int i, j;
//
//        for (i = 0; i < 4; i++) {
//            for (j = 0; j < 4; j++) {
//                if (blocks[b_type][b_rotation][i][j] == 1 && main_org[by + i][bx + j] > 0)
//                    return false;
//            }
//        }
//
//        return true;
//    };
//
//
//
//    // 블럭 이동 함수
//    void move_block(int dir) {
//        int i, j;
//
//        switch (dir) {
//        case left:
//            for (i = 0; i < 4; i++) {
//                for (j = 0; j < 4; j++) {
//                    if (blocks[b_type][b_rotation][i][j] == 1)
//                        main_org[by + i][bx + j] = empty;
//                }
//            }
//
//            for (i = 0; i < 4; i++) {
//                for (j = 0; j < 4; j++) {
//                    if (blocks[b_type][b_rotation][i][j] == 1)
//                        main_org[by + i][bx + j - 1] = active_block;
//                }
//            }
//            bx--;
//            break;
//
//        case right:
//            for (i = 0; i < 4; i++) {
//                for (j = 0; j < 4; j++) {
//                    if (blocks[b_type][b_rotation][i][j] == 1)
//                        main_org[by + i][bx + j] = empty;
//                }
//            }
//
//            for (i = 0; i < 4; i++) {
//                for (j = 0; j < 4; j++) {
//                    if (blocks[b_type][b_rotation][i][j] == 1)
//                        main_org[by + i][bx + j + 1] = active_block;
//                }
//            }
//            bx++;
//            break;
//
//        case down:
//            for (i = 0; i < 4; i++) {
//                for (j = 0; j < 4; j++) {
//                    if (blocks[b_type][b_rotation][i][j] == 1)
//                        main_org[by + i][bx + j] = empty;
//                }
//            }
//
//            for (i = 0; i < 4; i++) {
//                for (j = 0; j < 4; j++) {
//                    if (blocks[b_type][b_rotation][i][j] == 1)
//                        main_org[by + i + 1][bx + j] = active_block;
//                }
//            }
//            by++;
//            break;
//
//        case up:
//            for (i = 0; i < 4; i++) {
//                for (j = 0; j < 4; j++) {
//                    if (blocks[b_type][b_rotation][i][j] == 1)
//                        main_org[by + i][bx + j] = empty;
//                }
//            }
//
//            b_rotation = (b_rotation + 1) % 4;
//
//            for (i = 0; i < 4; i++) {
//                for (j = 0; j < 4; j++) {
//                    if (blocks[b_type][b_rotation][i][j] == 1)
//                        main_org[by + i][bx + j] = active_block;
//                }
//            }
//            break;
//
//        case 100:
//            for (i = 0; i < 4; i++) {
//                for (j = 0; j < 4; j++) {
//                    if (blocks[b_type][b_rotation][i][j] == 1)
//                        main_org[by + i][bx + j] = empty;
//                }
//            }
//
//            b_rotation = (b_rotation + 1) % 4;
//
//            for (i = 0; i < 4; i++) {
//                for (j = 0; j < 4; j++) {
//                    if (blocks[b_type][b_rotation][i][j] == 1)
//                        main_org[by + i - 1][bx + j] = active_block;
//                }
//            }
//            by--;
//            break;
//        }
//    }
//
//
//
//    // 줄이 가득 찼는지 판단하고 지우는 함수
//    void check_line(void) {
//        int i, j, k, l;
//
//        int block_amount;
//
//        for (i = main_y - 2; i > 3;) {
//            block_amount = 0;
//
//            for (j = 1; j < main_x - 1; j++) {
//                if (main_org[i][j] > 0)
//                    block_amount++;
//            }
//
//            if (block_amount == main_x - 2) {
//                for (k = i; k > 1; k--) {
//                    for (l = 1; l < main_x - 1; l++) {
//                        if (main_org[k - 1][l] != ceilling)
//                            main_org[k][l] = main_org[k - 1][l];
//
//                        if (main_org[k - 1][l] == ceilling)
//                            main_org[k][l] = empty;
//                    }
//                }
//            }
//
//            else i--;
//        }
//    }
//
//
//    // 게임 오버 판단하고 게임 오버를 진행하는 함수
//    void check_game_over(void) {
//        int i;
//
//        for (i = 1; i < main_x - 2; i++) {
//            if (main_org[3][i] > 0) {
//                stop_block();
//                Sleep(100);
//                system("cls");
//                printf("game over... \n");
//                exit(0);
//            }
//        }
//    }