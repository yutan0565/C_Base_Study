#include <stdio.h>

int main(void){
	int x = 100;
	printf("���� x�� ���� %d �Դϴ�. \n", x);
	
	x += 50;
	printf("���� x�� ���� %d �Դϴ�. \n", x);

	x /= 50;
	printf("���� x�� ���� %d �Դϴ�. \n", x);	
	
	x *= 10;
	printf("���� x�� ���� %d �Դϴ�. \n", x);	
		
	x %= 4;
	printf("���� x�� ���� %d �Դϴ�. \n", x);	
	
	return 0;
} 
