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
//	// C언어 for beginner 4판 연습문제 기본 + 응용 풀이
//	// 08-예제모음22) 구구단 2차원 배열 저장
//	int i, k;
//	int gugu[8][9];
//
//	for (i = 2; i < 10; i++) {
//		printf("#제%d단#  ", i);
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
//	// 08-예제모음22) 구구단 2차원 배열 저장 파일에 쓰기
//	int i, k;
//	int gugu[8][9];
//
//	FILE* wfp;
//	wfp = fopen("c:\\cookc\\gugu0618.txt", "w");
//
//	for (i = 2; i < 10; i++) {
//		printf("#제%d단# ", i);
//		fprintf(wfp, "#제%d단# ", i);
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
//	// 08-09) 문자열 변환 코드 짜기
//	int i, size;
//	char imsi[100];
//	char* p;
//	char old, new;
//
//	printf("문자열: ");
//	gets(imsi);
//
//	printf("기존, 신규: ");
//	scanf(" %c %c", &old, &new);
//
//	size = strlen(imsi);
//
//	p = (char*)malloc((sizeof(char) * size) + 1);
//
//	strcpy(p, imsi);
//
//	printf("변환: ");
//	for (i = size - 1; i >= 0; i--) {
//		if (p[i] == old) *(p + i) = new;
//		printf("%c", p[i]);
//	}
//	printf("\n");
//
//
//	// 08-09) 문자열 변환 + 대소문자 변환 함수 + 거꾸로 출력 코드 짜기
//	int i, size;
//	char imsi[100];
//	char* p;
//	char old, new;
//
//	printf("기존 문자열: ");
//	gets(imsi);
//	size = strlen(imsi);
//	p = (char*)malloc((sizeof(char) * size) + 1);
//	strcpy(p, imsi);
//
//	printf("기존, 신규: ");
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
//	printf("변환 문자열: ");
//	for (i = size - 1; i >= 0; i--) {
//		printf("%c", p[i]);
//	}
//	printf("\n");
//	free(p);
//
//
//	// 09-응용9-2) 스택 자동차 넣고 빼기
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
//				printf("%c차 push \n", stack[top]);
//				top++;
//				car++;
//			}
//			else printf("push 불가 \n");
//			break;
//		case 2:
//			if (top > 0) {
//				top--;
//				car--;
//				printf("%c차 pop \n", stack[top]);
//				stack[top] = ' ';
//			}
//			else printf("pop 불가 \n");
//			break;
//		case 3:
//			printf("현재 남은 차는 %d대 입니다. \n", top); break;
//		default: printf("잘못 입력했습니다. \n"); break;
//		}
//
//	} while (answer != 3);
//
//
//	// 09-08) 대소문자 변환, 거꾸로 출력
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
//	// 09-09) 내림차순 정렬
//	int i, k, tmp;
//	char s[100];
//	char* p;
//
//	printf("입력: ");
//	gets(s);
//	p = s;
//
//	printf("내림: ");
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
//	// 09-09) 오름차순 정렬
//	int i, k, tmp;
//	char s[100];
//	char* p;
//
//	printf("기존: ");
//	gets(s);
//	p = s;
//
//	printf("오름: ");
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
//	// 10-예제29) 로또 추첨
//	int i, k, num;
//	char dup = 'N';
//	int lotto[6] = { 0, };
//
//	i = 0;
//
//	srand((unsigned)time(NULL));
//
//	printf("로또 당첨 번호 \n");
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
//	printf("문자열: ");
//	gets(in);
//
//	strcpy(out, upper_lower_re(in));
//
//	printf("변환 결과 => %s \n", out);
//
//
//	// 10-09) 주사위 던지기
//	int diceNum[10] = { 0, };
//	int dice1, dice2;
//	int equalCount = 0;
//	int i;
//	char dup = 'N';
//
//	srand((unsigned)time(NULL));
//
//	printf("주사위 던지기 \n");
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
//	printf("같은 숫자 => ");
//	for (i = 0; i < 10; i++) {
//		printf("%d ", diceNum[i]);
//	}
//	printf("\n");
//
//
//	// 10-09) 주사위 던지기 포인터 활용
//	int diceNum[10] = { 0, };
//	int i;
//	char dup = 'N';
//	int* p = diceNum;
//
//	srand((unsigned)time(NULL));
//
//	printf("** 주사위 던지기 포인터 ** \n");
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
//	printf("같은 숫자 순서 => ");
//	for (i = 0; i < 10; i++) {
//		printf("%d ", p[i]);
//	}
//	printf("\n");
//
//
//	// 11-예제30) 구구단 파일 출력, 배열 활용
//	int i, k;
//	int gugu[8][9];
//
//	FILE* wfp;
//	wfp = fopen("c:\\cookc\\gugu0618.txt", "w");
//
//	for (i = 2; i < 10; i++) {
//		printf("#제%d단# ", i);
//		fprintf(wfp, "#제%d단# ", i);
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
//	// 11-07) win.ini 파일 끝까지 읽어오기
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
//	// 11-07) win.ini 파일 끝까지 읽어오기 + 동적 메모리 할당
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
//	// 11-08) 랜덤 숫자 5개 추출, 파일 쓰기
//	int num, i;
//
//	FILE* wfp;
//	wfp = fopen("c:\\cookc\\rand0618.txt", "w");
//
//	srand((unsigned)time(NULL));
//
//	for (i = 0; i < 5; i++) {
//		num = rand() % 100 + 1;
//		printf("추출 숫자 => %d \n", num);
//		fprintf(wfp, "추출 숫자 => %d \n", num);
//	}
//	printf("\n");
//	fprintf(wfp, "\n");
//	fclose(wfp);
//
//
//	// 12-04) 랜덤 숫자와 합계 동적 메모리 할당
//	int* p;
//	int i = 0;
//	int hap = 0;
//	int num;
//
//	printf("랜덤 숫자 => ");
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
//	printf("\n랜덤 합계 => %d \n", hap);
//	free(p);
//
//
//	// 12-04) 랜덤 숫자와 합계 동적 메모리 할당 + 파일에 쓰기
//	int* p;
//	int i = 0;
//	int num;
//	int hap = 0;
//
//	FILE* wfp;
//	wfp = fopen("c:\\cookc\\randhap0618.txt", "w");
//
//	srand((unsigned)time(NULL));
//	printf("랜덤 숫자 => ");
//	fprintf(wfp, "랜덤 숫자 => ");
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
//	printf("랜덤 합계 => %d \n", hap);
//	fprintf(wfp, "랜덤 합계 => %d \n", hap);
//
//	fclose(wfp);
//	free(p);
//
//
//	// 12-07) 파일 읽고 거꾸로 출력
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
//	// 13-예제34) 구조체 포인터로 학생 관리
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
//	printf("입력할 학생 수: ");
//	scanf("%d", &cnt);
//
//	p = (struct student*)malloc(sizeof(struct student) * cnt); // 동적 메모리 할당 자료형에 구조체 ★★★
//
//	for (i = 0; i < cnt; i++) {
//		printf("이름과 나이 입력: ");
//		scanf("%s %d", p[i].name, &p[i].age);
//	}
//
//	printf("\n-- 학생 명단 --\n");
//	for (i = 0; i < cnt; i++) {
//		printf("이름: %s, 나이: %d \n", p[i].name, p[i].age);
//	}
//	free(p);
//
//
//	// 13-예제34) 구조체 포인터로 학생 관리 다시 연습
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
//	printf("입력 학생 수: ");
//	scanf("%d", &cnt);
//
//	p = (struct student*)malloc(sizeof(struct student) * cnt);
//
//	for (i = 0; i < cnt; i++) {
//		printf("이름, 나이: ");
//		scanf("%s %d", p[i].name, &p[i].age);
//	}
//
//	printf("\n- 학생 명단 --\n");
//	for (i = 0; i < cnt; i++) {
//		printf("이름: %s, 나이: %d \n", p[i].name, p[i].age);
//	}
//	free(p);
//
//
//	// 13-예제36) 열거형으로 월 이름 출력
//	enum month {
//		Jan = 1, Fab, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
//	};
//
//	enum month mm;
//
//	printf("확인하고 싶은 달은? ");
//	scanf("%d", &mm); // 열거형 변수에 값 대입
//
//	switch (mm) {
//	case Jan: printf("%d월은 Jan. \n", mm); break;
//	case Fab: printf("%d월은 Fab. \n", mm); break;
//	case Mar: printf("%d월은 Mar. \n", mm); break;
//	case Apr: printf("%d월은 Apr. \n", mm); break;
//	case May: printf("%d월은 May. \n", mm); break;
//	case Jun: printf("%d월은 Jun. \n", mm); break;
//	case Jul: printf("%d월은 Jul. \n", mm); break;
//	case Aug: printf("%d월은 Aug. \n", mm); break;
//	case Sep: printf("%d월은 Sep. \n", mm); break;
//	case Oct: printf("%d월은 Oct. \n", mm); break;
//	case Nov: printf("%d월은 Nov. \n", mm); break;
//	case Dec: printf("%d월은 Dec. \n", mm); break;
//	default: printf("잘못 입력. \n"); break;
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
//	if (ss = summer) printf("지금은 여름.\n");
//	else printf("여름은 아님.\n");
//
//
//	// 13-10) 구조체, 공용체 혼합 사용
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
//	printf("이름 또는 부서 => ");
//	scanf("%s", e1.nm.name);
//	printf("주소 또는 번호 => ");
//	scanf("%s", e1.id.jumin);
//
//	printf("\n-- 직원 명단 --\n");
//	printf("이름/부서: %s\n", e1.nm.dept);
//	printf("주소/번호: %s\n", e1.id.phone);
//
//
//	// 13-11) 성적표 빈칸 채우기
//	struct student {
//		char name[10];
//		int avg;
//	};
//
//	struct student s;
//	struct student* p;
//	p = &s;
//
//	printf("이름: ");
//	scanf("%s", p->name);
//	printf("점수: ");
//	scanf("%d", &p->avg);
//
//	printf("\n-- 성적표 --\n");
//	printf("이름: %s, 점수: %d \n", p->name, p->avg);
//
//
//	// 13-11) 성적표 구조체 포인터, 배열로 만들기
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
//	printf("학생 수: ");
//	scanf("%d", &cnt);
//
//	pr = (struct _student_re*)malloc(sizeof(struct _student_re) * cnt);
//
//	printf("\n-- 정보 입력 --\n");
//	for (i = 0; i < cnt; i++) {
//		printf("이름, 점수: ");
//		scanf("%s %d", pr[i].name, &pr[i].avg);
//	}
//
//	printf("\n-- 성적 출력 --\n");
//	for (i = 0; i < cnt; i++) {
//		printf("이름: %s, 점수: %d \n", pr[i].name, pr[i].avg);
//	}
//	free(pr);
//}