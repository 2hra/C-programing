//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <time.h>
//
//// 10-4)
//void myFunc(n1, n2);
//
//// 10-6)
//int var = 0;
//void func1() {
//	int var = 111;
//}
//void func2() {
//	var = 222;
//}
//
//// 10-7)
//void func7(int *para) {
//	*para = *para + 100;
//}
//
//// 10-8)
//char upper_lower(str);
//
//// 10-9)
//int throwDice() {
//	return rand() % 6 + 1;
//}
//
//// 10-10)
//void func10(a);
//
//void main() {
//	// Chapter 8. �迭 ��������
//	// 1. int ary[3]; >> ary[3] �Ұ�
//	 int ary[3] = { 0,0,0,0 }; -> ÷�� 3���� �̴ϼȶ������� ���ٰ� ��.
//	 
//	// 2. �迭 ���� -> 1, 10, 12, 15
//	int ary1[1] = { 0 };
//	printf("%d \n", sizeof(ary1) / sizeof(int));
//	int ary10[10] = { 0 };
//	printf("%d \n", sizeof(ary10) / sizeof(int));
//	int ary34[3*4] = { 0 };
//	printf("%d \n", sizeof(ary34) / sizeof(int));
//	int ary35[3][5] = {0};
//	printf("%d \n", sizeof(ary35) / sizeof(int));
//	
//	// 3. 9 ���.
//	int ary_3[4] = { 1,2,3,4 };
//	int hap = 0;
//	int i;
//	for (i = 3; i > 0; i--)
//		hap += ary_3[i];
//	printf("%d \n", hap);
//	
//	// 4. 2, 3���� ����.
//	int ary[3] = { 100, 200, 300, 400 }; // �길 ������ ÷�� �������� ����
//	int ary[] = { 100, 200, 300, 400 };
//	int ary[3] = { 100, 200 };
//	
//	// 5. 1���� ����
//	short int ary[] = { 1.1, 2.2, 3.3, 4.4 };
//	printf("%d \n", sizeof(ary) / 2);
//	printf("%d \n", sizeof(ary) * 2);
//	printf("%d \n", sizeof(ary) % 2);
//	printf("%d \n", sizeof(ary) % sizeof(short int));
//	
//	// 6. VsaSui
//	char str[13] = "VisualStudio";
//	int i;
//	for (i = 0; i < 13; i += 2)
//		printf("%c", str[i]);
//	
//	// 7. ���ڿ� ��� puts()(cf. gets), ���ڿ� �� strcmp(���ڿ� A, ���ڿ� B) ���� 0�̸� ������ ���ڿ�, 
//	//    ���ڿ� ���� strlen() ���� ���� �� ���� ������ŭ ���� ��ȯ, 
//	//    ���ڿ� ���� strcat(���� ���ڿ�, �ڿ� ���� ���ڿ�), ���ڿ� ���� strcpy(���� ���ڿ�, ��� ���ڿ�)
//	
//	// 8. 9 8 7 
//	//	6 5 4
//	int ary[2][3];
//	int i, k;
//	int num = 10;
//	for (i = 0; i < 2; i++)
//		for (k = 0; k < 3; k++)
//			ary[i][k] = --num;
//	for (i = 0; i < 2; i++) {
//		for (k = 0; k < 3; k++) {
//			printf("%3d", ary[i][k]);
//		}
//		printf("\n");
//	}
//	
//	// 9. �ڵ� �ۼ� ����
//	char s[100];
//	int i;
//	char old, new;
//
//	printf("���� ���� �Է� : ");
//	gets(s);
//
//	printf("���� ����, �� ���� �Է� : ");
//	scanf(" %c %c", &old, &new);
//
//	for (i = strlen(s); i >= 0; i--) {
//		if (s[i] == old) printf("%c", new);
//		else printf("%c", s[i]);
//	}
//	
//	// ������ Ȱ�� ��Ǯ��
//	char s[100];
//	char* sp;
//	sp = s;
//	int i;
//	char old1, new1;
//
//	printf("���� ���� �Է� : ");
//	gets(s);
//
//	printf("���� ����, ���ο� ���� �Է� : ");
//	scanf(" %c %c", &old1, &new1);
//	printf("%s \n", s);
//
//	for (i = 0; i <= strlen(s); i++) {
//		if (*(sp + i) == old1) printf("%c", new1);
//		else printf("%c", *(sp + i));
//	}
//	
//	
//	
//	// Chapter 9. �迭�� ������ ��������
//	// 1. ������ �ִ� ���� push, ���� ���� pop. top�� ���� ���� �ִ� ������.
//	 
//	// 2. num2�� �ּҴ� &num2�� ����. �����Ͱ� ���ٰ� ���� �޸� �ּҴ� �ƴ�.
//	
//	// 3. ary[0]�� �ּҴ� &ary[0]�̰�, ���� 100�̴�. &ary[2]�� ary+2�� ���� �ּ�.
//	int ary[3] = {100, 200, 300};
//	printf("��: %d, �ּ�: %d \n", ary[0], &ary[0]);
//	printf("%d %d \n", &ary[2], ary+2);
//	
//	// 4. �����ʹ� ��� 4����Ʈ. * ��ȣ�� ���δ�. ���� �� �����ͺ��� = &�Է��ּҰ����� ����.
//	
//	// 5. *c, &p�� ����.
//	char c;
//	char* p;
//	c = 'K';
//	p = &c;
//	printf("c = %c, *p = %c, *c = ����, &p = %d(�������� �ּҰ�) \n", c, *p, &p);
//	
//	// 6. int�� ������ 4����Ʈ, ��� 4����Ʈ
//	
//	// 7. Z Z
//	char ch;
//	char* p;
//	char* q;
//	ch = 'K';
//	q = &ch;
//	ch = 'M';
//	p = q;
//	ch = 'Z';
//	printf("%c %c", *p, *q);
//	
//	// 8. �Ųٷ� ���, ��ҹ��� ��ȯ, �ڵ� ä���.
//	char ary[25] = "IT 1234 @$% CookBook";
//	char* p;
//	int i;
//	p = ary;
//	int diff = 'a' - 'A';
//	for (i = sizeof(ary) - 2; i >= 0; i--) {
//		if (*(p + i) >= 'A' && *(p + i) <= 'Z') printf("%c", *(p + i) + diff);
//		else if (*(p + i) >= 'a' && *(p + i) <= 'z') printf("%c", *(p + i) - diff);
//		else printf("%c", *(p + i));
//	} // ���ǹ����� ����Ʈ��
//	for (i = sizeof(ary) - 2; i >= 0; i--) {
//		if (*(p + i) >= 'A' && *(p + i) <= 'Z') *(p + i) = *(p + i) + diff;
//		else if (*(p + i) >= 'a' && *(p + i) <= 'z') *(p + i) = *(p + i) - diff;
//		printf("%c", *(p + i));
//	} // ������ ��ü �� ����
//	
//	// 9. �ڵ� �ۼ� ����
//	char s[40];
//	int i, k, cmp;
//	char* p;
//	char* q;
//
//	printf("���� �� ���ڿ�: ");
//	gets(s);
//	p = s;
//
//	printf("���� �� ���ڿ�: ");
//	for (i = 0; i < strlen(s); i++) {
//		for (k = i + 1; k < strlen(s); k++) {
//			if (*(p + i) < *(p + k)) {
//				cmp = *(p + i);
//				*(p + i) = *(p + k);
//				*(p + k) = cmp;
//			}
//		}
//	}
//	puts(s);
//	
//	// ������������ �ٽ� ����
//	char str[40];
//	int i, k, cmp;
//	char* p;
//
//	printf("���� �� ���ڿ�: ");
//	gets(str);
//	p = str;
//
//	printf("���� �� ���ڿ�: ");
//	for (i = 0; i < strlen(str); i++) {
//		for (k = i + 1; k < strlen(str); k++) {
//			if (*(p + i) > *(p + k)) {
//				cmp = *(p + i);
//				*(p + i) = *(p + k);
//				*(p + k) = cmp;
//			}
//		}
//	}
//	puts(str);
//	
//	
//	
//	// chapter 10. �Լ� ��������
//	// 1. printf()�� ���� �Լ���. �Լ��� ���� ���� �� �ִ�.
//	 
//	// 2. �Ű�����
//	
//	// 3. 10,20�̶� 3.15,5.8
//	printf("%d \n", addFunction(10, 20));
//	// addFunction(10); // �Ű����� ���� ����
//	// printf("%.2f \n", addFunction(3.14, 5.8)); // 0.000000���� ����
//	// addFunction("�ȳ�", "�ϼ���"); // �Ű����� �ڷ��� ����.
//	
//	// 4. void myFunc(n1, n2); ���� �����ؾ� ���� �Ʒ� �Լ� ���� �ÿ��� ���� X
//	myFunc(10, 20);
//	
//	// 5. ���������� ������������ �켱������ ����.
//	
//	// 6. 0, 0, 222
//	printf("%d \n", var);
//	func1();
//	printf("%d \n", var);
//	func2();
//	printf("%d \n", var);
//	
//	// 7. �ڵ� ä��� �ڡڡ�
//	int para = 200;
//	func7(&para);
//	printf("%d \n", para);
//	
//	// 8. ��ҹ��� ��ȯ
//	char inStr[100], outStr[100];
//	printf("���ڿ� 100�� �̳�: ");
//	scanf("%s", inStr);
//	upper_lower(inStr);
//	strcpy(outStr, inStr); // IT_CookBook_Hanbit_Network
//	printf("��ȯ ��� => %s \n", outStr);
//	
//	// 9. �ڵ� ä���
//	short int diceNum[10] = { 0, };
//	int i;
//	char dup = 'N';
//
//	printf("�ֻ��� 2�� ������ \n\n");
//	srand((unsigned)time(NULL));
//
//	int dice1, dice2;
//	int equalCount = 0;
//
//	while (1) {
//		dice1 = throwDice();
//		dice2 = throwDice();
//		
//		if (dice1 == dice2) {
//			dup = dice1;
//			diceNum[equalCount] = dup;
//			equalCount += 1;
//		}
//
//		if (equalCount == 10) break;
//	}
//
//	printf("���� ���� ���� ���� => ");
//	for (i = 0; i < 10; i++) {
//		printf("%d  ", diceNum[i]);
//	}
//	printf("\n");
//	// 10. �ڵ� ä���
//	func10(100);
//}
//
//// 10-3)
//int addFunction(int m, int n) {
//	return m + n;
//}
//
//// 10-4)
//void myFunc(int n1, int n2) {
//	printf("%d", n1 + n2);
//}
//
//// 10-8)
//char upper_lower(char* p) {
//	int i = 0;
//	int diff = 'a' - 'A';
//	
//	do {
//		if (*(p + i) >= 'A' && *(p + i) <= 'Z') *(p + i) = *(p + i) + diff;
//		else if (*(p + i) >= 'a' && *(p + i) <= 'z') *(p + i) = *(p + i) - diff;
//		i++;
//	} while (*(p + i) != '\0');
//
//	return p;
//}
//
//// 10-10)
//void func10(int a) {
//	printf("%d \n", a);
//}
