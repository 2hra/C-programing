//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//void main() {
//	/// 230403 4����
//	/// 4-1) ��� ������: ���� ������, ���� ������
//
//	int a = 10, b;
//
//	b = ++a; // �߰��ϰ� �ٷ� ����
//	printf("%d\n", b); // 1+10=11
//	printf("%d\n", a); // 1+10=11
//
//	b = a++; // �����ϰ� ���߿� �߰�
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
//	/// ���� ������
//	int a1 = 100, b1 = 200;
//
//	printf("%d == %d�� %d�̴�.\n", a1, b1, a1 == b1);
//	printf("%d != %d�� %d�̴�.\n", a1, b1, a1 != b1);
//	printf("%d > %d�� %d�̴�.\n", a1, b1, a1 > b1);
//	printf("%d < %d�� %d�̴�.\n", a1, b1, a1 < b1);
//	printf("%d >= %d�� %d�̴�.\n", a1, b1, a1 >= b1);
//	printf("%d =< %d�� %d�̴�.\n", a1, b1, a1 <= b1);
//	printf("%d = %d�� %d�̴�.\n", a1, b1, a1 = b1);
//
//	
//
//	/// 4-2) ��Ʈ ������
//	// ��Ʈ ����(^) ������
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
//	// ��Ʈ ����(~) ������
//	int a = 12345;
//	printf("%d\n", ~a);
//	printf("%d\n", ~a + 1); 
//
//
//	// �������� 08)
//	float num1, num2;
//	printf("ù ��° ����� ���� �Է��ϼ��� => ");
//	scanf("%f", &num1);
//	printf("�� ��° ����� ���� �Է��ϼ��� => ");
//	scanf(" %f", &num2);
//
//	printf("%5.2f + %5.2f = %5.2f\n", num1, num2, num1 + num2); // %5.2f == �� �ټ� �ڸ� �߿��� �Ҽ����� �� �ڸ�.
//	printf("%5.2f - %5.2f = %5.2f\n", num1, num2, num1 - num2);
//	printf("%5.2f * %5.2f = %5.2f\n", num1, num2, num1 * num2);
//	printf("%5.2f / %5.2f = %5.2f\n", num1, num2, num1 / num2);
//	printf("%d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
//
//
//	// �������� 09)
//	int money, c500, c100, c50, c10;
//	printf("## ��ȯ�� ����? ");
//	scanf("%d", &money);
//
//	c500 = money / 500;
//	money = money % 500;
//	printf("���� ��¥�� ==> %d ��\n", c500);
//	c100 = money / 100;
//	money = money % 100;
//	printf("�� ��¥�� ==> %d ��\n", c100);
//	c50 = money / 50;
//	money = money % 50;
//	printf("���� ��¥�� ==> %d ��\n", c50);
//	c10 = money / 10;
//	money = money % 10;
//	printf("�� ��¥�� ==> %d ��\n", c10);
//	printf("�ٲ��� ���� �ܵ� ==> %d ��\n", money);
//
//
//	// �������� 10)
//	int year;
//	printf("������ �Է��ϼ���. : ");
//	scanf("%d", &year);
//
//	if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
//		printf("%d ���� �����Դϴ�. \n", year);
//	}
//	else {
//		printf("%d ���� ������ �ƴմϴ�. \n", year);
//	}
//}