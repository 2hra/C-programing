//#define _CRT_SECURE_NO_WARNINGS 
// 
//#include <stdio.h> 
// 
//void main() { 
//	char s[100]; // �� �迭 ����
//	int tmp = 0; // �ƽ�Ű �ڵ� �� �� ��� �� �� �׸� ���� ����
//	 
//	char* p; // �迭 �ּҰ� ������ ������ ����
//	p = s; // �迭 �ּҰ� ����
//	 
//	int i, k; // for���� ����� ���� ����
//	 
//	printf("���� �� �迭: "); 
//	gets(s); 
//	
//	for (i = 0; i <= strlen(s); i++) { // �迭 ũ�⸸ŭ for�� ������
//		for (k = i + 1; k < strlen(s); k++) { // �迭�� �ٷ� ���� ���� for��
//			if (*(p + i) < *(p + k)) { // �迭 �ּҰ� �� �� ���ؼ� ������ �� �� ��ġ �ٲٱ� 
//				tmp = *(p + i); 
//				*(p + i) = *(p + k); 
//				*(p + k) = tmp; 
//			} 
//		} 
//	} 
//	 
//	printf("���� �� �迭: "); 
//	for (i = 0; i <= strlen(s); i++) { // ������ ����ؼ� �迭 �� �ּҰ����� �ϳ��� ���
//		printf("%c", *(p + i)); 
//	} 
//	
//}  