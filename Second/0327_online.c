//// 230327 4���� ����
// 
//#define _CRT_SECURE_NO_WARNINGS
//#include <string.h>
//#include <stdio.h>
//
//void main() 
//{
//	// 4-1) ���� �ڷ���
//	int a = 100, b = 200;
//	float result;
//
//	result = a / b; 
//
//	printf("%f \n", result);
//	// �������� ���� ����� �Ǽ��� ������ ���鼭 0.5��
//	// �Ҽ��� ��������   0���� �νĵǾ� 0.000000���� ��µ�.
//
//	
//	float c = 0.1234567890123456789012345f;
//	double d = 0.1234567890123456789012345;
//
//	printf("%30.25f \n", c); // �ϰ� �ڸ������� ����, �ڴ� �����Ⱚ
//	printf("%30.25lf \n", d); // ���ټ� �ڸ������� ����.
//
//
//
//	// 4-2) �������� �ƽ�Ű �ڵ�
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
//	// ���� 3-13)
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
//	printf("%c�� ASCII���� %d �Դϴ� \n", d, d); 
//	// #�� ASCII���� 35 �Դϴ�
//
//
//	// �⺻ 3-14) ���ڿ� 
//	char str1[10];
//	char str2[10];
//	char str3[10] = "CookBook";
//
//	strcpy(str1, "Basic-C"); // ���� #include <string.h> �߰� �ʼ�
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
//	// ���� 3-15) ���ڿ� ���� ���� 2
//	char str[10] = "0123456789";
//
//	printf("str ==> %s \n", str); // \0 ���๮�� ��� �ڿ� �����Ⱚ ���
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
//	// ���� 04) �������� ����ϴ� ���α׷�
//	int num;
//	printf("������ �Է��ϼ��� ==> ");
//	scanf("%d", &num);
//
//	printf("10���� ==> %d \n", num);
//	printf("16���� ==> %X \n", num);
//	printf("8���� ==> %o \n", num);
//
//
//	// ���� 05) �Է��ϴ� ������ ���� ����
//	int answer, num;
//	printf("�Է����� ���� <1>10 <2>16 <3>8 : ");
//	scanf("%d", &answer);
//
//	if (answer == 1) {
//		printf("�� �Է� : ");
//		scanf("%d", &num);
//	}
//	else if (answer == 2) {
//		printf("�� �Է� : ");
//		scanf("%X", &num);
//	}
//	else if (answer == 3) {
//		printf("�� �Է� : ");
//		scanf("%o", &num);
//	}
//
//	printf("10���� ==> %d \n", num);
//	printf("16���� ==> %X \n", num);
//	printf("8���� ==> %o \n", num);
//	
//
//	// ���� 06) ������ ���� ũ�� Ȯ��
//	printf("int ���� ũ��\t\t\t ==> %d \n", sizeof(int));
//	printf("unsigned int ���� ũ��\t\t\t ==> %d \n", sizeof(unsigned int));
//	printf("short ���� ũ��\t\t\t ==> %d \n", sizeof(short));
//	printf("unsigned short ���� ũ��\t\t\t ==> %d \n", sizeof(unsigned short));
//	printf("long int ���� ũ��\t\t\t ==> %d \n", sizeof(long int));
//	printf("unsigned long int ���� ũ��\t\t\t ==> %d \n", sizeof(unsigned long int));
//	printf("float ���� ũ��\t\t\t ==> %d \n", sizeof(float));
//	printf("double ���� ũ��\t\t\t ==> %d \n", sizeof(double));
//	printf("long double ���� ũ��\t\t\t ==> %d \n", sizeof(long double));
//	printf("char ���� ũ��\t\t\t ==> %d \n", sizeof(char));
//	printf("unsigned char ���� ũ��\t\t\t ==> %d \n", sizeof(unsigned char));
//
//
//	// ���� 07) �Էµ� ���ڿ��� �Ųٷ� ���
//	char str[10] = ""; // ����ִ� ���ڿ� ����
//	int i;
//	printf("���ڿ��� �Է� ==> ");
//	scanf("%s", &str);
//
//	for (i=sizeof(str) - 1; i>=0; i--) { // ���۰�, ����, ����ġ
//		printf("%c", str[i]);
//	}
//	printf("\n");
//
//
//	 ������ �������� 05���� ����. 
//	 �������� �Է��Ͻʽÿ�. 10����, 16����, 8���� ==> 
//	 @@������ �Է��Ͻʽÿ�. : 
//	 ������ �Է��� �߸��Ǿ����ϴ�. �ٽ� �Է��Ͽ� �ֽʽÿ�. ==> 
//	 ������ �Է��� �߸��Ǿ����ϴ�. �ٽ� �Է��Ͽ� �ֽʽÿ�. ==>
//}