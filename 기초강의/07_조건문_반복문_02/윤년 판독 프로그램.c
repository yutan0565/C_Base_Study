#include <stdio.h>

int main(void){
	/*
		���� -> 4�⸶��, �׷����� 100�� ������ ���� ���⿡ �ش����� ����
		400�� ������ ���� ������ �������� ����  
	*/
	
	int year = 2021;
	if((year%4 == 0 && year % 100 != 0) || year % 400 == 0 ){
		printf("%d���� ���� �Դϴ�.\n", year);
	}else{
		printf("%d���� ������ �ƴմϴ�.\n", year);	
	}
	
	return 0;
}
