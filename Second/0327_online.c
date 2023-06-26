//// 230327 4주차 수업
// 
//#define _CRT_SECURE_NO_WARNINGS
//#include <string.h>
//#include <stdio.h>
//
//void main() 
//{
//	// 4-1) 숫자 자료형
//	int a = 100, b = 200;
//	float result;
//
//	result = a / b; 
//
//	printf("%f \n", result);
//	// 정수끼리 나눈 결과가 실수형 변수에 들어가면서 0.5가
//	// 소수는 떨어지고   0으로 인식되어 0.000000으로 출력됨.
//
//	
//	float c = 0.1234567890123456789012345f;
//	double d = 0.1234567890123456789012345;
//
//	printf("%30.25f \n", c); // 일곱 자리까지만 정상, 뒤는 쓰레기값
//	printf("%30.25lf \n", d); // 열다섯 자리까지만 정상.
//
//
//
//	// 4-2) 문자형과 아스키 코드
//	char a, b, c;
//
//	a = 'A';
//	printf("%c \n", a); // A
//	printf("%d \n", a); // 65
//
//	b = 'a';
//	c = b + 7;
//	printf("%c \n", b); // a
//	printf("%c \n", c); // h
//
//	c = 98;
//	printf("%c \n", c); // b
//
//
//	// 응용 3-13)
//	int a, b;
//	char c, d;
//
//	a = 0x41;
//	b = 0x50;
//	printf("%c \n", b); // P
//
//	c = a;
//	printf("%c \n", c); // A
//
//	d = '#';
//	printf("%c의 ASCII값은 %d 입니다 \n", d, d); 
//	// #의 ASCII값은 35 입니다
//
//
//	// 기본 3-14) 문자열 
//	char str1[10];
//	char str2[10];
//	char str3[10] = "CookBook";
//
//	strcpy(str1, "Basic-C"); // 위에 #include <string.h> 추가 필수
//	strcpy(str2, str3);
//
//	printf("str1 ==> %s \n", str1);
//	printf("str2 ==> %s \n", str2);
//	printf("str3 ==> %s \n", str3);
//	/*str1 ==> Basic-C
//	  str2 ==> CookBook
//	  str3 ==> CookBook*/
//
//
//	// 응용 3-15) 문자열 형식 예시 2
//	char str[10] = "0123456789";
//
//	printf("str ==> %s \n", str); // \0 개행문자 없어서 뒤에 쓰레기값 출력
//
//	str[0] = 'I';
//	str[1] = 'T';
//	str[2] = 'C';
//	str[3] = 'o';
//	str[4] = 'o';
//	str[5] = 'k';
//	str[6] = '\0';
//
//	printf("str ==> %s \n", str); // str ==> ITCook
//	printf("str[7] ==> %c \n", str[7]); // str[7] ==> 7
//	printf("str[50] ==> %c \n", str[50]); // str[50] ==> ?
//
//
//	// 예제 04) 정수형을 출력하는 프로그램
//	int num;
//	printf("정수를 입력하세요 ==> ");
//	scanf("%d", &num);
//
//	printf("10진수 ==> %d \n", num);
//	printf("16진수 ==> %X \n", num);
//	printf("8진수 ==> %o \n", num);
//
//
//	// 예제 05) 입력하는 정수의 진수 결정
//	int answer, num;
//	printf("입력진수 결정 <1>10 <2>16 <3>8 : ");
//	scanf("%d", &answer);
//
//	if (answer == 1) {
//		printf("값 입력 : ");
//		scanf("%d", &num);
//	}
//	else if (answer == 2) {
//		printf("값 입력 : ");
//		scanf("%X", &num);
//	}
//	else if (answer == 3) {
//		printf("값 입력 : ");
//		scanf("%o", &num);
//	}
//
//	printf("10진수 ==> %d \n", num);
//	printf("16진수 ==> %X \n", num);
//	printf("8진수 ==> %o \n", num);
//	
//
//	// 예제 06) 데이터 형의 크기 확인
//	printf("int 형의 크기\t\t\t ==> %d \n", sizeof(int));
//	printf("unsigned int 형의 크기\t\t\t ==> %d \n", sizeof(unsigned int));
//	printf("short 형의 크기\t\t\t ==> %d \n", sizeof(short));
//	printf("unsigned short 형의 크기\t\t\t ==> %d \n", sizeof(unsigned short));
//	printf("long int 형의 크기\t\t\t ==> %d \n", sizeof(long int));
//	printf("unsigned long int 형의 크기\t\t\t ==> %d \n", sizeof(unsigned long int));
//	printf("float 형의 크기\t\t\t ==> %d \n", sizeof(float));
//	printf("double 형의 크기\t\t\t ==> %d \n", sizeof(double));
//	printf("long double 형의 크기\t\t\t ==> %d \n", sizeof(long double));
//	printf("char 형의 크기\t\t\t ==> %d \n", sizeof(char));
//	printf("unsigned char 형의 크기\t\t\t ==> %d \n", sizeof(unsigned char));
//
//
//	// 예제 07) 입력된 문자열을 거꾸로 출력
//	char str[10] = ""; // 비어있는 문자열 선언
//	int i;
//	printf("문자열을 입력 ==> ");
//	scanf("%s", &str);
//
//	for (i=sizeof(str) - 1; i>=0; i--) { // 시작값, 조건, 증감치
//		printf("%c", str[i]);
//	}
//	printf("\n");
//
//
//	 과제는 예제모음 05에서 응용. 
//	 진수값을 입력하십시오. 10진수, 16진수, 8진수 ==> 
//	 @@진수값 입력하십시오. : 
//	 진수값 입력이 잘못되었습니다. 다시 입력하여 주십시오. ==> 
//	 진수값 입력이 잘못되었습니다. 다시 입력하여 주십시오. ==>
//}