//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <string.h>
//
//
//// �������� 27) ������ �Լ�
//int gugu(num) {
//	int i;
//
//	for (i = 1; i <= 9; i++)
//		printf("%d X %d = %2d \n", num, i, num * i);
//}
//
//
//// �������� 28) �Լ� �̿� ��ҹ��� ��ȯ
//char upper(char ch) {
//	return ch - ('a' - 'A');
//}
//char lower(char ch) {
//	return ch + ('a' - 'A');
//}
//
//
//// �������� 29) �ζ� ��÷
//int lotto() {
//	srand(time(NULL));
//	return rand()%45+1;
//}
//
//
//void main() {
//	// chapter 8 ���� ����)
//	// �������� 20) �Ųٷ� ��ȯ
//	char str[100];
//	int i;
//	
//	printf("���ڿ��� �Է��ϼ��� : ");
//	gets(str);
//
//	printf("������ �Ųٷ� ��� ==> ");
//	for (i = strlen(str); i >= 0; i--) {
//		printf("%c", str[i]);
//	}
//	printf("\n");
//
//
//	// �������� 20-1) �Ųٷ� ��ȯ
//	char str[100];
//	char new[100];
//	int i;
//
//	printf("���ڿ��� �Է��ϼ��� : ");
//	gets(str);
//	
//	for (i = 0; i < strlen(str); i++) {
//		new[i] = str[strlen(str) - (i + 1)];
//	}
//	new[strlen(str)] = '\0';
//
//	printf("������ �Ųٷ� ��� ==> %s \n", new);
//
//
//	// �������� 20-2) �Ųٷ� ��ȯ(������ Ȱ��)
//	char str[100];
//	char new[100];
//
//	char* s;
//	char* n;
//
//	int i, j;
//
//	printf("���ڿ��� �Է��ϼ��� : ");
//	gets(str);
//
//	s = str;
//	n = new;
//	
//	for (i = 0; i < strlen(str); i++) {
//		*(n + i) = *(s + (strlen(str) - 1) - i);
//	}
//	new[i] = '\0';
//
//	printf("������ �Ųٷ� ��� ==> ");
//	for (i = 0; i < strlen(new); i++) {
//		printf("%c", *(n + i));
//	}
//	printf("\n");
//
//
//	// �������� 21) ��ҹ��� ��ȯ
//	char str[100];
//	char new[100];
//	int i;
//
//	printf("���� �Է�: ");
//	gets(str);
//
//	int count = strlen(str);
//	int diff = 'a' - 'A';
//
//	for (i = 0; i < strlen(str); i++) {
//		if (str[i] >= 'A' && str[i] <= 'Z')
//			new[i] = str[i] + diff;
//		else if (str[i] >= 'a' && str[i] <= 'z')
//			new[i] = str[i] - diff;
//		else new[i] = str[i];
//	}
//	new[i] = '\0';
//
//	printf("��ȯ ����: %s \n", new);
//
//
//	// �������� 21) ��ҹ��� ��ȯ
//	char str[100];
//	char new[100];
//	int i;
//
//	printf("���� �Է�: ");
//	gets(str);
//
//	int count = strlen(str);
//	int diff = 'a' - 'A';
//
//	for (i = 0; i < strlen(str); i++) {
//		if (str[i] >= 'A' && str[i] <= 'Z')
//			new[i] = str[i] + diff;
//		else if (str[i] >= 'a' && str[i] <= 'z')
//			new[i] = str[i] - diff;
//		else new[i] = str[i];
//	}
//	new[i] = '\0';
//
//	printf("��ȯ ����: %s \n", new);
//
//
//	// �������� 21-1) ��ҹ��� ��ȯ(������ Ȱ��)
//	char str[100];
//	char new[100];
//
//	char* s;
//	char* n;
//
//	int i;
//
//	printf("���� �Է�: ");
//	gets(str);
//	
//	s = str;
//	n = new;
//
//	int count = strlen(str);
//	int diff = 'a' - 'A';
//
//	for (i = 0; i < strlen(str); i++) {
//		if (*(s + i) >= 'A' && *(s + i) <= 'Z')
//			*(n + i) = *(s + i) + diff;
//		else if (*(s + i) >= 'a' && *(s + i) <= 'z')
//			*(n + i) = *(s + i) - diff;
//		else *(n + i) = *(s + i);
//	}
//	*(n + i) = '\0';
//
//	printf("��ȯ ����: %s \n", new);
//
//
//	// �������� 22) ������ ����� 2���� �迭 ���� �� ���η� ���
//	int i, j;
//	int gugu[10][10];
//
//	for (i = 0; i < 9; i++) {
//		for (j = 0; j < 9; j++) {
//			gugu[i][j] = (i + 1) * (j + 1);
//		}
//	}
//
//	for (i = 0; i < 9; i++) {
//		for (j = 0; j < 9; j++) {
//			printf("%dX%d= %2d   ", j + 1, i + 1, gugu[i][j]);
//		}
//		printf("\n");
//	}
//
//
//	// �������� 23) Ư�� ���ڸ� ���ο� ���ڷ� ġȯ(�����͵� Ȱ��)
//	char old[100];
//	char new[100];
//	char* o;
//	char* n;
//
//	char olds, news;
//
//	int i;
//
//	printf("���� ���� �Է�: ");
//	gets(old);
//
//	o = old;
//	n = new;
//
//	printf("���� ���ڿ� ���ο� ����: ");
//	scanf(" %c %c", &olds, &news);
//	
//	for (i = 0; i <= strlen(old); i++) {
//		if (*(o + i) == olds)
//			*(n + i) = news;
//		else *(n + i) = *(o + i);
//	}
//	new[i] = '\0';
//
//	printf("��ȯ ��� ���: %s \n", new);
//
//	
//
//	// chapter 9 ���� ����)
//	// �������� 24) ���ڿ� �ݴ� ��� ������ Ȱ�� ������ ����
//	// �������� 25) �Է��� �� �� ������ Ȱ�� ��ȯ
//	int a, b, tmp;
//	int* p;
//	int* q;
//
//	printf("a �� �Է�: ");
//	scanf("%d", &a);
//
//	printf("b �� �Է�: ");
//	scanf("%d", &b);
//
//	p = &a;
//	q = &b;
//
//	tmp = *p;
//	*p = *q;
//	*q = tmp;
//
//	printf("�ٲ� a��: %d \n", *p);
//	printf("�ٲ� b��: %d \n", *q);
//
//
//	// �������� 26) ������ �̿��� �迭 ���� - ��������
//	int i, j, tmp;
//
//	int str[10] = { 1,5,6,7,8,9,2,4,3,0 };
//
//	int* p;
//
//	p = str;
//
//	printf("���� �� �迭 => ");
//	for (i = 0; i < 10; i++)
//		printf("%d ", *(p + i));
//	printf("\n");
//
//	printf("���� �� �迭 => ");
//	for (i = 0; i < 10; i++) {
//		for (j = i + 1; j < 10; j++) {
//			if (*(p + i) > *(p + j)) {
//				tmp = *(p + i);
//				*(p + i) = *(p + j);
//				*(p + j) = tmp;
//			}
//		}
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//
//
//
//	// chapter 10 ���� ����)
//	// �������� 27) ������ �Լ�
//	int answer;
//	 
//	printf("����� ������: ");
//	scanf("%d", &answer);
//	gugu(answer);
//
//
//	// �������� 28) �Լ� �̿� ��ҹ��� ��ȯ
//	char answer[100];
//	char* p;
//	int i;
//
//	printf("���� �Է�: ");
//	gets(answer);
//
//	p = answer;
//
//	for (i = 0; i < strlen(answer); i++) {
//		if (*(p + i) >= 'a' && *(p + i) <= 'z')
//			*(p + i) = upper(*(p + i));
//		else if (*(p + i) >= 'A' && *(p + i) <= 'Z')
//			*(p + i) = lower(*(p + i));
//	}
//
//	printf("��ȯ ���: %s \n", answer);
//
//
//	// �������� 29) �ζ� ��÷
//	int total[6] = { 0, };
//	int i, j, num;
//	char dup = 'N';
//
//	printf("�ζ� ��ȣ ��÷ \n");
//
//	for (i = 0; i < 6;) {
//		num = lotto();
//
//		for (j = 0; j < 6; j++) {
//			if (total[j] == num)
//				dup = 'Y';
//		}
//
//		if (dup == 'N') {
//			total[i++] = num;
//		}
//		else
//			dup = 'N';
//	}
//	printf("��÷�� ��ȣ: ");
//	for (i = 0; i < 6; i++) {
//		printf("%d ", total[i]);
//	}
//	printf("\n");
//
//
//
//	// chapter 11 ���� ����)
//	// �������� 30) ������ ���Ͽ� ����
//	int i, j;
//	int gugu[9][9];
//
//	FILE* wfp;
//
//	wfp = fopen("c:\\cookc\\gugu.txt", "w");
//
//	for (i = 2; i <= 9; i++) {
//		printf("##%d��##  ", i);
//		fprintf(wfp, "##%d��##  ", i);
//	}
//	printf("\n\n");
//	fprintf(wfp, "\n\n");
//	
//	for (i = 0; i <= 8; i++) {
//		for (j = 0; j <= 7; j++) {
//			gugu[j][i] = (i + 1) * (j + 2);
//			printf("%dX%d= %2d  ", j+2, i+1, gugu[j][i]);
//			fprintf(wfp, "%dX%d= %2d  ", j + 2, i + 1, gugu[j][i]);
//		}
//		printf("\n");
//		fprintf(wfp, "\n");
//	}
//	printf("\n");
//	fprintf(wfp, "\n");
//	fclose(wfp);
//
//
//	// �������� 31) ���� ���� �а� ���ο� ���Ͽ� �Ųٷ� ����
//	FILE* rfp;
//	FILE* wfp;
//
//	char str1[200];
//	char str2[200];
//
//	int size, i;
//
//	rfp = fopen("c:\\cookc\\in.txt", "r");
//	wfp = fopen("c:\\cookc\\out.txt", "w");
//
//	while (1) {
//		fgets(str1, 200, rfp);
//
//		if (feof(rfp))
//			break;
//
//		size = strlen(str1);
//
//		for (i = size - 1; i >= 0; i--)
//			str2[size - 1 - i] = str1[i - 1];
//
//		str2[size - 1] = '\0';
//		fputs(str2, wfp);
//		fputs('\n', wfp);
//	}
//
//	fclose(rfp);
//	fclose(wfp);
//}