//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//void main() {
//	// 230417 7주차(시험 문제 아주 디테일, 공부한 만큼 나올 수 있도록.)
//	// 공부 많이 해야 풀 수 있음. 책 연습문제 풀어보기.
//
//	// 제7장) while문과 흐름 제어
//	// for문과 while문의 비교: while문은 조건식이 참일 때만 반복.
//	// 초깃값은 while 위에 지정. 증감식은 while문 안에 지정. 중괄호로 블록 처리 필수.
//
//	int i = 0; // 초깃값
//	while (i < 5) { // 조건식
//		printf("while문 공부.\n"); 
//		i++; // 증감식
//	}
//
//	/*int i = 1;
//	int hap = 0;
//
//	while (i <= 10) { // <=이 아니라 < 하려면 11로.
//		hap += i;
//		i++;
//	}
//	printf("10!은 %d이다.\n", hap);*/
//
//	// while(1){ -> 참이니까 무한 루프.
//
//	/*int a, b;
//	while (1) {
//		printf("더할 두 수 입력(강제 종료 ctrl+c): ");
//		scanf("%d %d", &a, &b);
//		printf("%d + %d = %d\n", a, b, a + b);
//	}*/
//
//
//	// while, switch문만 사용하기
//	/*int a, b;
//	char c, answer;
//
//	int i = 1;
//
//	while (i) {
//		printf("두 수 입력(강제 종료 ctrl+c): ");
//		scanf("%d %d", &a, &b);
//		printf("오칙연산 입력(+ - / * %%): ");
//		scanf(" %c", &c);
//
//		switch (b) {
//		case 0:	switch (c) {
//				case '%': printf("0으로는 나머지를 구할 수 없습니다.\n"); break;
//				case '/': printf("0으로는 나누기를 할 수 없습니다.\n"); break;
//				} break;
//		default:
//			switch (c) {
//			case'+': printf("%d + %d = %d\n", a, b, a + b); break;
//			case'-': printf("%d - %d = %d\n", a, b, a - b); break;
//			case'/': printf("%d / %d = %.1f\n", a, b, a / (float)b); break;
//			case'*': printf("%d * %d = %d\n", a, b, a * b); break;
//			case'%': printf("%d %% %d = %d\n", a, b, a % b); break;
//			default: printf("오칙연산 오류입니다.\n"); break;
//			}
//		}
//
//			  printf("\n다시 실행하시겠습니까? (Y/N) : ");
//			  scanf(" %c", &answer);
//			  switch (c) {
//			  case'n': i = 0; break;
//			  case'N': i = 0; break;
//			  }
//		printf("\n");
//	}*/
//	
//
//	// for, if로 바꾸기.
//	/*int a, b;
//	char c, answer;
//
//	int i;
//
//	for (i = 1; i >= 0; i++) {
//		printf("두 수 입력(강제 종료 ctrl+c): ");
//		scanf("%d %d", &a, &b);
//		printf("오칙연산 입력(+ - / * %%): ");
//		scanf(" %c", &c);
//
//		if (b == 0 && c == '%') {
//			printf("0으로는 나머지를 구할 수 없습니다.\n");
//		}
//		else if (b == 0 && c == '/') {
//			printf("0으로는 나누기를 할 수 없습니다.\n");
//		}
//		else {
//			if (c = '+') {
//				printf("%d + %d = %d\n", a, b, a + b);
//			}
//			else if (c = '-') {
//				printf("%d - %d = %d\n", a, b, a - b);
//			} 
//			else if (c = '/') {
//				printf("%d / %d = %.1f\n", a, b, a / (float)b);
//			}
//			else if (c = '*') {
//				printf("%d * %d = %d\n", a, b, a * b);
//			}
//			else if (c = '%') {
//				printf("%d %% %d = %d\n", a, b, a % b);
//			}
//			else {
//				printf("오칙연산 오류입니다.\n");
//			}
//		}
//
//		printf("\n다시 실행하시겠습니까? (Y/N) : ");
//		scanf(" %c", &answer);
//		if (answer == 'N' || answer == 'n') {
//			break;
//		}
//		printf("\n");
//	}*/
//
//	
//	// do~while문: do{반복할 문장} while{조건식). 반복문장 참 거짓 상관없이 한 번은 실행.
//
//
//	// 기타 제어문
//	// 1) 반복문 탈출 break문. 반복문의 블록 밖으로 탈출. 반복 중단.
//	// 2) if나 switch에서도 break문. 조건에 해당하면 반복문 탈출.
//	// 3) 다시 반복문으로 돌아가는 continue문. continue 만나면 아래 실행 안 하고 다시 반복문 조건,증감식부터 재진행. 
//	//	ex. 1~100 짝수 합 구할 때: for(i=1;i<=100;i++){ if (i%2==1){ continue; } hap += i; }
//	// 4) 지정 위치로 중간 건너뛰어서 이동하는 goto문. 복잡해서 잘 안 쓰지만 의미는 알아야 함. 
//	//	ex. if (조건식) goto mygoto; --r건너뛰고--> mygoto: printf(" ... "); 따로 지정해 둔 레이블 명령문 실행.
//	// 5) 현재 함수 불렀던 곳으로 돌아가는 return문. return문 만나면 아래에 다른 코드 있어도 프로그램 종료. 
//
//	
//	// 예제모음 17)
//	int a, b, c;
//	int hap = 0;
//	printf("합계의 시작값 ==> ");
//	scanf("%d", &a);
//	printf("합계의 끝값 ==> ");
//	scanf("%d", &b);
//	printf("배수 ==> ");
//	scanf("%d", &c);
//
//	while (a <= b) {
//		if (a % c == 0) {
//			hap += a;
//		}
//		a += 1;
//	}
//	printf("%d부터 %d까지의 %d배수의 합계 ==> %d\n", a, b, c, hap);
//
//
//	/*int a, b, c;
//	int hap = 0;
//
//	printf("합계의 시작값 ==> ");
//	scanf("%d", &a);
//	printf("합계의 끝값 ==> ");
//	scanf("%d", &b);
//	printf("배수 ==> ");
//	scanf("%d", &c);
//
//	int i = a;
//
//	for (a; a <= b; a++) {
//		if (a % c == 0) {
//			hap += a;
//		}
//	}
//	printf("%d부터 %d까지의 %d배수의 합계 ==> %d\n", i, b, c, hap);*/
//
//
//	// 예제모음 18)
//	/*int i = 0;
//	int big = 0;
//	int small = 0;
//	int num = 0;
//	char str[100];
//
//	printf("문자열을 입력(100자 이내) : ");
//	scanf(" %s", &str);
//
//	while (i <= strlen(str)) {
//		if (str[i] >= 48 && str[i] <= 57) {
//			num += 1;
//		}if (str[i] >= 65 && str[i] <= 90) {
//			big += 1;
//		}if (str[i] >= 97 && str[i] <= 122) {
//			small += 1;
//		}
//		i++;
//	}
//	printf("대문자 %d개, 소문자 %d개, 숫자 %d개", big, small, num);*/
//
//
//	int i;
//	int big = 0;
//	int small = 0;
//	int num = 0;
//	char str[100];
//
//	printf("문자열을 입력(100자 이내) : ");
//	scanf(" %s", &str);
//
//	for (i = 0; i < strlen(str); i++) {
//		if (str[i] >= 48 && str[i] <= 57) {
//			num += 1;
//		}if (str[i] >= 65 && str[i] <= 90) {
//			big += 1;
//		}if (str[i] >= 97 && str[i] <= 122) {
//			small += 1;
//		}
//	}
//	printf("대문자 %d개, 소문자 %d개, 숫자 %d개", big, small, num);
//
//
//	// 예제모음 19)
//	int i = 0;
//	int j;
//
//	int num;
//	char str[100];
//
//	printf("숫자를 여러 개 입력: ");	
//	scanf(" %s", &str);
//
//	while (str[i] != '\0') {
//		num = (int)str[i] - 48; // 아스키코드 -48 해 줘야 원하는 원래 숫자가 나옴.
//
//		j = 0;
//		while (j < num) {
//			printf("*");
//			j++;
//		}
//
//		printf("\n");
//		i++;
//	}
//
//
//	int i, j;
//
//	int num;
//	char str[100];
//
//	printf("숫자를 여러 개 입력: ");
//	scanf(" %s", &str);
//
//	for (i = 0; i < strlen(str); i++) {
//		for (j = 0; j < (int)str[i] - 48; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//	//// 중간고사 얘기 - 총 13문제, 5페이지. 50분 시험. 시험지, 답지 각각 제출.
//	// 개념 문제도 있고 단답형도 있다. 프로그램 분석해서 결과값 출력하는 문제.
//	// 코딩 관련 문제가 많음(빈칸 채워 넣기가 엄청 많음. 빈칸마다 부분 점수 있음. 아예 전체 코드를 쓰는 건 안 냈음.)
//	// for <-> while 프로그램 전환 등의 문제. 프로그램 많이 풀고, 많이 짜 봐야 풀기 쉽고 빠르게 풀 수 있음.
//	// 강의자료 외에도 책 한 번씩 읽어 보기
//	// 시간 남으면 다른 c언어 책도 보기
//	// 책 내용 + 연습문제 다 풀어 봤는지. 다른 책에서도 문제 냄.
//
//	// 과제: 미니프로젝트는 진도 거의 다 나가고 발표 진행할 예정. 프로젝트 시작이랑 상담은 중간 이후부터 차근차근 진행하도록.
//}