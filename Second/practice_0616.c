//#define _CRT_SECURE_NO_WARNINGS
//
//#include <string.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//
//
////// 10-07) �Լ� ��ĭ ä���
//void func(int* para) {
//	*para = *para + 100;
//}
//
////// 10-08) �Լ� �ڵ� ¥��
//char* upper_lower(char* s) { // �Լ� ������ ������ ǥ�� �߿� �ڡڡ�
//	int i;
//	int diff = 'a' - 'A';
//
//	for (i = 0; i <= strlen(s); i++) {
//		if (*(s + i) >= 'A' && *(s + i) <= 'Z') *(s + i) += diff;
//		else if (*(s + i) >= 'a' && *(s + i) <= 'z') *(s + i) -= diff;
//	}
//
//	return s;
//}
//
////// 10-09) �Լ�, ���� ��ĭ ä���
//int throwDice() {
//	int num = rand() % 6 + 1;
//	return num;
//}
//
////// 10-10) �Լ� ��ĭ ä���
//void func10(a);
//
//
//
//void main() {
//	//// C��� for beginner 4�� �������� 08~13�� �ڵ� �� ĭ ä���, �ڵ� ¥�� ����
//	 
//	// 08-09) �ڵ� ¥��
//	char str[100];
//	int i;
//	char old, new;
//	int diff = 'a' - 'A';
//
//	printf("���� ���� �Է�: ");
//	gets(str);
//
//	printf("����, �ű� ����: ");
//	scanf(" %c %c", &old, &new);
//
//	for (i = strlen(str); i >= 0; i--) {
//		if (str[i] == old) str[i] = new;
//		printf("%c", str[i]);
//	}
//	printf("\n");
//
//
//
//	// 08-09) ������ Ȱ�� �ڵ� ¥��
//	char str[100];
//	int i;
//	char old, new;
//	int diff = 'a' - 'A';
//
//	printf("���� ���� �Է�: ");
//	gets(str);
//	char* p = str;
//
//	printf("����, �ű� ����: ");
//	scanf(" %c %c", &old, &new);
//
//	for (i = strlen(str); i >= 0; i--) {
//		if (*(p + i) == old) *(p + i) = new;
//		printf("%c", *(p + i));
//	}
//	printf("\n");
//
//
//
//	// 09-08) ��ĭ ä���
//	char ary[25] = "IT 1234 @$% CookBook";
//	char* p;
//	int i;
//	p = ary;
//	int diff = 'a' - 'A';
//
//	printf("%s \n", p);
//	for (i = sizeof(ary) - 2; i >= 0; i--) {
//		// ���⼭���� �ڵ� �ۼ�
//		if (*(p + i) >= 'A' && *(p + i) <= 'Z') *(p + i) += diff;
//		else if (*(p + i) >= 'a' && *(p + i) <= 'z') *(p + i) -= diff;
//		printf("%c", *(p+i));
//	}
//	printf("\n");
//
//
//
//	// 09-09) �ڵ� ¥��
//	char s[40] = "ITCookBookHanbitNetwork";
//	int i, k, cmp;
//	char* p = s;
//
//	printf("���� �� ���ڿ�: %s \n", s);
//	printf("���� �� ���ڿ�: ");
//	for (i = 0; i <= strlen(s); i++) {
//		for (k = i + 1; k <= strlen(s); k++) {
//			if (*(p + i) < *(p + k)) {
//				cmp = *(p + i);
//				*(p + i) = *(p + k);
//				*(p + k) = cmp;
//			}
//		}
//		printf("%c", *(p + i));
//	}
//	printf("\n");
//
//
//
//	// 10-07) �Լ� ��ĭ ä���(��ܿ� ����)
//	int para = 200;
//	func(&para);
//	printf("%d \n", para);
//
//
//
//	// 10-08) �Լ� �ڵ� ¥��(��ܿ� ����)
//	char inStr[100], outStr[100];
//
//	printf("���ڿ� �Է�: ");
//	scanf("%s", inStr);
//
//	strcpy(outStr, upper_lower(inStr));
//	printf("��ȯ ���ڿ�: %s \n", outStr);
//
//
//
//	// 10-09) �Լ�, ���� ��ĭ ä���
//	short int diceNum[10] = { 0, };
//	int i;
//	char dup = 'N';
//
//	printf("** �ֻ��� 2�� ������ ���� ** \n");
//	srand((unsigned)time(NULL));
//
//	int dice1, dice2;
//	int equalCount = 0;
//
//	while (1) {
//		dice1 = throwDice();
//		dice2 = throwDice();
//		// ���⼭���� �ڵ� ¥��
//		if (dice1 == dice2) {
//			dup = 'Y';
//		}
//		else dup = 'N';
//
//		if (dup == 'Y') {
//			diceNum[equalCount] = dice1;
//			equalCount += 1;
//		}
//
//		if (equalCount == 10) break;
//		// ������� �ڵ� § �κ�
//	}
//	printf("���� ���� ���� ����(���� ����X): ");
//	for (i = 0; i < 10; i++) printf("%d  ", diceNum[i]);
//	printf("\n");
//
//
//
//	// 10-10) �Լ� ��ĭ ä���
//	func10(100);
//
//
//
//	// 11-03) ��ĭ ä���
//	char str[30];
//	printf("���ڿ� �Է� => ");
//	gets(str);
//	puts(str);
//
//
//
//	// 11-07) ��ĭ ä���
//	char str[200];
//	FILE* rfp;
//	rfp = fopen("c:\\windows\\win.ini", "r");
//	int line = 1;
//	while (1) {
//		// ���⼭���� �ڵ� ¥��
//		fgets(str, 200, rfp); // ���� �о� ���� ���� �߿� �ڡڡ�
//		printf("%d: %s", line, str);
//
//		if (feof(rfp)) break;
//		// ������� �ڵ� § �κ�
//
//		line++;
//	}
//	fclose(rfp);
//
//
//
//	// 11-08) �ڵ� ¥��
//	srand((unsigned)time(NULL));
//
//	int i;
//
//	FILE* wfp;
//	wfp = fopen("c:\\cookc\\0616.txt", "w");
//
//	for (i = 0; i < 5; i++) {
//		int num = rand() % 100 + 1;
//		printf("���� ����: %d\n", num);
//		fprintf(wfp, "���� ����: %d\n", num);
//	}
//	fclose(wfp);
//
//
//
//	// 12-03) ��ĭ ä���
//	int* p;
//	int i, hap = 0;
//	int cnt;
//	int ary[] = { 10, 20, 30, 40, 50 };
//
//	cnt = sizeof(ary) / sizeof(int); // ��ĭ 1
//	p = (int*)malloc(sizeof(int) * cnt); // ��ĭ 2
//
//	for (i = 0; i < cnt; i++) {
//		printf("�迭[%d] ����: %d \n", i, ary[i]);
//		*(p + i) = ary[i];// ��ĭ 3
//	}
//	for (i = 0; i < cnt; i++) {
//		hap += *(p + i); // ��ĭ 4
//	}
//	printf("�迭 ���� ��: %d \n", hap);
//	free(p); // ��ĭ 5
//
//
//
//	// 12-04) �ڵ� ¥�� �ڡڡ� �ݺ��� ���� �����
	//int i = 0; int hap = 0; int* p; int num;
	//srand((unsigned)time(NULL));

	//printf("���� ����: ");

	//p = (int*)malloc(sizeof(int) * 1);
	//num = rand() % 100 + 1;
	//p[i] = num;
	//hap = hap + p[i];
	//printf("%d ", p[i]);
	//i = 2;

	//while (1) {
	//	num = rand() % 100 + 1;
	//	p = (int*)realloc(p, sizeof(int) * i);
	//	p[i - 1] = num;

	//	if (p[i - 1] == 99 && i >= 2) break;
	//	
	//	hap = hap + p[i - 1];
	//	printf("%d ", p[i - 1]);
	//	i++;
	//}
	//printf("\n");
	//printf("���� �հ�: %d \n", hap);

//
//
//
//	// 12-07) �ڵ� ¥��
//	char str[100];
//	char* p[5]; // �ڡڡ� ������ �迭 ����
//	int i, cnt;
//
//	FILE* rfp;
//	rfp = fopen("c:\\windows\\win.ini", "r");
//
//	printf("-- win.ini ���� �� 5�� -- \n");
//	for (i = 0; i < 5; i++) {
//		fgets(str, 100, rfp);
//		cnt = strlen(str);
//
//		p[i] = (char*)malloc((sizeof(char) * cnt) + 1); // �ڡڡ� +1
//
//		strcpy(p[i], str); // �ڡڡ� ���ڿ� ����
//		printf("%d: %s", i+1, p[i]);
//	}
//	printf("\n");
//	printf("-- ���� �ݴ�� ��� -- \n");
//
//	for (i = 4; i >= 0; i--) {
//		printf("%d: %s", i + 1, p[i]);
//	}
//	fclose(rfp);
//
//
//
//	// 13-09) ��ĭ ä���
//	enum season {spring, summer, fall, winter};
//	enum season ss; // ��ĭ 1
//	ss = summer;
//	if (ss == summer) // ��ĭ 2
//		printf("������ ���� \n");
//	else printf("������ ���� �ƴ� \n");
//
//
//
//	// 13-10) ����ü, ����ü ���� ��� �ڵ� ¥��
	//typedef struct _employee {
		//// ���⼭���� �ڵ� ¥��
		//union nm {
		//	char name[10];
		//	char dept[10];
		//};
		//union nm nm;
		//union id {
		//	char phone[13];
		//	char jumin[20];
		//};
		//union id id;
		//// ������� �ڵ� § �κ�
	//} employee;

	//employee e1;

	//printf("�̸� �Ǵ� �μ� => ");
	//scanf("%s", e1.nm.name);
	//printf("��ȣ �Ǵ� �ּ� => ");
	//scanf("%s", e1.id.phone);

	//printf("\n-- ����ü, ����ü ȥ�� Ȱ�� -- \n");
	//printf("�̸�/�μ� => %s \n", e1.nm.dept);
	//printf("��ȣ/�ּ� => %s \n", e1.id.jumin);

//
//
//	// 13-11) ��ĭ ä���
//	struct student {
//		char name[10];
//		int avg;
//	};
//	struct student s;
//	struct student* p;
//	p = &s;// ��ĭ 1 �ڡڡ� �����Ϳ� ����ü �ּҰ� ����
//	printf("�̸�: ");
//	scanf("%s", p->name); // ��ĭ 2
//	printf("����: ");
//	scanf("%d", &p->avg); // ��ĭ 3
//}
//
////// 10-10) �Լ� ��ĭ ä���
//void func10(int a) {
//	printf("%d \n", a);
//}