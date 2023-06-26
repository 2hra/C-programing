//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <malloc.h>
//#include <string.h>
//
//
//char* upper_lower(char* s) {
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
//
//int throwDice() {
//	return rand() % 6 + 1;
//}
//
//void main() {
//	// 쉽게 풀어쓴 C언어 programing 문제 풀이
//	// chapter 10 배열
//	// 1)
//	int days[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//	int i;
//	for (i = 7; i < (sizeof(days)/sizeof(int)) ; i++) {
//		printf("%d월은 %d일까지 있습니다. \n", i + 1, days[i]);
//	}
//
//
//	// 2) 
//	int str[10] = { 0, };
//	int i, k, max, min, num;
//	srand((unsigned)time(NULL));
//
//	for (i = 0; i < 10; i++) {
//		str[i] = rand();
//
//		for (k = 0; k < 10; k++) {
//			if (str[k] > str[i]) max = str[k];
//			else if (str[k] < str[i]) min = str[k];
//		}
//	}
//	printf("최대: %d \n", max);
//	printf("최소: %d \n", min);
//
//
//	// C언어 for beginner 4판 연습문제 다시 풀이
//	 // chapter 08-09)
//	int i;
//	char s[100];
//	char old, new;
//
//	char* p;
//
//	printf("문자열 입력: ");
//	gets(s);
//
//	p = s;
//
//	printf("기존, 신규: ");
//	scanf(" %c %c", &old, &new);
//	
//	printf("변환해 출력: ");
//	for (i = strlen(s) ; i >= 0; i--) {
//		if (*(p +i ) == old) *(p + i) = new;
//		printf("%c", *(p + i));
//	}
//	printf("\n");
//
//
//	// chapter 09-09)
//	char s[40] = "ITCookBookHanbitNetwork";
//
//	char* p = s;
//
//	printf("원래: %s \n", p);
//
//	int i, k, tmp;
//
//	int size = strlen(s);
//
//	printf("내림: ");
//	for (i = 0; i < size; i++) {
//		for (k = i + 1; k < size; k++) {
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
//	printf("오름: ");
//	for (i = 0; i < size; i++) {
//		for (k = i + 1; k < size; k++) {
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
//	// chapter 10-08) 
//	char inStr[100], outStr[100];
//	
//	printf("문자열: ");
//	scanf("%s", inStr);
//
//	strcpy(outStr, upper_lower(inStr));
//
//	printf("변환 후: %s \n", outStr);
//
//
//	// chapter 10-09)
//	int i;
//	int diceNum[10];
//	char dup = 'N';
//	
//	printf("주사위 던지기 시작\n");
//	srand((unsigned)time(NULL));
//
//	int dice1, dice2;
//	int equalCount = 0;
//
//	while (1) {
//		dice1 = throwDice();
//		dice2 = throwDice();
//
//		if (equalCount == 10) break;
//
//		if (dice1 = dice2) dup = 'Y';
//
//		if (dup = 'Y') {
//			diceNum[equalCount] = dice1;
//			equalCount++;
//		}
//	}
//	printf("같은 숫자 순서: ");
//
//	for (i = 0; i < (sizeof(diceNum) / sizeof(int)); i++) {
//		printf("%d ", diceNum[i]);
//	}
//	printf("\n");
//
//	
//	// chapter 11-7)
//	int i = 1;
//	char str[100];
//
//	FILE* rfp;
//	rfp = fopen("c:\\windows\\win.ini", "r");
//
//	while (1) {
//		fgets(str, 100, rfp);
//
//		if (feof(rfp)) break; // ★★★
//
//	 	printf("%d: %s", i, str);
//		i++;
//	}
//	fclose(rfp);
//
//
//	// chapter 11-08)
//	int num, i;
//
//	srand((unsigned)time(NULL));
//
//	FILE* wfp;
//	wfp = fopen("c:\\cookc\\ex110618.txt", "w");
//
//	for (i = 0; i < 5; i++) {
//		num = rand() % 100 + 1;
//		printf("추출 숫자 => %d \n", num);
//		fprintf(wfp, "추출 숫자 => %d \n", num);
//	}
//	fclose(wfp);
//
//
//	// chapter 12-04)
//	int num; int hap = 0;
//	int* p;
//
//	printf("랜덤 숫자 => ");
//	srand((unsigned)time(NULL));
//
//	int i = 0;
//	p = (int*)malloc(sizeof(int) * 1);
//	num = rand() % 100 + 1;
//
//	p[i] = num;
//	printf("%d ", p[i]);
//	hap = hap + p[i];
//	i = 2;
//
//	while (1) {
//		p = (int*)malloc(sizeof(int) * i);
//		num = rand() % 100 + 1;
//		p[i - 1] = num;
//
//		if (p[i - 1] == 99 && i > 2) break;
//		
//		printf("%d ", p[i - 1]);
//		hap = hap + p[i - 1];
//		i++;
//	}
//	printf("\n");
//	printf("랜덤 합계 => %d \n", hap);
//}