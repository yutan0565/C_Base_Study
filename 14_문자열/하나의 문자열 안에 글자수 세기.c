#include <stdio.h>

int main(void){
	
	char input[1001];
	gets(input); // input �迭 �ȿ�, ���� ĥ�� ���� ��� ���ڰ� ��
	int count = 0;
	 // '\n�̰Ŵ� null�ϰ� �Ȱ��� �ǹ���,  ���ڰ� �ȵ� �κ��� ��� null ������ 
	while(input[count] != '\0'){    
		count++;
	}
	
	printf("�Է��� ���ڿ��� ���̴� %d�Դϴ�.\n",count);
	printf("�Է��� ���ڿ� : %s",input);
	return 0;
}
