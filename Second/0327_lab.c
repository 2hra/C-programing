//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//void main() {
//
//	int answer, num;
//
//	printf("진수값을 입력하십시오. 10진수, 16진수, 8진수 ==> ");
//	scanf("%d", &answer);
//
//	if (answer == 10 || answer == 16 || answer == 8) {
//		if (answer == 10) {
//			printf("10진수값 입력하십시오. : ");
//			scanf("%d", &num);
//		}
//		else if (answer == 16) {
//			printf("16진수값 입력하십시오. : ");
//			scanf("%X", &num);
//		}
//		else if (answer == 8) {
//			printf("8진수값 입력하십시오. : ");
//			scanf("%o", &num);
//		}
//		printf("10진수 ==> %d \n", num);
//		printf("16진수 ==> %X \n", num);
//		printf("8진수 ==> %o \n", num);
//		}
//	else {
//		printf("진수값 입력이 잘못되었습니다. 다시 입력하여 주십시오. ==> ");
//		scanf("%d", &answer);
//		if (answer == 10 || answer == 16 || answer == 8) {
//			if (answer == 10) {
//				printf("10진수값 입력하십시오. : ");
//				scanf("%d", &num);
//			}
//			else if (answer == 16) {
//				printf("16진수값 입력하십시오. : ");
//				scanf("%X", &num);
//			}
//			else if (answer == 8) {
//				printf("8진수값 입력하십시오. : ");
//				scanf("%o", &num);
//			}
//			printf("10진수 ==> %d \n", num);
//			printf("16진수 ==> %X \n", num);
//			printf("8진수 ==> %o \n", num);
//		}
//		else {
//			printf("진수값 입력이 잘못되었습니다. 다시 입력하여 주십시오. ==> ");
//			scanf("%d", &answer);
//			if (answer == 10 || answer == 16 || answer == 8) {
//				if (answer == 10) {
//					printf("10진수값 입력하십시오. : ");
//					scanf("%d", &num);
//				}
//				else if (answer == 16) {
//					printf("16진수값 입력하십시오. : ");
//					scanf("%X", &num);
//				}
//				else if (answer == 8) {
//					printf("8진수값 입력하십시오. : ");
//					scanf("%o", &num);
//				}
//				printf("10진수 ==> %d \n", num);
//				printf("16진수 ==> %X \n", num);
//				printf("8진수 ==> %o \n", num);
//			}
//			else {
//				printf("진수값 입력이 잘못되었습니다. 프로그램을 종료합니다. \n");
//			}
//		}
//	}
//}