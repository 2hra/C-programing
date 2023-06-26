//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//void main() {
//
//	// chapter 02 복습)
//	// 예제모음01)
//	int a, b, c, d;
//	printf("첫 번째 계산할 값을 입력하세요: ");
//	scanf("%d", &a);
//	printf("두 번째 계산할 값을 입력하세요: ");
//	scanf("%d", &b);
//	printf("세 번째 계산할 값을 입력하세요: ");
//	scanf("%d", &c);
//	printf("첫 번째 계산할 값을 입력하세요: ");
//	scanf("%d", &d);
//	printf("%d + %d + %d + %d = %d \n", a, b, c, d, a + b + c + d);
//
//
//	//예제모음02)
//	int num1, ch, num2;
//	printf("첫 번째 값을 입력하세요 ==> ");
//	scanf("%d", &num1);
//	printf("<1>덧셈 <2>뺄셈 <3>곱셈 <4>나눗셈 <5>나머지 ==> ");
//	scanf("%d", &ch);
//	printf("두 번째 값을 입력하세요 ==> ");
//	scanf("%d", &num2);
//	if (ch <= 5) {
//		if (ch == 1) printf("%d + %d = %d \n", num1, num2, num1 + num2);
//		else if (ch == 2) printf("%d - %d = %d \n", num1, num2, num1 - num2);
//		else if (ch == 3) printf("%d * %d = %d \n", num1, num2, num1 * num2);
//		else if (ch == 4) printf("%d / %d = %d \n", num1, num2, num1 / (float) num2);
//		else printf("%d %% %d = %d \n", num1, num2, num1 % num2);
//	}
//	else {
//		printf("연산자 오류입니다. \n");
//	}
//
//
//	//예제모음03)
//	int a, b;
//	char ch;
//	printf("첫 번째 숫자: ");
//	scanf("%d", &a);
//	printf("+ - * / %% : ");
//	scanf(" %c", &ch);
//	printf("두 번째 숫자: ");
//	scanf("%d", &b);
//	if ((ch == '/' || ch == '%') && (b == 0)) {
//		if (ch == '/') printf("0으로 나눌 수 없습니다.\n");
//		else printf("0으로 나머지를 구할 수 없습니다. \n");
//	}
//	else {
//		if (ch == '+') printf("%d %c %d = %d\n", a, ch, b, a + b);
//		else if (ch == '-')printf("%d %c %d = %d\n", a, ch, b, a - b);
//		else if (ch == '*')printf("%d %c %d = %d\n", a, ch, b, a * b);
//		else if (ch == '/')printf("%d %c %d = %5.2f\n", a, ch, b, a / (float)b);
//		else if (ch == '%') printf("%d %c %d = %d\n", a, ch, b, a % b);
//		else printf("연산자 오류입니다.\n");	
//	}
//
//
//	// chapter 02) 연습문제 풀이
//	// 1) 프로젝트 생성 > 프로그램 코딩 > 빌드 > 실행
//	 
//	// 2) res = 50
//	 
//	// 3) 10-20 = 30
//	 
//	// 4) scanf("%d", &num)
//	 
//	// 5) num1+num2, num1-num2, num1*num2, num1/num2
//	 
//	// 6) 코드 작성 문제
//	int a, b, c;
//	char ch;
//	printf("연산 선택 (+ 또는 *) ==> ");
//	scanf(" %c", &ch);
//	printf("첫 번째 값 ==> ");
//	scanf("%d", &a);
//	printf("두 번째 값 ==> ");
//	scanf("%d", &b);
//	printf("세 번째 값 ==> ");
//	scanf("%d", &c);
//	if ((ch == '+') || (ch == '*')) {
//		if (ch == '+') printf("%d %c %d %c %d = %d \n", a, ch, b, ch, c, a + b + c);
//		else printf("%d %c %d %c %d = %d \n", a, ch, b, ch, c, a * b * c);
//	}
//	else {
//		printf("연산자 입력 오류입니다. \n");
//	}
//	 
//	// 7) 코드 작성 문제
//	int a, b;
//	printf("## 두 수를 나누기 ##\n");
//	printf("첫 번째 값 : ");
//	scanf("%d", &a);
//	printf("두 번째 값 : ");
//	scanf("%d", &b);
//	int i;
//	if (b == 0) {
//		for (i = 1; i <= 2; i++) {
//			printf("다시 입력하세요. 두 번째 값 : ");
//			scanf("%d", &b);
//			if (b != 0) {
//				printf("%d / %d = %.2f \n", a, b, a / (float)b);
//				break;
//			}
//		} if (b==0) printf("0을 세 번 입력했습니다. 종료합니다. \n");
//	}
//	else {
//		printf("%d / %d = %.2f \n", a, b, a / (float)b);
//	}
//
//
//
//	// chapter 03 복습)
//	printf("%d + %d = %d, %d / %d = %.1f \n", 100, 200, 100 + 200, 100, 200, 100 / (float)200);
//	printf("\n");
//
//	// %d, %x, %o / %f, %lf / %c = ' ' / %s = " "
//
//	printf("%d / %d = %f \n", 100, 200, 0.5);
//	printf("%c %c \n", 'a', 'K');
//	printf("%s %s \n", "안녕", "C 언어");
//
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
//	// \n / \t / \b / \r 줄의 맨 앞으로 이동 / \a / \\ / \' / \"
//
//	int a, b;
//	float c, d;
//	a = 100;
//	b = a;
//	c = 111.1;
//	d = c;
//	printf("a, b의 값 ==> %d, %d \n", a, b);
//	printf("c, d의 값 ==> %5.1f, %5.1f \n", c, d);
//
//	int a, b, c, d;
//	a = 100 + 100;
//	b = a + 100;
//	c = a + b - 100;
//	d = a + b + c;
//	printf("a, b, c, d의 값 ==> %d, %d, %d, %d\n", a, b, c, d);
//	a = b = c = d = 100;
//	printf("a, b, c, d의 값 ==> %d, %d, %d, %d\n", a, b, c, d);
//	a = 100;
//	a = a + 200;
//	printf("a의 값 ==> %d \n", a);
//
//	// 10진수 147을 2진수로 변환
//	// 147 -> 0000 0000 0000  ->  2048 1024 512 256 / 128 64 32 16/ 8 4 2 1
//	// 128+16+2+1 -> 1001 0011
//
//	// 2진수 1001 0011을 16진수로 변환
//	// 4자리마다 자릿수 끊어서 보기 -> 1001 0011 -> 8 4 2 1 / 8 4 2 1 -> 9 3
//
//	// 16진수 93을 10진수로 변환 -> 자릿수 끊어서 1의 자리는 16^0(==1) * 3 = 3, 10의 자리는 16^1(==16) * 9 = 144. 144 + 3 = 147.
//
//	// 16진수 3A는 2진수로? (먼저 10진수 -> 58 -> 32 + 16 + 8 + 2 -> 0011 1010 (0~F, 10~F, 20~F = 16*3 = 48 + 30~A(==10) == 58)
//	// 2진수 1010 1111는 16진수로? 10 -> A, 8+4+2+1 -> 15 -> F == 16진수 AF. 10진수로는? 10*16=160, 15*1=15, 160+15=175
//
//	// 10진수 20은 2진수로? 16+4 == 0001 0100
//	// 16진수 F7A는 2진수로? 1111 0111 1010
//
//	// 아스키코드 0 == 48, A == 65, a == 97
//
//	int a, b;
//	char c, d;
//
//	a = 0x41;
//	b = 0x50;
//
//	printf("%c \n", b);
//
//	c = a;
//	printf("%c \n", c);
//
//	d = '#';
//	printf("%c의 아스키코드 값은 %d입니다. \n", d, d);
//
//
//	// 예제모음04)
//	// #define _CRT_SECURE_NO_WARNINGS
//	int num;
//	printf("정수를 입력하세요 ==> ");
//	scanf("%d", &num);
//	printf("10진수 ==> %d \n", num);
//	printf("16진수 ==> %x \n", num);
//	printf("8진수 ==> %o \n", num);
//
//
//	// 예제모음05)
//	int type; 
//	int num;
//	printf("입력진수 결정 <1>10 <2>16 <3>8 : ");
//	scanf("%d", &type);
//	
//	if (type <= 3 && type > 0) {
//		printf("값 입력: ");
//		if (type == 1) {
//			scanf("%d", &num);
//		}
//		else if (type == 2) {
//			scanf("%x", &num);
//		}
//		else if (type == 3) {
//			scanf("%o", &num);
//		}
//	} else {
//		printf("타입 선택 오류입니다.\n");
//		return 0;
//	}
//	
//	printf("10진수 ==> %d \n", num);
//	printf("16진수 ==> %x \n", num);
//	printf("8진수 ==> %o \n", num);
//
//
//	// 예제모음06)
//	printf("int 형의 크기 \t\t\t ==> %d \n", sizeof(int));
//	printf("short 형의 크기 \t\t\t ==> %d \n", sizeof(short));
//	printf("long int 형의 크기 \t\t\t ==> %d \n", sizeof(long int));
//	printf("float 형의 크기 \t\t\t ==> %d \n", sizeof(float));
//	printf("double 형의 크기 \t\t\t ==> %d \n", sizeof(double));
//	printf("char 형의 크기 \t\t\t ==> %d \n", sizeof(char));
//
//
//	// 예제모음07)
//	char str[10];
//	printf("문자열을 입력 ==> ");
//	scanf("%s", &str);
//	
//	int i;
//	for (i = strlen(str)-1; i >= 0; i--) {
//		printf("%c", str[i]);
//	}
//
//
//	// chapter 03 연습문제 풀이
//	// 1) C 언어 / 200+300 / 500
//	 
//	// 2) 100 200 300 쓰레기 / 100 200 / 100
//	 
//	// 3) 10 / 20 = 0
//	 
//	// 4) %f / %x / %s / %o
//	 
//	// 5) 04321 / _4321.7 / _Cook
//	 
//	// 6) \a / \r / \n / \'
//	 
//	// 7) char a, int b, float c; 한 문장에 선언 불가.
//	 
//	// 8) 코드 작성 문제
//	int a, b, c, res;
//	a = b = c = 10;
//	res = a * b * c;
//	printf("전체 곱셈 결과 : %d \n", res);
//	 
//	// 9) 0000 0010 -> 16진수로 2(16)
//	 
//	// 10) long int
//	 
//	// 11) ch1 = ch2 = 200; 127까지는 아스키 코드가 있으니 대입 가능
//	 
//	// 12) mystr[3] = 'C';
//	 
//	// 13) 코드 작성 문제
//	char str[10]="VisualC++";
//	int i;
//	for (i = 0; i <= strlen(str); i=i+2) {
//		printf("%c", str[i]);
//	}
//	 
//	// 14) f111 / 111+222 / 333 /// 0123.450 /// 123.00
//	 
//	// 15-1) 111 / 300.000000
//	// 15-2) 16진수 41 -> 4*16=64, 1*1=1 -> 10진수 65 / 16진수 61 -> 6*16=96, 1*1=1 -> 10진수 97
//	//       0x41 = 65 = A, 0x61 = 97 = a.   ->   tol == 32, 대소문자간 아스키 코드 변경 가능.    답: k, Z
//	int a = 0x41, b=0x61;
//	int tol;
//	tol = b - a;
//	printf("%c를 소문자로 바꾸면 %c\n", 'K', 'K' + tol);
//	printf("%c를 대문자로 바꾸면 %c\n", 'z', 'z' - tol);
//
//	
//
//	// chapter 04 복습) 대입 연산자, 산술 연산자, 증감 연산자, 관계 연산자, 논리 연산자, 비트 연산자
//	int a = 10;
//	int b;
//	// a = 10
//	b = a++; // 원래 값 출력 후 나중에 증가
//	printf("a++ ==> %d\n", b); // 지금은 10 담고 다음 값에 +1
//	// a = 11인 상태
//	b = ++a; // 원래 값에서 1 증가시키고 출력
//	printf("++a ==> %d\n", b); // 위에서 +1된 11에 또 먼저 +1 되어서 12
//	// a = 12
//	b = a--; // 원래 값 출력 후 나중에 감소
//	printf("a-- ==> %d\n", b); // 지금은 12 담고 다음 값에 -1
//	// a = 11인 상태
//	b = --a; // 원래 값에서 1 감소시키고 출력
//	printf("--a ==> %d\n", b); // 위에서 -1된 11에 또 먼저 -1 되어서 10
//	// a = 10
//
//
//	// 비트 연산자는 2진수 비트 연산만 의미함. 10진수, 16진수, 8진수 다 2진수로 일단 바꾸고 연산 결과 만든 다음에 다시 원래 형태로 바꿔서 출력.
//	// 비트 논리곱 & : 두 2진수의 같은 자리수가 1인 자리만 1 == 0000과 논리곱을 하면 무조건 0이 나온다.
//	printf("123 & 456 = %d \n", 123 & 456);
//	// 123 0000 0000 -> 64 + 32 + 16 + 8 + 2 + 1 = 0111 1011 = 001111011(2)
//	// 456 0000 0000 -> 256 + 128 + 64 + 8 =  0001 1100 1000 = 111001000(2)  ->  0 0100 1000(2) -> 64+8 = 72
//	
//	// 비트 논리합 | : 두 2진수 중 하나라도 1이 있는 자리에 1
//	printf("123 | 456 = %d \n", 123 | 456);
//	// 123 0000 0000 -> 64 + 32 + 16 + 8 + 2 + 1 = 0111 1011 = 001111011(2)
//	// 456 0000 0000 -> 256 + 128 + 64 + 8 =  0001 1100 1000 = 111001000(2)  ->  1 1111 1011(2) -> 256 + 128 + 64 + 32 + 16 + 8 + 2 + 1 = 507
//	
//	// 비트 배타적 논리합 ^ : 두 2진수의 같은 자리가 0, 1이 서로 다를 때 1
//	printf("123 ^ 456 = %d \n", 123 ^ 456);
//	// 123 0000 0000 -> 64 + 32 + 16 + 8 + 2 + 1 = 0111 1011 = 001111011(2)
//	// 456 0000 0000 -> 256 + 128 + 64 + 8 =  0001 1100 1000 = 111001000(2)  ->  1 1011 0011(2) -> 256 128 32 16 2 1 = 435
//	
//	// 비트 부정 ~ : 하나의 2진수를 0과 1을 역으로 바꾼 것. 음수 양수가 변환된다. 반전된 값은 1의 보수, 1을 더해 준 것이 2의 보수.
//	int a = 12345;
//	printf("%d \n", ~a); // -12346
//	printf("%d \n", ~a + 1); // -12345
//
//	// 비트 왼쪽 시프트 << : 하나의 2진수의 자릿수를 왼쪽(증가)으로 한 칸씩 옮기는 것. 빈 자리는 0으로 채워짐. 시프트 할 때마다 2^n 곱한 것과 같다.
//	// int a = 10 / a << 1 == 20 // a << 2 == 40 // a << 3 == 80
//	// 비트 오른쪽 시프트 >> : 하나의 2진수의 자릿수를 오른쪽(감소)으로 한 칸씩 옮기는 것. 밀린 뒷자리는 사라짐. 시프트 할 때마다 2^n 나눈 것과 같다.
//	// int a = 10 / a >> 1 == 5 // a >> 2 == 2 // a >> 3 == 1 // a >> 4 == 0 (나누고 소숫점 버린 것)
//
//	 //연산자 우선순위
//	 //1) () [] . ->	1차 연산자
//	 //2) + - ++ -- ~ ! * &		단항 연산자(변수나 상수 앞에 붙는 것. 양수, 음수, 스캔주소값 등. 순위가 같을 경우 오른쪽부터 진행.)
//	 //3) * / %		산술 연산자
//	 //4) + -		산술 연산자
//	 //5) >> <<		비트 시프트 연산자
//	 //6) < <= > >= 비교 연산자
//	 //7) == !=		동등 연산자
//	 //8) &			비트 논리곱
//	 //9) ^			비트 배타적 논리합
//	 //10) |		비트 논리합
//	 //11) &&		논리 연산자
//	 //12) ||		논리 연산자
//	 //13) ?:		삼항 연산자
//	 //14) = + =+ *= /= %= &= ^= |= <<= >>= 대입 연산자 (순위가 같을 경우 오른쪽부터 진행.)
//	 //15) ,		콤마 연산자
//	
//
//	// 예제모음08)
//	float num1, num2;
//	printf("첫 번째 계산 값: ");
//	scanf("%f", &num1);
//	printf("두 번째 계산 값: ");
//	scanf("%f", &num2);
//	printf("%5.2f + %5.2f = %5.2f \n", num1, num2, num1 + num2);
//	printf("%5.2f - %5.2f = %5.2f \n", num1, num2, num1 - num2);
//	printf("%5.2f * %5.2f = %5.2f \n", num1, num2, num1 * num2);
//	printf("%5.2f / %5.2f = %5.2f \n", num1, num2, num1 / num2);
//	printf("%5.2f %% %5.2f = %5.2f \n", num1, num2, (int)num1 % (int)num2);
//
//
//	// 예제모음09)
//	int money, change;
//	printf("교환할 돈은? ");
//	scanf("%d", &money);
//
//	printf("오백 원짜리 ==> %d개 \n", money / 500);
//	change = money % 500;
//	printf("백 원짜리 ==> %d개 \n", change / 100);
//	change = change % 100;
//	printf("오십 원짜리 ==> %d개 \n", change / 50);
//	change = change % 50;
//	printf("십 원짜리 ==> %d개 \n", change / 10);
//	printf("바꾸지 못한 돈 ==> %d원 \n", change % 10);
//
//
//	// 예제모음10)
//	int year;
//	printf("연도 입력: ");
//	scanf("%d", &year);
//	if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
//		printf("%d년은 윤년입니다. \n", year);
//	}
//	else printf("%d년은 윤년이 아닙니다. \n", year);
//
//	
//	// chapter 04 연습문제 풀이
//	// 1) 13 / 30 / 3 / 1
//	 
//	// 2) 17 / 27 / 3
//	 
//	// 3) (int)fnum
//	 
//	// 4) 101, 102, 102, 104
//	int num = 100;
//	num++;
//	printf("%d \n", num);
//	++num;
//	printf("%d \n", num);
//	printf("%d \n", num++);
//	printf("%d \n", ++num);
//	 
//	// 5) num1 < num2, num1 != num2
//	 
//	// 6) (num1 < num2) || (num1 > num2), (num1 == num2) || (num1 != num2)
//	 
//	// 7-1) 11 & 6 == 1011 & 0110 == 0010 == 2
//	// 7-2) 11 | 6 == 1011 | 0110 == 1111 == 15
//	// 7-3) 6 << 2 == 24
//	// 1-4) 11 >> 2 == 2
//	printf("%d \n", 11 & 6);
//	printf("%d \n", 11 | 6);
//	printf("%d \n", 6 << 2);
//	printf("%d \n", 11 >> 2);
//	 
//	// 8) () ++ % >> &(논리곱) && ?: +=
//	 
//	// 9) _9.00 / -5.00 / 24.00
//	float a = 2.0, b = 3.0, c = 4.0;
//	printf("%5.2f \n", a + b + c);
//	printf("%5.2f \n", a - b - c);
//	printf("%5.2f \n", a * b * c);
//	 
//	// 10) 코드 작성 문제
//	int money, change;
//	printf("지폐로 교환할 돈은? ");
//	scanf("%d", &money);
//	printf("오만 원짜리 ==> %d장 \n", money / 50000);
//	change = money % 50000;
//	printf("만 원짜리 ==> %d장 \n", change / 10000);
//	change = change % 10000;
//	printf("오천 원짜리 ==> %d장 \n", change / 5000);
//	change = change % 5000;
//	printf("천 원짜리 ==> %d장 \n", change / 1000);
//	change = change % 1000;
//	printf("지페로 바꾸지 못한 돈 ==> %d원 \n", change);
//	 
//	// 11) 101, 101, 101
//	int a = 100;
//	printf("%d \n", ++a);
//	printf("%d \n", a++);
//	printf("%d \n", --a);
//	 
//	// 12) a == 100
//	// 
//	// 13) 1f == 31 == 0001 1111 -> 2^4=16 == 1, 2^1=2 == 62
//	//   0123456789ABCDEF (10 없음) 11 12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F == 31
//	printf("%d \n", 0x1F >> 4);
//	printf("%d \n", 0x1F << 1);
//
//
//	// chapter 05 복습) 
//	// if문
//	// 중괄호로 블록 처리 안 하면 if 조건문 바로 아래 한 문장만 실행.
//	int a;
//	printf("정수 입력: ");
//	scanf("%d", &a);
//	if (a % 2 == 0) {
//		printf("짝수 \n");
//	}
//	else {
//		printf("홀수 \n");
//	}
//
//	int score;
//	printf("점수 입력: ");
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
//	else {
//		printf("F");
//	}
//	printf("학점입니다. \n");
//
//	// switch(조건값) {case '': ~~; break; case '' ... default: ~~; break;}
//	int year;
//	printf("출생연도: ");
//	scanf("%d", &year);
//
//	switch (year % 12) {
//	case 0: printf("원숭이띠 \n"); break;
//	case 1: printf("닭띠 \n"); break;
//	case 2: printf("개띠 \n"); break;
//	case 3: printf("돼지띠 \n"); break;
//	case 4: printf("쥐띠 \n"); break;
//	case 5: printf("소띠 \n"); break;
//	case 6: printf("호랑이띠 \n"); break;
//	case 7: printf("토끼띠 \n"); break;
//	case 8: printf("용띠 \n"); break;
//	case 9: printf("뱀띠 \n"); break;
//	case 10: printf("말띠 \n"); break;
//	case 11: printf("양띠 \n"); break;
//	}
//	
//	
//	// 예제모음11, 13)
//	int a, b;
//	char ch;
//	
//	printf("첫 번째 수: ");
//	scanf("%d", &a);
//	printf("연산자 입력: ");
//	scanf(" %c", &ch);
//	printf("두 번째 수: ");
//	scanf("%d", &b);
//
//	switch (ch) {
//	case '+': printf("%d %c %d = %d \n", a, ch, b, a + b); break;
//	case '-': printf("%d %c %d = %d \n", a, ch, b, a - b); break;
//	case '*': printf("%d %c %d = %d \n", a, ch, b, a * b); break;
//	case '/':
//		switch (b) {
//		case 0: printf("0으로 나눌 수 없습니다. \n"); break;
//		default: printf("%d %c %d = %.2f \n", a, ch, b, a / (float)b); break;
//		} break;
//	case '%':
//		switch (b) {
//		case 0: printf("0으로 나눌 수 없습니다. \n"); break;
//		default: printf("%d %c %d = %d \n", a, ch, b, a % b); break;
//		} break;
//	default: printf("연산자 입력 오류입니다. \n");
//	}
//
//
//	// 예제모음12)
//	int a, b;
//	char ch;
//	
//	printf("첫 번째 수: ");
//	scanf("%d", &a);
//	printf("연산자 입력: ");
//	scanf(" %c", &ch);
//	printf("두 번째 수: ");
//	scanf("%d", &b);
//
//	if (b == 0 && (ch == '/' || ch == '%')) {
//			printf("0으로 나누거나 나머지를 구할 수 없습니다. \n");
//	}
//	else {
//		if (ch == '+') printf("%d %c %d = %d \n", a, ch, b, a + b);
//		else if (ch == '-') printf("%d %c %d = %d \n", a, ch, b, a - b);
//		else if (ch == '*') printf("%d %c %d = %d \n", a, ch, b, a * b);
//		else if (ch == '/') printf("%d %c %d = %.2f \n", a, ch, b, a / (float)b);
//		else if (ch == '%') printf("%d %c %d = %d \n", a, ch, b, a % b);
//		else printf("연산자 입력 오류입니다. \n");
//	}
//	
//
//	// chapter 05 연습문제 풀이
//	// 1) 아쉽네요 / 프로그램을 종료합니다.
//	// 
//	// 2) (num!=100){ ~~; ~~: }
//
//	// 3) num%3=-0
//
//	// 4) if if else else
//
//	// 5) (num >= 90) , ((num < 90) && (num >=60))
//
//	// 6) if, else, elif
//
//	// 7) break;
//
//	// 8) 20대 30대 40대 50대 이상
//
//	// 9) 코드 작성 문제
//	char ch;
//	printf("A, B, C 중 하나 입력: ");
//	scanf(" %c", &ch);
//	switch (ch) {
//	case 'A': printf("A키 입력함. \n"); break;
//	case 'B': printf("B키 입력함. \n"); break;
//	case 'C': printf("C키 입력함. \n"); break;
//	default: printf("잘못 입력. \n"); break;
//	}
//
//	// 10) 코드 작성 문제
//	char ch = 'Z';
//	if (ch == 'A') printf("A키 입력함. \n");
//	else if (ch == 'B') printf("B키 입력함. \n");
//	else if (ch == 'C') printf("C키 입력함. \n");
//	else printf("잘못 입력. \n");
//
//	// 11-1) 2다
//	// 11-2) 2다 3이다
//
//	// 12) if(a < 200) { ~~; ~~; }
//
//
//
//	// chapter 06 복습) for(초깃값 ; 조건식 ; 증감식) -> 초기-조건-증감-조건-증감 반복됨. 시계 반대 방향.
//	int i, num1, num2, num3;
//	int hap = 0;
//
//	////for (i = 501; i <= 1000; i += 2) {
//	////	hap += i;
//	////}
//	////printf("500에서 1000까지 홀수의 합: %d \n", hap);
//
//	//for (i = 3; i <= 100; i += 3) {
//	//	hap += i;
//	//}
//	//printf("1부터 100까지 3의 배수의 합: %d \n", hap);
//
//	printf("시작, 마지막, 증가값: ");
//	scanf("%d %d %d", &num1, &num2, &num3);
//
//	for (i = num1; i <= num2; i = i + num3) {
//		hap += i;
//	}
//	printf("%d부터 %d까지 %d씩 증가한 수의 합은 %d \n", num1, num2, num3, hap);int i, num1, num2, num3;
//	int hap = 0;
//
//	////for (i = 501; i <= 1000; i += 2) {
//	////	hap += i;
//	////}
//	////printf("500에서 1000까지 홀수의 합: %d \n", hap);
//
//	//for (i = 3; i <= 100; i += 3) {
//	//	hap += i;
//	//}
//	//printf("1부터 100까지 3의 배수의 합: %d \n", hap);
//
//	printf("시작, 마지막, 증가값: ");
//	scanf("%d %d %d", &num1, &num2, &num3);
//
//	for (i = num1; i <= num2; i = i + num3) {
//		hap += i;
//	}
//	printf("%d부터 %d까지 %d씩 증가한 수의 합은 %d \n", num1, num2, num3, hap);
//
//	int i;
//	int dan;
//
//	printf("몇 단? ");
//	scanf("%d", &dan);
//
//	for (i = 2; i <= 9; i++) {
//		printf("%d * %d = %d \n", dan, i, i * dan);
//	}
//	printf("\n");
//	for (i = 9; i >= 2; i--) {
//		printf("%d * %d = %d \n", dan, i, i * dan);
//	}
//
//	
//	int i, j;
//	for (i = 2; i <= 9; i++) {
//		printf("### %d단 ### \n", i);
//		for (j = 1; j <= 9; j++) {
//			printf("%d * %d = %d \n", i, j, i * j);
//		}
//		printf("\n");
//	} // 세로 구구단
//
//
//	int i, j;
//	for (j = 2; j <= 9; j++) {
//		printf("### %d단 ### \t", j);
//	} 
//	printf("\n");
//	for (i = 1; i <= 9; i++) {
//		for (j = 2; j <= 9; j++) {
//			printf("%d * %d = %d \t", j, i, i * j);
//		} 
//		printf("\n");
//	} // 가로 구구단
//
//
//	// for(초깃값1, 초깃값2 ; 조건식 ; 증감식1, 증감식2)
//	// for문 위에 초깃값 미리 초기화, 증감식은 for문 내부에 따로 선언 가능. -> for( ; 조건식 ; )
//	// 아예 조건식까지 없으면 무한 루프.
//
//
//	// 예제모음15)
//	int i;
//	printf("--------------------- \n");
//	printf("10진수  16진수   문자 \n");
//	printf("--------------------- \n");
//	for (i = 0; i <= 127; i++) {
//		printf("%5d %5x %5c", i, i, i);
//		printf("\n");
//	}
//	
//	
//	// 예제모음16)
//	char str[100];
//	int i;
//
//	printf("문자열 입력: ");
//	scanf("%s", &str);
//	printf("거꾸로 출력: ");
//
//	for (i = strlen(str) - 1; i >= 0; i--) {
//		printf("%c", str[i]);
//	}
//
//
//	// chapter 06 연습문제 풀이
//	// 1) 4번
//	 
//	// 2) i=1 == 초깃값 초기화
//	 
//	// 3) it it it cookbook
//	 
//	// 4) 6
//	 
//	// 5) for(i = 10; i<=15; i++)
//	 
//	// 6) i = 99; i>1; i--
//	 
//	// 7) for(i=300;i<=900;i+=2)
//	 
//	// 8) 코드 작성 문제
//	int i, j;
//	for (j = 9; j > 1; j--) {
//		printf("### %d단 ### \t", j);
//	} 
//	printf("\n");
//	for (i = 9; i > 0; i--) {
//		for (j = 9; j > 1; j--) {
//			printf("%d * %d = %d \t", j, i, i * j);
//		} 
//		printf("\n");
//	} // 가로 거꾸로 구구단
//	 
//	// 9) 코드 작성 문제
//	char str[100];
//	int i;
//	
//	printf("문자열 입력: ");
//	scanf("%s", &str);
//	printf("거꾸로 출력: ");
//
//	for (i = strlen(str) - 1; i >= 0; i--) {
//		if (str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9') {
//			printf("#");
//		}
//		else printf("%c", str[i]);
//	}
//	printf("\n");
//	
//	// 10) 코드 작성 문제
//	int i;
//	int odd_hap = 0;
//	int even_hap = 0;
//
//	for (i = 1; i <= 100; i++) {
//		if (i % 2 == 0) even_hap += i;
//		else odd_hap += i;
//	}
//	printf("홀수의 합은 %d, 짝수의 합은 %d \n", odd_hap, even_hap);
//	
//	// 11) 코드 작성 문제
//	int i;
//	int hap = 0;
//
//	for (i = 1; i <= 1000; i++) {
//		if ((i % 3 == 0) || (i % 7 == 0)) {
//			hap += i;
//		}
//	}
//	printf("3의 배수 또는 7의 배수의 합: %d \n", hap);
//
//
//	
//	// chapter 07 복습) while, do~while
//	// int i = 0; while(조건식) { ~~; 증감식 }
//	// while(1) == 참이라서 무한 루프.
//		
//	int a, b;
//	char ch, answer;
//
//	printf("계산식 입력: ");
//	scanf("%d %c %d", &a, &ch, &b);
//
//	while (1) {
//		if ((b == 0) && ((ch == '/') || (ch == '%'))) {
//			printf("0으로는 계산할 수 없습니다. \n");
//		}
//		else {
//			switch (ch) {
//			case '+': printf("%d %c %d = %d \n", a, ch, b, a + b); break;
//			case '-': printf("%d %c %d = %d \n", a, ch, b, a - b); break;
//			case '*': printf("%d %c %d = %d \n", a, ch, b, a * b); break;
//			case '/': printf("%d %c %d = %.2f \n", a, ch, b, a / (float)b); break;
//			case '%': printf("%d %c %d = %d \n", a, ch, b, a % b); break;
//			default: printf("연산자 착오 입력입니다. \n"); break;
//			}
//		}
//		printf("\n");
//		printf("다시 계산하시겠습니까? (Y/N) : ");
//		scanf(" %c", &answer);
//		if (answer == 'N' || answer == 'n') {
//			return 0;
//		}
//		printf("\n계산식 입력: ");
//		scanf("%d %c %d", &a, &ch, &b);
//	}
//
//
//	// do~while문은 참 거짓 상관없이 무조건 한 번은 꼭 실행하는 것.
//	int a = 100;
//	do {
//		printf("거짓이라도 do~while문 밖에서 한 번 실행 \n");
//	} while (a == 200);
//
//
//	int menu;
//	do {
//		printf("주문하시겠습니까? \n");
//		printf("<1>카페라떼 <2>카푸치노 <3>아메리카노 <4>주문그만 : ");
//		scanf("%d", &menu);
//		
//		switch (menu) {
//		case 1: printf("주문하신 카페라떼 나왔습니다. \n"); break;
//		case 2: printf("주문하신 카푸치노 나왔습니다. \n"); break;
//		case 3: printf("주문하신 아메리카노 나왔습니다. \n"); break;
//		case 4: printf("주문 그만 받겠습니다. \n"); break;
//		default: printf("해당 메뉴는 존재하지 않습니다. \n"); break;
//		}
//		printf("\n");
//	} while (menu != 4);
//
//
//	int menu;
//
//	printf("주문하시겠습니까? \n");
//	printf("<1>카페라떼 <2>카푸치노 <3>아메리카노 <4>주문그만 : ");
//	scanf("%d", &menu);
//	
//	for (; ; ) {
//		if (menu >= 1 && menu <= 4) {
//			if (menu == 1) {
//				printf("주문하신 카페라떼 나왔습니다. \n");
//			}
//			else if (menu == 2) {
//				printf("주문하신 카푸치노 나왔습니다. \n");
//			}
//			else if (menu == 3) {
//				printf("주문하신 아메리카노 나왔습니다. \n");
//			}
//			else if (menu == 4) {
//				printf("주문 그만 받겠습니다. \n");
//				break;
//			}
//			printf("\n");
//			printf("주문하시겠습니까? \n");
//			printf("<1>카페라떼 <2>카푸치노 <3>아메리카노 <4>주문그만 : ");
//			scanf("%d", &menu);
//		}
//		else {
//			printf("해당 메뉴는 존재하지 않습니다. \n");
//		}
//	}
//
//	
//	// 기타 제어문
//	// 1) break; 반복문 탈출. 원하는 조건 만족 시 반복 그만 돌게 할 수 있음.
//	int hap = 0;
//	int i;
//
//	for (i = 1; i <= 100; i++) {
//		hap += i;
//		if (hap >= 1000) break;
//	}
//	printf("1부터 100의 합에서 최초로 1000이 넘는 위치는 %d, 그 위치에서의 합은 %d이다. \n", i, hap);
//	
//
//	int hap = 0;
//	int i = 1;
//
//	while (i <= 100) {
//		hap += i;
//		if (hap >= 1000) break;
//		i++;
//	}
//	printf("1부터 100의 합에서 최초로 1000이 넘는 위치는 %d, 그 위치에서의 합은 %d이다. \n", i, hap);
//
//
//	// 2) continue; 반복문으로 돌아감.
//	int hap = 0;
//	int i;
//
//	for (i = 1; i <= 100; i++) {
//		if (i % 3 == 0)
//			continue;
//		hap += i; // 3의 배수는 아래 실행 안 하고 건너뛴다.
//	}
//	printf("1부터 100의 합에서 3의 배수를 제외한 것은 %d이다. \n", hap);
//
//
//	// 3) goto ~~; 지정한 위치로 건너뜀. 실행 중단하고 별도 지정한 레이블로 이동함.
//	int hap = 0;
//	int i;
//
//	for (i = 1; i <= 100; i++) {
//		hap += i;
//
//		if (hap > 2000)
//			goto mygoto;
//	}
//mygoto:
//	printf("1부터 %d까지의 합은 2000이 넘는 %d입니다. \n", i, hap);
//
//	// 4) return 0; 현재 함수를 호출한 곳으로 돌아감.
//	// 지금 실습에서는 main() 함수를 사용했으니 이 함수를 빠져나가서 프로그램이 종료되는 것.
//	// return 아래 문장은 실행되지 않음.
//
//
//	//// 예제모음17)
//	int start, end, num, i;
//	int hap = 0;
//
//	printf("합계의 시작값, 끝값, 배수 : ");
//	scanf("%d %d %d", &start, &end, &num);
//
//	for (i = start; i <= end; i++) {
//		if (i % num == 0) {
//			hap += i;
//		}
//	}
//	printf("%d부터 %d까지 %d 배수의 합 ==> %d \n", start, end, num, hap);
//
//
//	int start, end, num;
//	int hap = 0;
//	
//	printf("합계의 시작값, 끝값, 배수 : ");
//	scanf("%d %d %d", &start, &end, &num);
//
//	int i = start;
//	while (i <= end) {
//		if (i % num == 0) {
//			hap += i;
//		}
//		i++;
//	}
//
//	printf("%d부터 %d까지 %d 배수의 합 ==> %d \n", start, end, num, hap);
//
//
//	// 예제모음18)
//	int big = 0;
//	int small = 0;
//	int num = 0;
//	char str[100];
//
//	printf("문자열 입력(100자 이내): ");
//	scanf("%s", &str);
//
//	int i;
//
//	for (i = 0; i <= strlen(str); i++) {
//		if (str[i] >= 'A' && str[i] <= 'Z') {
//			big += 1;
//		}
//		else if (str[i] >= 'a' && str[i] <= 'z') {
//			small += 1;
//		}
//		else if (str[i] >= '0' && str[i] <= '9') {
//			num += 1;
//		}
//	}
//	printf("대문자 %d개, 소문자 %d개, 숫자 %d개 \n", big, small, num);
//
//
//	// 예제모음19)
//	char str[100];
//	char ch;
//
//	printf("숫자를 입력하세요 : ");
//	scanf("%s", str);
//
//	int i, k;
//	int star;
//	
//	for (i = 0; i <= strlen(str); i++) {
//		ch = str[i];
//		star = ch - 48;
//		for (k = 0; k < star; k++)
//			printf("*");
//		printf("\n");
//	}
//
//
//	char str[100];
//
//	printf("숫자를 입력하세요 : ");
//	scanf("%s", str);
//
//	int i = 0;
//	int k = 0;
//	int star;
//
//	while (i <= strlen(str)) {
//		star = (int)str[i] - 48;
//
//		k = 0;
//		while (k < star) {
//			printf("*");
//			k++;
//		}
//		printf("\n");
//		i++;
//	}
//
//
//	char str[100];
//
//	printf("숫자를 입력하세요 : ");
//	scanf("%s", str);
//
//	int i = 0;
//	int k = 0;
//	int star;
//
//	do {
//		star = (int)str[i] - 48;
//
//		k = 0;
//		while (k < star) {
//			printf("*");
//			k++;
//		}
//		printf("\n");
//		i++;
//	} while (i <= strlen(str));
//
//
//	// chapter 07 연습문제 풀이
//	// 1) while(조건식)
//	// 
//	// 2) 
//	// 초깃값;
//	// while(조건식){
//	// 실행문;
//	// 증감식;
//	// }
//	//
//	// 3) 코드 작성 문제
//	int i = 0;
//	while (i < 5) {
//		printf("%d \n", i);
//		i++;
//	}
//	// 4) 코드 작성 문제
//	int hap = 0;
//	int i;
//
//	i = 100;
//	while (i <= 200) {
//		hap += i;
//		i++;
//	}
//	printf("100에서 200까지의 합: %d \n", hap);
//	// 5) for(;;), while(1)
//	// 6) 123, 무한 루프, 0
//	int i = 123, hap = 0;
//	while (i <= 456) {
//		hap = hap + i;
//		i += 1;
//		break;
//	}
//	printf("%d \n", hap);
//
//	int i = 123, hap = 0;
//	while (i <= 456) {
//		continue;
//		hap = hap + i;
//	}
//	printf("%d \n", hap);
//
//	int i = 123, hap = 0;
//	while (i <= 456) {
//		goto myLable;
//		hap = hap + i;
//	}
//	printf("%d \n", hap);
//
//myLable:
//	printf("%d \n", hap);
// 
//	// 7) 코드 작성 문제
//	int start, end;
//	printf("시작, 끝: ");
//	scanf("%d %d", &start, &end);
//
//	if (start > end) {
//		while (end <= start) {
//			if (end % 2 != 0) {
//				printf("%d ", end);
//			}
//			end++;
//		}
//	}
//	else {
//		while (start <= end) {
//			if (start % 2 != 0) {
//				printf("%d ", start);
//			}
//			start++;
//		}
//	}
//	
//	// 8) 코드 작성 문제
//	int i, k;
//	char heart[100];
//	printf("숫자를 입력하세요 : ");
//	scanf("%s", &heart);
//	for (i = 0; i <= strlen(heart); i++) {
//		for (k = 0; k < (int)heart[i]-48; k++) {
//			printf("\u2665\u2665");
//		}
//		printf("\n");
//	}
//
//	int i = 0, k = 0;
//	char heart[100];
//	printf("숫자를 입력하세요 : ");
//	scanf("%s", &heart);
//	while (i <= (int)strlen(heart)) {
//		k = 0;
//		while (k < heart[i] - 48) {
//			printf("\u2665\u2665");
//			k++;
//		}
//		printf("\n");
//		i++;
//	}
//
//	// 9) 코드 작성 문제
//	char str[100];
//	char ch;
//
//	int big = 0, small = 0, num = 0, etc = 0;
//
//	printf("문자열 입력: ");
//	scanf("%s", str);
//
//	int i = 0;
//	ch = strlen(str);
//	while (i < ch) {
//		if (str[i] >= 'A' && str[i] <= 'Z') {
//			big++;
//		}
//		else if (str[i] >= 'a' && str[i] <= 'z') {
//			small++;
//		}
//		else if (str[i] >= '0' && str[i] <= '9') {
//			num++;
//		}
//		else {
//			etc++;
//		}
//		i++;
//	}
//	printf("대문자 %d개, 소문자 %d개, 숫자 %d개, 그 외 %d개. \n", big, small, num, etc);
//	
//	// 10) 12번
//	int i, k;
//	i = 0;
//	while (i < 3) {
//		k = 0;
//		while (k < 4) {
//			printf("중첩 while문 \n");
//			k++;
//		}
//		i++;
//	}
//	
//	// 11)
//	int hap = 0;
//	int i = 1;
//
//	while (i <= 100) {
//		if (i % 5 == 0 || i % 8 == 0) {
//			hap += i;
//		}
//		i++;
//	}
//	printf("5배수와 8배수의 합 : %d \n", hap);
//	 
//	 
//	// ★☆★☆ 진수 변환, 비트 연산자, 연산자 순위, do~while, 기타 제어문에 대해서 다시 복습하기.
//}