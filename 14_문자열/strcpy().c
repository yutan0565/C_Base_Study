#include <stdio.h>
#include <string.h>

int main(void){
	
	char input[10] = "ABCE";
	char result[5] = "Love";
	
	strcpy(result, input); // �����ʿ� �ִ� ����, ���ʿ� ���� ���� 
	printf("���ڿ� ���� : %s \n",result); 
	
	return 0;
}
