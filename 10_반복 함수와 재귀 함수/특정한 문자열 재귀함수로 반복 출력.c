#include <stdio.h>

void print(int count){
	if(count == 0){
		return;
	}else{
		printf("���ڿ��� ����մϴ�.\n");
		print(count -1); 
	}
} 

int main(void){
	int a;
	
	printf("���ڿ��� �  ��� �ұ��?");
	scanf("%d", &a);
	print(a);
	return 0;
}
