//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <malloc.h>
//#include <time.h>
//#include <string.h>
//
//char* upper_lower(char* s) {
//	int i;
//	int diff = 'a' - 'A';
//
//	for (i = 0; i < strlen(s); i++) {
//		if (s[i] >= 'A' && s[i] <= 'Z') s[i] += diff;
//		else if (*(s + i) >= 'a' && *(s + i) <= 'z') *(s + i) -= diff;
//	}
//
//	return s;
//}
//
//int getLotto() {
//	return rand() % 45 + 1;
//}
//
//char* upper_lower_re(char* s) {
//	int i;
//	int diff = 'a' - 'A';
//
//	for (i = 0; i < strlen(s); i++) {
//		if (*(s + i) >= 'A' && *(s + i) <= 'Z') *(s + i) += diff;
//		else if (s[i] >= 'a' && s[i] <= 'z') s[i] -= diff;
//	}
//
//	return s;
//}
//
//int throwDice() {
//	return rand() % 6 + 1;
//}
//
//void main() {
//	// C��� for beginner 4�� �������� �⺻ + ���� Ǯ��
//	// 08-��������22) ������ 2���� �迭 ����
//	int i, k;
//	int gugu[8][9];
//
//	for (i = 2; i < 10; i++) {
//		printf("#��%d��#  ", i);
//	}
//	printf("\n");
//
//	for (i = 0; i < 9; i++) {
//		for (k = 0; k < 8; k++) {
//			gugu[k][i] = (i + 1) * (k + 2);
//			printf("%dX%d= %2d  ", k + 2, i + 1, gugu[k][i]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//
//	// 08-��������22) ������ 2���� �迭 ���� ���Ͽ� ����
//	int i, k;
//	int gugu[8][9];
//
//	FILE* wfp;
//	wfp = fopen("c:\\cookc\\gugu0618.txt", "w");
//
//	for (i = 2; i < 10; i++) {
//		printf("#��%d��# ", i);
//		fprintf(wfp, "#��%d��# ", i);
//	}
//	printf("\n");
//	fprintf(wfp, "\n");
//
//	for (i = 0; i < 9; i++) {
//		for (k = 0; k < 8; k++) {
//			gugu[k][i] = (k + 2) * (i + 1);
//			printf("%dX%d= %2d ", k + 2, i + 1, gugu[k][i]);
//			fprintf(wfp, "%dX%d= %2d ", k + 2, i + 1, gugu[k][i]);
//		}
//		printf("\n");
//		fprintf(wfp, "\n");
//	}
//	printf("\n");
//	fprintf(wfp, "\n");
//	fclose(wfp);
//
//
//	// 08-09) ���ڿ� ��ȯ �ڵ� ¥��
//	int i, size;
//	char imsi[100];
//	char* p;
//	char old, new;
//
//	printf("���ڿ�: ");
//	gets(imsi);
//
//	printf("����, �ű�: ");
//	scanf(" %c %c", &old, &new);
//
//	size = strlen(imsi);
//
//	p = (char*)malloc((sizeof(char) * size) + 1);
//
//	strcpy(p, imsi);
//
//	printf("��ȯ: ");
//	for (i = size - 1; i >= 0; i--) {
//		if (p[i] == old) *(p + i) = new;
//		printf("%c", p[i]);
//	}
//	printf("\n");
//
//
//	// 08-09) ���ڿ� ��ȯ + ��ҹ��� ��ȯ �Լ� + �Ųٷ� ��� �ڵ� ¥��
//	int i, size;
//	char imsi[100];
//	char* p;
//	char old, new;
//
//	printf("���� ���ڿ�: ");
//	gets(imsi);
//	size = strlen(imsi);
//	p = (char*)malloc((sizeof(char) * size) + 1);
//	strcpy(p, imsi);
//
//	printf("����, �ű�: ");
//	scanf(" %c %c", &old, &new);
//
//	for (i = 0; i < size; i++) {
//		if (*(p + i) == old) {
//			*(p + i) = new;
//		}
//	}
//
//	upper_lower(p);
//
//	printf("��ȯ ���ڿ�: ");
//	for (i = size - 1; i >= 0; i--) {
//		printf("%c", p[i]);
//	}
//	printf("\n");
//	free(p);
//
//
//	// 09-����9-2) ���� �ڵ��� �ְ� ����
//	char car = 'A';
//	int top = 0;
//	char stack[5];
//	int answer;
//
//	do {
//		printf("<1> push, <2> pop, <3> stop: ");
//		scanf("%d", &answer);
//
//		switch (answer) {
//		case 1:
//			if (top < 5) {
//				stack[top] = car;
//				printf("%c�� push \n", stack[top]);
//				top++;
//				car++;
//			}
//			else printf("push �Ұ� \n");
//			break;
//		case 2:
//			if (top > 0) {
//				top--;
//				car--;
//				printf("%c�� pop \n", stack[top]);
//				stack[top] = ' ';
//			}
//			else printf("pop �Ұ� \n");
//			break;
//		case 3:
//			printf("���� ���� ���� %d�� �Դϴ�. \n", top); break;
//		default: printf("�߸� �Է��߽��ϴ�. \n"); break;
//		}
//
//	} while (answer != 3);
//
//
//	// 09-08) ��ҹ��� ��ȯ, �Ųٷ� ���
//	char ary[25] = "ITCookBook $%& 1234";
//	char* p;
//	int i;
//	p = ary;
//	int diff = 'a' - 'A';
//
//	for (i = sizeof(ary) - 2; i >= 0; i--) {
//		if (p[i] >= 'a' && p[i] <= 'z') p[i] -= diff;
//		else if (*(p + i) >= 'A' && *(p + i) <= 'Z') *(p + i) += diff;
//		printf("%c", *(p + i));
//	}
//	printf("\n");
//
//
//	// 09-09) �������� ����
//	int i, k, tmp;
//	char s[100];
//	char* p;
//
//	printf("�Է�: ");
//	gets(s);
//	p = s;
//
//	printf("����: ");
//	for (i = 0; i < strlen(s); i++) {
//		for (k = i + 1; k < strlen(s); k++) {
//			if (*(p + i) < *(p + k)) {
//				tmp = *(p + i);
//				*(p + i) = *(p + k);
//				*(p + k) = tmp;
//			}
//		}
//		printf("%c", *(p + i));
//	}
//	printf("\n");
//
//
//	// 09-09) �������� ����
//	int i, k, tmp;
//	char s[100];
//	char* p;
//
//	printf("����: ");
//	gets(s);
//	p = s;
//
//	printf("����: ");
//	for (i = 0; i < strlen(s); i++) {
//		for (k = i + 1; k < strlen(s); k++) {
//			if (p[i] > p[k]) {
//				tmp = p[i];
//				p[i] = p[k];
//				p[k] = tmp;
//			}
//		}
//		printf("%c", p[i]);
//	}
//	printf("\n");
//
//
//	// 10-����29) �ζ� ��÷
//	int i, k, num;
//	char dup = 'N';
//	int lotto[6] = { 0, };
//
//	i = 0;
//
//	srand((unsigned)time(NULL));
//
//	printf("�ζ� ��÷ ��ȣ \n");
//
//	while (1) {
//		num = getLotto();
//
//		for (k = 0; k < 6; k++)
//			if (lotto[k] == num)
//				dup = 'Y';
//
//		if (dup == 'N')
//			lotto[i++] = num;
//		else
//			dup = 'N';
//
//		if (i == 6) break;
//	}
//
//	for (i = 0; i < 6; i++) {
//		printf("%d ", lotto[i]);
//	}
//	printf("\n");
//
//
//	// 10-08)
//	char in[100], out[100];
//
//	printf("���ڿ�: ");
//	gets(in);
//
//	strcpy(out, upper_lower_re(in));
//
//	printf("��ȯ ��� => %s \n", out);
//
//
//	// 10-09) �ֻ��� ������
//	int diceNum[10] = { 0, };
//	int dice1, dice2;
//	int equalCount = 0;
//	int i;
//	char dup = 'N';
//
//	srand((unsigned)time(NULL));
//
//	printf("�ֻ��� ������ \n");
//	while (1) {
//		dice1 = throwDice();
//		dice2 = throwDice();
//
//		if (equalCount == 10) break;
//
//		if (dice1 == dice2) dup = 'Y';
//		else dup = 'N';
//
//		if (dup = 'Y') {
//			diceNum[equalCount] = dice1;
//			equalCount++;
//		}
//	}
//
//	printf("���� ���� => ");
//	for (i = 0; i < 10; i++) {
//		printf("%d ", diceNum[i]);
//	}
//	printf("\n");
//
//
//	// 10-09) �ֻ��� ������ ������ Ȱ��
//	int diceNum[10] = { 0, };
//	int i;
//	char dup = 'N';
//	int* p = diceNum;
//
//	srand((unsigned)time(NULL));
//
//	printf("** �ֻ��� ������ ������ ** \n");
//
//	int dice1, dice2;
//	for (i = 0; i < 10;) {
//		dice1 = throwDice();
//		dice2 = throwDice();
//
//		if (dice1 == dice2) dup = 'Y';
//		else dup = 'N';
//
//		if (dup = 'Y') {
//			p[i] = dice1;
//			i++;
//		}
//	}
//	printf("���� ���� ���� => ");
//	for (i = 0; i < 10; i++) {
//		printf("%d ", p[i]);
//	}
//	printf("\n");
//
//
//	// 11-����30) ������ ���� ���, �迭 Ȱ��
//	int i, k;
//	int gugu[8][9];
//
//	FILE* wfp;
//	wfp = fopen("c:\\cookc\\gugu0618.txt", "w");
//
//	for (i = 2; i < 10; i++) {
//		printf("#��%d��# ", i);
//		fprintf(wfp, "#��%d��# ", i);
//	}
//	printf("\n");
//	fprintf(wfp, "\n");
//
//	for (i = 0; i < 9; i++) {
//		for (k = 0; k < 8; k++) {
//			gugu[k][i] = (k + 2) * (i + 1);
//			printf("%dX%d= %2d ", k + 2, i + 1, gugu[k][i]);
//			fprintf(wfp, "%dX%d= %2d ", k + 2, i + 1, gugu[k][i]);
//		}
//		printf("\n");
//		fprintf(wfp, "\n");
//	}
//	printf("\n");
//	fprintf(wfp, "\n");
//	fclose(wfp);
//
//
//	// 11-07) win.ini ���� ������ �о����
//	int i = 0;
//	char s[100];
//
//	FILE* rfp;
//	rfp = fopen("c:\\windows\\win.ini", "r");
//
//	while (1) {
//		fgets(s, 100, rfp);
//
//		if (feof(rfp))break;
//
//		printf("%d : %s", i + 1, s);
//		i++;
//	}
//	printf("\n");
//	fclose(rfp);
//
//
//	// 11-07) win.ini ���� ������ �о���� + ���� �޸� �Ҵ�
//	int size;
//	char imsi[100];
//	char* p;
//
//	FILE* rfp;
//	rfp = fopen("c:\\windows\\win.ini", "r");
//
//	int i = 0;
//	while (1) {
//		fgets(imsi, 100, rfp);
//		size = strlen(imsi);
//
//		if (feof(rfp)) break;
//
//		p = (char*)malloc((sizeof(char) * size) + 1);
//		strcpy(p, imsi);
//
//		printf("%d : %s", i + 1, p);
//		i++;
//	}
//	printf("\n");
//	fclose(rfp);
//	free(p);
//
//
//	// 11-08) ���� ���� 5�� ����, ���� ����
//	int num, i;
//
//	FILE* wfp;
//	wfp = fopen("c:\\cookc\\rand0618.txt", "w");
//
//	srand((unsigned)time(NULL));
//
//	for (i = 0; i < 5; i++) {
//		num = rand() % 100 + 1;
//		printf("���� ���� => %d \n", num);
//		fprintf(wfp, "���� ���� => %d \n", num);
//	}
//	printf("\n");
//	fprintf(wfp, "\n");
//	fclose(wfp);
//
//
//	// 12-04) ���� ���ڿ� �հ� ���� �޸� �Ҵ�
//	int* p;
//	int i = 0;
//	int hap = 0;
//	int num;
//
//	printf("���� ���� => ");
//	srand((unsigned)time(NULL));
//
//	num = rand() % 100 + 1;
//
//	p = (int*)malloc(sizeof(int) * 1);
//	p[i] = num;
//	printf("%d ", p[i]);
//	hap = hap + p[i];
//	i = 2;
//
//	while (1) {
//		num = rand() % 100 + 1;
//
//		p = (int*)realloc(p, sizeof(int) * i);
//		p[i - 1] = num;
//
//		if (p[i - 1] == 99 && i > 2) break;
//
//		printf("%d ", p[i - 1]);
//		hap = hap + p[i - 1];
//		i++;
//	}
//	printf("\n���� �հ� => %d \n", hap);
//	free(p);
//
//
//	// 12-04) ���� ���ڿ� �հ� ���� �޸� �Ҵ� + ���Ͽ� ����
//	int* p;
//	int i = 0;
//	int num;
//	int hap = 0;
//
//	FILE* wfp;
//	wfp = fopen("c:\\cookc\\randhap0618.txt", "w");
//
//	srand((unsigned)time(NULL));
//	printf("���� ���� => ");
//	fprintf(wfp, "���� ���� => ");
//
//	p = (int*)malloc(sizeof(int) * 1);
//
//	num = rand() % 100 + 1;
//	p[i] = num;
//
//	printf("%d ", p[i]);
//	fprintf(wfp, "%d ", p[i]);
//
//	hap = hap + p[i];
//	i = 2;
//
//	while (1) {
//		p = (int*)realloc(p, sizeof(int) * i);
//
//		num = rand() % 100 + 1;
//		p[i - 1] = num;
//
//		if (p[i - 1] == 99 && i > 2) break;
//
//		printf("%d ", p[i - 1]);
//		fprintf(wfp, "%d ", p[i - 1]);
//
//		hap = hap + p[i - 1];
//		i++;
//	}
//	printf("\n");
//	fprintf(wfp, "\n");
//
//	printf("���� �հ� => %d \n", hap);
//	fprintf(wfp, "���� �հ� => %d \n", hap);
//
//	fclose(wfp);
//	free(p);
//
//
//	// 12-07) ���� �а� �Ųٷ� ���
    //int i, size;
    //char* p[5];
    //char imsi[100];

    //FILE* rfp;
    //rfp = fopen("c:\\windows\\win.ini", "r");

    //for (i = 0; i < 5; i++) {
    //    fgets(imsi, 100, rfp);
    //    size = strlen(imsi);

    //    p[i] = (char*)malloc((sizeof(char) * size) + 1);
    //    strcpy(p[i], imsi);

    //    printf("%d : %s", i + 1, p[i]);
    //}

    //for (i = 4; i >= 0; i--) {
    //    printf("%d : %s", i + 1, p[i]);
    //}
    //fclose(rfp);
    //for (i = 0; i < 5; i++) {
    //    free(p[i]);
    //}
//	 
//
//	// 13-����34) ����ü �����ͷ� �л� ����
//	struct student {
//		char name[10];
//		int age;
//	};
//
//	struct student s;
//	struct student* p;
//	p = &s;
//
//	int i, cnt;
//
//	printf("�Է��� �л� ��: ");
//	scanf("%d", &cnt);
//
//	p = (struct student*)malloc(sizeof(struct student) * cnt); // ���� �޸� �Ҵ� �ڷ����� ����ü �ڡڡ�
//
//	for (i = 0; i < cnt; i++) {
//		printf("�̸��� ���� �Է�: ");
//		scanf("%s %d", p[i].name, &p[i].age);
//	}
//
//	printf("\n-- �л� ��� --\n");
//	for (i = 0; i < cnt; i++) {
//		printf("�̸�: %s, ����: %d \n", p[i].name, p[i].age);
//	}
//	free(p);
//
//
//	// 13-����34) ����ü �����ͷ� �л� ���� �ٽ� ����
//	int i, cnt;
//
//	struct student {
//		char name[10];
//		int age;
//	};
//
//	struct student s;
//	struct student* p;
//	p = &s;
//
//	printf("�Է� �л� ��: ");
//	scanf("%d", &cnt);
//
//	p = (struct student*)malloc(sizeof(struct student) * cnt);
//
//	for (i = 0; i < cnt; i++) {
//		printf("�̸�, ����: ");
//		scanf("%s %d", p[i].name, &p[i].age);
//	}
//
//	printf("\n- �л� ��� --\n");
//	for (i = 0; i < cnt; i++) {
//		printf("�̸�: %s, ����: %d \n", p[i].name, p[i].age);
//	}
//	free(p);
//
//
//	// 13-����36) ���������� �� �̸� ���
//	enum month {
//		Jan = 1, Fab, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
//	};
//
//	enum month mm;
//
//	printf("Ȯ���ϰ� ���� ����? ");
//	scanf("%d", &mm); // ������ ������ �� ����
//
//	switch (mm) {
//	case Jan: printf("%d���� Jan. \n", mm); break;
//	case Fab: printf("%d���� Fab. \n", mm); break;
//	case Mar: printf("%d���� Mar. \n", mm); break;
//	case Apr: printf("%d���� Apr. \n", mm); break;
//	case May: printf("%d���� May. \n", mm); break;
//	case Jun: printf("%d���� Jun. \n", mm); break;
//	case Jul: printf("%d���� Jul. \n", mm); break;
//	case Aug: printf("%d���� Aug. \n", mm); break;
//	case Sep: printf("%d���� Sep. \n", mm); break;
//	case Oct: printf("%d���� Oct. \n", mm); break;
//	case Nov: printf("%d���� Nov. \n", mm); break;
//	case Dec: printf("%d���� Dec. \n", mm); break;
//	default: printf("�߸� �Է�. \n"); break;
//	}
//
//
//	// 13-09)
//	enum season { spring, summer, fall, winter };
//
//	enum season ss;
//
//	ss = summer;
//
//	if (ss = summer) printf("������ ����.\n");
//	else printf("������ �ƴ�.\n");
//
//
//	// 13-10) ����ü, ����ü ȥ�� ���
//	typedef struct _employee {
//		union nm {
//			char name[10];
//			char dept[10];
//		};
//		union nm nm;
//
//		union id {
//			char jumin[20];
//			char phone[13];
//		};
//		union id id;
//	} employee;
//
//	employee e1;
//
//	printf("�̸� �Ǵ� �μ� => ");
//	scanf("%s", e1.nm.name);
//	printf("�ּ� �Ǵ� ��ȣ => ");
//	scanf("%s", e1.id.jumin);
//
//	printf("\n-- ���� ��� --\n");
//	printf("�̸�/�μ�: %s\n", e1.nm.dept);
//	printf("�ּ�/��ȣ: %s\n", e1.id.phone);
//
//
//	// 13-11) ����ǥ ��ĭ ä���
//	struct student {
//		char name[10];
//		int avg;
//	};
//
//	struct student s;
//	struct student* p;
//	p = &s;
//
//	printf("�̸�: ");
//	scanf("%s", p->name);
//	printf("����: ");
//	scanf("%d", &p->avg);
//
//	printf("\n-- ����ǥ --\n");
//	printf("�̸�: %s, ����: %d \n", p->name, p->avg);
//
//
//	// 13-11) ����ǥ ����ü ������, �迭�� �����
//	typedef struct _student_re {
//		char name[10];
//		int avg;
//	} student_re;
//
//	student_re sr;
//	student_re* pr;
//	pr = &sr;
//
//	int i, cnt;
//
//	printf("�л� ��: ");
//	scanf("%d", &cnt);
//
//	pr = (struct _student_re*)malloc(sizeof(struct _student_re) * cnt);
//
//	printf("\n-- ���� �Է� --\n");
//	for (i = 0; i < cnt; i++) {
//		printf("�̸�, ����: ");
//		scanf("%s %d", pr[i].name, &pr[i].avg);
//	}
//
//	printf("\n-- ���� ��� --\n");
//	for (i = 0; i < cnt; i++) {
//		printf("�̸�: %s, ����: %d \n", pr[i].name, pr[i].avg);
//	}
//	free(pr);
//}