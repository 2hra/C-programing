//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//void main() {
//
//	int money, c50000, c10000, c5000, c1000, c500, c100, c50, c10, c5, c1;
//	printf("## 교환할 돈을 입력하십시오. (100,000 ~ 2,000,000) : ");
//	scanf("%d", &money);
//
//	if ((money < 100000) || (money > 2000000)) {
//		printf("금액 한도 미달 또는 한도 초과입니다. 다시 입력해 주세요. : ");
//		scanf("%d", &money);
//		if ((money < 100000) || (money > 2000000)) {
//			printf("금액 한도 미달 또는 한도 초과입니다. 프로그램을 종료합니다. \n ");
//		}
//		else {
//			c50000 = money / 50000;
//			money = money % 50000;
//			printf("\n오만 원짜리 ==> %d 개\n", c50000);
//
//			c10000 = money / 10000;
//			money = money % 10000;
//			printf("만 원짜리 ==> %d 개\n", c10000);
//
//			c5000 = money / 5000;
//			money = money % 5000;
//			printf("오천 원짜리 ==> %d 개\n", c5000);
//
//			c1000 = money / 1000;
//			money = money % 1000;
//			printf("천 원짜리 ==> %d 개\n", c1000);
//
//			c500 = money / 500;
//			money = money % 500;
//			printf("오백 원짜리 ==> %d 개\n", c500);
//
//			c100 = money / 100;
//			money = money % 100;
//			printf("백 원짜리 ==> %d 개\n", c100);
//
//			c50 = money / 50;
//			money = money % 50;
//			printf("오십 원짜리 ==> %d 개\n", c50);
//
//			c10 = money / 10;
//			money = money % 10;
//			printf("십 원짜리 ==> %d 개\n", c10);
//
//			c5 = money / 5;
//			money = money % 5;
//			printf("오 원짜리 ==> %d 개\n", c5);
//
//			c1 = money / 1;
//			money = money % 1;
//			printf("일 원짜리 ==> %d 개\n", c1);
//		}
//	}
//	else {
//		c50000 = money / 50000;
//		money = money % 50000;
//		printf("\n오만 원짜리 ==> %d 개\n", c50000);
//
//		c10000 = money / 10000;
//		money = money % 10000;
//		printf("만 원짜리 ==> %d 개\n", c10000);
//
//		c5000 = money / 5000;
//		money = money % 5000;
//		printf("오천 원짜리 ==> %d 개\n", c5000);
//
//		c1000 = money / 1000;
//		money = money % 1000;
//		printf("천 원짜리 ==> %d 개\n", c1000);
//
//		c500 = money / 500;
//		money = money % 500;
//		printf("오백 원짜리 ==> %d 개\n", c500);
//
//		c100 = money / 100;
//		money = money % 100;
//		printf("백 원짜리 ==> %d 개\n", c100);
//
//		c50 = money / 50;
//		money = money % 50;
//		printf("오십 원짜리 ==> %d 개\n", c50);
//
//		c10 = money / 10;
//		money = money % 10;
//		printf("십 원짜리 ==> %d 개\n", c10);
//
//		c5 = money / 5;
//		money = money % 5;
//		printf("오 원짜리 ==> %d 개\n", c5);
//
//		c1 = money / 1;
//		money = money % 1;
//		printf("일 원짜리 ==> %d 개\n", c1);
//	}
//}