//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <malloc.h>
//#include <time.h>
//#include <string.h>
//
//void main() {
//    // 09-응용9-2) car--; 안 하면 계속 새로운 차
//    char car = 'A';
//    int top = 0;
//    char stack[5];
//    int answer;
//    printf("스택 안에 차 넣기 \n");
//
//    do {
//        printf("\n<1> push, <2> pop, <3> stop: ");
//        scanf("%d", &answer);
//
//        switch (answer) {
//        case 1:
//            if (top < 5) {
//                stack[top] = car;
//                printf("%c차 push \n", stack[top]);
//                top++;
//                car++;
//            }
//            else printf("push 불가 \n");
//            break;
//        case 2:
//            if (top > 0) {
//                top--;
//                printf("%c차 pop \n", stack[top]);
//                stack[top] = ' ';
//            }
//            else printf("pop 불가 \n");
//            break;
//        case 3:
//            printf("현재 스택 안에 남은 차는 %d대입니다. \n", top); 
//            printf("프로그램 종료합니다. \n"); break;
//        default: printf("잘못 입력했습니다. \n"); break;
//        }
//
//    } while (answer != 3);
//
//
//     12-07) 포인터 배열은 매번 malloc으로 메모리 할당
//    int i, size;
//    char* p[5];
//    char imsi[100];
//
//    FILE* rfp;
//    rfp = fopen("c:\\windows\\win.ini", "r");
//
//    for (i = 0; i < 5; i++) {
//        fgets(imsi, 100, rfp);
//        size = strlen(imsi);
//
//        p[i] = (char*)malloc((sizeof(char) * size) + 1);
//        strcpy(p[i], imsi);
//
//        printf("%d : %s", i + 1, p[i]);
//    }
//
//    for (i = 4; i >= 0; i--) {
//        printf("%d : %s", i + 1, p[i]);
//    }
//    fclose(rfp);
//    for (i = 0; i < 5; i++) {
//        free(p[i]);
//    }
//
//
//    // 알아 둬야 할 것들
//    // 1) fclose(), free() 필수. 동적 메모리 할당 포인터 배열 -> 반복문으로 free()
//     
//    // 2) strcpy()는 개행문자까지 복사. 그래서 메모리 할당 시 +1로 메모리 받아옴.
//     
//    // 3) 다른 문자열에 대입할 때만(순서 반대로 복사 반복문) 
//       // 배열[size-1] = '\0'; 또는 배열[i] = '\0'; 개행문자 입력 필수.
//     
//    // 4) 구조체 선언 유형은 세 가지가 있다. (공용체도 세 가지 방법 똑같이)
//    // 4-1) struct 구조체명 {}; struct 구조체명 변수명; 
//    // 4-2) struct 구조체명 {} 변수명; 
//    // 4-3) typedef struct _구조체명 {} 구조체명; 구조체명 변수명;
//    // 4-4) 구조체 포인터: 포인터 = (struct 구조체명*) malloc (sizeof(struct 구조체명) * 필요 개수);
//    // 4-5) 구조체 포인터 typedef: 
//                       // 포인터 = (struct _구조체명*) malloc (sizeof(struct _구조체명) * 필요 개수);
//     
//    // 5) 배열 출력은 %s에 포인터명만 대입. *포인터 아님.
//     
//    // 6) 구조체 배열 대입/출력은 포인터[첨자].멤버변수 = 초기값. -> 아님. 화살표는 단일 입력 시.
//     
//    // 7) 공용체 선언 유형은 구조체와 동일하다. typedef까지 똑같이 쓸 수 있다.
//     typedef union _employee {
//         char name[10];
//         char dept[10];
//     } employee;
//     employee e1;
//     printf("입력: ");
//     scanf("%s", e1.name);
//     printf("출력: %s \n", e1.dept);
//     
//    // 8) 열거형은 열거형 변수에 열거형 멤버 변수 중 하나만 대입한다.
//    // 8-1) 열거형 선언 방법도 세 가지.
//     enum season { spring, summer }; enum season ss;
//     enum season { spring, summer } ss;
//     typedef enum _season { spring, summer } season; season ss;
//
//    // 9) realloc()은 받는 개수가 안 정해져서 계속 공간 추가할 때(랜덤 숫자 문제) 사용.
//    // 9-1) 반복문 위에 malloc(... * 1); 반복문 안에 realloc(포인터, ... * i); (i는 2 이상)
//    // 9-2) 포인터 배열 활용할 때는 realloc 안 쓰고 매번 malloc((... * size) + 1); 활용.
//
//    // 10) 무한 루프 탈출 if문은 합계, 출력 코드 위에 넣기.
//}