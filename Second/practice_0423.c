//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//void main() {
//
//	//char a = 'A', b = 'B', c = 'C';
//	//a = b = 100;
//	//printf("%c %c %c \n", a, b, c);
//	//a = 'A', b = 'B', c = 'C';
//	//a = b = 'T';
//	//printf("%c %c %c \n", a, b, c);
//	//a = 'A', b = 'B', c = 'C';
//	//a = b = 200;
//	//printf("%c %c %c \n", a, b, c);
//	//a = 'A', b = 'B', c = 'C';
//	//c = a - b;
//	//printf("%c %c %c \n", a, b, c);
//
//
//
//	//char mystr[3] = "AB";
//	//printf("%s \n", mystr);
//	//mystr[0] = 'C';
//	//printf("%s \n", mystr);
//	//mystr[1] = 66;
//	//printf("%s \n", mystr);
//	//mystr[2] = 100 - 30;
//	//printf("%s \n", mystr); // ���๮�� ã�� ������ ���ư�. ������ �� ��.
//	//mystr[3] = 'C'; // ���� �Ѿ�� ���� ����.
//	//printf("%s \n", mystr);
//
//
//
//	//float a = 123.45, b;
//	//printf("%08.3f \n", a);
//	//int c = a;
//	//b = c;
//	//printf("%6.2f \n", b);
//
//
//
//	//int a = 111.22;
//	//float b = 300;
//	//printf("%d \n", a);
//	//printf("%f \n", b);
//
//
//
//	//int n1 = 5, n2 = 4, n3 = 3;
//	//float res;
//	//res = n1 / n2 * n3;
//	//printf("%f \n", res);
//
//
//
//	//printf("%d \n", 0x1f >> 4);
//
//
//
//	//char ch;
//	//printf("A, B, C �� �ϳ� �Է�: ");
//	//scanf(" %c", &ch);
//	//switch (ch) {
//	//case 'A': printf("AŰ �Է���. \n"); break;
//	//case 'B': printf("BŰ �Է���. \n"); break;
//	//case 'C': printf("CŰ �Է���. \n"); break;
//	//default: printf("�߸� �Է�. \n"); break;
//	//}
//
//
//
//	//int num, dan;
//	//for (num = 9; num > 0; num--) {
//	//	for (dan = 9; dan > 1; dan--) {
//	//		printf("%d X %d = %d \t", dan, num, dan * num);
//	//	}
//	//	printf("\n");
//	//}
//
//
//
//	//char str[100];
//	//int i;
//
//	//printf("���ڿ� �Է�: ");
//	//scanf("%s", &str);
//	//printf("�Ųٷ� ���: ");
//
//	//for (i = strlen(str) - 1; i >= 0; i--) {
//	//	if ((str[i] - 48 >= 0) && (str[i] - 48 <= 9))
//	//		printf("#");
//	//	else
//	//		printf("%c", str[i]);
//	//}
//	//printf("\n");
//
//
//
//	//int i = 0, k = 0;
//	//char heart[100];
//	//printf("���ڸ� �Է��ϼ��� : ");
//	//scanf("%s", &heart);
//	//while (i <= strlen(heart)) {
//	//	k = 0;
//	//	while (k < heart[i] - 48) {
//	//		printf("\u2665\u2665");
//	//		k++; // �ڡڡ�
//	//	}
//	//	printf("\n");
//	//	i++; // �ڡڡ�
//	//}
//
//
//
//	//int a, b;
//	//int i = 0;
//	//printf("���� �� �� ������ : ");
//	//scanf("%d %d", &a, &b);
//	//while (i < 2) {
//	//	if (b == 0) {
//	//		printf("0����. �ٽ�: ");
//	//		scanf("%d", &b);
//	//		i++; // �ڡڡ�
//	//	}
//	//	else break; // �ڡڡ�
//	//}
//	//if (b == 0) printf("0 �� �� ����. \n");
//	//else printf("%d / %d = %f \n", a, b, a / (float)b);
//
//
//
//	//int a, b;
//	//char ch;
//	//int i = 1;
//
//	//do {
//	//	printf("ù ��° ��: ");
//	//	scanf("%d", &a);
//	//	printf("������: ");
//	//	scanf(" %c", &ch);
//	//	printf("�� ��° ��: ");
//	//	scanf("%d", &b);
//	//	i++;
//	//} while (i<2);
//
//
//
//	//char str[100];
//	//int i = 0;
//	//int star;
//
//	//printf("���� : ");
//	//scanf("%s", &str);
//
//	//while (i <= strlen(str)) {
//	//	star = (int)str[i] - 48;
//	//	while (star > 0) {
//	//		printf("*");
//	//		star--;
//	//	}
//	//	printf("\n");
//	//	i++;
//	//}
//
//
//
//	//int a, b;
//	//printf("���� �Է�: ");
//	//scanf("%d %d", &a, &b);
//
//	//if (a > b) {
//	//	while (a >= b) {
//	//		if (b % 2 != 0)
//	//			printf("%d ", b);
//	//		b++;
//	//	}
//	//}
//	//else if (b > a) {
//	//	while (b >= a) {
//	//		if (a % 2 != 0)
//	//			printf("%d ", a);
//	//		a++;
//	//	}
//	//}
//
//
//
//	//int a, b;
//	//printf("���� �Է�: ");
//	//scanf("%d %d", &a, &b);
//
//	//if (a < b) {
//	//	for (a; a <= b; a++)
//	//		if(a%2!=0)
//	//			printf("%d ", a);
//	//	printf("\n");
//	//}
//	//else if (b < a) {
//	//	for (b; b <= a; b++)
//	//		if(b%2!=0)
//	//			printf("%d ", b);
//	//	printf("\n");
//	//}
//
//
//
//	//char heart[100];
//	//int i = 0;
//	//int heart_cnt;
//
//	//printf("���� : ");
//	//scanf("%s", &heart);
//
//	//while (i <= strlen(heart)) {
//	//	heart_cnt = (int)heart[i] - 48;
//	//	while (heart_cnt > 0) {
//	//		printf("\u2665\u2665");
//	//		heart_cnt--;
//	//	}
//	//	printf("\n");
//	//	i++;
//	//}
//
//
//
//	//char str[100];
//	//char ch;
//
//	//int upper_cnt = 0, lower_cnt = 0, digit_cnt = 0, etc_cnt = 0;
//
//	//printf("���ڿ� : ");
//	//scanf("%s", &str);
//
//	//int i = 0;
//	//ch = str[i];
//	//while (ch != '\0') {
//	//	if (ch >= 'A' && ch <= 'Z')
//	//		upper_cnt++;
//	//	else if (ch >= 'a' && ch <= 'z')
//	//		lower_cnt++;
//	//	else if (ch >= '0' && ch <= '9')
//	//		digit_cnt++;
//	//	else
//	//		etc_cnt++;
//	//	i++;
//	//	ch = str[i];
//	//}
//	//printf("�빮�� %d, �ҹ��� %d, ���� %d, �� �� %d \n", upper_cnt, lower_cnt, digit_cnt, etc_cnt);
//
//
//
//	//printf("%d \n", 0x00); // 0���� ����
//	//printf("%d \n", 0x1f); // 0~31(32��)
//	//printf("%d \n", 0x20); // 0~32(33��)
//	//printf("%.25lf \n", 1.1111111111111111111111111); // 16�ڸ�����.
//
//
//
//	char str[100];
//	int i;
//	char ch;
//
//	printf("���ڿ� �Է�: ");
//	scanf("%s", &str);
//
//	i = strlen(str)-1;
//	ch = str[i];
//
//	while (i >= 0) {
//		while (ch != '\0') {
//			printf("%c", str[i]);
//			i--;
//			ch = str[i];
//		}
//	}
//	printf("\n");
//
//
//
//
//
//}