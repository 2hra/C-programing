//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//void main() {
//
//	// chapter 02 ����)
//	// ��������01)
//	int a, b, c, d;
//	printf("ù ��° ����� ���� �Է��ϼ���: ");
//	scanf("%d", &a);
//	printf("�� ��° ����� ���� �Է��ϼ���: ");
//	scanf("%d", &b);
//	printf("�� ��° ����� ���� �Է��ϼ���: ");
//	scanf("%d", &c);
//	printf("ù ��° ����� ���� �Է��ϼ���: ");
//	scanf("%d", &d);
//	printf("%d + %d + %d + %d = %d \n", a, b, c, d, a + b + c + d);
//
//
//	//��������02)
//	int num1, ch, num2;
//	printf("ù ��° ���� �Է��ϼ��� ==> ");
//	scanf("%d", &num1);
//	printf("<1>���� <2>���� <3>���� <4>������ <5>������ ==> ");
//	scanf("%d", &ch);
//	printf("�� ��° ���� �Է��ϼ��� ==> ");
//	scanf("%d", &num2);
//	if (ch <= 5) {
//		if (ch == 1) printf("%d + %d = %d \n", num1, num2, num1 + num2);
//		else if (ch == 2) printf("%d - %d = %d \n", num1, num2, num1 - num2);
//		else if (ch == 3) printf("%d * %d = %d \n", num1, num2, num1 * num2);
//		else if (ch == 4) printf("%d / %d = %d \n", num1, num2, num1 / (float) num2);
//		else printf("%d %% %d = %d \n", num1, num2, num1 % num2);
//	}
//	else {
//		printf("������ �����Դϴ�. \n");
//	}
//
//
//	//��������03)
//	int a, b;
//	char ch;
//	printf("ù ��° ����: ");
//	scanf("%d", &a);
//	printf("+ - * / %% : ");
//	scanf(" %c", &ch);
//	printf("�� ��° ����: ");
//	scanf("%d", &b);
//	if ((ch == '/' || ch == '%') && (b == 0)) {
//		if (ch == '/') printf("0���� ���� �� �����ϴ�.\n");
//		else printf("0���� �������� ���� �� �����ϴ�. \n");
//	}
//	else {
//		if (ch == '+') printf("%d %c %d = %d\n", a, ch, b, a + b);
//		else if (ch == '-')printf("%d %c %d = %d\n", a, ch, b, a - b);
//		else if (ch == '*')printf("%d %c %d = %d\n", a, ch, b, a * b);
//		else if (ch == '/')printf("%d %c %d = %5.2f\n", a, ch, b, a / (float)b);
//		else if (ch == '%') printf("%d %c %d = %d\n", a, ch, b, a % b);
//		else printf("������ �����Դϴ�.\n");	
//	}
//
//
//	// chapter 02) �������� Ǯ��
//	// 1) ������Ʈ ���� > ���α׷� �ڵ� > ���� > ����
//	 
//	// 2) res = 50
//	 
//	// 3) 10-20 = 30
//	 
//	// 4) scanf("%d", &num)
//	 
//	// 5) num1+num2, num1-num2, num1*num2, num1/num2
//	 
//	// 6) �ڵ� �ۼ� ����
//	int a, b, c;
//	char ch;
//	printf("���� ���� (+ �Ǵ� *) ==> ");
//	scanf(" %c", &ch);
//	printf("ù ��° �� ==> ");
//	scanf("%d", &a);
//	printf("�� ��° �� ==> ");
//	scanf("%d", &b);
//	printf("�� ��° �� ==> ");
//	scanf("%d", &c);
//	if ((ch == '+') || (ch == '*')) {
//		if (ch == '+') printf("%d %c %d %c %d = %d \n", a, ch, b, ch, c, a + b + c);
//		else printf("%d %c %d %c %d = %d \n", a, ch, b, ch, c, a * b * c);
//	}
//	else {
//		printf("������ �Է� �����Դϴ�. \n");
//	}
//	 
//	// 7) �ڵ� �ۼ� ����
//	int a, b;
//	printf("## �� ���� ������ ##\n");
//	printf("ù ��° �� : ");
//	scanf("%d", &a);
//	printf("�� ��° �� : ");
//	scanf("%d", &b);
//	int i;
//	if (b == 0) {
//		for (i = 1; i <= 2; i++) {
//			printf("�ٽ� �Է��ϼ���. �� ��° �� : ");
//			scanf("%d", &b);
//			if (b != 0) {
//				printf("%d / %d = %.2f \n", a, b, a / (float)b);
//				break;
//			}
//		} if (b==0) printf("0�� �� �� �Է��߽��ϴ�. �����մϴ�. \n");
//	}
//	else {
//		printf("%d / %d = %.2f \n", a, b, a / (float)b);
//	}
//
//
//
//	// chapter 03 ����)
//	printf("%d + %d = %d, %d / %d = %.1f \n", 100, 200, 100 + 200, 100, 200, 100 / (float)200);
//	printf("\n");
//
//	// %d, %x, %o / %f, %lf / %c = ' ' / %s = " "
//
//	printf("%d / %d = %f \n", 100, 200, 0.5);
//	printf("%c %c \n", 'a', 'K');
//	printf("%s %s \n", "�ȳ�", "C ���");
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
//	// \n / \t / \b / \r ���� �� ������ �̵� / \a / \\ / \' / \"
//
//	int a, b;
//	float c, d;
//	a = 100;
//	b = a;
//	c = 111.1;
//	d = c;
//	printf("a, b�� �� ==> %d, %d \n", a, b);
//	printf("c, d�� �� ==> %5.1f, %5.1f \n", c, d);
//
//	int a, b, c, d;
//	a = 100 + 100;
//	b = a + 100;
//	c = a + b - 100;
//	d = a + b + c;
//	printf("a, b, c, d�� �� ==> %d, %d, %d, %d\n", a, b, c, d);
//	a = b = c = d = 100;
//	printf("a, b, c, d�� �� ==> %d, %d, %d, %d\n", a, b, c, d);
//	a = 100;
//	a = a + 200;
//	printf("a�� �� ==> %d \n", a);
//
//	// 10���� 147�� 2������ ��ȯ
//	// 147 -> 0000 0000 0000  ->  2048 1024 512 256 / 128 64 32 16/ 8 4 2 1
//	// 128+16+2+1 -> 1001 0011
//
//	// 2���� 1001 0011�� 16������ ��ȯ
//	// 4�ڸ����� �ڸ��� ��� ���� -> 1001 0011 -> 8 4 2 1 / 8 4 2 1 -> 9 3
//
//	// 16���� 93�� 10������ ��ȯ -> �ڸ��� ��� 1�� �ڸ��� 16^0(==1) * 3 = 3, 10�� �ڸ��� 16^1(==16) * 9 = 144. 144 + 3 = 147.
//
//	// 16���� 3A�� 2������? (���� 10���� -> 58 -> 32 + 16 + 8 + 2 -> 0011 1010 (0~F, 10~F, 20~F = 16*3 = 48 + 30~A(==10) == 58)
//	// 2���� 1010 1111�� 16������? 10 -> A, 8+4+2+1 -> 15 -> F == 16���� AF. 10�����δ�? 10*16=160, 15*1=15, 160+15=175
//
//	// 10���� 20�� 2������? 16+4 == 0001 0100
//	// 16���� F7A�� 2������? 1111 0111 1010
//
//	// �ƽ�Ű�ڵ� 0 == 48, A == 65, a == 97
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
//	printf("%c�� �ƽ�Ű�ڵ� ���� %d�Դϴ�. \n", d, d);
//
//
//	// ��������04)
//	// #define _CRT_SECURE_NO_WARNINGS
//	int num;
//	printf("������ �Է��ϼ��� ==> ");
//	scanf("%d", &num);
//	printf("10���� ==> %d \n", num);
//	printf("16���� ==> %x \n", num);
//	printf("8���� ==> %o \n", num);
//
//
//	// ��������05)
//	int type; 
//	int num;
//	printf("�Է����� ���� <1>10 <2>16 <3>8 : ");
//	scanf("%d", &type);
//	
//	if (type <= 3 && type > 0) {
//		printf("�� �Է�: ");
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
//		printf("Ÿ�� ���� �����Դϴ�.\n");
//		return 0;
//	}
//	
//	printf("10���� ==> %d \n", num);
//	printf("16���� ==> %x \n", num);
//	printf("8���� ==> %o \n", num);
//
//
//	// ��������06)
//	printf("int ���� ũ�� \t\t\t ==> %d \n", sizeof(int));
//	printf("short ���� ũ�� \t\t\t ==> %d \n", sizeof(short));
//	printf("long int ���� ũ�� \t\t\t ==> %d \n", sizeof(long int));
//	printf("float ���� ũ�� \t\t\t ==> %d \n", sizeof(float));
//	printf("double ���� ũ�� \t\t\t ==> %d \n", sizeof(double));
//	printf("char ���� ũ�� \t\t\t ==> %d \n", sizeof(char));
//
//
//	// ��������07)
//	char str[10];
//	printf("���ڿ��� �Է� ==> ");
//	scanf("%s", &str);
//	
//	int i;
//	for (i = strlen(str)-1; i >= 0; i--) {
//		printf("%c", str[i]);
//	}
//
//
//	// chapter 03 �������� Ǯ��
//	// 1) C ��� / 200+300 / 500
//	 
//	// 2) 100 200 300 ������ / 100 200 / 100
//	 
//	// 3) 10 / 20 = 0
//	 
//	// 4) %f / %x / %s / %o
//	 
//	// 5) 04321 / _4321.7 / _Cook
//	 
//	// 6) \a / \r / \n / \'
//	 
//	// 7) char a, int b, float c; �� ���忡 ���� �Ұ�.
//	 
//	// 8) �ڵ� �ۼ� ����
//	int a, b, c, res;
//	a = b = c = 10;
//	res = a * b * c;
//	printf("��ü ���� ��� : %d \n", res);
//	 
//	// 9) 0000 0010 -> 16������ 2(16)
//	 
//	// 10) long int
//	 
//	// 11) ch1 = ch2 = 200; 127������ �ƽ�Ű �ڵ尡 ������ ���� ����
//	 
//	// 12) mystr[3] = 'C';
//	 
//	// 13) �ڵ� �ۼ� ����
//	char str[10]="VisualC++";
//	int i;
//	for (i = 0; i <= strlen(str); i=i+2) {
//		printf("%c", str[i]);
//	}
//	 
//	// 14) f111 / 111+222 / 333 /// 0123.450 /// 123.00
//	 
//	// 15-1) 111 / 300.000000
//	// 15-2) 16���� 41 -> 4*16=64, 1*1=1 -> 10���� 65 / 16���� 61 -> 6*16=96, 1*1=1 -> 10���� 97
//	//       0x41 = 65 = A, 0x61 = 97 = a.   ->   tol == 32, ��ҹ��ڰ� �ƽ�Ű �ڵ� ���� ����.    ��: k, Z
//	int a = 0x41, b=0x61;
//	int tol;
//	tol = b - a;
//	printf("%c�� �ҹ��ڷ� �ٲٸ� %c\n", 'K', 'K' + tol);
//	printf("%c�� �빮�ڷ� �ٲٸ� %c\n", 'z', 'z' - tol);
//
//	
//
//	// chapter 04 ����) ���� ������, ��� ������, ���� ������, ���� ������, �� ������, ��Ʈ ������
//	int a = 10;
//	int b;
//	// a = 10
//	b = a++; // ���� �� ��� �� ���߿� ����
//	printf("a++ ==> %d\n", b); // ������ 10 ��� ���� ���� +1
//	// a = 11�� ����
//	b = ++a; // ���� ������ 1 ������Ű�� ���
//	printf("++a ==> %d\n", b); // ������ +1�� 11�� �� ���� +1 �Ǿ 12
//	// a = 12
//	b = a--; // ���� �� ��� �� ���߿� ����
//	printf("a-- ==> %d\n", b); // ������ 12 ��� ���� ���� -1
//	// a = 11�� ����
//	b = --a; // ���� ������ 1 ���ҽ�Ű�� ���
//	printf("--a ==> %d\n", b); // ������ -1�� 11�� �� ���� -1 �Ǿ 10
//	// a = 10
//
//
//	// ��Ʈ �����ڴ� 2���� ��Ʈ ���길 �ǹ���. 10����, 16����, 8���� �� 2������ �ϴ� �ٲٰ� ���� ��� ���� ������ �ٽ� ���� ���·� �ٲ㼭 ���.
//	// ��Ʈ ���� & : �� 2������ ���� �ڸ����� 1�� �ڸ��� 1 == 0000�� ������ �ϸ� ������ 0�� ���´�.
//	printf("123 & 456 = %d \n", 123 & 456);
//	// 123 0000 0000 -> 64 + 32 + 16 + 8 + 2 + 1 = 0111 1011 = 001111011(2)
//	// 456 0000 0000 -> 256 + 128 + 64 + 8 =  0001 1100 1000 = 111001000(2)  ->  0 0100 1000(2) -> 64+8 = 72
//	
//	// ��Ʈ ���� | : �� 2���� �� �ϳ��� 1�� �ִ� �ڸ��� 1
//	printf("123 | 456 = %d \n", 123 | 456);
//	// 123 0000 0000 -> 64 + 32 + 16 + 8 + 2 + 1 = 0111 1011 = 001111011(2)
//	// 456 0000 0000 -> 256 + 128 + 64 + 8 =  0001 1100 1000 = 111001000(2)  ->  1 1111 1011(2) -> 256 + 128 + 64 + 32 + 16 + 8 + 2 + 1 = 507
//	
//	// ��Ʈ ��Ÿ�� ���� ^ : �� 2������ ���� �ڸ��� 0, 1�� ���� �ٸ� �� 1
//	printf("123 ^ 456 = %d \n", 123 ^ 456);
//	// 123 0000 0000 -> 64 + 32 + 16 + 8 + 2 + 1 = 0111 1011 = 001111011(2)
//	// 456 0000 0000 -> 256 + 128 + 64 + 8 =  0001 1100 1000 = 111001000(2)  ->  1 1011 0011(2) -> 256 128 32 16 2 1 = 435
//	
//	// ��Ʈ ���� ~ : �ϳ��� 2������ 0�� 1�� ������ �ٲ� ��. ���� ����� ��ȯ�ȴ�. ������ ���� 1�� ����, 1�� ���� �� ���� 2�� ����.
//	int a = 12345;
//	printf("%d \n", ~a); // -12346
//	printf("%d \n", ~a + 1); // -12345
//
//	// ��Ʈ ���� ����Ʈ << : �ϳ��� 2������ �ڸ����� ����(����)���� �� ĭ�� �ű�� ��. �� �ڸ��� 0���� ä����. ����Ʈ �� ������ 2^n ���� �Ͱ� ����.
//	// int a = 10 / a << 1 == 20 // a << 2 == 40 // a << 3 == 80
//	// ��Ʈ ������ ����Ʈ >> : �ϳ��� 2������ �ڸ����� ������(����)���� �� ĭ�� �ű�� ��. �и� ���ڸ��� �����. ����Ʈ �� ������ 2^n ���� �Ͱ� ����.
//	// int a = 10 / a >> 1 == 5 // a >> 2 == 2 // a >> 3 == 1 // a >> 4 == 0 (������ �Ҽ��� ���� ��)
//
//	 //������ �켱����
//	 //1) () [] . ->	1�� ������
//	 //2) + - ++ -- ~ ! * &		���� ������(������ ��� �տ� �ٴ� ��. ���, ����, ��ĵ�ּҰ� ��. ������ ���� ��� �����ʺ��� ����.)
//	 //3) * / %		��� ������
//	 //4) + -		��� ������
//	 //5) >> <<		��Ʈ ����Ʈ ������
//	 //6) < <= > >= �� ������
//	 //7) == !=		���� ������
//	 //8) &			��Ʈ ����
//	 //9) ^			��Ʈ ��Ÿ�� ����
//	 //10) |		��Ʈ ����
//	 //11) &&		�� ������
//	 //12) ||		�� ������
//	 //13) ?:		���� ������
//	 //14) = + =+ *= /= %= &= ^= |= <<= >>= ���� ������ (������ ���� ��� �����ʺ��� ����.)
//	 //15) ,		�޸� ������
//	
//
//	// ��������08)
//	float num1, num2;
//	printf("ù ��° ��� ��: ");
//	scanf("%f", &num1);
//	printf("�� ��° ��� ��: ");
//	scanf("%f", &num2);
//	printf("%5.2f + %5.2f = %5.2f \n", num1, num2, num1 + num2);
//	printf("%5.2f - %5.2f = %5.2f \n", num1, num2, num1 - num2);
//	printf("%5.2f * %5.2f = %5.2f \n", num1, num2, num1 * num2);
//	printf("%5.2f / %5.2f = %5.2f \n", num1, num2, num1 / num2);
//	printf("%5.2f %% %5.2f = %5.2f \n", num1, num2, (int)num1 % (int)num2);
//
//
//	// ��������09)
//	int money, change;
//	printf("��ȯ�� ����? ");
//	scanf("%d", &money);
//
//	printf("���� ��¥�� ==> %d�� \n", money / 500);
//	change = money % 500;
//	printf("�� ��¥�� ==> %d�� \n", change / 100);
//	change = change % 100;
//	printf("���� ��¥�� ==> %d�� \n", change / 50);
//	change = change % 50;
//	printf("�� ��¥�� ==> %d�� \n", change / 10);
//	printf("�ٲ��� ���� �� ==> %d�� \n", change % 10);
//
//
//	// ��������10)
//	int year;
//	printf("���� �Է�: ");
//	scanf("%d", &year);
//	if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
//		printf("%d���� �����Դϴ�. \n", year);
//	}
//	else printf("%d���� ������ �ƴմϴ�. \n", year);
//
//	
//	// chapter 04 �������� Ǯ��
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
//	// 8) () ++ % >> &(����) && ?: +=
//	 
//	// 9) _9.00 / -5.00 / 24.00
//	float a = 2.0, b = 3.0, c = 4.0;
//	printf("%5.2f \n", a + b + c);
//	printf("%5.2f \n", a - b - c);
//	printf("%5.2f \n", a * b * c);
//	 
//	// 10) �ڵ� �ۼ� ����
//	int money, change;
//	printf("����� ��ȯ�� ����? ");
//	scanf("%d", &money);
//	printf("���� ��¥�� ==> %d�� \n", money / 50000);
//	change = money % 50000;
//	printf("�� ��¥�� ==> %d�� \n", change / 10000);
//	change = change % 10000;
//	printf("��õ ��¥�� ==> %d�� \n", change / 5000);
//	change = change % 5000;
//	printf("õ ��¥�� ==> %d�� \n", change / 1000);
//	change = change % 1000;
//	printf("����� �ٲ��� ���� �� ==> %d�� \n", change);
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
//	//   0123456789ABCDEF (10 ����) 11 12 13 14 15 16 17 18 19 1A 1B 1C 1D 1E 1F == 31
//	printf("%d \n", 0x1F >> 4);
//	printf("%d \n", 0x1F << 1);
//
//
//	// chapter 05 ����) 
//	// if��
//	// �߰�ȣ�� ��� ó�� �� �ϸ� if ���ǹ� �ٷ� �Ʒ� �� ���常 ����.
//	int a;
//	printf("���� �Է�: ");
//	scanf("%d", &a);
//	if (a % 2 == 0) {
//		printf("¦�� \n");
//	}
//	else {
//		printf("Ȧ�� \n");
//	}
//
//	int score;
//	printf("���� �Է�: ");
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
//	printf("�����Դϴ�. \n");
//
//	// switch(���ǰ�) {case '': ~~; break; case '' ... default: ~~; break;}
//	int year;
//	printf("�������: ");
//	scanf("%d", &year);
//
//	switch (year % 12) {
//	case 0: printf("�����̶� \n"); break;
//	case 1: printf("�߶� \n"); break;
//	case 2: printf("���� \n"); break;
//	case 3: printf("������ \n"); break;
//	case 4: printf("��� \n"); break;
//	case 5: printf("�Ҷ� \n"); break;
//	case 6: printf("ȣ���̶� \n"); break;
//	case 7: printf("�䳢�� \n"); break;
//	case 8: printf("��� \n"); break;
//	case 9: printf("��� \n"); break;
//	case 10: printf("���� \n"); break;
//	case 11: printf("��� \n"); break;
//	}
//	
//	
//	// ��������11, 13)
//	int a, b;
//	char ch;
//	
//	printf("ù ��° ��: ");
//	scanf("%d", &a);
//	printf("������ �Է�: ");
//	scanf(" %c", &ch);
//	printf("�� ��° ��: ");
//	scanf("%d", &b);
//
//	switch (ch) {
//	case '+': printf("%d %c %d = %d \n", a, ch, b, a + b); break;
//	case '-': printf("%d %c %d = %d \n", a, ch, b, a - b); break;
//	case '*': printf("%d %c %d = %d \n", a, ch, b, a * b); break;
//	case '/':
//		switch (b) {
//		case 0: printf("0���� ���� �� �����ϴ�. \n"); break;
//		default: printf("%d %c %d = %.2f \n", a, ch, b, a / (float)b); break;
//		} break;
//	case '%':
//		switch (b) {
//		case 0: printf("0���� ���� �� �����ϴ�. \n"); break;
//		default: printf("%d %c %d = %d \n", a, ch, b, a % b); break;
//		} break;
//	default: printf("������ �Է� �����Դϴ�. \n");
//	}
//
//
//	// ��������12)
//	int a, b;
//	char ch;
//	
//	printf("ù ��° ��: ");
//	scanf("%d", &a);
//	printf("������ �Է�: ");
//	scanf(" %c", &ch);
//	printf("�� ��° ��: ");
//	scanf("%d", &b);
//
//	if (b == 0 && (ch == '/' || ch == '%')) {
//			printf("0���� �����ų� �������� ���� �� �����ϴ�. \n");
//	}
//	else {
//		if (ch == '+') printf("%d %c %d = %d \n", a, ch, b, a + b);
//		else if (ch == '-') printf("%d %c %d = %d \n", a, ch, b, a - b);
//		else if (ch == '*') printf("%d %c %d = %d \n", a, ch, b, a * b);
//		else if (ch == '/') printf("%d %c %d = %.2f \n", a, ch, b, a / (float)b);
//		else if (ch == '%') printf("%d %c %d = %d \n", a, ch, b, a % b);
//		else printf("������ �Է� �����Դϴ�. \n");
//	}
//	
//
//	// chapter 05 �������� Ǯ��
//	// 1) �ƽ��׿� / ���α׷��� �����մϴ�.
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
//	// 8) 20�� 30�� 40�� 50�� �̻�
//
//	// 9) �ڵ� �ۼ� ����
//	char ch;
//	printf("A, B, C �� �ϳ� �Է�: ");
//	scanf(" %c", &ch);
//	switch (ch) {
//	case 'A': printf("AŰ �Է���. \n"); break;
//	case 'B': printf("BŰ �Է���. \n"); break;
//	case 'C': printf("CŰ �Է���. \n"); break;
//	default: printf("�߸� �Է�. \n"); break;
//	}
//
//	// 10) �ڵ� �ۼ� ����
//	char ch = 'Z';
//	if (ch == 'A') printf("AŰ �Է���. \n");
//	else if (ch == 'B') printf("BŰ �Է���. \n");
//	else if (ch == 'C') printf("CŰ �Է���. \n");
//	else printf("�߸� �Է�. \n");
//
//	// 11-1) 2��
//	// 11-2) 2�� 3�̴�
//
//	// 12) if(a < 200) { ~~; ~~; }
//
//
//
//	// chapter 06 ����) for(�ʱ갪 ; ���ǽ� ; ������) -> �ʱ�-����-����-����-���� �ݺ���. �ð� �ݴ� ����.
//	int i, num1, num2, num3;
//	int hap = 0;
//
//	////for (i = 501; i <= 1000; i += 2) {
//	////	hap += i;
//	////}
//	////printf("500���� 1000���� Ȧ���� ��: %d \n", hap);
//
//	//for (i = 3; i <= 100; i += 3) {
//	//	hap += i;
//	//}
//	//printf("1���� 100���� 3�� ����� ��: %d \n", hap);
//
//	printf("����, ������, ������: ");
//	scanf("%d %d %d", &num1, &num2, &num3);
//
//	for (i = num1; i <= num2; i = i + num3) {
//		hap += i;
//	}
//	printf("%d���� %d���� %d�� ������ ���� ���� %d \n", num1, num2, num3, hap);int i, num1, num2, num3;
//	int hap = 0;
//
//	////for (i = 501; i <= 1000; i += 2) {
//	////	hap += i;
//	////}
//	////printf("500���� 1000���� Ȧ���� ��: %d \n", hap);
//
//	//for (i = 3; i <= 100; i += 3) {
//	//	hap += i;
//	//}
//	//printf("1���� 100���� 3�� ����� ��: %d \n", hap);
//
//	printf("����, ������, ������: ");
//	scanf("%d %d %d", &num1, &num2, &num3);
//
//	for (i = num1; i <= num2; i = i + num3) {
//		hap += i;
//	}
//	printf("%d���� %d���� %d�� ������ ���� ���� %d \n", num1, num2, num3, hap);
//
//	int i;
//	int dan;
//
//	printf("�� ��? ");
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
//		printf("### %d�� ### \n", i);
//		for (j = 1; j <= 9; j++) {
//			printf("%d * %d = %d \n", i, j, i * j);
//		}
//		printf("\n");
//	} // ���� ������
//
//
//	int i, j;
//	for (j = 2; j <= 9; j++) {
//		printf("### %d�� ### \t", j);
//	} 
//	printf("\n");
//	for (i = 1; i <= 9; i++) {
//		for (j = 2; j <= 9; j++) {
//			printf("%d * %d = %d \t", j, i, i * j);
//		} 
//		printf("\n");
//	} // ���� ������
//
//
//	// for(�ʱ갪1, �ʱ갪2 ; ���ǽ� ; ������1, ������2)
//	// for�� ���� �ʱ갪 �̸� �ʱ�ȭ, �������� for�� ���ο� ���� ���� ����. -> for( ; ���ǽ� ; )
//	// �ƿ� ���ǽı��� ������ ���� ����.
//
//
//	// ��������15)
//	int i;
//	printf("--------------------- \n");
//	printf("10����  16����   ���� \n");
//	printf("--------------------- \n");
//	for (i = 0; i <= 127; i++) {
//		printf("%5d %5x %5c", i, i, i);
//		printf("\n");
//	}
//	
//	
//	// ��������16)
//	char str[100];
//	int i;
//
//	printf("���ڿ� �Է�: ");
//	scanf("%s", &str);
//	printf("�Ųٷ� ���: ");
//
//	for (i = strlen(str) - 1; i >= 0; i--) {
//		printf("%c", str[i]);
//	}
//
//
//	// chapter 06 �������� Ǯ��
//	// 1) 4��
//	 
//	// 2) i=1 == �ʱ갪 �ʱ�ȭ
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
//	// 8) �ڵ� �ۼ� ����
//	int i, j;
//	for (j = 9; j > 1; j--) {
//		printf("### %d�� ### \t", j);
//	} 
//	printf("\n");
//	for (i = 9; i > 0; i--) {
//		for (j = 9; j > 1; j--) {
//			printf("%d * %d = %d \t", j, i, i * j);
//		} 
//		printf("\n");
//	} // ���� �Ųٷ� ������
//	 
//	// 9) �ڵ� �ۼ� ����
//	char str[100];
//	int i;
//	
//	printf("���ڿ� �Է�: ");
//	scanf("%s", &str);
//	printf("�Ųٷ� ���: ");
//
//	for (i = strlen(str) - 1; i >= 0; i--) {
//		if (str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9') {
//			printf("#");
//		}
//		else printf("%c", str[i]);
//	}
//	printf("\n");
//	
//	// 10) �ڵ� �ۼ� ����
//	int i;
//	int odd_hap = 0;
//	int even_hap = 0;
//
//	for (i = 1; i <= 100; i++) {
//		if (i % 2 == 0) even_hap += i;
//		else odd_hap += i;
//	}
//	printf("Ȧ���� ���� %d, ¦���� ���� %d \n", odd_hap, even_hap);
//	
//	// 11) �ڵ� �ۼ� ����
//	int i;
//	int hap = 0;
//
//	for (i = 1; i <= 1000; i++) {
//		if ((i % 3 == 0) || (i % 7 == 0)) {
//			hap += i;
//		}
//	}
//	printf("3�� ��� �Ǵ� 7�� ����� ��: %d \n", hap);
//
//
//	
//	// chapter 07 ����) while, do~while
//	// int i = 0; while(���ǽ�) { ~~; ������ }
//	// while(1) == ���̶� ���� ����.
//		
//	int a, b;
//	char ch, answer;
//
//	printf("���� �Է�: ");
//	scanf("%d %c %d", &a, &ch, &b);
//
//	while (1) {
//		if ((b == 0) && ((ch == '/') || (ch == '%'))) {
//			printf("0���δ� ����� �� �����ϴ�. \n");
//		}
//		else {
//			switch (ch) {
//			case '+': printf("%d %c %d = %d \n", a, ch, b, a + b); break;
//			case '-': printf("%d %c %d = %d \n", a, ch, b, a - b); break;
//			case '*': printf("%d %c %d = %d \n", a, ch, b, a * b); break;
//			case '/': printf("%d %c %d = %.2f \n", a, ch, b, a / (float)b); break;
//			case '%': printf("%d %c %d = %d \n", a, ch, b, a % b); break;
//			default: printf("������ ���� �Է��Դϴ�. \n"); break;
//			}
//		}
//		printf("\n");
//		printf("�ٽ� ����Ͻðڽ��ϱ�? (Y/N) : ");
//		scanf(" %c", &answer);
//		if (answer == 'N' || answer == 'n') {
//			return 0;
//		}
//		printf("\n���� �Է�: ");
//		scanf("%d %c %d", &a, &ch, &b);
//	}
//
//
//	// do~while���� �� ���� ������� ������ �� ���� �� �����ϴ� ��.
//	int a = 100;
//	do {
//		printf("�����̶� do~while�� �ۿ��� �� �� ���� \n");
//	} while (a == 200);
//
//
//	int menu;
//	do {
//		printf("�ֹ��Ͻðڽ��ϱ�? \n");
//		printf("<1>ī��� <2>īǪġ�� <3>�Ƹ޸�ī�� <4>�ֹ��׸� : ");
//		scanf("%d", &menu);
//		
//		switch (menu) {
//		case 1: printf("�ֹ��Ͻ� ī��� ���Խ��ϴ�. \n"); break;
//		case 2: printf("�ֹ��Ͻ� īǪġ�� ���Խ��ϴ�. \n"); break;
//		case 3: printf("�ֹ��Ͻ� �Ƹ޸�ī�� ���Խ��ϴ�. \n"); break;
//		case 4: printf("�ֹ� �׸� �ްڽ��ϴ�. \n"); break;
//		default: printf("�ش� �޴��� �������� �ʽ��ϴ�. \n"); break;
//		}
//		printf("\n");
//	} while (menu != 4);
//
//
//	int menu;
//
//	printf("�ֹ��Ͻðڽ��ϱ�? \n");
//	printf("<1>ī��� <2>īǪġ�� <3>�Ƹ޸�ī�� <4>�ֹ��׸� : ");
//	scanf("%d", &menu);
//	
//	for (; ; ) {
//		if (menu >= 1 && menu <= 4) {
//			if (menu == 1) {
//				printf("�ֹ��Ͻ� ī��� ���Խ��ϴ�. \n");
//			}
//			else if (menu == 2) {
//				printf("�ֹ��Ͻ� īǪġ�� ���Խ��ϴ�. \n");
//			}
//			else if (menu == 3) {
//				printf("�ֹ��Ͻ� �Ƹ޸�ī�� ���Խ��ϴ�. \n");
//			}
//			else if (menu == 4) {
//				printf("�ֹ� �׸� �ްڽ��ϴ�. \n");
//				break;
//			}
//			printf("\n");
//			printf("�ֹ��Ͻðڽ��ϱ�? \n");
//			printf("<1>ī��� <2>īǪġ�� <3>�Ƹ޸�ī�� <4>�ֹ��׸� : ");
//			scanf("%d", &menu);
//		}
//		else {
//			printf("�ش� �޴��� �������� �ʽ��ϴ�. \n");
//		}
//	}
//
//	
//	// ��Ÿ ���
//	// 1) break; �ݺ��� Ż��. ���ϴ� ���� ���� �� �ݺ� �׸� ���� �� �� ����.
//	int hap = 0;
//	int i;
//
//	for (i = 1; i <= 100; i++) {
//		hap += i;
//		if (hap >= 1000) break;
//	}
//	printf("1���� 100�� �տ��� ���ʷ� 1000�� �Ѵ� ��ġ�� %d, �� ��ġ������ ���� %d�̴�. \n", i, hap);
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
//	printf("1���� 100�� �տ��� ���ʷ� 1000�� �Ѵ� ��ġ�� %d, �� ��ġ������ ���� %d�̴�. \n", i, hap);
//
//
//	// 2) continue; �ݺ������� ���ư�.
//	int hap = 0;
//	int i;
//
//	for (i = 1; i <= 100; i++) {
//		if (i % 3 == 0)
//			continue;
//		hap += i; // 3�� ����� �Ʒ� ���� �� �ϰ� �ǳʶڴ�.
//	}
//	printf("1���� 100�� �տ��� 3�� ����� ������ ���� %d�̴�. \n", hap);
//
//
//	// 3) goto ~~; ������ ��ġ�� �ǳʶ�. ���� �ߴ��ϰ� ���� ������ ���̺�� �̵���.
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
//	printf("1���� %d������ ���� 2000�� �Ѵ� %d�Դϴ�. \n", i, hap);
//
//	// 4) return 0; ���� �Լ��� ȣ���� ������ ���ư�.
//	// ���� �ǽ������� main() �Լ��� ��������� �� �Լ��� ���������� ���α׷��� ����Ǵ� ��.
//	// return �Ʒ� ������ ������� ����.
//
//
//	//// ��������17)
//	int start, end, num, i;
//	int hap = 0;
//
//	printf("�հ��� ���۰�, ����, ��� : ");
//	scanf("%d %d %d", &start, &end, &num);
//
//	for (i = start; i <= end; i++) {
//		if (i % num == 0) {
//			hap += i;
//		}
//	}
//	printf("%d���� %d���� %d ����� �� ==> %d \n", start, end, num, hap);
//
//
//	int start, end, num;
//	int hap = 0;
//	
//	printf("�հ��� ���۰�, ����, ��� : ");
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
//	printf("%d���� %d���� %d ����� �� ==> %d \n", start, end, num, hap);
//
//
//	// ��������18)
//	int big = 0;
//	int small = 0;
//	int num = 0;
//	char str[100];
//
//	printf("���ڿ� �Է�(100�� �̳�): ");
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
//	printf("�빮�� %d��, �ҹ��� %d��, ���� %d�� \n", big, small, num);
//
//
//	// ��������19)
//	char str[100];
//	char ch;
//
//	printf("���ڸ� �Է��ϼ��� : ");
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
//	printf("���ڸ� �Է��ϼ��� : ");
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
//	printf("���ڸ� �Է��ϼ��� : ");
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
//	// chapter 07 �������� Ǯ��
//	// 1) while(���ǽ�)
//	// 
//	// 2) 
//	// �ʱ갪;
//	// while(���ǽ�){
//	// ���๮;
//	// ������;
//	// }
//	//
//	// 3) �ڵ� �ۼ� ����
//	int i = 0;
//	while (i < 5) {
//		printf("%d \n", i);
//		i++;
//	}
//	// 4) �ڵ� �ۼ� ����
//	int hap = 0;
//	int i;
//
//	i = 100;
//	while (i <= 200) {
//		hap += i;
//		i++;
//	}
//	printf("100���� 200������ ��: %d \n", hap);
//	// 5) for(;;), while(1)
//	// 6) 123, ���� ����, 0
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
//	// 7) �ڵ� �ۼ� ����
//	int start, end;
//	printf("����, ��: ");
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
//	// 8) �ڵ� �ۼ� ����
//	int i, k;
//	char heart[100];
//	printf("���ڸ� �Է��ϼ��� : ");
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
//	printf("���ڸ� �Է��ϼ��� : ");
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
//	// 9) �ڵ� �ۼ� ����
//	char str[100];
//	char ch;
//
//	int big = 0, small = 0, num = 0, etc = 0;
//
//	printf("���ڿ� �Է�: ");
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
//	printf("�빮�� %d��, �ҹ��� %d��, ���� %d��, �� �� %d��. \n", big, small, num, etc);
//	
//	// 10) 12��
//	int i, k;
//	i = 0;
//	while (i < 3) {
//		k = 0;
//		while (k < 4) {
//			printf("��ø while�� \n");
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
//	printf("5����� 8����� �� : %d \n", hap);
//	 
//	 
//	// �ڡ١ڡ� ���� ��ȯ, ��Ʈ ������, ������ ����, do~while, ��Ÿ ����� ���ؼ� �ٽ� �����ϱ�.
//}