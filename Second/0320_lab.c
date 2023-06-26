//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void main() 
//{
//	int a, b;
//	int result;
//	char k;
//
//	printf("첫 번째 계산할 값 ==> ");
//	scanf("%d", &a);
//	printf("+ - * / %% ==> ");
//	scanf(" %c", &k);
//	printf("두 번째 계산할 값 ==> ");
//	scanf("%d", &b);
//
//	if (k == '+') { 
//		result = a + b;
//		printf("덧셈값은 %d입니다. \n", result);
//	}
//
//	if (k == '-') {
//		result = a - b;
//		printf("뺄셈값은 %d입니다. \n", result);
//	}
//
//	if (k == '*') {
//		result = a * b;
//		printf("곱셈값은 %d입니다. \n", result);
//	}
//
//	if (k == '/') {
//		if (b != 0) {
//			result = a / b;
//			printf("나눗셈값은 %d입니다. \n", result);
//		}
//		else {
//			printf("0으로 나누면 안 됩니다. \n다시 입력해 주세요 ==> ");
//			scanf("%d", &b);
//			if (b != 0) {
//				result = a / b;
//				printf("나눗셈값은 %d입니다. \n", result);
//			}
//			else {
//				printf("0으로 나누면 안 됩니다. \n다시 입력해 주세요 ==> ");
//				scanf("%d", &b);
//				if (b != 0) {
//					result = a / b;
//					printf("나눗셈값은 %d입니다. \n", result);
//				}
//				else {
//					printf("0으로 나누면 안 됩니다. 종료합니다.\n");
//				}
//			}
//		}
//	}
//
//	if (k == '%') {
//		result = a % b;
//		printf("나머지값은 %d입니다. \n", result);
//	}
//}