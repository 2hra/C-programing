//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <time.h>
//#include <malloc.h>
//
////char* upper_lower(char* s) {
////	int i;
////	int diff = 'a' - 'A';
////
////	for (i = 0; i <= strlen(s); i++) {
////		if (*(s + i) >= 'A' && *(s + i) <= 'Z') *(s + i) += diff;
////		else if (*(s + i) >= 'a' && *(s + i) <= 'z') *(s + i) -= diff;
////	}
////
////	return s;
////}
//
//int getNum() {
//	return rand() % 100 + 1;
//}
//
//char* upper_lower(char* s) {
//	int i;
//	int diff = 'a' - 'A';
//
//	for (i = 0; i < strlen(s); i++) {
//		if (*(s + i) >= 'A' && *(s + i) <= 'Z') s[i] += diff;
//		else if (s[i] >= 'a' && s[i] <= 'z') *(s + i) -= diff;
//	}
//	return s;
//}
//
//int throwDice(){
//	return rand() % 6 + 1;
//}
//
//void main() {
//
//	// chapter 08) ���빮�� ���� - �迭 ÷�ڿ� �� ����
//	int aa[4];
//	int hap = 0;
//	int i;
//
//	for (i = 0; i <= 3; i++) {
//		printf("%d��°: ", i+1);
//		scanf("%d", &aa[i]);
//		hap += aa[i];
//	}
//	printf("%d \n", hap);
//
//
//	// chapter 08-22) ������ ����
//	char gugu[9][9];
//	int i, k;
//	
//	for (i = 0; i < 9; i++) {
//		for (k = 0; k < 9; k++) {
//			gugu[k][i] = (i + 1) * (k + 1);
//			printf("%dX%d=%2d ", k+1, i+1, gugu[k][i]);
//		}
//		printf("\n");
//	}
//
//
//	// chapter 09) ���빮�� ���� - ����
//	char stack[5];
//	int top = 0;
//
//	char carName = 'A';
//	int select = 9;
//
//	while (select != 3) {
//		printf("<1> push <2> pop <3> stop : ");
//		scanf("%d", &select);
//
//		switch (select) {
//		case 1: 
//			if (top >= 5) printf("push �Ұ� \n");
//			else {
//				stack[top] = carName++;
//				printf("%c �� push \n", stack[top]);
//				top++;
//			}
//			break;
//		case 2:
//			if (top <= 0) printf("pop �Ұ� \n");
//			else {
//				top--;
//				carName--;
//				printf("%c �� pop \n", stack[top]);
//				stack[top] = ' ';
//			}
//			break;
//		case 3:
//			printf("���� ���� %d�� �Դϴ�. \n", top);
//			printf("���α׷� �����մϴ�. \n");
//			break;
//		default: printf("�߸� �Է��ϼ̽��ϴ�. \n");
//			break;
//		}
//	}
//
//
//	// chapter 10-08)
//	char inStr[100], outStr[100];
//
//	printf("���ڿ� �Է�: ");
//	scanf("%s", inStr);
//
//	strcpy(outStr, upper_lower(inStr));
//	printf("��ȯ ���ڿ�: %s \n", outStr);
//
//
//	// chapter 12-04) �ڵ� ¥�� ����
//	int i = 0; int hap = 0; int* p; int num;
//	srand((unsigned)time(NULL));
//
//	printf("���� ����: ");
//
//	p = (int*)malloc(sizeof(int) * 1);
//	num = rand() % 100 + 1;
//	p[i] = num;
//	hap = hap + p[i];
//	printf("%d ", p[i]);
//	i = 2;
//
//	while (1) {
//		num = rand() % 100 + 1;
//		p = (int*)realloc(p, sizeof(int) * i);
//		p[i - 1] = num;
//
//		if (p[i - 1] == 99 && i >= 2) break;
//		
//		hap = hap + p[i - 1];
//		printf("%d ", p[i - 1]);
//		i++;
//	}
//	printf("\n");
//	printf("���� �հ�: %d \n", hap);
//
//
//	// chapter 12-07) �ڵ� ¥�� ����
//	int i, size; char imsi[100]; char *p[5];
//	FILE* rfp;
//	rfp = fopen("c:\\windows\\win.ini", "r");
//
//	printf("����� ��� \n");
//	for (i = 0; i < 5; i++) {
//		fgets(imsi, 100, rfp);
//		size = strlen(imsi);
//		p[i] = (char*)malloc((sizeof(char) * size) + 1);
//		strcpy(p[i], imsi);
//		printf("%d : %s", i + 1, p[i]);
//	}
//	printf("\n");
//	printf("�Ųٷ� ��� \n");
//	for (i = 4; i >= 0; i--) {
//		printf("%d : %s", i + 1, p[i]);
//	}
//	fclose(rfp);
//
//
//	// 13-10) ����ü, ����ü ���� ��� �ڵ� ¥��
//	typedef struct _employee {
//		// ���⼭���� �ڵ� ¥��
//		union nm {
//			char name[10];
//			char dept[10];
//		};
//		union nm nm;
//		union id {
//			char phone[13];
//			char jumin[20];
//		};
//		union id id;
//		// ������� �ڵ� § �κ�
//	} employee;
//
//	employee e1;
//
//	printf("�̸� �Ǵ� �μ� => ");
//	scanf("%s", e1.nm.name);
//	printf("��ȣ �Ǵ� �ּ� => ");
//	scanf("%s", e1.id.phone);
//
//	printf("\n-- ����ü, ����ü ȥ�� Ȱ�� -- \n");
//	printf("�̸�/�μ� => %s \n", e1.nm.dept);
//	printf("��ȣ/�ּ� => %s \n", e1.id.jumin);
//
//
//	// chapter 13-12)
//	struct student {
//		char name[10];
//		int kor;
//		int eng;
//		float avg;
//	} s = { "ȫ�浿", 80, 100 };
//
//	s.avg = (s.kor + s.eng) / 2.0f;
//
//	printf("�л� �̸� => %s \n", s.name);
//	printf("���� ���� => %d \n", s.kor);
//	printf("���� ���� => %d \n", s.eng);
//	printf("��� ���� => %5.1f \n", s.avg);
//
//
//
//	// �������� �ڵ� �� ���� �ٽ� ����
//	// chapter 08-09) ������, ���� �޸� �Ҵ� Ȱ��
//	int i, size; char str[100];
//	int diff = 'a' - 'A';
//	
//	printf("���� ���� �Է�: ");
//	gets(str);
//
//	char old, new;
//	printf("���� ����, �ű� ����: ");
//	scanf(" %c %c", &old, &new);
//
//	size = strlen(str);
//	char* p;
//	p = (char*)malloc((sizeof(char) * size) + 1);
//	strcpy(p, str);
//	p[size] = '\0'; // ���ڿ� �������� ���๮�� �ʼ�
//
//	printf("�ݴ��, ���� �� ���: "); 
//	for (i = size - 1; i >= 0; i--) { // ���ڿ� ���� - 1�� ÷���� ������
//		if (p[i] == old) {
//			*(p + i) = new;
//			if (p[i] >= 'A' && p[i] <= 'Z') p[i] += diff;
//			else if (p[i] >= 'a' && p[i] <= 'z') p[i] -= diff;
//		}
//		else {
//			if (p[i] >= 'A' && p[i] <= 'Z') p[i] += diff;
//			else if (p[i] >= 'a' && p[i] <= 'z') p[i] -= diff;
//		}
//		printf("%c", *(p + i));
//	}
//	printf("\n");
//	free(p);
//
//
//	// chapter 09-08) ������ �Ųٷ� ���, ��ҹ��� ��ȯ
//	char ary[25] = "IT 1234 @$% CookBook";
//	char* p;
//	int i;
//	p = ary;
//	int diff = 'a' - 'A';
//
//	printf("���� ���: %s \n", ary);
//	printf("�ݴ� ���: ");
//	for (i = sizeof(ary) - 2; i >= 0; i--) {
//		if (*(p + i) >= 'A' && *(p + i) <= 'Z') *(p + i) += diff;
//		else if (*(p + i) >= 'a' && *(p + i) <= 'z')*(p + i) -= diff;
//		printf("%c", p[i]);
//	}
//	printf("\n");
//
//
//	// chapter 09-09) �������� ���� �ڵ� ¥��
//	char s[40] = "ITCookBookHanbitNetwork";
//	
//	int i, k, tmp;
//	char* p = s;
//
//	printf("������� ���: %s \n", p);
//	for (i = 0; i < strlen(s); i++) {
//		for (k = i + 1; k < strlen(s); k++) {
//			if (*(p + i) < *(p + k)) {
//				tmp = *(p + i);
//				*(p + i) = *(p + k);
//				*(p + k) = tmp;
//			}
//		}
//	}
//	printf("�������� ����: %s \n", p);
//	for (i = 0; i < strlen(s); i++) {
//		for (k = i + 1; k < strlen(s); k++) {
//			if (p[i] > p[k]) {
//				tmp = p[i];
//				p[i] = p[k];
//				p[k] = tmp;
//			}
//		}
//	}
//	printf("�������� ����: %s \n", p);
//
//
//	// chapter 10-����29) �ζ� ��ȣ 10�� ��÷�ؼ� ���Ͽ� ����
//	int i, k, num;
//	int lotto[10];
//	char dup = 'N';
//
//	srand((unsigned)time(NULL));
//
//	FILE* wfp;
//	wfp = fopen("c:\\cookc\\0617.txt", "w");
//
//	for (i = 0; i < 10; ) {
//		num = getNum();
//		
//		for (k = 0; k < 10; k++)
//			if (lotto[k] == num) dup = 'Y';
//		
//		if (dup == 'N') {
//			printf("%d��° ��ȣ: %d \n", i + 1, num);
//			fprintf(wfp, "%d��° ��ȣ: %d \n", i + 1, num);
//			i++;
//		}
//		else 
//			dup = 'N';
//	}
//	fclose(wfp);
//
//
//	// chapter 10-����29) �ζ� ��ȣ 10�� ��÷�ؼ� ���Ͽ� ���� �ٽ� ����
//	int i, k, num;
//	int lotto[10];
//	char dup = 'N';
//
//	FILE* wfp;
//	wfp = fopen("c:\\cookc\\0617.txt", "w");
//
//	srand((unsigned)time(NULL));
//
//	for (i = 0; i < 10;) {
//		num = getNum();
//
//		for (k = 0; k < 10; k++)
//			if (lotto[k] == num) dup = 'Y';
//		
//		if (dup == 'N') {
//			lotto[i] = num;
//			printf("%d��° ����: %d \n", i + 1, lotto[i]);
//			fprintf(wfp, "%d��° ����: %d \n", i + 1, lotto[i]);
//			i++;
//		}
//		else
//			dup = 'N';
//	}
//	fclose(wfp);
//
//
//	// chapter 10-08) ��ҹ��� ��ȯ �Լ�
//	char inStr[100], outStr[100];
//	printf("���ڿ� �Է�: ");
//	scanf("%s", inStr);
//
//	strcpy(outStr, upper_lower(inStr));
//
//	printf("���ڿ� ��ȯ: %s \n", outStr);
//
//
//	// chapter 10-09) �ڵ� ä���
//	short int diceNum[10] = { 0 };
//	int i;
//	char dup = 'N';
//
//	printf("** �ֻ��� �� �� ������ **\n");
//	srand((unsigned)time(NULL));
//
//	int dice1, dice2;
//	int equalCount = 0;
//
//	while (1) {
//		dice1 = throwDice();
//		dice2 = throwDice();
//
//		if (dice1 == dice2) dup = 'Y';
//		else dup = 'Y';
//		
//		if (dup == 'Y') {
//			diceNum[equalCount] = dice1;
//			equalCount++;
//		}
//
//		if (equalCount >= 10) break;
//	}
//
//	printf("���� ���� ���� ����: ");
//	for (i = 0; i < 10; i++) {
//		printf("%d  ", diceNum[i]);
//	}
//	printf("\n\n");
//
//
//	// chapter 11-����30) ������ ���� ���
//	int i, k;
//	int gugu[9][8];
//
//	FILE* wfp;
//	wfp = fopen("c:\\cookc\\gugu0617.txt", "w");
//
//	for (i = 2; i < 10; i++) {
//		printf("#��%d��# ", i);
//		fprintf(wfp, "#��%d��# ", i);
//	}
//	printf("\n\n");
//	fprintf(wfp, "\n\n");
//
//	for (i = 0; i < 9; i++) {
//		for (k = 0; k < 8; k++) {
//			gugu[i][k] = (i + 1) * (k + 2);
//			printf("%dX%d=%2d  ", k + 2, i + 1, gugu[i][k]);
//			fprintf(wfp, "%dX%d=%2d  ", k + 2, i + 1, gugu[i][k]);
//		}
//		printf("\n");
//		fprintf(wfp, "\n");
//	}
//	fclose(wfp);
//
//
//	// chapter 11-07) win.ini ���� �а� ���
//	int i = 0;
//	char imsi[100];
//
//	FILE* rfp;
//	FILE* wfp;
//
//	rfp = fopen("c:\\windows\\win.ini", "r");
//	wfp = fopen("c:\\cookc\\win0617.txt", "w");
//
//	while (1) {
//		fgets(imsi, 100, rfp);
//		
//		if (feof(rfp)) break;
//
//		printf("%d: %s", i + 1, imsi);
//		fprintf(wfp, "%d: %s", i + 1, imsi);
//		i++;
//	}
//	printf("\n");
//	fprintf(wfp, "\n");
//	fclose(wfp);
//	fclose(rfp);
//
//
//	// chapter 12-04) ���� ���� �ڵ� ¥�� �ڡڡ�
//	int num;
//	int hap = 0;
//	int* p;
//
//	srand((unsigned)time(NULL));
//	printf("���� ���� => ");
//
//	int i = 0;
//
//	num = getNum();
//	p = (int*)malloc(sizeof(int) * 1);
//	p[i] = num;
//
//	printf("%d ", p[i]);
//	hap = hap + p[i];
//	i = 2;
//
//	while (1) {
//		num = getNum();
//		p = (int*)realloc(p, sizeof(int) * i);
//		p[i - 1] = num;
//
//		if (p[i - 1] == 99 && i >= 2) break;
//
//		printf("%d ", p[i - 1]);
//		hap = hap + p[i - 1];
//		i++;
//	}
//	printf("\n");
//	printf("���� �հ� => %d \n", hap);
//
//
//	// chapter 12-04) ���� ���� �ڵ� ¥�� �ٽ� ����
//	int i = 0;
//	int hap = 0;
//	int* p;
//	int num;
//
//	printf("���� ���� => ");
//	num = getNum();
//	p = (int*)malloc(sizeof(int) * 1);
//	p[i] = num;
//
//	printf("%d ", p[i]);
//	hap = hap + p[i];
//	i = 2;
//
//	while (1) {
//		num = getNum();
//		p = (int*)realloc(p, sizeof(int) * i);
//		p[i - 1] = num;
//
//		if (p[i - 1] == 99 && i >= 2) break;
//
//		printf("%d ", p[i - 1]);
//		hap = hap + p[i - 1];
//		i++;
//	}
//	printf("\n");
//	printf("���� �հ� => %d \n", hap);
//
//	
//	// chapter 12-07) win.ini �а� �Ųٷ� ���
//	int i, size;
//	char imsi[100];
//	char* p[5];
//
//	FILE* rfp;
//	rfp = fopen("c:\\windows\\win.ini", "r");
//
//	FILE* wfp;
//	wfp = fopen("c:\\cookc\\win0617.txt", "w");
//
//	printf("����� ���\n");
//	fprintf(wfp, "����� ���\n");
//	for (i = 0 ; i < 5 ; i++) {
//		fgets(imsi, 100, rfp);
//		size = strlen(imsi);
//
//		p[i] = (char*)malloc((sizeof(char) * size) + 1);
//		strcpy(p[i], imsi);
//
//		printf("%d : %s", i + 1, p[i]);
//		fprintf(wfp, "%d : %s", i + 1, p[i]);
//	}
//	printf("\n");
//	fprintf(wfp, "\n");
//
//	printf("�ݴ�� ���\n");
//	fprintf(wfp, "�ݴ�� ���\n");
//	for (i = 4; i >= 0; i--) {
//		printf("%d : %s", i + 1, p[i]);
//		fprintf(wfp, "%d : %s", i + 1, p[i]);
//	}
//	printf("\n");
//	fprintf(wfp, "\n");
//
//	fclose(rfp);
//	fclose(wfp);
//
//	for (i = 0; i < 5; i++) {
//		free(p[i]);
//	}
//}