//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//void main() {
//
//	int money, c50000, c10000, c5000, c1000, c500, c100, c50, c10, c5, c1;
//	printf("## ��ȯ�� ���� �Է��Ͻʽÿ�. (100,000 ~ 2,000,000) : ");
//	scanf("%d", &money);
//
//	if ((money < 100000) || (money > 2000000)) {
//		printf("�ݾ� �ѵ� �̴� �Ǵ� �ѵ� �ʰ��Դϴ�. �ٽ� �Է��� �ּ���. : ");
//		scanf("%d", &money);
//		if ((money < 100000) || (money > 2000000)) {
//			printf("�ݾ� �ѵ� �̴� �Ǵ� �ѵ� �ʰ��Դϴ�. ���α׷��� �����մϴ�. \n ");
//		}
//		else {
//			c50000 = money / 50000;
//			money = money % 50000;
//			printf("\n���� ��¥�� ==> %d ��\n", c50000);
//
//			c10000 = money / 10000;
//			money = money % 10000;
//			printf("�� ��¥�� ==> %d ��\n", c10000);
//
//			c5000 = money / 5000;
//			money = money % 5000;
//			printf("��õ ��¥�� ==> %d ��\n", c5000);
//
//			c1000 = money / 1000;
//			money = money % 1000;
//			printf("õ ��¥�� ==> %d ��\n", c1000);
//
//			c500 = money / 500;
//			money = money % 500;
//			printf("���� ��¥�� ==> %d ��\n", c500);
//
//			c100 = money / 100;
//			money = money % 100;
//			printf("�� ��¥�� ==> %d ��\n", c100);
//
//			c50 = money / 50;
//			money = money % 50;
//			printf("���� ��¥�� ==> %d ��\n", c50);
//
//			c10 = money / 10;
//			money = money % 10;
//			printf("�� ��¥�� ==> %d ��\n", c10);
//
//			c5 = money / 5;
//			money = money % 5;
//			printf("�� ��¥�� ==> %d ��\n", c5);
//
//			c1 = money / 1;
//			money = money % 1;
//			printf("�� ��¥�� ==> %d ��\n", c1);
//		}
//	}
//	else {
//		c50000 = money / 50000;
//		money = money % 50000;
//		printf("\n���� ��¥�� ==> %d ��\n", c50000);
//
//		c10000 = money / 10000;
//		money = money % 10000;
//		printf("�� ��¥�� ==> %d ��\n", c10000);
//
//		c5000 = money / 5000;
//		money = money % 5000;
//		printf("��õ ��¥�� ==> %d ��\n", c5000);
//
//		c1000 = money / 1000;
//		money = money % 1000;
//		printf("õ ��¥�� ==> %d ��\n", c1000);
//
//		c500 = money / 500;
//		money = money % 500;
//		printf("���� ��¥�� ==> %d ��\n", c500);
//
//		c100 = money / 100;
//		money = money % 100;
//		printf("�� ��¥�� ==> %d ��\n", c100);
//
//		c50 = money / 50;
//		money = money % 50;
//		printf("���� ��¥�� ==> %d ��\n", c50);
//
//		c10 = money / 10;
//		money = money % 10;
//		printf("�� ��¥�� ==> %d ��\n", c10);
//
//		c5 = money / 5;
//		money = money % 5;
//		printf("�� ��¥�� ==> %d ��\n", c5);
//
//		c1 = money / 1;
//		money = money % 1;
//		printf("�� ��¥�� ==> %d ��\n", c1);
//	}
//}