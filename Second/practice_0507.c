//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <string.h>
//
//void main() {
//
//	// chapter 08) ��������
//	// 1) ary[3]
//	 
//	// 2) 1, 10, 12, 15 => printf("%d", sizeof(ary)/sizeof(char));
//	 
//	// 3) 9
//	int ary[4];
//	int hap = 0;
//	int i;
//	for (i = 0; i <= 3; i++) {
//		printf("%d��° ���� �Է�: ", i + 1);
//		scanf("%d", &ary[i]);
//	}
//	for (i = 3; i > 0; i--) { // 1���� ������ ary[0] = 1�� �� ������.
//		printf("%d \n", ary[i]);
//		hap += ary[i];
//	}
//	printf("���� %d \n", hap);
//	
//	// 4)
//	int ary[3] = { 100, 200 }; // ���� ����
//	int ary0[] = { 100, 200, 300, 400 }; // ���� ����
//	//int ary1[3] = { 100, 200, 300, 400 }; // ���� ũ�⺸�� �ʱ�ȭ���� ������ ������ ����
//	 
//	// 5)
//	short int ary[] = { 1.1, 2.2, 3.3, 4.4 };
//	printf("%d \n", sizeof(ary) / 2);
//	 
//	// 6) VsaSui
//	char str[13] = "VisualStudio";
//	int i;
//	for (i = 0; i < 13; i += 2)
//		printf("%c", str[i]);
//	 
//	// 7) puts(), strcmp(), strlen(), strcat()
//	
//	// 8) [0][0] 9 8 7 / [1][0] 6 5 4
//	int ary[2][3];
//	int i, k;
//	int num = 10;
//	for (i = 0; i < 2; i++)
//		for (k = 0; k < 3; k++)
//			ary[i][k] = --num;
//	for (i = 0; i < 2; i++) {
//		for (k = 0; k < 3; k++)
//			printf("%3d", ary[i][k]);
//		printf("\n");
//	}
//	 
//	// 9) 
//	char str[100];
//	char old, new;
//	int i;
//	printf("���� ���� �Է�: "); // IT CookBook
//	gets(str);
//	printf("���� ���ڿ� ���ο� ����: ");
//	scanf(" %c %c", &old, &new);
//	for (i = strlen(str); i >= 0; i--) {
//		if (str[i] == old) printf("%c", new);
//		else printf("%c", str[i]);
//	}
//
//
//
//	// chapter 09) ��������
//	// 1) �����͸� �ִ� ���� pop, ���� ���� push��� �θ���.(�ݴ��) / FILO ������ �ƴ϶� LIFO �����̴�. / top�� ���� �Ʒ��� �ִ� �����͸� ����Ų��.(top�� ���� ��ġ�� �´�)
//	
//	// 2) num2�� �ּҴ� *num2�� ������ �� �ִ�. => ������ ���� �� �ؼ� ����.
//	int num1, num2;
//	num1 = 123;
//	num2 = 456;
//	num2 = num1;
//	printf("%d => %d, size %d, %d => %d, size %d \n", num1, &num1, sizeof(num1), num2, &num2, sizeof(num2));
//	
//	// 3) ary[0]�� �ּҴ� &ary[0]�̰�, ary[0]�� ���� 100�̴�. / &ary[2]�� ary+2�� ���� �ּ��̴�.
//	int ary[3] = { 100,200,300 };
//	printf("�ּ� = %d, �� = %d, &ary[0]+&ary[1] = ����, &ary[2] = %d, ary+2 = %d \n", &ary[0], ary[0], &ary[2], ary + 2);
//	
//	// 4) ������ ������ ������ 4����Ʈ, ������ ������ ������ 1����Ʈ(���� 4����Ʈ�� �´�) / ������ ������ ������ ���� �տ� & ��ȣ�� ���δ�. => * / int *p�� ������ �����ϸ� &p = 100���� ���� ������ �� �ִ�. => p = &������ ����
//	 
//	// 5) 'K'�� ����ϱ� ���ؼ��� c�� *p�� ����ؾ� �Ѵ�.
//	char c;
//	char* p;
//	c = 'K';
//	p = &c;
//	printf("%c %c", c, *p);
//	
//	// 6) int�� �����ʹ� 4����Ʈ�� ũ���. / �����ʹ� ������ ���İ� ���þ��� ��� 4����Ʈ�� ũ���.
//    
//	// 7) ZZ
//	char ch;
//	char* p;
//	char* q;
//	ch = 'K';
//	q = &ch;
//	ch = 'M';
//	p = &ch;
//	ch = 'Z';
//	printf("%c %c", *q, *p);
//	
//	// 8)
//	char ary[25] = "IT 1234 @$% CookBook";
//	char* p;
//	int i;
//	p = ary;
//	int diff = 'a' - 'A';
//	for (i = sizeof(ary) - 2; i >= 0; i--) {
//		if (*(p + i) >= 'A' && *(p + i) <= 'Z')
//			*(p + i) += diff;
//		else if (*(p + i) >= 'a' && *(p + i) <= 'z') 
//			*(p + i) -= diff;
//		printf("%c", *(p + i));
//	}
//	
//	// 9)
//	char s[40];
//	int i, k, tmp;
//	char* p = s;
//	printf("���� �� ���ڿ�: ");
//	gets(s);
//	for (i = 0; i <= strlen(s) ; i++) {
//		for (k = i + 1; k < strlen(s); k++) {
//			if (*(p + i) < *(p + k)) {
//				tmp = *(p + i);
//				*(p + i) = *(p + k);
//				*(p + k) = tmp;
//			}
//		}
//	}
//	printf("���� �� ���ڿ�: ");
//	for (i = 0; i <= strlen(s); i++)
//		printf("%c", *(p + i));
//	printf("\n");
//}