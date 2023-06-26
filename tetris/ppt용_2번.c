//#define _CRT_SECURE_NO_WARNINGS 
//
//#include <stdio.h>
//#include <windows.h> 
//#include <conio.h> 
//#include <time.h> 
//#include <stdlib.h> 
//
//
//
//
//
//
//#define LEFT 75  
//#define RIGHT 77  
//#define UP 72 
//#define DOWN 80 
//#define SPACE 32 
//
//
//// ※※※
//#define p 112 
//#define P 80 
//
//
//
//#define ESC 27  
//
//#define false 0
//#define true 1
//
//
//// 블럭 및 게임판 관련 매크로 함수
//#define ACTIVE_BLOCK -2  
//#define CEILLING -1      
//#define EMPTY 0          
//#define WALL 1           
//#define INACTIVE_BLOCK 2 
//
//#define MAIN_X 11     
//#define MAIN_Y 23    
//#define MAIN_X_ADJ 3 
//#define MAIN_Y_ADJ 1 
//
//#define STATUS_X_ADJ (MAIN_X_ADJ+MAIN_X+1) 
//
//
//// ※※※
//
//int STATUS_Y_GOAL;
//int STATUS_Y_LEVEL;
//int STATUS_Y_SCORE;
//
//
//int blocks[7][4][4][4] = {
//    {
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
//    {
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
//    {
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
//    {
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
//    {
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
//    {
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
//    {
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
//int main_org[MAIN_Y][MAIN_X];
//int main_cpy[MAIN_Y][MAIN_X];
//
//
//// flag 전역변수 선언
//int new_block_on = 0;
//int crush_on = 0;
//
//int space_key_on = 0;
//
//int bx, by;
//int key;
//int speed;
//int cnt;
//
//// ※※※ 
//
//int level_up_on = 0; 
//int level; 
//int level_goal;
//int score;
//int last_score = 0; 
//int best_score = 0; 
//
//
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
////void reset(void);
////void reset_main(void);
////void reset_main_cpy(void);
////void draw_main(void);
////void new_block(void);
////void stop_block(void);
////void check_key(void);
////void drop_block(void);
////int check_crush(int bx, int by, int rotation);
////void move_block(int dir);
////void check_line(void);
////void check_game_over(void);
//
//
//// ※※※ 
//
//void title(void);
//void draw_map(void); 
//void check_level_up(void); 
//void pause(void); 
//
//
//
//void gotoxy(int x, int y) {
//    COORD pos = { 2 * x, y };
//    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//}
//
//
//
//
//typedef enum { NOCURSOR, SOLIDCURSOR, NORMALCURSOR } CURSOR_TYPE;
//
//void setcursortype(CURSOR_TYPE c) {
//
//
//    CONSOLE_CURSOR_INFO CurInfo;
//
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
//
//}
//
//
//
//    int main() {
//        int i;
//
//        srand((unsigned)time(NULL));
//        setcursortype(NOCURSOR);
//        title(); // ※※※
//        reset();
//
//        while (1) {
//            for (i = 0; i < 5; i++) {
//                check_key();
//                draw_main();
//                Sleep(speed); // ※※※ 
//
//                if (crush_on && check_crush(bx, by + 1, b_rotation) == false)
//                    Sleep(100);
//
//                if (space_key_on == 1) {
//                    space_key_on = 0;
//                    break;
//                }
//            }
//
//            drop_block();
//            check_level_up(); // ※※※ 
//            check_game_over();
//
//            if (new_block_on == 1)
//                new_block();
//        }
//    }
//
//
//
//    // ※※※ 
//    void title(void) {
//        int x = 5;
//        int y = 4;
//        int cnt;
//
//        gotoxy(x, y + 0); printf("■□ □□■■■□■□□ ■■□□■■"); Sleep(100);
//        gotoxy(x, y + 1); printf("■■■□ ■□□  ■■□■□  □■"); Sleep(100);
//        gotoxy(x, y + 2); printf("□□■             □■■"); Sleep(100);
//        gotoxy(x, y + 3); printf("■■□■■  □ ■ □■□ □■□□"); Sleep(100);
//        gotoxy(x, y + 4); printf("■■ ■□□■□□■  ■■□■■□□"); Sleep(100);
//        gotoxy(x, y + 2); printf("□□■ T E T R I S □■■"); Sleep(100);
//        gotoxy(x, y + 7); printf("Please Enter Any Key to Start..");
//        gotoxy(x, y + 9); printf("  △   : Shift");
//        gotoxy(x, y + 10); printf("◁  ▷ : Left / Right");
//        gotoxy(x, y + 11); printf("  ▽   : Soft Drop");
//        gotoxy(x, y + 12); printf(" SPACE : Hard Drop");
//        gotoxy(x, y + 13); printf("   P   : Pause");
//        gotoxy(x, y + 14); printf("  ESC  : Quit");
//        gotoxy(x, y + 16); printf("BONUS FOR HARD DROPS / COMBOS");
//
//        for (cnt = 0; ; cnt++) {
//            if (_kbhit())
//                break;
//        }
//        while (_kbhit())
//            _getch();
//    }
//
//
//
//
//    void reset(void) {
//        FILE* file = fopen("score.dat", "rt");  // ※※※ 
//
//        if (file == 0) {
//            best_score = 0;
//        }
//        else {
//            fscanf(file, "%d", &best_score);
//            fclose(file);
//        }
//
//        level = 1;  // ※※※
//        score = 0; // ※※※
//        level_goal = 1000; // ※※※
//        key = 0;
//        crush_on = 0;
//        cnt = 0;
//        speed = 100;
//
//        system("cls");
//        reset_main();
//        draw_map(); // ※※※ 
//        draw_main();
//
//        b_type_next = rand() % 7;
//        new_block();
//    }
//
//
//
//
//    void reset_main(void) {
//        int i, j;
//
//
//        for (i = 0; i < MAIN_Y; i++) {
//            for (j = 0; j < MAIN_X; j++) {
//                main_org[i][j] = 0;
//                main_cpy[i][j] = 100;
//
//            }
//        }
//
//
//        for (j = 1; j < MAIN_X; j++) {
//            main_org[3][j] = CEILLING;
//
//        }
//
//
//        for (i = 1; i < MAIN_Y - 1; i++) {
//            main_org[i][0] = WALL;
//            main_org[i][MAIN_X - 1] = WALL;
//
//        }
//
//
//        for (j = 0; j < MAIN_X; j++) {
//            main_org[MAIN_Y - 1][j] = WALL;
//        }
//    }
//
//
//
//
//    void reset_main_cpy(void) {
//        int i, j;
//
//
//        for (i = 0; i < MAIN_Y; i++) {
//            for (j = 0; j < MAIN_X; j++) {
//                main_cpy[i][j] = 100;
//
//            }
//        }
//    }
//
//
//
//    // ※※※ 
//
//    void draw_map(void) {
//        int y = 3;
//
//        gotoxy(STATUS_X_ADJ, STATUS_Y_LEVEL = y - 1); printf(" LEVEL : %5d", level);
//        gotoxy(STATUS_X_ADJ, STATUS_Y_GOAL = y); printf(" GOAL  : %5d", 10 - cnt);
//        gotoxy(STATUS_X_ADJ, y + 2); printf("+-  N E X T  -+ ");
//        gotoxy(STATUS_X_ADJ, y + 3); printf("|             | ");
//        gotoxy(STATUS_X_ADJ, y + 4); printf("|             | ");
//        gotoxy(STATUS_X_ADJ, y + 5); printf("|             | ");
//        gotoxy(STATUS_X_ADJ, y + 6); printf("|             | ");
//        gotoxy(STATUS_X_ADJ, y + 7); printf("+-------------+ ");
//        gotoxy(STATUS_X_ADJ, y + 9); printf(" YOUR SCORE :");
//        gotoxy(STATUS_X_ADJ, STATUS_Y_SCORE = y + 10); printf("        %6d", score);
//        gotoxy(STATUS_X_ADJ, y + 11); printf(" LAST SCORE :");
//        gotoxy(STATUS_X_ADJ, y + 12); printf("        %6d", last_score);
//        gotoxy(STATUS_X_ADJ, y + 13); printf(" BEST SCORE :");
//        gotoxy(STATUS_X_ADJ, y + 14); printf("        %6d", best_score);
//        gotoxy(STATUS_X_ADJ, y + 16); printf("  △   : Shift        SPACE : Hard Drop");
//        gotoxy(STATUS_X_ADJ, y + 17); printf("◁ □ ▷ : Left / Right   P   : Pause");
//        gotoxy(STATUS_X_ADJ, y + 18); printf("  ▽   : Soft Drop     ESC  : Quit");
//    }
//
//
//
//    void draw_main(void) {
//        int i, j;
//
//
//        for (j = 1; j < MAIN_X - 1; j++) {
//            if (main_org[3][j] == EMPTY)
//                main_org[3][j] = CEILLING;
//        }
//
//        for (i = 0; i < MAIN_Y; i++) {
//            for (j = 0; j < MAIN_X; j++) {
//                if (main_cpy[i][j] != main_org[i][j]) {
//
//
//                    gotoxy(MAIN_X_ADJ + j, MAIN_Y_ADJ + i);
//
//
//                    switch (main_org[i][j]) {
//                    case EMPTY:
//                        printf("  ");
//                        break;
//                    case CEILLING:
//                        printf(". ");
//                        break;
//                    case WALL:
//                        printf("▩");
//                        break;
//                    case INACTIVE_BLOCK:
//                        printf("□");
//                        break;
//                    case ACTIVE_BLOCK:
//                        printf("■");
//                        break;
//                    }
//                }
//            }
//        }
//
//
//        for (i = 0; i < MAIN_Y; i++) {
//            for (j = 0; j < MAIN_X; j++) {
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
//        bx = (MAIN_X / 2) - 1;
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
//                    main_org[by + i][bx + j] = ACTIVE_BLOCK;
//
//            }
//        }
//
//        // ※※※ 현황판에 다음 그리는 것(추가 기능)
//
//        for (i = 0; i < 4; i++) { 
//            for (j = 0; j < 4; j++) {
//                if (blocks[b_type_next][0][i][j] == 1) {
//                    gotoxy((STATUS_X_ADJ + 2 + j), i + 6);
//                    printf("■");
//                }
//
//                else {
//                    gotoxy((STATUS_X_ADJ + 2 + j), i + 6);
//                    printf("  ");
//                }
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
//    void check_key(void) {
//        key = 0;
//
//        if (_kbhit()) {
//
//            key = _getch();
//
//
//
//            if (key == 224) {
//                do {
//                    key = _getch();
//                } while (key == 224);
//
//
//                switch (key) {
//                case LEFT:
//                    if (check_crush(bx - 1, by, b_rotation) == true)
//                        move_block(LEFT);
//
//                    break;
//
//                case RIGHT:
//                    if (check_crush(bx + 1, by, b_rotation) == true)
//                        move_block(RIGHT);
//                    break;
//
//                case DOWN:
//                    if (check_crush(bx, by + 1, b_rotation) == true)
//                        move_block(DOWN);
//                    break;
//
//                case UP:
//                    if (check_crush(bx, by, (b_rotation + 1) % 4) == true)
//                        move_block(UP);
//
//                    else if (crush_on == 1 && check_crush(bx, by - 1, (b_rotation + 1) % 4) == true)
//
//                        move_block(100);
//                }
//            }
//
//
//
//            else {
//                switch (key) {
//                case SPACE:
//                    space_key_on = 1;
//                    while (crush_on == 0) {
//                        drop_block();
//                        score += level;
//                        gotoxy(STATUS_X_ADJ, STATUS_Y_SCORE);
//                        printf("        %6d", score);
//                    }
//                    break;
//
//                case P: //  ※※※
//                case p: //  ※※※
//                    pause();
//                    break;
//
//                case ESC:
//                    system("cls");
//                    exit(0);
//                }
//            }
//        }
//
//
//        while (_kbhit())
//            _getch();
//    }
//
//
//
//        void drop_block(void) {
//            int i, j;
//
//
//            if (crush_on && check_crush(bx, by + 1, b_rotation) == true)
//                crush_on = 0;
//
//
//            if (crush_on && check_crush(bx, by + 1, b_rotation) == false) {
//
//
//                for (i = 0; i < MAIN_Y; i++) {
//                    for (j = 0; j < MAIN_X; j++) {
//                        if (main_org[i][j] == ACTIVE_BLOCK)
//                            main_org[i][j] = INACTIVE_BLOCK;
//                    }
//                }
//
//                crush_on = 0;
//                check_line();
//                new_block_on = 1;
//                return;
//            }
//
//            if (check_crush(bx, by + 1, b_rotation) == true)
//                move_block(DOWN);
//
//            if (check_crush(bx, by + 1, b_rotation) == false)
//                crush_on++;
//        }
//
//
//
//
//        int check_crush(int bx, int by, int b_rotation) {
//            int i, j;
//
//
//            for (i = 0; i < 4; i++) {
//                for (j = 0; j < 4; j++) {
//                    if (blocks[b_type][b_rotation][i][j] == 1 && main_org[by + i][bx + j] > 0)
//                        return false;
//                }
//            }
//
//            return true;
//        };
//
//
//
//
//        void move_block(int dir) {
//            int i, j;
//
//            switch (dir) {
//            case LEFT:
//
//                for (i = 0; i < 4; i++) {
//                    for (j = 0; j < 4; j++) {
//                        if (blocks[b_type][b_rotation][i][j] == 1)
//                            main_org[by + i][bx + j] = EMPTY;
//                    }
//                }
//
//
//                for (i = 0; i < 4; i++) {
//                    for (j = 0; j < 4; j++) {
//                        if (blocks[b_type][b_rotation][i][j] == 1)
//                            main_org[by + i][bx + j - 1] = ACTIVE_BLOCK;
//                    }
//                }
//                bx--;
//                break;
//
//            case RIGHT:
//                for (i = 0; i < 4; i++) {
//                    for (j = 0; j < 4; j++) {
//                        if (blocks[b_type][b_rotation][i][j] == 1)
//                            main_org[by + i][bx + j] = EMPTY;
//                    }
//                }
//
//                for (i = 0; i < 4; i++) {
//                    for (j = 0; j < 4; j++) {
//                        if (blocks[b_type][b_rotation][i][j] == 1)
//                            main_org[by + i][bx + j + 1] = ACTIVE_BLOCK;
//                    }
//                }
//                bx++;
//                break;
//
//            case DOWN:
//                for (i = 0; i < 4; i++) {
//                    for (j = 0; j < 4; j++) {
//                        if (blocks[b_type][b_rotation][i][j] == 1)
//                            main_org[by + i][bx + j] = EMPTY;
//                    }
//                }
//
//                for (i = 0; i < 4; i++) {
//                    for (j = 0; j < 4; j++) {
//                        if (blocks[b_type][b_rotation][i][j] == 1)
//                            main_org[by + i + 1][bx + j] = ACTIVE_BLOCK;
//                    }
//                }
//                by++;
//                break;
//
//            case UP:
//                for (i = 0; i < 4; i++) {
//                    for (j = 0; j < 4; j++) {
//                        if (blocks[b_type][b_rotation][i][j] == 1)
//                            main_org[by + i][bx + j] = EMPTY;
//                    }
//                }
//
//                b_rotation = (b_rotation + 1) % 4;
//
//
//                for (i = 0; i < 4; i++) {
//                    for (j = 0; j < 4; j++) {
//                        if (blocks[b_type][b_rotation][i][j] == 1)
//                            main_org[by + i][bx + j] = ACTIVE_BLOCK;
//                    }
//                }
//                break;
//
//            case 100:
//
//                for (i = 0; i < 4; i++) {
//                    for (j = 0; j < 4; j++) {
//                        if (blocks[b_type][b_rotation][i][j] == 1)
//                            main_org[by + i][bx + j] = EMPTY;
//                    }
//                }
//
//                b_rotation = (b_rotation + 1) % 4;
//
//                for (i = 0; i < 4; i++) {
//                    for (j = 0; j < 4; j++) {
//                        if (blocks[b_type][b_rotation][i][j] == 1)
//                            main_org[by + i - 1][bx + j] = ACTIVE_BLOCK;
//                    }
//                }
//                by--;
//                break;
//            }
//        }
//
//
//
//        // 줄이 가득 찼는지 판단하고 지우는 함수
//
//        void check_line(void) {
//            int i, j, k, l;
//            int block_amount;
//            int combo = 0; // ※※※ 
//
//            for (i = MAIN_Y - 2; i > 3;) {
//                block_amount = 0;
//
//                for (j = 1; j < MAIN_X - 1; j++) {
//                    if (main_org[i][j] > 0)
//                        block_amount++;
//                }
//
//                if (block_amount == MAIN_X - 2) {
//                    if (level_up_on == 0) { // ※※※ 
//                        score += 100 * level;
//                        cnt++;
//                        combo++;
//                    }
//
//                    for (k = i; k > 1; k--) {
//                        for (l = 1; l < MAIN_X - 1; l++) {
//                            if (main_org[k - 1][l] != CEILLING)
//                                main_org[k][l] = main_org[k - 1][l];
//                            if (main_org[k - 1][l] == CEILLING)
//                                main_org[k][l] = EMPTY;
//                        }
//                    }
//                }
//                else i--;
//            }
//
//            // ※※※ 
//
//            if (combo) {
//                if (combo > 1) {
//
//                    gotoxy(MAIN_X_ADJ + (MAIN_X / 2) - 1, MAIN_Y_ADJ + by - 2);
//                    printf("%d COMBO!", combo);
//
//                    Sleep(500);
//                    printf("         ");
//
//                    score += (combo * level * 100);
//                    reset_main_cpy();
//                }
//                gotoxy(STATUS_X_ADJ, STATUS_Y_GOAL);
//                printf(" GOAL  : %5d", (cnt <= 10) ? 10 - cnt : 0);
//                gotoxy(STATUS_X_ADJ, STATUS_Y_SCORE);
//                printf("        %6d", score);
//            }
//        }
//
//
//
//        // ※※※ 레벨 목표 달성 여부 판단하고 레벨 업 시키는 함수
//
//        void check_level_up(void) {
//            int i, j;
//
//            if (cnt >= 10) {
//                draw_main();
//                level_up_on = 1;
//                level += 1;
//                cnt = 0;
//
//                for (i = 0; i < 4; i++) {
//                    gotoxy(MAIN_X_ADJ + (MAIN_X / 2) - 3, MAIN_Y_ADJ + 4);
//                    printf("             ");
//                    gotoxy(MAIN_X_ADJ + (MAIN_X / 2) - 2, MAIN_Y_ADJ + 6);
//                    printf("             ");
//                    Sleep(200);
//                    gotoxy(MAIN_X_ADJ + (MAIN_X / 2) - 3, MAIN_Y_ADJ + 4);
//                    printf("☆LEVEL UP!☆");
//                    gotoxy(MAIN_X_ADJ + (MAIN_X / 2) - 2, MAIN_Y_ADJ + 6);
//                    printf("☆SPEED UP!☆");
//                    Sleep(200);
//                }
//                reset_main_cpy();
//
//                for (i = MAIN_Y - 2; i > MAIN_Y - 2 - (level - 1); i--) {
//                    for (j = 1; j < MAIN_X - 1; j++) {
//                        main_org[i][j] = INACTIVE_BLOCK;
//                        gotoxy(MAIN_X_ADJ + j, MAIN_Y_ADJ + i);
//                        printf("★");
//                        Sleep(20);
//                    }
//                }
//                Sleep(100);
//                check_line();
//
//                switch (level) {
//                case 2: speed = 50; break;
//                case 3: speed = 25; break;
//                case 4: speed = 10; break;
//                case 5: speed = 5; break;
//                case 6: speed = 4; break;
//                case 7: speed = 3; break;
//                case 8: speed = 2; break;
//                case 9: speed = 1; break;
//                case 10: speed = 0; break;
//                }
//                level_up_on = 0;
//
//                gotoxy(STATUS_X_ADJ, STATUS_Y_LEVEL);
//                printf(" LEVEL : %5d", level);
//                gotoxy(STATUS_X_ADJ, STATUS_Y_GOAL);
//                printf(" GOAL  : %5d", 10 - cnt);
//            }
//        }
//
//
//
//        // 게임 오버 판단하고 게임 오버를 진행하는 함수
//
//
//        void check_game_over(void) {
//            int i;
//            int x = 5; // ※※※
//            int y = 5; // ※※※
//
//            for (i = 1; i < MAIN_X - 2; i++) {
//                if (main_org[3][i] > 0) { //
//                    // ※※※
//                    gotoxy(x, y + 3); printf("▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤");
//                    gotoxy(x, y + 4); printf("▤                              ▤");
//                    gotoxy(x, y + 5); printf("▤  +-----------------------+   ▤");
//                    gotoxy(x, y + 6); printf("▤  |  G A M E  O V E R...  |   ▤");
//                    gotoxy(x, y + 7); printf("▤  +-----------------------+   ▤");
//                    gotoxy(x, y + 8); printf("▤   YOUR SCORE: %6d         ▤", score);
//                    gotoxy(x, y + 9); printf("▤                              ▤");
//                    gotoxy(x, y + 10); printf("▤  Press any key to restart..  ▤");
//                    gotoxy(x, y + 11); printf("▤                              ▤");
//                    gotoxy(x, y + 12); printf("▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤");
//                    last_score = score;
//
//                    if (score > best_score) {
//                        FILE* file = fopen("score.dat", "wt");
//
//                        gotoxy(x, y + 6); printf("▤  ★★★ BEST SCORE ! ★★★  ▤  ");
//
//                        if (file == 0) {
//                            gotoxy(0, 0);
//                            printf("FILE ERROR: SYSTEM CANNOT WRITE BEST SCORE ON \"SCORE.DAT\"");
//                        }
//                        else {
//                            fprintf(file, "%d", score);
//                            fclose(file);
//                        }
//                    }
//                    stop_block();
//
//                    while (_kbhit()) {
//                        _getch();
//                        reset();
//                    }
//                }
//            }
//        }
//
//
//
//        // ※※※ 
//
//        void pause(void) {
//            int i, j;
//            int x = 5;
//            int y = 5;
//
//            for (i = 1; i < MAIN_X - 2; i++) {
//                gotoxy(x, y + 0); printf("▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤");
//                gotoxy(x, y + 1); printf("▤                              ▤");
//                gotoxy(x, y + 2); printf("▤  +------------------------+  ▤");
//                gotoxy(x, y + 3); printf("▤  |        P A U S E       |  ▤");
//                gotoxy(x, y + 4); printf("▤  +------------------------+  ▤");
//                gotoxy(x, y + 5); printf("▤  Press any key to resume...  ▤");
//                gotoxy(x, y + 6); printf("▤                              ▤");
//                gotoxy(x, y + 7); printf("▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤");
//            }
//
//            _getch();
//            system("cls");
//            reset_main_cpy();
//            draw_main();
//            draw_map();
//
//            for (i = 0; i < 4; i++) {
//                for (j = 0; j < 4; j++) {
//                    if (blocks[b_type_next][0][i][j] == 1) {
//                        gotoxy(MAIN_X + MAIN_X_ADJ + 3 + j, i + 6);
//                        printf("■");
//                    }
//                    else {
//                        gotoxy(MAIN_X + MAIN_X_ADJ + 3 + j, i + 6);
//                        printf("  ");
//                    }
//                }
//            }
//        }