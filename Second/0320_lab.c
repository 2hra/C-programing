//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void main() 
//{
//	int a, b;
//	int result;
//	char k;
//
//	printf("ù ��° ����� �� ==> ");
//	scanf("%d", &a);
//	printf("+ - * / %% ==> ");
//	scanf(" %c", &k);
//	printf("�� ��° ����� �� ==> ");
//	scanf("%d", &b);
//
//	if (k == '+') { 
//		result = a + b;
//		printf("�������� %d�Դϴ�. \n", result);
//	}
//
//	if (k == '-') {
//		result = a - b;
//		printf("�������� %d�Դϴ�. \n", result);
//	}
//
//	if (k == '*') {
//		result = a * b;
//		printf("�������� %d�Դϴ�. \n", result);
//	}
//
//	if (k == '/') {
//		if (b != 0) {
//			result = a / b;
//			printf("���������� %d�Դϴ�. \n", result);
//		}
//		else {
//			printf("0���� ������ �� �˴ϴ�. \n�ٽ� �Է��� �ּ��� ==> ");
//			scanf("%d", &b);
//			if (b != 0) {
//				result = a / b;
//				printf("���������� %d�Դϴ�. \n", result);
//			}
//			else {
//				printf("0���� ������ �� �˴ϴ�. \n�ٽ� �Է��� �ּ��� ==> ");
//				scanf("%d", &b);
//				if (b != 0) {
//					result = a / b;
//					printf("���������� %d�Դϴ�. \n", result);
//				}
//				else {
//					printf("0���� ������ �� �˴ϴ�. �����մϴ�.\n");
//				}
//			}
//		}
//	}
//
//	if (k == '%') {
//		result = a % b;
//		printf("���������� %d�Դϴ�. \n", result);
//	}
//}