#include <stdio.h>

int main(void){
	int x = 0;
	printf("���� x�� ���� %d �Դϴ�. \n", x);
	x++;
	printf("���� x�� ���� %d �Դϴ�. \n", x);
	printf("���� x�� ���� %d �Դϴ�. \n", x++);
	printf("���� x�� ���� %d �Դϴ�.", ++x); // ���� ������ ������ ���� ��µǴ°� ���� 
	return 0;
}
