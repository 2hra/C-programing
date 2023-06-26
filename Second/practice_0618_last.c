//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <malloc.h>
//#include <time.h>
//#include <string.h>
//
//int getLotto() {
//	return rand() % 45 + 1;
//}
//
//int dicenum() {
//	return rand() % 6 + 1;
//}
//
//void main() {
//	// 08-예제모음22)
//	int i, k;
//	int gugu[9][8];
//
//	for (i = 2; i < 10; i++) {
//		printf("#제%d단# ", i);
//	}
//	printf("\n\n");
//	for (i = 0; i < 9; i++) {
//		for (k = 0; k < 8; k++) {
//			gugu[i][k] = (i + 1) * (k + 2);
//			printf("%dX%d= %2d ", k + 2, i + 1, gugu[i][k]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//
//	// 08-09) 문자열 거꾸로 + 변환 출력
//	int i;
//	char s[100];
//	char old, new;
//
//	printf("문자열 입력: ");
//	gets(s);
//
//	printf("기존, 신규: ");
//	scanf(" %c %c", &old, &new);
//
//	printf("변환 문자열: ");
//	for (i = strlen(s) - 1; i >= 0; i--) {
//		if (s[i] == old) s[i] = new;
//		printf("%c", s[i]);
//	}
//	printf("\n");
//
//
//	// 08-09) 문자열 거꾸로 + 변환 출력 + 포인터 + 대소문자 변환
//	int i;
//	char s[100];
//	char* p;
//	char old, new;
//
//	printf("기존 문자열: ");
//	gets(s);
//
//	p = s;
//
//	printf("기존, 신규: ");
//	scanf(" %c %c", &old, &new);
//
//	printf("변환 문자열: ");
//	for (i = strlen(p) - 1; i >= 0; i--) {
//		if (*(p + i) == old) {
//			*(p + i) = new;
//			if (p[i] >= 'A' && p[i] <= 'Z') p[i] += ('a' - 'A');
//			else if (p[i] >= 'a' && p[i] <= 'z') p[i] -= ('a' - 'A');
//			printf("%c", *(p + i));
//		}
//		else {
//			if (p[i] >= 'A' && p[i] <= 'Z') p[i] += ('a' - 'A');
//			else if (p[i] >= 'a' && p[i] <= 'z') p[i] -= ('a' - 'A');
//			printf("%c", *(p + i));
//		}
//	}
//	printf("\n");
//
//
//	// 09-응용2) 스택 구현
//	char car = 'A';
//	int top = 0;
//	char stack[5] = { 0, };
//	int select;
//
//	do {
//		printf("<1> push, <2> pop, <3> stop : ");
//		scanf("%d", &select);
//
//		switch (select) {
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
//				printf("%c차 pop \n", stack[top]);
//				stack[top] = ' ';
//			}
//			else printf("pop 불가 \n");
//			break;
//		case 3:
//			printf("현재 남은 차는 %d대입니다. \n", top);
//			printf("프로그램 종료합니다. \n");
//			break;
//		default: printf("잘못 눌렀습니다. \n"); break;
//		}
//	} while (select != 3);
//
//
//	// 09-08) 대소문자 변환, 거꾸로 출력
//	int i;
//	char s[25] = "IT 1234 @$% CookBook";
//	char* p;
//	int diff = 'a' - 'A';
//
//	printf("기존 문자열: %s \n", s);
//
//	p = s;
//
//	printf("변환 문자열: ");
// 	for (i = sizeof(s) - 2; i >= 0; i--) {
//		if (*(p + i) >= 'a' && *(p + i) <= 'z') *(p + i) -= diff;
//		else if (*(p + i) >= 'A' && *(p + i) <= 'Z') *(p + i) += diff;
//		printf("%c", *(p + i));
//	}
//	printf("\n");
//
//
//	// 09-09) 오름차순, 내림차순 포인터
//	int i, k, tmp;
//	char s[40] = "ITCookBookHanBitNetWork";
//	char* p;
//
//	p = s;
//
//	printf("내림차순: ");
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
//	printf("오름차순: ");
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
//	// 10-예제29) 로또 6개 추첨(중복 없이) + 포인터
//	int num, k;
//	int lotto[6] = { 0, };
//	int* p;
//	p = lotto;
//	char dup = 'N';
//	int i = 0;
//
//	srand((unsigned)time(NULL));
//
//	printf("-- 로또 6개 뽑기 --\n");
//	while (1) {
//		num = getLotto();
//
//		if (i == 6) break;
//
//		for (k = 0; k < 6; k++) {
//			if (p[k] == num) dup = 'Y';
//		}
//
//		if (dup == 'N') {
//			p[i] = num;
//			printf("%d ", p[i]);
//			i++;
//		}
//		else dup = 'N';
//	}
//	printf("\n");
//
//
//	// 10-09) 주사위 던지기 함수
//	int i;
//	int equalCount = 0;
//	int dice1, dice2;
//	int diceNum[10] = { 0, };
//	char dup = 'N';
//
//	printf("-- 주사위 던지기 시작 --\n");
//	srand((unsigned)time(NULL));
//
//	while (1) {
//		dice1 = dicenum();
//		dice2 = dicenum();
//
//		if (dice1 == dice2) dup = 'Y';
//
//		if (equalCount == 10) break;
//
//		if (dup == 'Y') {
//			diceNum[equalCount++] = dice1;
//			dup = 'N';
//		}
//	}
//	printf("같은 숫자 => ");
//	for (i = 0; i < 10; i++) {
//		printf("%d ", diceNum[i]);
//	}
//	printf("\n");
//	
//
//	// 11-예제31) 파일 읽고 반대로 쓰기 + 동적 메모리 할당
//	int i, size;
//	char imsi[100];
//	char* p;
//
//	FILE* rfp;
//	FILE* wfp;
//
//	rfp = fopen("c:\\cookc\\0618_ex31.txt", "r");
//	wfp = fopen("c:\\cookc\\0618_ex31_re.txt", "w");
//
//	while (1) {
//		fgets(imsi, 100, rfp);
//		size = strlen(imsi);
//
//		p = (char*)malloc((sizeof(char) * size) + 1);
//		strcpy(p, imsi);
//		p[size-1] = '\0'; // 파일에서는 마지막이 \0 아니고 \n이라서 변환 처리 필요
//
//		if (feof(rfp)) break;
//
//		for (i = size - 1; i >= 0; i--) {
//			printf("%c", p[i]);
//			fprintf(wfp, "%c", p[i]);
//		}
//		printf("\n");
//		fprintf(wfp, "\n");
//	}
//	fclose(rfp);
//	fclose(wfp);
//	free(p);
//
//
//	// 11-07) win.ini 끝까지 읽고 출력하기
//	int i = 0;
//	char imsi[100];
//	char* p;
//
//	FILE* rfp;
//	rfp = fopen("c:\\windows\\win.ini", "r");
//
//	while (1) {
//		fgets(imsi, 100, rfp);
//
//		p = (char*)malloc((sizeof(char) * strlen(imsi)) + 1);
//
//		strcpy(p, imsi);
//
//		if (feof(rfp))break;
//
//		printf("%d : %s", i++ + 1, p);
//	}
//	fclose(rfp);
//	free(p);
//
//	
//	// 12-예제32) 숫자 여럿 입력 받고 짝수만 합계. 동적 할당 메모리
//	int i = 0;
//	int hap = 0;
//	int cnt, num;
//	int* p;
//
//	printf("몇 개: ");
//	scanf("%d", &cnt);
//
//	p = (int*)malloc(sizeof(int) * 1);
//	printf("%d번째 숫자: ", i + 1);
//	scanf("%d", &num);
//	p[i] = num;
//	hap = hap + p[i];
//	i = 2;
//
//	while (1) {
//		p = (int*)malloc(sizeof(int) * i);
//
//		printf("%d번째 숫자: ", i);
//		scanf("%d", &num);
//		p[i - 1] = num;
//
//		if (p[i - 1] % 2 == 0) {
//			hap = hap + p[i - 1];
//		}
//		i++;
//
//		if (i > cnt) break;
//	}
//	printf("합계: %d \n", hap);
//
//
//	// 12-예제33)
//	int size, i, k;
//	char imsi[100];
//	char* p[3];
//
//	for (i = 0; i < 3; i++) {
//		printf("%d번째 문자열: ", i + 1);
//		gets(imsi);
//
//		p[i] = (char*)malloc((sizeof(char) * strlen(imsi)) + 1);
//		strcpy(p[i], imsi);
//	}
//
//	printf("\n-- 반대로 출력 --\n\n");
//	for (i = 2; i >= 0 ; i--) {
//		size = strlen(p[i]);
//		imsi[size] = '\0';
//		
//		for (k = size - 1; k >= 0; k--)
//			imsi[size - 1 - k] = p[i][k];
//
//		printf("%d번째 문자열: ", i + 1);
//		puts(imsi);
//	}
//	for (i = 0; i < 3; i++) {
//		free(p[i]);
//	}
//
//
//	// 12-04) 랜덤 숫자 및 합계 동적 메모리 할당
//	int num, i, k;
//	int hap = 0;
//	int* p;
//
//	srand((unsigned)time(NULL));
//
//	printf("랜덤 숫자 => ");
//	p = (int*)malloc(sizeof(int) * 1);
//	num = rand() % 100 + 1;
//	p[0] = num;
//	printf("%d ", p[0]);
//	hap = hap + p[0];
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
//	printf("\n");
//	printf("랜덤 합계 => %d\n", hap);
//	free(p);
//
//
//	// 13-예제34)
//	int cnt, i;
//
//	struct student {
//		char name[10];
//		int age;
//	};
//
//	struct student* p;
//
//	printf("입력할 인원: ");
//	scanf("%d", &cnt);
//
//	p = (struct student*)malloc((sizeof(struct student)) * cnt);
//
//	for (i = 0; i < cnt; i++) {
//		printf("이름과 나이: ");
//		scanf("%s %d", p[i].name, &p[i].age);
//	}
//	printf("-- 인원 명단 --\n");
//	for (i = 0; i < cnt; i++) {
//		printf("이름: %s, 나이 %d \n", p[i].name, p[i].age);
//	}
//	free(p);
//}