//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <time.h>
//
//// 10-4)
//void myFunc(n1, n2);
//
//// 10-6)
//int var = 0;
//void func1() {
//	int var = 111;
//}
//void func2() {
//	var = 222;
//}
//
//// 10-7)
//void func7(int *para) {
//	*para = *para + 100;
//}
//
//// 10-8)
//char upper_lower(str);
//
//// 10-9)
//int throwDice() {
//	return rand() % 6 + 1;
//}
//
//// 10-10)
//void func10(a);
//
//void main() {
//	// Chapter 8. 배열 연습문제
//	// 1. int ary[3]; >> ary[3] 불가
//	 int ary[3] = { 0,0,0,0 }; -> 첨자 3에서 이니셜라이저값 많다고 뜸.
//	 
//	// 2. 배열 개수 -> 1, 10, 12, 15
//	int ary1[1] = { 0 };
//	printf("%d \n", sizeof(ary1) / sizeof(int));
//	int ary10[10] = { 0 };
//	printf("%d \n", sizeof(ary10) / sizeof(int));
//	int ary34[3*4] = { 0 };
//	printf("%d \n", sizeof(ary34) / sizeof(int));
//	int ary35[3][5] = {0};
//	printf("%d \n", sizeof(ary35) / sizeof(int));
//	
//	// 3. 9 출력.
//	int ary_3[4] = { 1,2,3,4 };
//	int hap = 0;
//	int i;
//	for (i = 3; i > 0; i--)
//		hap += ary_3[i];
//	printf("%d \n", hap);
//	
//	// 4. 2, 3번이 정답.
//	int ary[3] = { 100, 200, 300, 400 }; // 얘만 마지막 첨자 부족으로 오류
//	int ary[] = { 100, 200, 300, 400 };
//	int ary[3] = { 100, 200 };
//	
//	// 5. 1번만 정답
//	short int ary[] = { 1.1, 2.2, 3.3, 4.4 };
//	printf("%d \n", sizeof(ary) / 2);
//	printf("%d \n", sizeof(ary) * 2);
//	printf("%d \n", sizeof(ary) % 2);
//	printf("%d \n", sizeof(ary) % sizeof(short int));
//	
//	// 6. VsaSui
//	char str[13] = "VisualStudio";
//	int i;
//	for (i = 0; i < 13; i += 2)
//		printf("%c", str[i]);
//	
//	// 7. 문자열 출력 puts()(cf. gets), 문자열 비교 strcmp(문자열 A, 문자열 B) 값이 0이면 동일한 문자열, 
//	//    문자열 길이 strlen() 개행 문자 외 문자 개수만큼 길이 반환, 
//	//    문자열 연결 strcat(기존 문자열, 뒤에 붙일 문자열), 문자열 복사 strcpy(기존 문자열, 덮어쓸 문자열)
//	
//	// 8. 9 8 7 
//	//	6 5 4
//	int ary[2][3];
//	int i, k;
//	int num = 10;
//	for (i = 0; i < 2; i++)
//		for (k = 0; k < 3; k++)
//			ary[i][k] = --num;
//	for (i = 0; i < 2; i++) {
//		for (k = 0; k < 3; k++) {
//			printf("%3d", ary[i][k]);
//		}
//		printf("\n");
//	}
//	
//	// 9. 코드 작성 문제
//	char s[100];
//	int i;
//	char old, new;
//
//	printf("여러 문자 입력 : ");
//	gets(s);
//
//	printf("기존 문자, 새 문자 입력 : ");
//	scanf(" %c %c", &old, &new);
//
//	for (i = strlen(s); i >= 0; i--) {
//		if (s[i] == old) printf("%c", new);
//		else printf("%c", s[i]);
//	}
//	
//	// 포인터 활용 재풀이
//	char s[100];
//	char* sp;
//	sp = s;
//	int i;
//	char old1, new1;
//
//	printf("여러 문자 입력 : ");
//	gets(s);
//
//	printf("기존 문자, 새로운 문자 입력 : ");
//	scanf(" %c %c", &old1, &new1);
//	printf("%s \n", s);
//
//	for (i = 0; i <= strlen(s); i++) {
//		if (*(sp + i) == old1) printf("%c", new1);
//		else printf("%c", *(sp + i));
//	}
//	
//	
//	
//	// Chapter 9. 배열과 포인터 연습문제
//	// 1. 데이터 넣는 것이 push, 빼는 것이 pop. top은 가장 위에 있는 데이터.
//	 
//	// 2. num2의 주소는 &num2로 접근. 데이터가 같다고 같은 메모리 주소는 아님.
//	
//	// 3. ary[0]의 주소는 &ary[0]이고, 값은 100이다. &ary[2]와 ary+2는 같은 주소.
//	int ary[3] = {100, 200, 300};
//	printf("값: %d, 주소: %d \n", ary[0], &ary[0]);
//	printf("%d %d \n", &ary[2], ary+2);
//	
//	// 4. 포인터는 모두 4바이트. * 기호를 붙인다. 선언 시 포인터변수 = &입력주소값으로 대입.
//	
//	// 5. *c, &p가 오답.
//	char c;
//	char* p;
//	c = 'K';
//	p = &c;
//	printf("c = %c, *p = %c, *c = 오류, &p = %d(포인터의 주소값) \n", c, *p, &p);
//	
//	// 6. int형 포인터 4바이트, 모두 4바이트
//	
//	// 7. Z Z
//	char ch;
//	char* p;
//	char* q;
//	ch = 'K';
//	q = &ch;
//	ch = 'M';
//	p = q;
//	ch = 'Z';
//	printf("%c %c", *p, *q);
//	
//	// 8. 거꾸로 출력, 대소문자 변환, 코드 채우기.
//	char ary[25] = "IT 1234 @$% CookBook";
//	char* p;
//	int i;
//	p = ary;
//	int diff = 'a' - 'A';
//	for (i = sizeof(ary) - 2; i >= 0; i--) {
//		if (*(p + i) >= 'A' && *(p + i) <= 'Z') printf("%c", *(p + i) + diff);
//		else if (*(p + i) >= 'a' && *(p + i) <= 'z') printf("%c", *(p + i) - diff);
//		else printf("%c", *(p + i));
//	} // 조건문별로 프린트문
//	for (i = sizeof(ary) - 2; i >= 0; i--) {
//		if (*(p + i) >= 'A' && *(p + i) <= 'Z') *(p + i) = *(p + i) + diff;
//		else if (*(p + i) >= 'a' && *(p + i) <= 'z') *(p + i) = *(p + i) - diff;
//		printf("%c", *(p + i));
//	} // 포인터 자체 값 변경
//	
//	// 9. 코드 작성 문제
//	char s[40];
//	int i, k, cmp;
//	char* p;
//	char* q;
//
//	printf("정렬 전 문자열: ");
//	gets(s);
//	p = s;
//
//	printf("정렬 후 문자열: ");
//	for (i = 0; i < strlen(s); i++) {
//		for (k = i + 1; k < strlen(s); k++) {
//			if (*(p + i) < *(p + k)) {
//				cmp = *(p + i);
//				*(p + i) = *(p + k);
//				*(p + k) = cmp;
//			}
//		}
//	}
//	puts(s);
//	
//	// 오름차순으로 다시 연습
//	char str[40];
//	int i, k, cmp;
//	char* p;
//
//	printf("정렬 전 문자열: ");
//	gets(str);
//	p = str;
//
//	printf("정렬 후 문자열: ");
//	for (i = 0; i < strlen(str); i++) {
//		for (k = i + 1; k < strlen(str); k++) {
//			if (*(p + i) > *(p + k)) {
//				cmp = *(p + i);
//				*(p + i) = *(p + k);
//				*(p + k) = cmp;
//			}
//		}
//	}
//	puts(str);
//	
//	
//	
//	// chapter 10. 함수 연습문제
//	// 1. printf()도 내장 함수다. 함수는 직접 만들 수 있다.
//	 
//	// 2. 매개변수
//	
//	// 3. 10,20이랑 3.15,5.8
//	printf("%d \n", addFunction(10, 20));
//	// addFunction(10); // 매개변수 부족 오류
//	// printf("%.2f \n", addFunction(3.14, 5.8)); // 0.000000으로 오류
//	// addFunction("안녕", "하세요"); // 매개변수 자료형 오류.
//	
//	// 4. void myFunc(n1, n2); 먼저 선언해야 메인 아래 함수 선언 시에도 오류 X
//	myFunc(10, 20);
//	
//	// 5. 지역변수가 전역변수보다 우선순위가 높다.
//	
//	// 6. 0, 0, 222
//	printf("%d \n", var);
//	func1();
//	printf("%d \n", var);
//	func2();
//	printf("%d \n", var);
//	
//	// 7. 코드 채우기 ★★★
//	int para = 200;
//	func7(&para);
//	printf("%d \n", para);
//	
//	// 8. 대소문자 변환
//	char inStr[100], outStr[100];
//	printf("문자열 100자 이내: ");
//	scanf("%s", inStr);
//	upper_lower(inStr);
//	strcpy(outStr, inStr); // IT_CookBook_Hanbit_Network
//	printf("변환 결과 => %s \n", outStr);
//	
//	// 9. 코드 채우기
//	short int diceNum[10] = { 0, };
//	int i;
//	char dup = 'N';
//
//	printf("주사위 2개 던지기 \n\n");
//	srand((unsigned)time(NULL));
//
//	int dice1, dice2;
//	int equalCount = 0;
//
//	while (1) {
//		dice1 = throwDice();
//		dice2 = throwDice();
//		
//		if (dice1 == dice2) {
//			dup = dice1;
//			diceNum[equalCount] = dup;
//			equalCount += 1;
//		}
//
//		if (equalCount == 10) break;
//	}
//
//	printf("같은 숫자 나온 순서 => ");
//	for (i = 0; i < 10; i++) {
//		printf("%d  ", diceNum[i]);
//	}
//	printf("\n");
//	// 10. 코드 채우기
//	func10(100);
//}
//
//// 10-3)
//int addFunction(int m, int n) {
//	return m + n;
//}
//
//// 10-4)
//void myFunc(int n1, int n2) {
//	printf("%d", n1 + n2);
//}
//
//// 10-8)
//char upper_lower(char* p) {
//	int i = 0;
//	int diff = 'a' - 'A';
//	
//	do {
//		if (*(p + i) >= 'A' && *(p + i) <= 'Z') *(p + i) = *(p + i) + diff;
//		else if (*(p + i) >= 'a' && *(p + i) <= 'z') *(p + i) = *(p + i) - diff;
//		i++;
//	} while (*(p + i) != '\0');
//
//	return p;
//}
//
//// 10-10)
//void func10(int a) {
//	printf("%d \n", a);
//}
