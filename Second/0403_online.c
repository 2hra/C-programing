//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//void main() {
//	/// 230403 4주차
//	/// 4-1) 산술 연산자: 대입 연산자, 증감 연산자
//
//	int a = 10, b;
//
//	b = ++a; // 추가하고 바로 대입
//	printf("%d\n", b); // 1+10=11
//	printf("%d\n", a); // 1+10=11
//
//	b = a++; // 대입하고 나중에 추가
//	printf("%d\n", b); // 1+10=11
//	printf("%d\n", a); // 11+1=12
//
//
//	int c = 10, d;
//
//	d = c++;
//	printf("%d\n", d); // 10=10
//	printf("%d\n", c); // 10+1=11
//
//	d = ++c;
//	printf("%d\n", d); // 1+11=12
//	printf("%d\n", c); // 1+11=12
//
//
//
//	/// 관계 연산자
//	int a1 = 100, b1 = 200;
//
//	printf("%d == %d는 %d이다.\n", a1, b1, a1 == b1);
//	printf("%d != %d는 %d이다.\n", a1, b1, a1 != b1);
//	printf("%d > %d는 %d이다.\n", a1, b1, a1 > b1);
//	printf("%d < %d는 %d이다.\n", a1, b1, a1 < b1);
//	printf("%d >= %d는 %d이다.\n", a1, b1, a1 >= b1);
//	printf("%d =< %d는 %d이다.\n", a1, b1, a1 <= b1);
//	printf("%d = %d는 %d이다.\n", a1, b1, a1 = b1);
//
//	
//
//	/// 4-2) 비트 연산자
//	// 비트 논리합(^) 연산자
//	char aa = 'A', bb, cc;
//	char mask = 0x0F;
//
//	printf("%X & %X = %X \n", aa, mask, aa & mask);
//	printf("%X | %X = %X \n", aa, mask, aa | mask);
//
//	mask = 'a' - 'A';
//
//	bb = aa ^ mask;
//	printf("%c & %d = %c \n", aa, mask, bb);
//	aa = bb ^ mask;
//	printf("%c & %d = %c \n", aa, mask, bb);
//
//	
//	// 비트 부정(~) 연산자
//	int a = 12345;
//	printf("%d\n", ~a);
//	printf("%d\n", ~a + 1); 
//
//
//	// 예제모음 08)
//	float num1, num2;
//	printf("첫 번째 계산할 값을 입력하세요 => ");
//	scanf("%f", &num1);
//	printf("두 번째 계산할 값을 입력하세요 => ");
//	scanf(" %f", &num2);
//
//	printf("%5.2f + %5.2f = %5.2f\n", num1, num2, num1 + num2); // %5.2f == 총 다섯 자리 중에서 소숫점은 두 자리.
//	printf("%5.2f - %5.2f = %5.2f\n", num1, num2, num1 - num2);
//	printf("%5.2f * %5.2f = %5.2f\n", num1, num2, num1 * num2);
//	printf("%5.2f / %5.2f = %5.2f\n", num1, num2, num1 / num2);
//	printf("%d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
//
//
//	// 예제모음 09)
//	int money, c500, c100, c50, c10;
//	printf("## 교환할 돈은? ");
//	scanf("%d", &money);
//
//	c500 = money / 500;
//	money = money % 500;
//	printf("오백 원짜리 ==> %d 개\n", c500);
//	c100 = money / 100;
//	money = money % 100;
//	printf("백 원짜리 ==> %d 개\n", c100);
//	c50 = money / 50;
//	money = money % 50;
//	printf("오십 원짜리 ==> %d 개\n", c50);
//	c10 = money / 10;
//	money = money % 10;
//	printf("십 원짜리 ==> %d 개\n", c10);
//	printf("바꾸지 못한 잔돈 ==> %d 원\n", money);
//
//
//	// 예제모음 10)
//	int year;
//	printf("연도를 입력하세요. : ");
//	scanf("%d", &year);
//
//	if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
//		printf("%d 년은 윤년입니다. \n", year);
//	}
//	else {
//		printf("%d 년은 윤년이 아닙니다. \n", year);
//	}
//}