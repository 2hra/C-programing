//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <time.h>
//
//void main() {
//	// chapter 11. ǥ�� ����°� ���� ����� ��������
//	// 1. ǥ�� �Է�: gets(), getchar(), scanf() / ǥ�� ���: puts(), putchar(), printf()
//	
//	// 2. %c, %x, %f, %p(������ �ּ�), %e(���� ���� ����)
//	
//	// 3. �ڵ� ä���
//	char str[30];
//	printf("���ڿ� �Է� -> ");
//	gets(str);
//	puts(str);
//	
//	// 4. getche() �ϳ� �ް� ���, putch() or putchar(), getchar() ���ͱ��� �� �ް� �ϳ��� ���
//	
//	// 5. getch(), getchar(), putch()
//	
//	// 6. C, D, A, B
//	 
//	// 7. �ڵ� ��ĭ ä���
//	char str[200];
//	FILE* rfp;
//	rfp = fopen("c:\\windows\\win.ini", "r");
//	int line = 1;
//	int i = 1;
//	while (1) {
//		fgets(str, 200, rfp);
//		
//		if (feof(rfp)) break;
//
//		printf("%d: %s", i, str);
//		i++;
//	}
//	fclose(rfp);
//	
//	// 8. �ڵ� ¥��
//	int i, num;
//
//	srand((unsigned)time(NULL));
//
//	FILE* wfp;
//
//	wfp = fopen("c:\\cookc\\ex11.txt", "w");
//
//	for (i = 0; i < 5; i++) {
//		num = rand() % 100 + 1;
//		
//		printf("���� ���� => %d \n", num);
//		fprintf(wfp, "���� ���� => %d \n", num);
//	}
//
//	fclose(wfp);
//	
//	
//	
//	// chapter 12. ��� ������
//	// 1. ���� �޸� Ȯ�� malloc(), ���� �޸� ���� free()
//	
//	// 2. double *pnt = (double*) malloc(sizeof(double) * 100);
//	
//	// 3. �ڵ� ��ĭ ä���
//	int* p;
//	int i, hap = 0;
//	int cnt;
//	int ary[] = { 10,20,30,40,50 };
//
//	cnt = sizeof(ary) / sizeof(int);
//	p = (int*)malloc(sizeof(int) * cnt);
//
//	for (i = 0; i < cnt; i++) {
//		printf("�迭[%d] ����: %d \n", i, ary[i]);
//
//		*(p + i) = ary[i];
//	}
//
//	for(i=0;i<cnt;i++) 
//		hap += *(p + i);
//
//	printf("�迭�� ���� �� => %d \n", hap);
//	free(p);
//	
//	// 4. �ڵ� �ۼ� ����
//	int num;
//	int i = 1;
//	int hap = 0;
//	int* p;
//
//	p = (int*)malloc(sizeof(int) * 1);
//
//	srand((unsigned)time(NULL));
//
//	printf("���� ���� => ");
//
//	while (1) {
//		num = rand() % 100 + 1;
//
//		if (num == 99 && i > 2) break;
//
//		p = (int*)realloc(p, sizeof(int) * i);
//		*(p + i - 1) = num;
//		hap += *(p + i - 1);
//
//		printf("%d ", *(p + i - 1));
//
//		i++;
//	}
//	printf("\n");
//	printf("���� ���� �� => %d \n", hap);
//	
//	// 5. �޸� ����
//	
//	// 6. char *p[5]�� ������ �迭 �ڵ�
//	
//	// 7. �ڵ� �ۼ� ����
//	int i, size;
//
//	char* p[5];
//	char imsi[100];
//
//	FILE* rfp;
//
//	rfp = fopen("c:\\windows\\win.ini", "r");
//
//	printf("win.ini �� ����(5�ٸ�) \n");
//	for (i = 0; i < 5; i++) {
//		 fgets(imsi, 100, rfp);
//
//		 size = strlen(imsi);
//		 p[i] = (char*)malloc((sizeof(char) * size) + 1);
//
//		 strcpy(p[i], imsi);
//		 printf("%d : %s", i+1, p[i]);
//	}
//	
//	printf("\n");
//	printf("�Ųٷ� ��� \n");
//	for (i = 4; i >= 0; i--) {
//		 printf("%d : %s", i+1, p[i]);
//	}
//	for (i = 0; i < 5; i++) {
//		free(p[i]);
//	}
//	
//	
//	
//	// chapter 13. ����ü, ����ü, ������ ��������
//	// 1. ����ü, ����ü
//	 
//	// 2. struct mydata {};
//	 
//	// 3. struct mydata st;
//	 
//	// 4.st.a = 100;
//	struct mydata{
//		int a;
//		char b;
//	};
//	struct mydata st;
//	st.a = 100;
//	printf("%d \n", st.a);
//	
//	// 5. struct myst st = {1234, "kim"};
//	struct myst {
//		int number;
//		char name[10]; 
//	};
//	struct myst st = {1234, "kim"};
//	printf("%d, %s \n", st.number, st.name);
//	 
//	// 6. struct myst {}; struct myst st; / struct myst {} st; / typedef strut _myst {} myst; myst st;
//	
//	// 7. p = &st; p->number = 100;
//	struct myst {
//		int number;
//		char name[10]; 
//	};
//	struct myst st;
//	struct myst* p;
//
//	p = &st;
//	p->number = 100;
//
//	printf("%d \n", p->number);
//	
//	// 8. union myun u; u.number = 300; u.ch = 'A';
//	union myun {
//		int number;
//		char ch;
//	};
//	union myun u;
//	u.number = 300;
//	u.ch = 'A';
//	printf("%d, %c \n", u.number, u.ch);
//	
//	// 9. �ڵ� ��ĭ ä���
//	enum season{spring, summer, fall, winter};
//	enum season ss;
//	ss = summer;
//	if (ss = summer)
//		printf("������ �����Դϴ�.\n");
//	else printf("������ ������ �ƴմϴ�.\n");
//	
//	// 10. �ڵ� ��ĭ ä���
//	typedef struct _employee {
//		union nm {
//			char name[10];
//			char dept[15];
//		} nm;
//		union id {
//			char phone[13];
//			char jumin[20];
//		} id;
//	} employee;
//
//	employee e1;
//
//	printf("�̸� �Ǵ� �μ� --> ");
//	scanf("%s", e1.nm.name);
//	printf("��ȭ��ȣ �Ǵ� �繫�� --> ");
//	scanf("%s", e1.id.jumin);
//
//	printf("\n----- ����ü/����ü ȥ�� Ȱ�� -----\n");
//	printf("�̸�/�μ� --> %s \n", e1.nm.name);
//	printf("��ȣ/�ּ� --> %s \n", e1.id.phone);
//	
//	// 11. �ڵ� ä���
//	struct student {
//		char name[10];
//		int avg;
//	};
//	struct student s;
//	struct student* p;
//	p = &s;
//
//	printf("�̸� �Է�: ");
//	scanf("%s", &p->name);
//	printf("���� �Է�: ");
//	scanf("%d", &p->avg);
//	
//	// 12. 1) 
//		//�л� �̸� => ȫ�浿
//		//���� ���� => 80
//		//���� ���� => 100
//		//��� ���� =>  90.0
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
//		// 2)
//		//����ü ũ�� => 8
//	union emp{
//		char a;
//		int b;
//		double c;
//		long d;
//	};
//	printf("ũ��: %d \n", sizeof(union emp));
//}