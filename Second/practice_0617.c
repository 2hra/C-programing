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
//	// chapter 08) 응용문제 연습 - 배열 첨자에 값 대입
//	int aa[4];
//	int hap = 0;
//	int i;
//
//	for (i = 0; i <= 3; i++) {
//		printf("%d번째: ", i+1);
//		scanf("%d", &aa[i]);
//		hap += aa[i];
//	}
//	printf("%d \n", hap);
//
//
//	// chapter 08-22) 구구단 예제
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
//	// chapter 09) 응용문제 연습 - 스택
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
//			if (top >= 5) printf("push 불가 \n");
//			else {
//				stack[top] = carName++;
//				printf("%c 차 push \n", stack[top]);
//				top++;
//			}
//			break;
//		case 2:
//			if (top <= 0) printf("pop 불가 \n");
//			else {
//				top--;
//				carName--;
//				printf("%c 차 pop \n", stack[top]);
//				stack[top] = ' ';
//			}
//			break;
//		case 3:
//			printf("남은 차는 %d대 입니다. \n", top);
//			printf("프로그램 종료합니다. \n");
//			break;
//		default: printf("잘못 입력하셨습니다. \n");
//			break;
//		}
//	}
//
//
//	// chapter 10-08)
//	char inStr[100], outStr[100];
//
//	printf("문자열 입력: ");
//	scanf("%s", inStr);
//
//	strcpy(outStr, upper_lower(inStr));
//	printf("변환 문자열: %s \n", outStr);
//
//
//	// chapter 12-04) 코드 짜기 문제
//	int i = 0; int hap = 0; int* p; int num;
//	srand((unsigned)time(NULL));
//
//	printf("랜덤 숫자: ");
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
//	printf("랜덤 합계: %d \n", hap);
//
//
//	// chapter 12-07) 코드 짜기 문제
//	int i, size; char imsi[100]; char *p[5];
//	FILE* rfp;
//	rfp = fopen("c:\\windows\\win.ini", "r");
//
//	printf("제대로 출력 \n");
//	for (i = 0; i < 5; i++) {
//		fgets(imsi, 100, rfp);
//		size = strlen(imsi);
//		p[i] = (char*)malloc((sizeof(char) * size) + 1);
//		strcpy(p[i], imsi);
//		printf("%d : %s", i + 1, p[i]);
//	}
//	printf("\n");
//	printf("거꾸로 출력 \n");
//	for (i = 4; i >= 0; i--) {
//		printf("%d : %s", i + 1, p[i]);
//	}
//	fclose(rfp);
//
//
//	// 13-10) 구조체, 공용체 동시 사용 코드 짜기
//	typedef struct _employee {
//		// 여기서부터 코드 짜기
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
//		// 여기까지 코드 짠 부분
//	} employee;
//
//	employee e1;
//
//	printf("이름 또는 부서 => ");
//	scanf("%s", e1.nm.name);
//	printf("번호 또는 주소 => ");
//	scanf("%s", e1.id.phone);
//
//	printf("\n-- 구조체, 공용체 혼합 활용 -- \n");
//	printf("이름/부서 => %s \n", e1.nm.dept);
//	printf("번호/주소 => %s \n", e1.id.jumin);
//
//
//	// chapter 13-12)
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
//
//
//	// 연습문제 코드 안 보고 다시 연습
//	// chapter 08-09) 포인터, 동적 메모리 할당 활용
//	int i, size; char str[100];
//	int diff = 'a' - 'A';
//	
//	printf("여러 글자 입력: ");
//	gets(str);
//
//	char old, new;
//	printf("기존 문자, 신규 문자: ");
//	scanf(" %c %c", &old, &new);
//
//	size = strlen(str);
//	char* p;
//	p = (char*)malloc((sizeof(char) * size) + 1);
//	strcpy(p, str);
//	p[size] = '\0'; // 문자열 마지막에 개행문자 필수
//
//	printf("반대로, 변경 후 출력: "); 
//	for (i = size - 1; i >= 0; i--) { // 문자열 길이 - 1이 첨자의 마지막
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
//	// chapter 09-08) 포인터 거꾸로 출력, 대소문자 변환
//	char ary[25] = "IT 1234 @$% CookBook";
//	char* p;
//	int i;
//	p = ary;
//	int diff = 'a' - 'A';
//
//	printf("원래 출력: %s \n", ary);
//	printf("반대 출력: ");
//	for (i = sizeof(ary) - 2; i >= 0; i--) {
//		if (*(p + i) >= 'A' && *(p + i) <= 'Z') *(p + i) += diff;
//		else if (*(p + i) >= 'a' && *(p + i) <= 'z')*(p + i) -= diff;
//		printf("%c", p[i]);
//	}
//	printf("\n");
//
//
//	// chapter 09-09) 내림차순 정렬 코드 짜기
//	char s[40] = "ITCookBookHanbitNetwork";
//	
//	int i, k, tmp;
//	char* p = s;
//
//	printf("원래대로 출력: %s \n", p);
//	for (i = 0; i < strlen(s); i++) {
//		for (k = i + 1; k < strlen(s); k++) {
//			if (*(p + i) < *(p + k)) {
//				tmp = *(p + i);
//				*(p + i) = *(p + k);
//				*(p + k) = tmp;
//			}
//		}
//	}
//	printf("내림차순 정렬: %s \n", p);
//	for (i = 0; i < strlen(s); i++) {
//		for (k = i + 1; k < strlen(s); k++) {
//			if (p[i] > p[k]) {
//				tmp = p[i];
//				p[i] = p[k];
//				p[k] = tmp;
//			}
//		}
//	}
//	printf("오름차순 정렬: %s \n", p);
//
//
//	// chapter 10-예제29) 로또 번호 10개 추첨해서 파일에 쓰기
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
//			printf("%d번째 번호: %d \n", i + 1, num);
//			fprintf(wfp, "%d번째 번호: %d \n", i + 1, num);
//			i++;
//		}
//		else 
//			dup = 'N';
//	}
//	fclose(wfp);
//
//
//	// chapter 10-예제29) 로또 번호 10개 추첨해서 파일에 쓰기 다시 연습
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
//			printf("%d번째 숫자: %d \n", i + 1, lotto[i]);
//			fprintf(wfp, "%d번째 숫자: %d \n", i + 1, lotto[i]);
//			i++;
//		}
//		else
//			dup = 'N';
//	}
//	fclose(wfp);
//
//
//	// chapter 10-08) 대소문자 변환 함수
//	char inStr[100], outStr[100];
//	printf("문자열 입력: ");
//	scanf("%s", inStr);
//
//	strcpy(outStr, upper_lower(inStr));
//
//	printf("문자열 변환: %s \n", outStr);
//
//
//	// chapter 10-09) 코드 채우기
//	short int diceNum[10] = { 0 };
//	int i;
//	char dup = 'N';
//
//	printf("** 주사위 두 개 던지기 **\n");
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
//	printf("같은 숫자 나온 순서: ");
//	for (i = 0; i < 10; i++) {
//		printf("%d  ", diceNum[i]);
//	}
//	printf("\n\n");
//
//
//	// chapter 11-예제30) 구구단 파일 출력
//	int i, k;
//	int gugu[9][8];
//
//	FILE* wfp;
//	wfp = fopen("c:\\cookc\\gugu0617.txt", "w");
//
//	for (i = 2; i < 10; i++) {
//		printf("#제%d단# ", i);
//		fprintf(wfp, "#제%d단# ", i);
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
//	// chapter 11-07) win.ini 파일 읽고 출력
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
//	// chapter 12-04) 랜덤 숫자 코드 짜기 ★★★
//	int num;
//	int hap = 0;
//	int* p;
//
//	srand((unsigned)time(NULL));
//	printf("랜덤 숫자 => ");
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
//	printf("랜덤 합계 => %d \n", hap);
//
//
//	// chapter 12-04) 랜덤 숫자 코드 짜기 다시 연습
//	int i = 0;
//	int hap = 0;
//	int* p;
//	int num;
//
//	printf("랜덤 숫자 => ");
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
//	printf("랜덤 합계 => %d \n", hap);
//
//	
//	// chapter 12-07) win.ini 읽고 거꾸로 출력
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
//	printf("제대로 출력\n");
//	fprintf(wfp, "제대로 출력\n");
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
//	printf("반대로 출력\n");
//	fprintf(wfp, "반대로 출력\n");
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