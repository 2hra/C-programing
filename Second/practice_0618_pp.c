//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <malloc.h>
//#include <time.h>
//#include <string.h>
//
//void main() {
//    // 09-����9-2) car--; �� �ϸ� ��� ���ο� ��
//    char car = 'A';
//    int top = 0;
//    char stack[5];
//    int answer;
//    printf("���� �ȿ� �� �ֱ� \n");
//
//    do {
//        printf("\n<1> push, <2> pop, <3> stop: ");
//        scanf("%d", &answer);
//
//        switch (answer) {
//        case 1:
//            if (top < 5) {
//                stack[top] = car;
//                printf("%c�� push \n", stack[top]);
//                top++;
//                car++;
//            }
//            else printf("push �Ұ� \n");
//            break;
//        case 2:
//            if (top > 0) {
//                top--;
//                printf("%c�� pop \n", stack[top]);
//                stack[top] = ' ';
//            }
//            else printf("pop �Ұ� \n");
//            break;
//        case 3:
//            printf("���� ���� �ȿ� ���� ���� %d���Դϴ�. \n", top); 
//            printf("���α׷� �����մϴ�. \n"); break;
//        default: printf("�߸� �Է��߽��ϴ�. \n"); break;
//        }
//
//    } while (answer != 3);
//
//
//     12-07) ������ �迭�� �Ź� malloc���� �޸� �Ҵ�
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
//    // �˾� �־� �� �͵�
//    // 1) fclose(), free() �ʼ�. ���� �޸� �Ҵ� ������ �迭 -> �ݺ������� free()
//     
//    // 2) strcpy()�� ���๮�ڱ��� ����. �׷��� �޸� �Ҵ� �� +1�� �޸� �޾ƿ�.
//     
//    // 3) �ٸ� ���ڿ��� ������ ����(���� �ݴ�� ���� �ݺ���) 
//       // �迭[size-1] = '\0'; �Ǵ� �迭[i] = '\0'; ���๮�� �Է� �ʼ�.
//     
//    // 4) ����ü ���� ������ �� ������ �ִ�. (����ü�� �� ���� ��� �Ȱ���)
//    // 4-1) struct ����ü�� {}; struct ����ü�� ������; 
//    // 4-2) struct ����ü�� {} ������; 
//    // 4-3) typedef struct _����ü�� {} ����ü��; ����ü�� ������;
//    // 4-4) ����ü ������: ������ = (struct ����ü��*) malloc (sizeof(struct ����ü��) * �ʿ� ����);
//    // 4-5) ����ü ������ typedef: 
//                       // ������ = (struct _����ü��*) malloc (sizeof(struct _����ü��) * �ʿ� ����);
//     
//    // 5) �迭 ����� %s�� �����͸� ����. *������ �ƴ�.
//     
//    // 6) ����ü �迭 ����/����� ������[÷��].������� = �ʱⰪ. -> �ƴ�. ȭ��ǥ�� ���� �Է� ��.
//     
//    // 7) ����ü ���� ������ ����ü�� �����ϴ�. typedef���� �Ȱ��� �� �� �ִ�.
//     typedef union _employee {
//         char name[10];
//         char dept[10];
//     } employee;
//     employee e1;
//     printf("�Է�: ");
//     scanf("%s", e1.name);
//     printf("���: %s \n", e1.dept);
//     
//    // 8) �������� ������ ������ ������ ��� ���� �� �ϳ��� �����Ѵ�.
//    // 8-1) ������ ���� ����� �� ����.
//     enum season { spring, summer }; enum season ss;
//     enum season { spring, summer } ss;
//     typedef enum _season { spring, summer } season; season ss;
//
//    // 9) realloc()�� �޴� ������ �� �������� ��� ���� �߰��� ��(���� ���� ����) ���.
//    // 9-1) �ݺ��� ���� malloc(... * 1); �ݺ��� �ȿ� realloc(������, ... * i); (i�� 2 �̻�)
//    // 9-2) ������ �迭 Ȱ���� ���� realloc �� ���� �Ź� malloc((... * size) + 1); Ȱ��.
//
//    // 10) ���� ���� Ż�� if���� �հ�, ��� �ڵ� ���� �ֱ�.
//}