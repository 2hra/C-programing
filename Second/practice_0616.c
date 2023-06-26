//#define _CRT_SECURE_NO_WARNINGS
//
//#include <string.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//
//
////// 10-07) 함수 빈칸 채우기
//void func(int* para) {
//	*para = *para + 100;
//}
//
////// 10-08) 함수 코드 짜기
//char* upper_lower(char* s) { // 함수 옆에도 포인터 표시 중요 ★★★
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
////// 10-09) 함수, 본문 빈칸 채우기
//int throwDice() {
//	int num = rand() % 6 + 1;
//	return num;
//}
//
////// 10-10) 함수 빈칸 채우기
//void func10(a);
//
//
//
//void main() {
//	//// C언어 for beginner 4판 연습문제 08~13장 코드 빈 칸 채우기, 코드 짜기 모음
//	 
//	// 08-09) 코드 짜기
//	char str[100];
//	int i;
//	char old, new;
//	int diff = 'a' - 'A';
//
//	printf("여러 글자 입력: ");
//	gets(str);
//
//	printf("기존, 신규 문자: ");
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
//	// 08-09) 포인터 활용 코드 짜기
//	char str[100];
//	int i;
//	char old, new;
//	int diff = 'a' - 'A';
//
//	printf("여러 글자 입력: ");
//	gets(str);
//	char* p = str;
//
//	printf("기존, 신규 문자: ");
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
//	// 09-08) 빈칸 채우기
//	char ary[25] = "IT 1234 @$% CookBook";
//	char* p;
//	int i;
//	p = ary;
//	int diff = 'a' - 'A';
//
//	printf("%s \n", p);
//	for (i = sizeof(ary) - 2; i >= 0; i--) {
//		// 여기서부터 코드 작성
//		if (*(p + i) >= 'A' && *(p + i) <= 'Z') *(p + i) += diff;
//		else if (*(p + i) >= 'a' && *(p + i) <= 'z') *(p + i) -= diff;
//		printf("%c", *(p+i));
//	}
//	printf("\n");
//
//
//
//	// 09-09) 코드 짜기
//	char s[40] = "ITCookBookHanbitNetwork";
//	int i, k, cmp;
//	char* p = s;
//
//	printf("정렬 전 문자열: %s \n", s);
//	printf("정렬 후 문자열: ");
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
//	// 10-07) 함수 빈칸 채우기(상단에 있음)
//	int para = 200;
//	func(&para);
//	printf("%d \n", para);
//
//
//
//	// 10-08) 함수 코드 짜기(상단에 있음)
//	char inStr[100], outStr[100];
//
//	printf("문자열 입력: ");
//	scanf("%s", inStr);
//
//	strcpy(outStr, upper_lower(inStr));
//	printf("변환 문자열: %s \n", outStr);
//
//
//
//	// 10-09) 함수, 본문 빈칸 채우기
//	short int diceNum[10] = { 0, };
//	int i;
//	char dup = 'N';
//
//	printf("** 주사위 2개 던지기 시작 ** \n");
//	srand((unsigned)time(NULL));
//
//	int dice1, dice2;
//	int equalCount = 0;
//
//	while (1) {
//		dice1 = throwDice();
//		dice2 = throwDice();
//		// 여기서부터 코드 짜기
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
//		// 여기까지 코드 짠 부분
//	}
//	printf("같은 숫자 나온 순서(던진 순서X): ");
//	for (i = 0; i < 10; i++) printf("%d  ", diceNum[i]);
//	printf("\n");
//
//
//
//	// 10-10) 함수 빈칸 채우기
//	func10(100);
//
//
//
//	// 11-03) 빈칸 채우기
//	char str[30];
//	printf("문자열 입력 => ");
//	gets(str);
//	puts(str);
//
//
//
//	// 11-07) 빈칸 채우기
//	char str[200];
//	FILE* rfp;
//	rfp = fopen("c:\\windows\\win.ini", "r");
//	int line = 1;
//	while (1) {
//		// 여기서부터 코드 짜기
//		fgets(str, 200, rfp); // 파일 읽어 오기 순서 중요 ★★★
//		printf("%d: %s", line, str);
//
//		if (feof(rfp)) break;
//		// 여기까지 코드 짠 부분
//
//		line++;
//	}
//	fclose(rfp);
//
//
//
//	// 11-08) 코드 짜기
//	srand((unsigned)time(NULL));
//
//	int i;
//
//	FILE* wfp;
//	wfp = fopen("c:\\cookc\\0616.txt", "w");
//
//	for (i = 0; i < 5; i++) {
//		int num = rand() % 100 + 1;
//		printf("추출 숫자: %d\n", num);
//		fprintf(wfp, "추출 숫자: %d\n", num);
//	}
//	fclose(wfp);
//
//
//
//	// 12-03) 빈칸 채우기
//	int* p;
//	int i, hap = 0;
//	int cnt;
//	int ary[] = { 10, 20, 30, 40, 50 };
//
//	cnt = sizeof(ary) / sizeof(int); // 빈칸 1
//	p = (int*)malloc(sizeof(int) * cnt); // 빈칸 2
//
//	for (i = 0; i < cnt; i++) {
//		printf("배열[%d] 숫자: %d \n", i, ary[i]);
//		*(p + i) = ary[i];// 빈칸 3
//	}
//	for (i = 0; i < cnt; i++) {
//		hap += *(p + i); // 빈칸 4
//	}
//	printf("배열 숫자 합: %d \n", hap);
//	free(p); // 빈칸 5
//
//
//
//	// 12-04) 코드 짜기 ★★★ 반복문 내부 어려움
	//int i = 0; int hap = 0; int* p; int num;
	//srand((unsigned)time(NULL));

	//printf("랜덤 숫자: ");

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
	//printf("랜덤 합계: %d \n", hap);

//
//
//
//	// 12-07) 코드 짜기
//	char str[100];
//	char* p[5]; // ★★★ 포인터 배열 선언
//	int i, cnt;
//
//	FILE* rfp;
//	rfp = fopen("c:\\windows\\win.ini", "r");
//
//	printf("-- win.ini 파일 중 5줄 -- \n");
//	for (i = 0; i < 5; i++) {
//		fgets(str, 100, rfp);
//		cnt = strlen(str);
//
//		p[i] = (char*)malloc((sizeof(char) * cnt) + 1); // ★★★ +1
//
//		strcpy(p[i], str); // ★★★ 문자열 복사
//		printf("%d: %s", i+1, p[i]);
//	}
//	printf("\n");
//	printf("-- 순서 반대로 출력 -- \n");
//
//	for (i = 4; i >= 0; i--) {
//		printf("%d: %s", i + 1, p[i]);
//	}
//	fclose(rfp);
//
//
//
//	// 13-09) 빈칸 채우기
//	enum season {spring, summer, fall, winter};
//	enum season ss; // 빈칸 1
//	ss = summer;
//	if (ss == summer) // 빈칸 2
//		printf("지금은 여름 \n");
//	else printf("지금은 여름 아님 \n");
//
//
//
//	// 13-10) 구조체, 공용체 동시 사용 코드 짜기
	//typedef struct _employee {
		//// 여기서부터 코드 짜기
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
		//// 여기까지 코드 짠 부분
	//} employee;

	//employee e1;

	//printf("이름 또는 부서 => ");
	//scanf("%s", e1.nm.name);
	//printf("번호 또는 주소 => ");
	//scanf("%s", e1.id.phone);

	//printf("\n-- 구조체, 공용체 혼합 활용 -- \n");
	//printf("이름/부서 => %s \n", e1.nm.dept);
	//printf("번호/주소 => %s \n", e1.id.jumin);

//
//
//	// 13-11) 빈칸 채우기
//	struct student {
//		char name[10];
//		int avg;
//	};
//	struct student s;
//	struct student* p;
//	p = &s;// 빈칸 1 ★★★ 포인터에 구조체 주소값 대입
//	printf("이름: ");
//	scanf("%s", p->name); // 빈칸 2
//	printf("점수: ");
//	scanf("%d", &p->avg); // 빈칸 3
//}
//
////// 10-10) 함수 빈칸 채우기
//void func10(int a) {
//	printf("%d \n", a);
//}