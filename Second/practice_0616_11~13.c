//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <time.h>
//
//void main() {
//	// chapter 11. 표준 입출력과 파일 입출력 연습문제
//	// 1. 표준 입력: gets(), getchar(), scanf() / 표준 출력: puts(), putchar(), printf()
//	
//	// 2. %c, %x, %f, %p(포인터 주소), %e(공학 계산용 형식)
//	
//	// 3. 코드 채우기
//	char str[30];
//	printf("문자열 입력 -> ");
//	gets(str);
//	puts(str);
//	
//	// 4. getche() 하나 받고 띄움, putch() or putchar(), getchar() 엔터까지 다 받고 하나만 출력
//	
//	// 5. getch(), getchar(), putch()
//	
//	// 6. C, D, A, B
//	 
//	// 7. 코드 빈칸 채우기
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
//	// 8. 코드 짜기
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
//		printf("추출 숫자 => %d \n", num);
//		fprintf(wfp, "추출 숫자 => %d \n", num);
//	}
//
//	fclose(wfp);
//	
//	
//	
//	// chapter 12. 고급 포인터
//	// 1. 동적 메모리 확보 malloc(), 동적 메모리 해제 free()
//	
//	// 2. double *pnt = (double*) malloc(sizeof(double) * 100);
//	
//	// 3. 코드 빈칸 채우기
//	int* p;
//	int i, hap = 0;
//	int cnt;
//	int ary[] = { 10,20,30,40,50 };
//
//	cnt = sizeof(ary) / sizeof(int);
//	p = (int*)malloc(sizeof(int) * cnt);
//
//	for (i = 0; i < cnt; i++) {
//		printf("배열[%d] 숫자: %d \n", i, ary[i]);
//
//		*(p + i) = ary[i];
//	}
//
//	for(i=0;i<cnt;i++) 
//		hap += *(p + i);
//
//	printf("배열의 숫자 합 => %d \n", hap);
//	free(p);
//	
//	// 4. 코드 작성 문제
//	int num;
//	int i = 1;
//	int hap = 0;
//	int* p;
//
//	p = (int*)malloc(sizeof(int) * 1);
//
//	srand((unsigned)time(NULL));
//
//	printf("랜덤 숫자 => ");
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
//	printf("랜덤 숫자 합 => %d \n", hap);
//	
//	// 5. 메모리 낭비
//	
//	// 6. char *p[5]가 포인터 배열 코드
//	
//	// 7. 코드 작성 문제
//	int i, size;
//
//	char* p[5];
//	char imsi[100];
//
//	FILE* rfp;
//
//	rfp = fopen("c:\\windows\\win.ini", "r");
//
//	printf("win.ini 원 내용(5줄만) \n");
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
//	printf("거꾸로 출력 \n");
//	for (i = 4; i >= 0; i--) {
//		 printf("%d : %s", i+1, p[i]);
//	}
//	for (i = 0; i < 5; i++) {
//		free(p[i]);
//	}
//	
//	
//	
//	// chapter 13. 구조체, 공용체, 열거형 연습문제
//	// 1. 구조체, 공용체
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
//	// 9. 코드 빈칸 채우기
//	enum season{spring, summer, fall, winter};
//	enum season ss;
//	ss = summer;
//	if (ss = summer)
//		printf("지금은 여름입니다.\n");
//	else printf("지금은 여름이 아닙니다.\n");
//	
//	// 10. 코드 빈칸 채우기
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
//	printf("이름 또는 부서 --> ");
//	scanf("%s", e1.nm.name);
//	printf("전화번호 또는 사무실 --> ");
//	scanf("%s", e1.id.jumin);
//
//	printf("\n----- 구조체/공용체 혼합 활용 -----\n");
//	printf("이름/부서 --> %s \n", e1.nm.name);
//	printf("번호/주소 --> %s \n", e1.id.phone);
//	
//	// 11. 코드 채우기
//	struct student {
//		char name[10];
//		int avg;
//	};
//	struct student s;
//	struct student* p;
//	p = &s;
//
//	printf("이름 입력: ");
//	scanf("%s", &p->name);
//	printf("점수 입력: ");
//	scanf("%d", &p->avg);
//	
//	// 12. 1) 
//		//학생 이름 => 홍길동
//		//국어 점수 => 80
//		//영어 점수 => 100
//		//평균 점수 =>  90.0
//	struct student {
//		char name[10];
//		int kor;
//		int eng;
//		float avg;
//	} s = { "홍길동", 80, 100 };
//
//	s.avg = (s.kor + s.eng) / 2.0f;
//
//	printf("학생 이름 => %s \n", s.name);
//	printf("국어 점수 => %d \n", s.kor);
//	printf("영어 점수 => %d \n", s.eng);
//	printf("평균 점수 => %5.1f \n", s.avg); 
// 
//		// 2)
//		//공용체 크기 => 8
//	union emp{
//		char a;
//		int b;
//		double c;
//		long d;
//	};
//	printf("크기: %d \n", sizeof(union emp));
//}