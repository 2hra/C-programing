//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <string.h>
//
//
//// 예제모음 27) 구구단 함수
//int gugu(num) {
//	int i;
//
//	for (i = 1; i <= 9; i++)
//		printf("%d X %d = %2d \n", num, i, num * i);
//}
//
//
//// 예제모음 28) 함수 이용 대소문자 변환
//char upper(char ch) {
//	return ch - ('a' - 'A');
//}
//char lower(char ch) {
//	return ch + ('a' - 'A');
//}
//
//
//// 예제모음 29) 로또 추첨
//int lotto() {
//	srand(time(NULL));
//	return rand()%45+1;
//}
//
//
//void main() {
//	// chapter 8 예제 복습)
//	// 예제모음 20) 거꾸로 반환
//	char str[100];
//	int i;
//	
//	printf("문자열을 입력하세요 : ");
//	gets(str);
//
//	printf("내용을 거꾸로 출력 ==> ");
//	for (i = strlen(str); i >= 0; i--) {
//		printf("%c", str[i]);
//	}
//	printf("\n");
//
//
//	// 예제모음 20-1) 거꾸로 반환
//	char str[100];
//	char new[100];
//	int i;
//
//	printf("문자열을 입력하세요 : ");
//	gets(str);
//	
//	for (i = 0; i < strlen(str); i++) {
//		new[i] = str[strlen(str) - (i + 1)];
//	}
//	new[strlen(str)] = '\0';
//
//	printf("내용을 거꾸로 출력 ==> %s \n", new);
//
//
//	// 예제모음 20-2) 거꾸로 반환(포인터 활용)
//	char str[100];
//	char new[100];
//
//	char* s;
//	char* n;
//
//	int i, j;
//
//	printf("문자열을 입력하세요 : ");
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
//	printf("내용을 거꾸로 출력 ==> ");
//	for (i = 0; i < strlen(new); i++) {
//		printf("%c", *(n + i));
//	}
//	printf("\n");
//
//
//	// 예제모음 21) 대소문자 변환
//	char str[100];
//	char new[100];
//	int i;
//
//	printf("문자 입력: ");
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
//	printf("변환 문자: %s \n", new);
//
//
//	// 예제모음 21) 대소문자 변환
//	char str[100];
//	char new[100];
//	int i;
//
//	printf("문자 입력: ");
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
//	printf("변환 문자: %s \n", new);
//
//
//	// 예제모음 21-1) 대소문자 변환(포인터 활용)
//	char str[100];
//	char new[100];
//
//	char* s;
//	char* n;
//
//	int i;
//
//	printf("문자 입력: ");
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
//	printf("변환 문자: %s \n", new);
//
//
//	// 예제모음 22) 구구단 결과를 2차원 배열 저장 후 가로로 출력
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
//	// 예제모음 23) 특정 문자를 새로운 문자로 치환(포인터도 활용)
//	char old[100];
//	char new[100];
//	char* o;
//	char* n;
//
//	char olds, news;
//
//	int i;
//
//	printf("여러 글자 입력: ");
//	gets(old);
//
//	o = old;
//	n = new;
//
//	printf("기존 문자와 새로운 문자: ");
//	scanf(" %c %c", &olds, &news);
//	
//	for (i = 0; i <= strlen(old); i++) {
//		if (*(o + i) == olds)
//			*(n + i) = news;
//		else *(n + i) = *(o + i);
//	}
//	new[i] = '\0';
//
//	printf("변환 결과 출력: %s \n", new);
//
//	
//
//	// chapter 9 예제 복습)
//	// 예제모음 24) 문자열 반대 출력 포인터 활용 위에서 했음
//	// 예제모음 25) 입력한 두 값 포인터 활용 교환
//	int a, b, tmp;
//	int* p;
//	int* q;
//
//	printf("a 값 입력: ");
//	scanf("%d", &a);
//
//	printf("b 값 입력: ");
//	scanf("%d", &b);
//
//	p = &a;
//	q = &b;
//
//	tmp = *p;
//	*p = *q;
//	*q = tmp;
//
//	printf("바뀐 a값: %d \n", *p);
//	printf("바뀐 b값: %d \n", *q);
//
//
//	// 예제모음 26) 포인터 이용한 배열 정렬 - 오름차순
//	int i, j, tmp;
//
//	int str[10] = { 1,5,6,7,8,9,2,4,3,0 };
//
//	int* p;
//
//	p = str;
//
//	printf("정렬 전 배열 => ");
//	for (i = 0; i < 10; i++)
//		printf("%d ", *(p + i));
//	printf("\n");
//
//	printf("정렬 후 배열 => ");
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
//	// chapter 10 예제 복습)
//	// 예제모음 27) 구구단 함수
//	int answer;
//	 
//	printf("출력할 구구단: ");
//	scanf("%d", &answer);
//	gugu(answer);
//
//
//	// 예제모음 28) 함수 이용 대소문자 변환
//	char answer[100];
//	char* p;
//	int i;
//
//	printf("문자 입력: ");
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
//	printf("변환 결과: %s \n", answer);
//
//
//	// 예제모음 29) 로또 추첨
//	int total[6] = { 0, };
//	int i, j, num;
//	char dup = 'N';
//
//	printf("로또 번호 추첨 \n");
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
//	printf("추첨된 번호: ");
//	for (i = 0; i < 6; i++) {
//		printf("%d ", total[i]);
//	}
//	printf("\n");
//
//
//
//	// chapter 11 예제 복습)
//	// 예제모음 30) 구구단 파일에 쓰기
//	int i, j;
//	int gugu[9][9];
//
//	FILE* wfp;
//
//	wfp = fopen("c:\\cookc\\gugu.txt", "w");
//
//	for (i = 2; i <= 9; i++) {
//		printf("##%d단##  ", i);
//		fprintf(wfp, "##%d단##  ", i);
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
//	// 예제모음 31) 파일 내용 읽고 새로운 파일에 거꾸로 쓰기
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