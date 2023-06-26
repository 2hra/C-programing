//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h> // (.h 확장자 == 헤드파일. 굳이 안 짜고 라이브러리에서 가지고 오는 것.)
////// # == 라이브러리 실행 선언 기호, include 포함하다. 뒤 헤드파일을 포함해서 실행해라.
//
//void main()
//{
//	//// 제1장) C언어의 이해와 컴파일러 설치
//	//	- 프로그래밍 개요 : OS 시스템 기반.프로그램 만들 때 사용.
//	//	- 컴퓨터 프로그래머가 제작.
//	//	- C언어(C++) 가장 많이 사용함.모바일은 자바, C#, C / C++ 많이 사용.PC 운영체제 / 프로그램은 C나 C + .
//	//	- 이식성 좋음.한번 만들면 윈도우, 유닉스 등 기타 운영체제 사용 가능.
//	//	- 하드웨어 관련 부분 접근 가능.시스템 프로그래밍.
//	//	- 고급언어지만 고급과 저급의 중간.기계어, 어셈블언어는 처리속도 빠르고 코드 복잡함.
//	//	- 1945 애니악 컴퓨터.C 탄생 전 1960 후반 BCPL 언어. 벨연구소 BCPL기반으로 B 만들고 그게 C의 모태.
//	//	- 1970년 초 유닉스 운영체제 개발 위해 C 개발. 개발 목적에 맞는 언어 개발됨.
//	//	- 구문 간결하고 명확하고 심플. C 익히면 다른 언어 쉽게 익힘.
//	//	- Turbo C, Turbo C++, Borland C++, MS C++. Visual C++, GCC, G++ 등의 C 컴파일러 존재. C와 C++(객체지향 언어로 전환한 것) 동시 지원.
//
//	//	1. 프로그램 작성 방법(c는 절차적 언어, 객체지향언어는 .obj. 소규모 객체가 모인 것. 따로 코딩 안 하고 떼어 쓸 수 있음.)
//	//	- 프로그램 코딩(확장자 .c) -> 소스 파일
//	//	- 컴파일(.c 파일을 기계어로 변환. 이 작업을 하는 게 컴파일러.) -> 오브젝트 파일
//	//	- 링크(관련 파일 하나로 결합. 실행 파일 생성.) -> 실행 파일 (.h 확장자 == 헤드파일. 굳이 안 짜고 라이브러리에서 가지고 오는 것.)
//	//	- 파일 실행(.exe 실행.)
//	//	- 예약어: main, int 등. 사용자지정어와 겹치면 안 됨.
//
//	//	2. 컴파일과 링크
//	//	- 컴파일: 소스파일을 컴퓨터가 이해하게 기계어로 변환. 소스 파일 -컴파일-> 오브젝트 파일.
//	//	- 링크: 여러 오브젝트 파일을 하나의 실행 파일로 묶음. 소스 2개 -> 오브젝트 2개 -링크-> 실행 파일.
//	//	- 빌드 = 컴파일 + 링크: ctrl + shift + b
//	//	- 디버그: ctrl + f5 (빌드와 콘솔창 실행을 동시에)
//	//	- 명령 프롬프트 실행: 윈도우+R == cmd 입력 -> 창 생성.
//	//	- 기존 c 소스 열기: 프로젝트 또는 솔루션 열기. 솔루션 확장자 = .sln
//	//    - 새 프로젝트 만들기 > c++ 윈도우 데스크톱 마법사 > 위치 및 이름 지정 > 솔루션 및 프로젝트 같은 디렉터리에 배치 > 만들기 > 콘솔 .exe, 빈 프로젝트
//
//
//
//	// 제2장) 일단 짜 보는 그럴듯한 C 프로그램
//	// 1)
//	int a, b;
//	int result;
//
//	a = 100;
//	b = 50;
//
//	result = a + b;
//	printf("%d + %d = %d\n", a, b, result);
//
//	result = a - b;
//	printf("%d - %d = %d\n", a, b, result);
//
//	result = a * b;
//	printf("%d * %d = %d\n", a, b, result);
//
//	result = a / b;
//	printf("%d / %d = %d\n", a, b, result);
//
//	result = a % b;
//	printf("%d %% %d = %d\n", a, b, result);
//
//
//	// 2)
//	int a, b;
//	int result;
//
//	scanf("%d", &a);
//	scanf("%d", &b);
//
//	result = a + b;
//	printf("%d + %d = %d", a, b, result);
//
//
//	// 3)
//	int a, b;
//	int result;
//
//	printf("첫 번째 계산 값 ==> ");
//	scanf("%d", &a);
//	printf("두 번째 계산 값 ==> ");
//	scanf("%d", &b);
//
//	result = a + b;
//	printf("%d + %d = %d", a, b, result);
//
//
//	// 예제01)
//	int a, b, c, d;
//
//	printf("첫 번째 값 ==> ");
//	scanf("%d", &a);
//	printf("두 번째 값 ==> ");
//	scanf("%d", &b);
//	printf("세 번째 값 ==> ");
//	scanf("%d", &c);
//	printf("네 번째 값 ==> ");
//	scanf("%d", &d);
//
//	printf("%d + %d + %d + %d = %d", a, b, c, d, a + b + c + d);
//
//
//	// 예제02)
//	int a, b, c, result;
//
//	printf("첫 번째 값 ==> ");
//	scanf("%d", &a);
//	printf("<1>덧셈 <2>뺄셈 <3>곱셈 <4>나눗셈 <5>나머지 ==> ");
//	scanf("%d", &b);
//	printf("두 번째 값 ==> ");
//	scanf("%d", &c);
//
//	if (b == 1) {
//		result = a + c;
//		printf("%d + %d = %d", a, c, result);
//	}
//	else if (b == 2) {
//		result = a - c;
//		printf("%d - %d = %d", a, c, result);
//	}
//	else if (b == 3) {
//		result = a * c;
//		printf("%d * %d = %d", a, b, result);
//	}
//	else if (b == 4) {
//		result = a / c;
//		printf("%d / %d = %d", a, c, result);
//	}
//	else if (b == 5) {
//		result = a % c;
//		printf("%d %% %d = %d", a, c, result);
//	}
//
//
//	// 예제03)
//	int a, b;
//	char c;
//
//	printf("첫 번째 값 ==> ");
//	scanf("%d", &a);
//	printf("+ - * / %% ==> ");
//	scanf(" %c", &c);
//	printf("두 번째 값 ==> ");
//	scanf("%d", &b);
//
//	if (c == '+') {
//		printf("%d + %d = %d", a, b, a + b);
//	}
//	else if (c == '-') {
//		printf("%d - %d = %d", a, b, a - b);
//	}
//	else if (c == '*') {
//		printf("%d * %d = %d", a, b, a * b);
//	}
//	else if (c == '/') {
//		if (b == 0) {
//			printf("0으로 나누면 안 됩니다.\n");
//		}
//		else {
//			printf("%d / %d = %d", a, b, a / b);
//		}
//	}
//	else if (c == '%') {
//		if (b == 0) {
//			printf("0으로 나머지를 구할 수 없습니다.\n");
//		}
//		else {
//			printf("%d %% %d = %d", a, b, a % b);
//		}
//	}
//
//
//
//	// 제3장) printf() 함수와 데이터 형식
//	printf("100+100\n");
//	printf("%d\n", 100 + 100);
//	printf("%d\n", 100, 200);
//	printf("%d %d\n", 100); // 쓰레기값 출력됨.
//
//	int a = 100, b = 200;
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d / %d = %.1f\n", a, b, (float)a / b);
//
//	// %d 10진수, %x 16진수, %o 8진수
//	// %f, %lf 실수
//	// %c 문자, ' '
//	// %s 문자열, " "
//
//	printf("%d / %d = %.1f \n", 100, 200, 0.5);
//	printf("%c %c \n", 'a', 'K');
//	printf("%s %s \n", "안녕", "c 언어");
//
//
//	// printf() 함수 서식 지정
//	printf("%d\n", 123);
//	printf("%5d\n", 123);
//	printf("%05d\n", 123);
//
//	printf("%f\n", 123.45);
//	printf("%7.1f\n", 123.45);
//	printf("%7.3f\n", 123.45);
//
//	printf("%s\n", "Basic-C");
//	printf("%10s\n", "Basic-C");
//
//
//	// \n 엔터, \t 탭, \b 백스페이스, \r 줄의 맨 앞으로, \a 삐, \\ \출력, \' '출력, \" "출력
//
//
//	// 실수 변수에 정수 대입 > .000000이 붙으면서 실수로 바뀐다.
//	// 정수 변수에 실수 대입 > 소수점 잘리고 정수로 바뀐다. 
//	
//	// 다양한 값 대입 방법
//	int a, b, c, d;
//	
//	a = 100 + 100;
//	b = a + 100;
//	c = a + b - 100;
//	d = a + b + c;
//	printf("a, b, c, d의 값 ==> %d, %d, %d, %d \n", a, b, c, d);
//
//	a = b = c = d = 100;
//	printf("a, b, c, d의 값 ==> %d, %d, %d, %d \n", a, b, c, d);
//
//	a = 100;
//	a = a + 200;
//	printf("a의 값 ==> %d \n", a);
//
//
//	//// 비트, 바이트, 진수
//	//- 비트: 0(OFF)와 1(ON)만 있음. 00 0, 01 1, 10 2, 11 3. 4가지만 표현 가능. 스위치 N개로 표현 가짓수 = 2^N
//	//- 진수: 10진수(0~9), 2진수(0,1 -> 2진수 4자리가 16진수 1자리), 16진수(0~9,A~F -> G, F, 10, 11, ...), 8진수(0~7 -> 6, 7, 10, 11, ...)
//	//- 바이트: 8비트 = 1바이트 2^8=256, 0~11111111, 0~255, 0~FF -> 16비트는 8비트의 제곱. 계속 제곱으로 넘어감.
//
//	//// 진수 변환 연습 -> ... 128 64 32 16   8 4 2 1  2^N 거꾸로 알고 있으면 계산 쉬움.
//	//     OOOO      OOOO
//	//128 64 32 16  8 4 2 1
//	//EX) 10진수 13을 2진수로: 0000에서 8+4+1 -> 1101(2 작게 기재)
//	//	10진수 13을 8진수로: 먼저 2진수로 1101 -> 세 개씩 끊어서 001 101 숫자 자릿수 변경 -> 001 1, 101 5 -> 15
//
//	//// 숫자형 데이터 형식
//	//- short: 작은 정수형, 2바이트. -2^15(-32768)~2^15-1(32767) (양수, 음수 반반 나와야 하니 2^16/2 -> 2^15, 양수의 -1은 0도 나와야 해서.)
//	//- unsigned short: 부호 없는 작은 정수형. 0~ -2^16-1(65535)
//	//- int: 정수형, 4바이트. -2^31(약 21억)~ -2^31-1(약 21억)
//	//- unsigned int: 0~2^32-1(약 42억)
//	//- long int(long): 큰 정수형, 4바이트. -2^31~2^31-1
//	//- unsigned long: 0~ -2^32-1
//
//	//- float: 실수형, 4바이트. 약 - 3.4x10 ^ 38 ~ 3.4x10 ^ 38 (소수 아래 7자리까지만.)
//	//- double: 큰 실수형, 8바이트. 약 -1.79x10^308 ~ 1.79x10 ^ 308 (소수 아래 16자리)
//	//- long double: 큰 실수형, 8바이트.약 - 1.79x10 ^ 308 ~1.79x10 ^ 308
//
//
//	//// 문자형 데이터 형식, 아스키 코드
//	//- 0~9: 10진수 48~57, 16진수 0x30~0x39
//	//- A~Z: 10진수 65~90, 16진수 0x41~0x5A
//	//- a~z: 10진수 97~122, 16진수 0x61~0x7A
//
//	//- char: 문자형 또는 정수형 1바이트. -2^7(-128) ~ 2^7-1(127) -> 1바이트 정수형 취급해도 됨. 아스키코드 0~127 표현 가능. 111 1111.
//	//- unsigned char: 문자형 또는 부호 없는 정수형. 0 ~ 2^8-1(255)
//
//
//	char a, b, c;
//
//	a = 'A';
//	printf("%c \n", a);
//	printf("%d \n", a); // 'A'의 아스키코드 65 출력
//
//	b = 'a';
//	c = b + 5;
//	printf("%c \n", b);
//	printf("%c \n", c); // 'a'의 아스키코드 + 5인 'f' 출력
//
//	c = 90;
//	printf("%c \n", c); // 'Z' 아스키코드 90
//
//
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
//	printf("%c의 아스키코드는 %d입니다. \n", d, d); // #, 35
//
//
//	//// 문자열과 배열 -> 문자열 마지막에 개행문자 \n 항상 붙어 있으니 개수 셀 때 주의.
//	//- 문자는 ''로 감싸야 하고 한 글자만 가능.문자열은 ""로 해야 함.
//	//- char str[7]; , char str[]; 등으로 선언. 배열 첨자는 0부터 시작하는 점 주의.
//	//- 문자열은 대입 연산자가 아니고 strcpy(str, "..."); 함수 이용.
//	
//	char str1[10];
//	char str2[10];
//	char str3[10] = "CookBook";
//
//	strcpy(str1, "Basic-C");
//	strcpy(str2, str3); // 기존 다른 문자열 대입도 가능.
//
//	printf("str1 == > %s \n", str1);
//	printf("str2 == > %s \n", str2);
//	printf("str3 == > %s \n", str3);
//
//
//	char str[10] = "0123456789";
//	printf("%s \n", str);
//
//	str[0] = 'I'; // strcpy() 함수 이용하지 않고 첨자로 직접 한 글자씩 접근해 대입.
//	str[1] = 'T';
//	str[2] = 'C';
//	str[3] = 'o';
//	str[4] = 'o';
//	str[5] = 'k';
//	str[6] = '\0'; // 개행문자 넣고 여기서 끊기게 함.
//
//	printf("str ==> %s \n", str); // 개행문자 지정 안 해서 쓰레기값 추가됨.
//	printf("str[7] ==> %c \n", str[7]); // 0123456만 따로 지정해서 바꾼 것.
//	printf("str[50] ==> %c \n", str[50]); // 첨자 넘어간 것이라 ?로 출력.
//
//
//	// 예제모음04)
//	int num;
//
//	printf("정수를 입력하세요 ==> ");
//	scanf("%d", &num);
//
//	printf("10진수 ==> %d \n", num);
//	printf("16진수 ==> %x \n", num);
//	printf("8진수 ==> %o \n", num);
//
//
//	// 예제모음05)
//	int num, data;
//
//	printf("입력진수 결정 <1>10 <2>16 <3>8 : ");
//	scanf("%d", &num);
//	printf("값 입력 : ");
//
//	if (num == 1) {
//		scanf("%d", &data);
//	} else if (num == 2) {
//		scanf("%x", &data);
//	} else if (num == 3) {
//		scanf("%o", &data);
//	}
//	printf("10진수 ==> %d \n", data);
//	printf("16진수 ==> %x \n", data);
//	printf("8진수 ==> %o \n", data);
//
//
//	// 예제모음06)
//	printf("int 형의 크기\t\t\t==> %d\n", sizeof(int));
//	printf("unsignedint 형의 크기\t\t\t ==> % d\n", sizeof(unsigned int));
//	printf("short 형의 크기\t\t\t==> %d\n", sizeof(short));
//	printf("unsigned short 형의 크기\t\t\t==> %d\n", sizeof(unsigned short));
//	printf("long int 형의 크기\t\t\t==> %d\n", sizeof(long int));
//	printf("unsigned long int 형의 크기\t\t\t==> %d\n", sizeof(unsigned long int));
//	printf("float 형의 크기\t\t\t==> %d\n", sizeof(float));
//	printf("double 형의 크기\t\t\t==> %d\n", sizeof(double));
//	printf("long double 형의 크기\t\t\t==> %d\n", sizeof(long double));
//	printf("long int 형의 크기\t\t\t==> %d\n", sizeof(long int));
//	printf("char 형의 크기\t\t\t==> %d\n", sizeof(char));
//	printf("unsigned char 형의 크기\t\t\t==> %d\n", sizeof(unsigned char));
//
//
//	// 예제모음07)
//	char str[10] = "";
//	int i;
//	
//	printf("문자열을 입력 ==> ");
//	scanf(" %s", str);
//	
//	for (i = sizeof(str)-1; i >= 0 ; i--) {
//		printf("%c", str[i]);
//	}
//	printf("\n");
//
//
//
//	// 제4강) C 연산자의 이해
//	// 산술 연산자: =, +, -, *, /, %.
//	//- 괄호 없으면 산술 연산자 왼쪽부터 계산. 대입 연산자 마지막에 계산. 사칙연산 순서대로 계산 진행함. 그래도 괄호 묶어 주는 게 좋음.
//	//- 강제 형 변환: (변경할타입)변경할변수 (나누기 실수 만들 때 -> 정수 / (실수)정수)
//	//- 대입연산자와 증감연산자: +=, -=, *=, /=, %=, ++, -- ★★★
//	
//	int a = 10;
//	int b;
//	
//	b = a++; // 원래 값 출력 후 나중에 증가
//	printf("a++ ==> %d\n", b); // 지금은 10 담고 다음 값에 +1
//
//	b = ++a; // 원래 값에서 1 증가시키고 출력
//	printf("++a ==> %d\n", b); // 위에서 +1된 11에 또 먼저 +1 되어서 12
//
//	b = a--; // 원래 값 출력 후 나중에 감소
//	printf("a-- ==> %d\n", b); // 지금은 12 담고 다음 값에 -1
//
//	b = --a; // 원래 값에서 1 감소시키고 출력
//	printf("--a ==> %d\n", b); // 위에서 -1된 11에 또 먼저 -1 되어서 10
//
//
//	// 관계 연산자(왼쪽이 오른쪽보다): ==, !=, >, <, >=, <=. 참은 1, 거짓은 0으로 표현.
//	int a = 100, b = 200;
//	printf("%d = %d는 %d이다.\n", a, b, a = b); // %d 끌고오는 참조 사항에서 a에 대입 연산자 먼저 수행해서 200, 200, 200으로 출력.
//
//
//	// 논리 연산자: &&, ||, !(참이면 거짓, 거짓이면 참)
//	
//	// 비트 연산자: 2진법으로 바꾼 뒤 연산 후 1인 것만 합한다.
//	//- 비트 논리곱(AND) & : 둘 다 1이면 1
//		printf("10 & 7 = %d \n", 10&7);
//		printf("123 & 456 = %d \n", 123 & 456); 
//		// 123 = 0000 0111 1011
//		// 456 = 0001 1100 1000
//		//             64  8    -> 72
//		printf("0xFFFF & 0000 = %d \n", 0xFFFF & 0000); // 0과 비트 논리곱 수행 시 무조건 0이 나온다.
//
//	//- 비트 논리합(OR) |(버티컬바) : 둘 중 하나라도 1이면 1
//		printf("10 | 7 = %d \n", 10 | 7);
//		printf("123 | 456 = %d \n", 123 | 456);
//		// 123 = 0000 0111 1011
//		// 456 = 0001 1100 1000
//		//          1 1111 1111 -> 256+128+64+32+16+8+2+1 -> 507
//		printf("0xFFFF | 0000 = %d \n", 0xFFFF | 0000); // 65535
//
//	//- 비트 배타적 논리합(XOR) ^(캐럿) : 둘이 같으면 0, 다르면 1
//		printf("10 ^ 7 = %d \n", 10 ^ 7);
//		printf("123 ^ 456 = %d \n", 123 ^ 456);
//		// 123 = 0000 0111 1011
//		// 456 = 0001 1100 1000
//		//          1 1011 0011 -> 256+128+32+16+2+1 -> 435
//		printf("0xFFFF ^ 0000 = %d \n", 0xFFFF ^ 0000); // 65535
//
//		char a = 'A', b, c;
//		char mask = 0x0F;
//
//		printf("%x & %x = %x \n", a, mask, a& mask);
//		printf("%x | %x = %x \n", a, mask, a| mask);
//
//		mask = 'a' - 'A'; // 아스키코드 차이는 32
//
//		b = a ^ mask; // a('A')와 32의 배타적 논리합 = 'a'
//		printf("%c ^ %d = %c \n", a, mask, b);
//
//		a = b ^ mask; // b('a')와 32의 배타적 논리합 = 'A'
//		printf("%c ^ %d = %c \n", b, mask, a);
//	
//	//- 비트 부정 ~(틸드) : 기존 2진수에서 1은 0으로, 0은 1로 변경하고 부호 반대로.
//		int a = 12345;
//		printf("%d \n", ~a); // -12346
//		printf("%d \n", ~a +1); // -12345
//
//		int b = -8;
//		printf("%d \n", ~b); // 7
//		printf("%d \n", ~b + 1); // 8
//		// 8 -> 1000 -> 0111 -> 7 -> +1 -> 8 -> (-) -> -8 (위와 부호 반대로 설명된 것. 헷갈리지 않기.)
//
//	//- 비트 왼쪽 시프트(이동) << : 왼쪽으로 이동 (0011=3 -> 0110=6. *2^시프트횟수)
//		int a = 10;
//		printf("%d를 왼쪽으로 1회 시프트하면 %d이다. \n", a, a << 1); // 20
//		printf("%d를 왼쪽으로 2회 시프트하면 %d이다. \n", a, a << 2); // 40
//		printf("%d를 왼쪽으로 3회 시프트하면 %d이다. \n", a, a << 3); // 80
//
//	//- 비트 오른쪽 시프르(이동) >> : 오른쪽으로 이동 (0110=6 -> 0011=3. /2^시프트횟수)
//		int b = 80;
//		printf("%d을 오른쪽으로 1회 시프트하면 %d이다. \n", b, b >> 1); // 40
//		printf("%d을 오른쪽으로 2회 시프트하면 %d이다. \n", b, b >> 2); // 20
//		printf("%d을 오른쪽으로 3회 시프트하면 %d이다. \n", b, b >> 3); // 10
//
//	 //연산자 우선순위
//	 //1~5) 1차연산자(괄호), 단항연산자(+ - ++ -- ~ ! * &) 순위 같으면 우->좌 진행, 산술연산자(* / %), 산술연산자(+ -), 비트 시프트 연산자
//	 //2~10) 비교연산자(< <= > >=), 동등연산자(== !=), 비트논리곱(&), 비트배타적논리합(^), 비트논리합(|)
//	 //11~15) 논리연산자(&&), 논리연산자(||), 삼항연산자(?:), 대입연산자(= += -= *= /= %= &= |= <<= >>=) 순위 같으면 우->좌 진행, 콤마연산자(,)
//
//	
//	// 예제모음08)
//	float a, b;
//	printf("첫 번째 계산할 값을 입력하세요 ==> ");
//	scanf("%f", &a);
//	printf("두 번째 계산할 값을 입력하세요 ==> ");
//	scanf("%f", &b);
//	printf("%.2f + %.2f = %.2f \n", a, b, a + b);
//	printf("%.2f - %.2f = %.2f \n", a, b, a - b);
//	printf("%.2f * %.2f = %.2f \n", a, b, a * b);
//	printf("%.2f / %.2f = %.2f \n", a, b, a / b);
//	printf("%d + %d = %d \n", (int)a, (int)b, (int)a + (int)b);
//
//
//	// 예제모음09)
//	int money, change;
//
//	printf("교환할 돈은? ");
//	scanf("%d", &money);
//
//	change = money;
//	printf("오백 원짜리 ==> %d개\n", change/500);
//
//	change = money % 500;
//	printf("백 원짜리 ==> %d개\n", change / 100);
//
//	change = money % 100;
//	printf("오십 원짜리 ==> %d개\n", change / 50);
//
//	change = money % 50;
//	printf("십 원짜리 ==> %d개\n", change / 10);
//	printf("바꾸지 못한 잔돈 ==> %d원\n", money % 10);
//
//
//	// 예제모음10)
//	int year;
//	printf("연도를 입력하세요. : ");
//	scanf("%d", &year);
//
//	if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
//		printf("%d년은 윤년입니다.\n", year);
//	}
//	else printf("%d년은 윤년이 아닙니다.\n", year);
//
//
//
//	// 제5장) 조건문
//	// if문
//	int a = 200;
//	if (a < 100)
//		printf("100보다 작군요.\n");
//		printf("괄호가 없다면 조건 실행문은 바로 아래 한 줄만 실행해서 들여쓰기 있어도 그 아래는 영향 없이 실행되죠.\n");
//	printf("조건문 끝.\n");
//
//	if (a < 100) {
//		printf("100보다 작군요.\n");
//		printf("괄호가 있으니 이번에는 모두 조건에 해당되어야 실행되죠.\n");
//	}
//	printf("조건문 끝.\n");
//
//	// if~else문. 여러 줄 실행하려면 괄호로 묶는 건 상동.
//	int a = 200;
//	if (a < 100)
//		printf("100보다 작군요.\n");
//	else
//		printf("100보다 크군요.\n");
//	printf("조건문 끝.\n");
//
//	// 중첩 if문
//	int a = 75;
//	if (a > 50) {
//		if (a < 100) {
//			printf("50보다 크고 100보다 작다.\n");
//		}
//		else {
//			printf("100보다도 크다.\n");
//		}
//	}
//	else {
//		printf("50보다 작다.\n");
//	}
//	printf("조건문 끝.\n");
//	
//	// else if문
//	int score;
//	printf("점수를 입력하세요 : ");
//	scanf("%d", &score);
//
//	if (score >= 90) {
//		printf("A");
//	}
//	else if (score >= 80) {
//		printf("B");
//	}
//	else if (score >= 70) {
//		printf("C");
//	}
//	else if (score >= 60) {
//		printf("D");
//	}
//	else {
//		printf("F");
//	}
//	printf("학점입니다. \n");
//
//	// switch~case문: 여럿 중 하나 선택. 다중 분기. break문을 case마다 꼭 넣어 주는 게 중요. 안 그러면 해당 아래로 다 실행.
//	// switch(case 구분할 조건)
//	int year;
//	
//	printf("출생연도 : ");
//	scanf("%d", &year);
//
//	switch (year%12) {
//	case 0: printf("원숭이띠\n"); break;
//	case 1: printf("닭띠\n"); break;
//	case 2: printf("개띠\n"); break;
//	case 3: printf("돼지띠\n"); break;
//	case 4: printf("쥐띠\n"); break;
//	case 5: printf("소띠\n"); break;
//	case 6: printf("호랑이띠\n"); break;
//	case 7: printf("토끼띠\n"); break;
//	case 8: printf("용띠\n"); break;
//	case 9: printf("뱀띠\n"); break;
//	case 10: printf("말띠\n"); break;
//	case 11: printf("양띠\n"); break;
//	}
//
//
//	// 예제모음11)
//	int a, b, result;
//	char type;
//	printf("첫 번째 수 : ");
//	scanf("%d", &a);
//	printf("계산 연산자 : ");
//	scanf(" %c", &type);
//	printf("두 번째 수 : ");
//	scanf("%d", &b);
//
//	if (type == '+') {
//		result = a + b;
//	} 
//	else if (type == '-') {
//		result = a - b;
//	}
//	else if (type == '*') {
//		result = a * b;
//	}
//	else if (type == '/') {
//		result = a / b;
//	}
//	else if (type == '%') {
//		result = a % b;
//	}
//	if (type == '%') {
//		printf("%d %% %d = %d\n", a, b, result);
//	}
//	else {
//		printf("%d %c %d = %d\n", a, type, b, result);
//	}
//
//	// 예제모음12)
//	int a, b, result;
//	char type;
//	printf("첫 번째 수 : ");
//	scanf("%d", &a);
//	printf("계산 연산자 : ");
//	scanf(" %c", &type);
//	printf("두 번째 수 : ");
//	scanf("%d", &b);
//
//	if (type == '+') {
//		result = a + b;
//		printf("%d %c %d = %d\n", a, type, b, result);
//	} 
//	else if (type == '-') {
//		result = a - b;
//		printf("%d %c %d = %d\n", a, type, b, result);
//	}
//	else if (type == '*') {
//		result = a * b;
//		printf("%d %c %d = %d\n", a, type, b, result);
//	}
//	else if (type == '/') {
//		printf("%d %c %d = %f\n", a, type, b, a/(float)b);
//	}
//	else if (type == '%') {
//		result = a % b;
//		printf("%d %% %d = %d\n", a, b, result);
//	}
//	else {
//		printf("연산자 착오 입력입니다. 다시 입력해 주세요.\n");
//		printf("첫 번째 수 : ");
//		scanf("%d", &a);
//		printf("계산 연산자 : ");
//		scanf(" %c", &type);
//		printf("두 번째 수 : ");
//		scanf("%d", &b);
//
//		if (type == '+') {
//			result = a + b;
//			printf("%d %c %d = %d\n", a, type, b, result);
//		}
//		else if (type == '-') {
//			result = a - b;
//			printf("%d %c %d = %d\n", a, type, b, result);
//		}
//		else if (type == '*') {
//			result = a * b;
//			printf("%d %c %d = %d\n", a, type, b, result);
//		}
//		else if (type == '/') {
//			printf("%d %c %d = %f\n", a, type, b, a/(float)b);
//		}
//		else if (type == '%') {
//			result = a % b;
//			printf("%d %% %d = %d\n", a, b, result);
//		}
//	}
//
//	// 예제모음13)
//	int a, b;
//	char type;
//
//	printf("수식을 한 줄로 띄어쓰기로 입력하세요(두 자리 수끼리만 연산) : ");
//	scanf("%d %c %d", &a, &type, &b);
//
//	switch (type) {
//	case'+':
//		printf("%d + %d = %d입니다.\n", a, b, a + b);
//		break;
//	case'-':
//		printf("%d - %d = %d입니다.\n", a, b, a - b);
//		break;
//	case'/':
//		printf("%d / %d = %d입니다.\n", a, b, a / b);
//		break;
//	case'*':
//		printf("%d * %d = %d입니다.\n", a, b, a * b);
//		break;
//	case'%':
//		printf("%d %% %d = %d입니다.\n", a, b, a % b);
//		break;
//	default:
//		printf("연산자 오류입니다.\n");
//	}
//
//
//
//	// 제6장) 반복문 for문. 반복문 위에 int i; 선언해 줘야 함.
//	// for(초기값, 조건식, 증감식)
//	// 초기값은 한 번만, 조건-증감-조건-증감 반복
//	// if문처럼 블록(괄호) 없이 반복문 아래에 여러 줄 적으면 바로 아래 한 줄만 반복. 나머지는 반복 실행 없음.
//	// 반복문 다 돌고 i를 출력하면 마지막으로 설정된 i값이 나옴. 초기값 나오는 거 아님.
//	// 반복문 안에서 사용할 변수는 위에 미리 선언해 줘야 함. (ex. 팩토리얼 합계: int hap = 0;)
//
//	int hap = 0;
//	int i;
//	int num;
//	
//	printf("값 입력 : ");
//	scanf("%d", &num);
//
//	for (i = 1; i <= num; i++) {
//		hap += i;
//	}
//	printf("1부터 %d까지 합은 %d.\n", num, hap);
//
//
//	int hap = 0;
//	int i;
//	int num1, num2, num3;
//
//	printf("시작, 끝, 증가값 띄어쓰기로 순서대로 입력 : ");
//	scanf("%d %d %d", &num1, &num2, &num3);
//
//	for (i = num1; i <= num2; i=i+num3) { // 증감식에 그냥 i+num3 하는 거 아니고 +=나 = +해야 함.
//		hap += i;
//	}
//	printf("%d부터 %d까지 %d씩 증가한 합은 %d.\n", num1, num2, num3, hap);
//	
//
//	// 중첩 for문
//	int i, j;
//	for (i = 2; i <= 9; i++) {
//		printf("***** %d단 *****\n", i);
//		for (j = 1; j <= 9; j++) {
//			printf("%d * %d = %d\n", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	int i, j;
//	for (j = 2; j <= 9; j++) {
//		printf("*** %d단 ***\t", j);
//	}
//	printf("\n");
//	for (i = 1; i <= 9; i++) {
//		for (j = 2; j <= 9; j++) {
//			printf("%d * %d = %d\t", j, i, i * j);
//		}
//		printf("\n");
//	}
//
//
//	// 다양한 for문의 형태
//	// 1) 여러개의 초깃값과 증감식: for(i=1, k=1; i<=9; i++, k++)
//	// 2) 초깃값을 for문 위에 아예 선언 가능: int i = 0; for(;i<=9;i++)
//	// 3) 초깃값을 for문 위에, 증감식을 for문 안에 선언 가능: int i = 0; for(;i<=9;){i++;}
//	// 4) 단, 조건식이 없으면 무한 루프가 된다. ctrl + c 누르면 강제 종료 가능.
//
//
//	// 예제모음 16)
//	char str[100];
//	int i;
//
//	printf("영문자 및 숫자를 입력 (100자 이하) : ");
//	scanf("%s", &str);
//	printf("입력한 문자열 ==> %s\n", str);
//	printf("변환된 문자열 ==> ");
//
//	for (i = strlen(str); i >= 0; i--) { // strlen(): 문자열 길이 반환 함수. -1 안 해 줘도 개행문자는 알아서 없어지니까 그대로 실행하면 됨.
//		printf("%c", str[i]);
//	}
//}