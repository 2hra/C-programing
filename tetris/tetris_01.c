//#define _CRT_SECURE_NO_WARNINGS // _getch ����� ����
//
//#include <stdio.h>
//#include <windows.h> // COORD �ڷ���, CONSOLE_CURSOR_INFO ����ü ������ ���� ����ϱ� ���� ��� ����
//#include <conio.h> // _getch(), _kbhit() �Լ� ����� ���� ��� ����
//#include <time.h> // ���� �Ź� �������� ���� ���� ��� ����
//#include <stdlib.h> // ���� ����, system() �Լ� ���� ����ϱ� ���� ��� ����
//
//
//// #define => ��ũ�� �Լ�. �Ϲ� �Լ��ʹ� �޸� �ܼ� ġȯ��
//// #define (��ũ�� �Լ� �̸�) (��ũ�� �Լ� ���)
//
//// Ű���尪 ���� ��ũ�� �Լ�(���� ���ڴ� �ƽ�Ű�ڵ尪)
//// ���� ���� ������ �����ϰ�, �ۼ��ϱ� ���� ������ �ִ� ��
//#define LEFT 75 // �·� �̵�    
//#define RIGHT 77 // ��� �̵� 
//#define UP 72 // ȸ�� 
//#define DOWN 80 // soft drop
//#define SPACE 32 // hard drop
//#define p 112 // �Ͻ����� 
//#define P 80 // �Ͻ�����
//#define ESC 27 // ���� ���� 
//
//#define false 0
//#define true 1
//
//
//// �� �� ������ ���� ��ũ�� �Լ�
//#define ACTIVE_BLOCK -2  // ������ �迭�� ����� ���� ���µ� 
//#define CEILLING -1      // ���� �̵��� �� �ִ� ������ 0 �Ǵ� ������ ǥ�� 
//#define EMPTY 0          
//#define WALL 1           // ���� �̵��� �� ���� ������ ����� ǥ��
//#define INACTIVE_BLOCK 2 // �̵��� �Ϸ�� ���� 
//
//#define MAIN_X 11    // ������ ���� ũ�� 
//#define MAIN_Y 23    // ������ ���� ũ�� 
//#define MAIN_X_ADJ 3 // ������ ���� ��ġ ���� 
//#define MAIN_Y_ADJ 1 // ������ ���� ��ġ ���� 
//
//#define STATUS_X_ADJ (MAIN_X_ADJ+MAIN_X+1) // ���� ���� ǥ�� ��ġ ���� 
//
//
//
//int blocks[7][4][4][4] = {
//    { // 1) T��� ��
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
//    {    // 2) ���� ��
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
//    {   // 3) ���� �� �ݴ�
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
//    {   // 4) 1���� ��
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
//    {   // 5) L���� ��
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
//    {   // 6) L���� �� �ݴ�
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
//    {   // 7) �׸� ��
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
//}; // ����� ���� 4*4������ ���� ǥ�� blcoks[b_type][b_rotation][i][j]�� ��� 
//
//
//// �� ���� �������� ����.
//int b_type;      // �� ���� ���� 
//int b_rotation;  // �� ȸ���� ���� 
//int b_type_next; // ���� ���� ���� 
//
//
//// ������ �������� ����
//// #define MAIN_X 11    // ������ ���� ũ�� 
//// #define MAIN_Y 23    // ������ ���� ũ�� 
//int main_org[MAIN_Y][MAIN_X]; // �������� ����(���� ���� ����)�� �����ϴ� �迭. ����Ϳ� ǥ�� �� main_cpy�� ������
//int main_cpy[MAIN_Y][MAIN_X]; // ��, main_cpy�� �������� ����Ϳ� ǥ�õǱ� ���� ������ ������ ����
//// main�� ��ü�� ��� ����Ϳ� ǥ������ �ʰ�, (�̷��� �ϸ� ��� ��ü �ܼ� ȭ���� �����Ÿ�) 
//// main_cpy�� main_org�� �迭�� ���ؼ� ���� �޶��� ���� ����Ϳ� ��ġ�� ���� �� ���� ����
//
//
//// flag �������� ����
//int new_block_on = 0; // ���ο� ���� �ʿ����� �˸��� flag 
//int crush_on = 0; // ���� �̵� ���� ���� �浹 �������� �˷� �ִ� flag 
//int space_key_on = 0; // hard drop(���� �������� ���) �������� �˷� �ִ� flag 
//
//
//// �̿� ���� ���� �� �ʿ��� �������� ����
//int bx, by; // �̵� ���� ���� ������ ���� x, y��ǥ�� ����
//int key; // Ű����� �Է�(_getch()) ���� Ű���� ����
//int speed; // ���� ���� �ӵ� 
//int cnt; // ���� ������ �� ���� ���� 
//
//
//// ���� ���� ���� ����� ���� �Լ�
//
//void reset(void); // ������ �ʱ�ȭ 
//void reset_main(void); // ���� ������(main_org[][]�� �ʱ�ȭ)
//void reset_main_cpy(void); // copy ������(main_cpy[][]�� �ʱ�ȭ)
//void draw_main(void); // �������� �׸� 
//void new_block(void); // ���ο� ���� �ϳ� ���� 
//void stop_block(void); // ���� ���� �� ��� ���� ����
//void check_key(void); // Ű����� Ű�� �Է� ���� 
//void drop_block(void); // ���� �Ʒ��� ����߸� 
//int check_crush(int bx, int by, int rotation); // bx, by ��ġ�� rotation ȸ������ ���� ��� �浹 �Ǵ� 
//void move_block(int dir); // dir(�ش� �Լ��� �Ű�����) �������� ���� ������ 
//void check_line(void); // ���� ���� á������ �Ǵ��ϰ� ���� 
//void check_game_over(void); // ���� �������� �Ǵ��ϰ� ���� ������ ���� 
//
//
//void gotoxy(int x, int y) { // gotoxy �Լ�: �ܼ�â�� ��𼭺��� ������� �����ϴ� �Լ�
//    COORD pos = { 2 * x,y };
//    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//}
//// setconxolecursorposition(�ܼ�â �ڵ�, ��ǥ); => Ŀ���� ��ġ�� �̵���Ű�� �Լ�
//// getstdhandle(�ܼ��� ��ȣ)�� �ܼ�â�� �ڵ� �� �� ����
//// std_output_handle => ǥ�� �ܼ� ����� �ڵ��� ��ȯ��
//// ��� ��) gotoxy(10, 5); => �ܼ��� Ŀ���� ��ǥ(10, 5)�� �̵�
//
//
//
//typedef enum { NOCURSOR, SOLIDCURSOR, NORMALCURSOR } CURSOR_TYPE;
//// Ŀ�� ����� �Լ��� ���Ǵ� ������ enum Ÿ��
//// typedef�� Ÿ���� ��Ī�� �����ϰ�, ���� Ÿ�� �̸� ��� ��Ī�� ����� �� �ְ� ��
//// typedef enum { ����� Ÿ�� ���� } ��Ī;
//
//void setcursortype(CURSOR_TYPE c) { // Ŀ�� ����� �Լ� 
//    // �Լ��� ���ڷ� 1�� ���޵Ǹ� Ŀ���� ��Ÿ��
//
//    CONSOLE_CURSOR_INFO CurInfo;
//    // CONSOLE_CURSOR_INFO => ����ü ������.
//
//    switch (c) {
//    case NOCURSOR:
//        CurInfo.dwSize = 1; // Ŀ�� ���� (1 ~ 100)
//        CurInfo.bVisible = FALSE; // Ŀ�� Visible TRUE(����), FALSE(����)
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
//    // SetConsoleCursorInfo => ������ �ܼ� ��ũ�� ���ۿ� ���Ͽ� Ŀ���� ���� (�β� or ���� ����) ����
//    // SetConsoleCursorInfo(ǥ�� ��� �ڵ�, CONSOR_CURSOR_INFO ����ü)
//    // GetStdHandle(STD_OUTPUT_HANDLE) => ǥ�� ��� �ڵ��� ������ ����,
//    // CONSOR_CURSOR_INFO ����ü �������� curinfo �ּ�(0) �����ͼ� �� ���̰� �ϰڴٴ� ��
//}
//
//
//
//// ���ӿ��� ���� ���� ���� �Լ�
//int main() {
//    int i;
//
//    srand((unsigned)time(NULL)); // ����ǥ ���� (���̳ʽ� ����)
//    setcursortype(NOCURSOR); // Ŀ�� ���� 
//    reset(); // ������ ����
//
//    while (1) {
//        for (i = 0; i < 5; i++) { // ���� �� ĭ �������� ���� 5�� Ű �Է� ����
//            check_key(); // Ű �Է� Ȯ�� 
//            draw_main(); // ������ ȭ���� �׸� 
//            Sleep(100); // ���� �ӵ� ����
//
//            if (crush_on && check_crush(bx, by + 1, b_rotation) == false)
//                // �Ʒ��� ������ ���� ������ ȸ�����Ѽ� x�� �������δ� �ű� �� �ִ� ���
//                // crush_on: �Ʒ��� �̵� �Ұ� �� 0���� 1�� �����Ŵ
//                // check_crush(bx, by + 1, b_rotation) == false: ���� ��ġ���� y��+1 �Ʒ� ��ǥ ��ġ���� �������� ��ϰ� ������ �� ������ ���� ����
//                Sleep(100);
//            // ���� �浹 ���� ��� �߰��� �̵� �� ȸ���� �ð��� ����
//
//            if (space_key_on == 1) {
//                // �����̽��ٸ� ���� ���(hard drop) �߰��� �̵� �� ȸ���� �� ���� break; 
//                space_key_on = 0;
//                break;
//            }
//        }
//
//        drop_block(); // ���� ��ĭ ���� 
//        check_game_over(); // ���� ������ üũ 
//
//        if (new_block_on == 1)
//            new_block(); // �� �� flag�� �ִ� ��� ���ο� �� ���� 
//    }
//}
//
//
//// ������ �ʱ�ȭ �Լ�
//void reset(void) {
//    // ���� ���� �ʱ�ȭ
//    key = 0;
//    crush_on = 0;
//    cnt = 0;
//    speed = 100;
//
//    system("cls"); // system() �Լ� Ȱ���� ȭ�� ����. cls => clean screen�� ���� 
//    reset_main(); // main_org�� �ʱ�ȭ 
//    draw_main(); // �������� �׸� 
//
//    b_type_next = rand() % 7;
//    // �������� ���� �� ������ �����ϰ� ����.
//    // % 7�� �̿��� 0~6���� �� �� ���� ���� ��������.
//
//    new_block(); //���ο� ���� �ϳ� ����  
//}
//
//
//
//// ���� ������ �ʱ�ȭ�ϴ� �Լ�(main_org[][]�� �ʱ�ȭ)
//void reset_main(void) {
//    int i, j;
//
//    // �������� 0���� �ʱ�ȭ
//    for (i = 0; i < MAIN_Y; i++) {     // for(0���� ; ������ ���� ũ����� ; +1�� ����)
//        for (j = 0; j < MAIN_X; j++) { // for(0���� ; ������ ���� ũ����� ; +1�� ����)
//            main_org[i][j] = 0;
//            main_cpy[i][j] = 100;
//            // main_org�� main_cpy ���ؾ� �ؼ� �ٸ��� ����
//        }
//    }
//
//    // y���� 3�� ��ġ�� õ�� ������� �� ����
//    // for(���� ��[0] ������ [1]���� ; �� ���� ������ ���� ũ����� ; +1�� ����)
//    for (j = 1; j < MAIN_X; j++) {  // for(
//        main_org[3][j] = CEILLING;
//        // #define CEILLING - 1 (�� �̵� ���� ������ 0 �Ǵ� ����)
//    }
//
//    // �¿� �� ������� �� ����
//    // for(���� ũ�⿡�� [1]���� ; �ٴ� ����(-1) �Ʒ����� ; +1�� ����)
//    for (i = 1; i < MAIN_Y - 1; i++) {
//        main_org[i][0] = WALL;
//        main_org[i][MAIN_X - 1] = WALL;
//        // #define WALL 1
//    }
//
//    // �ٴ� ������� �� ���� 
//    // for(0���� ; ������ ���� ũ����� ; +1�� ����)
//    for (j = 0; j < MAIN_X; j++) {
//        main_org[MAIN_Y - 1][j] = WALL;
//    }
//}
//
//
//
//// copy ������(main_cpy[][]�� �ʱ�ȭ)
//void reset_main_cpy(void) {
//    int i, j;
//
//    // ���ӿ� ������ �ʴ� ���ڸ� ���� 
//    for (i = 0; i < MAIN_Y; i++) {     // for(0���� ; ������ ���� ũ����� ; +1�� ����)
//        for (j = 0; j < MAIN_X; j++) { // for(0���� ; ������ ���� ũ����� ; +1�� ����)  
//            main_cpy[i][j] = 100;
//            // main_org�� ���� ���ڰ� ���� �ϱ� ����
//        }
//    }
//}
//
//
//// ������ �׸��� �Լ�
//void draw_main(void) {
//    int i, j;
//
//    // õ���� ��� ���ο� ���� �������� �������� ���� �׷� ��
//    for (j = 1; j < MAIN_X - 1; j++) {  // for(���� ��[0] ������ [1]���� ; �� ���� ������ ���� ũ����� ; +1�� ����)
//        if (main_org[3][j] == EMPTY)
//            main_org[3][j] = CEILLING;
//    }
//
//    for (i = 0; i < MAIN_Y; i++) {      // for(0���� ; ������ ���� ũ����� ; +1�� ����)
//        for (j = 0; j < MAIN_X; j++) {  // for(0���� ; ������ ���� ũ����� ; +1�� ����)
//            if (main_cpy[i][j] != main_org[i][j]) {
//                // cpy�� ���ؼ� ���� �޶��� �κи� ���� �׷� ��
//                // �� �ڵ尡 ������ ������ ��ü�� ��� �׷��� �������� ��¦�Ÿ�
//
//                gotoxy(MAIN_X_ADJ + j, MAIN_Y_ADJ + i);
//
//                // switch������ �ش� ��ǥ�� ���� Ȯ���ؼ� ��� ���
//                switch (main_org[i][j]) {
//                case EMPTY: // ���������(EMPTY 0) �� ĭ ��� ���
//                    printf("  ");
//                    break;
//                case CEILLING: // õ��(CELLING -1) ��� ���
//                    printf(". ");
//                    break;
//                case WALL: // ��(WALL 1) ��� ���
//                    printf("��");
//                    break;
//                case INACTIVE_BLOCK: // �ٴڿ� ���� ��(INACTIVE_BLOCK 2) ��� ���
//                    printf("��");
//                    break;
//                case ACTIVE_BLOCK: // �����̰� �ִ� ��(ACTIVE_BLOCK -2) ��� ���
//                    printf("��");
//                    break;
//                }
//            }
//        }
//    }
//
//    // �������� �׸� �� main_cpy�� ����
//    for (i = 0; i < MAIN_Y; i++) {     // for(0���� ; ������ ���� ũ����� ; +1�� ����)
//        for (j = 0; j < MAIN_X; j++) { // for(0���� ; ������ ���� ũ����� ; +1�� ����)
//            main_cpy[i][j] = main_org[i][j];
//        }
//    }
//}
//
//
//
//// ���ο� �� �����ϴ� �Լ�
//void new_block(void) {
//    int i, j;
//
//    bx = (MAIN_X / 2) - 1; // �� ���� ��ġ x��ǥ(�������� �߾�(�׷��� ������ ���� ũ��/2) 
//    by = 0;  // �� ������ġ y��ǥ(���� ��)
//    b_type = b_type_next; // ���� ������ �����ͼ� ���� ������ ��
//    b_type_next = rand() % 7; // ���� ���� ���� ����� �� 
//    b_rotation = 0;  // ȸ���� 0������ �����;� �⺻ �����̱� ������ 0���� �ʱ�ȭ
//
//    new_block_on = 0; // new_block flag�� ��
//
//    for (i = 0; i < 4; i++) { // ������ bx, by ��ġ�� �� ����
//        for (j = 0; j < 4; j++) { // �� [4][4]�� i = 0; i < 4; i++
//            if (blocks[b_type][b_rotation][i][j] == 1) // ��[����][ȸ����][4][4]
//                main_org[by + i][bx + j] = ACTIVE_BLOCK;
//            // ���� ������ ��ǥ�� �����̰� �ִ� ��(ACTIVE_BLOCK -2) printf("��");
//        }
//    }
//}
//
//
//// ���� ���� �� ��� �׸� ����� �Լ�
//void stop_block(void) {
//    new_block_on = 0; // new_block flag�� ��
//};
//
//
//// Ű����� Ű�� �Է� �޴� �Լ�
//void check_key(void) {
//    key = 0; // Ű�� �ʱ�ȭ  
//
//    if (_kbhit()) { // Ű �Է��� �ִ� ���  
//
//        key = _getch(); // Ű���� ����
//
//
//        // Ű���尪 ���� ��ũ�� �Լ�
//        // #define LEFT 75 // �·� �̵�    
//        // #define RIGHT 77 // ��� �̵� 
//        // #define UP 72 // ȸ�� 
//        // #define DOWN 80 // soft drop
//
//        // ��: 224, 72
//        // �� : 224, 80
//        // �� : 224, 75
//        // �� : 224, 77
//
//        // ����Ű�� ���
//        if (key == 224) {
//            do {
//                key = _getch();
//            } while (key == 224);
//            // ����Ű ���ð� ������ switch�� �ش�Ǵ� key ������ ����
//
//            switch (key) {
//            case LEFT: // ���� ����Ű 
//                if (check_crush(bx - 1, by, b_rotation) == true)
//                    move_block(LEFT);
//                // �� �� �ִ��� üũ �� �����ϸ� �̵�
//                break;
//
//            case RIGHT: // ������ ����Ű 
//                if (check_crush(bx + 1, by, b_rotation) == true)
//                    move_block(RIGHT);
//                break;
//
//            case DOWN: // �Ʒ��� ����Ű
//                if (check_crush(bx, by + 1, b_rotation) == true)
//                    move_block(DOWN);
//                break;
//
//            case UP: // ���� ����Ű
//                if (check_crush(bx, by, (b_rotation + 1) % 4) == true)
//                    move_block(UP);
//                // ȸ���� �� �ִ��� üũ �� �����ϸ� ȸ��
//                else if (crush_on == 1 && check_crush(bx, by - 1, (b_rotation + 1) % 4) == true)
//                    // crush_on�� ���� �ְ�, ȸ�� �����ϸ� Ư�� ���� �����ؾ� ��
//                    // �̴� �ٴڿ� ���� ��� �������� �� ĭ ����� ȸ���� �����ϸ� �����Ѵٴ� ��
//                    move_block(100);
//            }
//        }
//
//
//        // #define SPACE 32 // hard drop
//        // #define p 112 // �Ͻ����� 
//        // #define P 80 // �Ͻ�����
//        // #define ESC 27 // ���� ���� 
//
//        // ����Ű�� �ƴ� ���
//        else {
//            switch (key) {
//            case SPACE: // �����̽� Ű
//                space_key_on = 1; // �����̽�Ű flag�� ��� 
//                while (crush_on == 0) { // �ٴڿ� ���� ������ �� ���� �� �̵� 
//                    drop_block();
//                }
//                break;
//
//            case ESC: // ESC ������ �� 
//                system("cls"); // ȭ���� ����� 
//                exit(0); // ���� ���� 
//            }
//        }
//    }
//
//    // Ű���� �����ٸ� true, �� �����ٸ� false
//    // _kbhit() �Լ��� �Է� ���� ������ ����ϴٰ� �Է� ������ �ݺ��� ��
//    while (_kbhit())
//        _getch(); // Ű ���� �Է� �ް� �ٷ� �����ϰ� ���� �ٷ� ���
//}
//
//
//
//// ���� �Ʒ��� ����Ʈ���� �Լ� 
//void drop_block(void) {
//    int i, j;
//
//    // check_crush() => ������ ��ġ�� �����ǰ� �� ����� ���ؼ� ��ġ�� false
//
//    // crush_on flag�� ���� �ְ� ���� ��������� crush flag ��(������ �̵� �Ұ��ߴµ� ȸ����Ű�� ������ ���)
//    if (crush_on && check_crush(bx, by + 1, b_rotation) == true) // ���� ������ �켱, ������ �� ������
//        crush_on = 0;
//
//    // crush_on flag�� ���� �ְ� ���� �ٴ��̸� ȸ�� �Ұ�
//    if (crush_on && check_crush(bx, by + 1, b_rotation) == false) {
//        // �Ʒ��� ������ ���� ������ ȸ�����Ѽ� x�� �������δ� �ű� �� �ִ� ���
//        // crush_on: �Ʒ��� �̵� �Ұ� �� 0���� 1�� �����Ŵ
//        // check_crush(bx, by + 1, b_rotation) == false: ���� ��ġ���� y��+1 �Ʒ� ��ǥ ��ġ���� �������� ��ϰ� ������ �� ������ ���� ����
//
//        for (i = 0; i < MAIN_Y; i++) { // ���� ���� ���� ���� ������ ��, for(0���� ; ������ ���� ũ����� ; +1�� ����)
//            for (j = 0; j < MAIN_X; j++) { // for(0���� ; ������ ���� ũ����� ; +1�� ����)
//                if (main_org[i][j] == ACTIVE_BLOCK) // �̵� ���� ���� �� 
//                    main_org[i][j] = INACTIVE_BLOCK; // ���� ������ �����
//            }
//        }
//
//        crush_on = 0; // flag�� �� 
//        check_line(); // ���� üũ�� �� 
//        new_block_on = 1; // ���ο� �� ���� flag�� ��    
//        return; // �Լ� ���� 
//    }
//
//    if (check_crush(bx, by + 1, b_rotation) == true)
//        move_block(DOWN); // ���� ��������� �� ������ �� ĭ �̵� 
//
//    if (check_crush(bx, by + 1, b_rotation) == false)
//        crush_on++; // ������ �̵��� �� �Ǹ� crush flag�� ��(Ư�� ���� �� Ȱ��)
//}
//
//
//
//// ������ ��ǥ bx, by ��ġ���� rotation ȸ������ ���� ��� �浹 �Ǵ��ϴ� �Լ�
//int check_crush(int bx, int by, int b_rotation) { // ������ x, y��ǥ, ȸ����
//    int i, j;
//
//    // ������ ��ġ�� �����ǰ� �� ����� ���ؼ� ��ġ�� false ����
//    // if(�� ��� 1�̸鼭 ������ ��ǥ �� ĭ�� Ȯ������ �� ���(�� �̵� �Ұ�))
//    for (i = 0; i < 4; i++) {
//        for (j = 0; j < 4; j++) {
//            if (blocks[b_type][b_rotation][i][j] == 1 && main_org[by + i][bx + j] > 0)
//                return false;
//        }
//    }
//
//    return true; // �ϳ��� �� ��ġ�� true ���� 
//};
//
//
//
//// �� �̵� �Լ�
//// dir(�ش� �Լ��� �Ű�����) �������� ���� ������ 
//void move_block(int dir) { // ���� �̵���Ŵ 
//    int i, j;
//
//    switch (dir) {
//    case LEFT: // ���� ����Ű 
//        // ���� ��ǥ�� ���� ���� 
//        for (i = 0; i < 4; i++) {
//            for (j = 0; j < 4; j++) {
//                if (blocks[b_type][b_rotation][i][j] == 1)
//                    main_org[by + i][bx + j] = EMPTY;
//            }
//        }
//
//        // �������� �� ĭ ���� active block ���� ���� 
//        for (i = 0; i < 4; i++) {
//            for (j = 0; j < 4; j++) {
//                if (blocks[b_type][b_rotation][i][j] == 1)
//                    main_org[by + i][bx + j - 1] = ACTIVE_BLOCK;
//            }
//        }
//        bx--; // ��ǥ�� �̵� 
//        break;
//
//    case RIGHT:// ������ ����Ű
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
//    case DOWN: // �Ʒ��� ����Ű
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
//    case UP: // ���� ����Ű
//        for (i = 0; i < 4; i++) {
//            for (j = 0; j < 4; j++) {
//                if (blocks[b_type][b_rotation][i][j] == 1)
//                    main_org[by + i][bx + j] = EMPTY;
//            }
//        }
//
//        b_rotation = (b_rotation + 1) % 4;
//        // ȸ������ 1 ���� ��Ŵ(3���� 4�� �Ǵ� ���� 0���� �ǵ���) 
//
//        for (i = 0; i < 4; i++) { // ȸ���� ���� ���� ���� 
//            for (j = 0; j < 4; j++) {
//                if (blocks[b_type][b_rotation][i][j] == 1)
//                    main_org[by + i][bx + j] = ACTIVE_BLOCK;
//            }
//        }
//        break;
//
//    case 100: // ���� �ٴ�, Ȥ�� �ٸ� ���� ���� ���¿��� �� ĭ ���� �÷� ȸ�� ������ ��� 
//        // �̸� ���۽�Ű�� Ư�� ����  
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
//// ���� ���� á���� �Ǵ��ϰ� ����� �Լ�
//void check_line(void) {
//    int i, j, k, l;
//
//    int block_amount; // �� ���� �� ������ �����ϴ� ���� 
//
//    // for(�ٴ��� �ٷ� ���ٿ�������(������ ���� ũ�� - �ٴ�&õ��) ; õ��(3) �Ʒ����� �˻� ; )
//    for (i = MAIN_Y - 2; i > 3;) {
//        block_amount = 0; // �� ���� ���� ���� �ʱ�ȭ 
//
//        // ���� ���� ������ �� ������ �� ������ �� 
//        for (j = 1; j < MAIN_X - 1; j++) {
//            if (main_org[i][j] > 0) // �ش� ��ǥ�� ���� ����� �� �̵� �Ұ�, �̹� ���� �ִ� ��
//                block_amount++; // �� ���� +1
//        }
//
//        // ���� �� �� ���� �� ��� (MAIN_X - 2 = ���� �� ���� �� ������ ũ��)
//        if (block_amount == MAIN_X - 2) {
//            // ������ �� ĭ�� ��� ���� (������ õ���� �ƴ� ��쿡��) 
//            for (k = i; k > 1; k--) {
//                for (l = 1; l < MAIN_X - 1; l++) {
//                    if (main_org[k - 1][l] != CEILLING) // �ش� ��ǥ�� ���� õ���� �ƴϸ�
//                        main_org[k][l] = main_org[k - 1][l]; // k�ٿ� k-1(�ٷ� ��)�� �������� ��.
//
//                    if (main_org[k - 1][l] == CEILLING) // �ش� ��ǥ�� ���� õ���̸�
//                        main_org[k][l] = EMPTY;
//                    // ������ õ���� ��쿡�� õ���� ������ �� �Ǵϱ� �� �� ���� 
//                }
//            }
//        }
//
//        else i--;
//    }
//}
//
//
//// ���� ���� �Ǵ��ϰ� ���� ������ �����ϴ� �Լ�
//void check_game_over(void) {
//    int i;
//
//    for (i = 1; i < MAIN_X - 2; i++) { // for(���� ��[0] ������ [1]���� ; �� ���� ������ ���� ũ����� ; +1�� ����)
//        if (main_org[3][i] > 0) { // õ��(������ ����° ��)�� inactive block �����Ǹ� ���� ���� 
//            stop_block(); // ��� ���� �ߴ�
//            Sleep(100); // ��� ȭ�� ����
//            system("cls"); // ȭ�� ��� �ְ�
//            printf("Game over... \n"); // ���� ���� ���� ��� �ָ鼭
//            exit(0); // ���� ����
//        }
//    }
//}