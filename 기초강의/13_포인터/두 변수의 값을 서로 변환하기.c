#include <stdio.h>

// *�� �� �ּҿ� �� �ִ� ���� �ǹ� ��
//  & �׳� �ּ� ��ü�� �� 
void swap(int *x, int *y){
	int temp;
	temp = *x;  // �ش� �ּҿ� �ִ� ���� �ҷ����ֱ� 
	*x = *y;
	*y = temp;
	
	/*
	temp��  x�� �ּҿ� �ִ� ���� �־���
	x�� �ּҸ� y�� �ּҷ� �ٲ��� -- ���� ���� �� 
	y �ּҿ� �ִ� ���� temp�� �ٲ��� �� 
	*/�� 
	
} 

int main(void){
	int x = 1;
	int y = 2;
	swap(&x, &y); // ������ �ּҸ� �־��ְ� �� 
	printf("x = %d\ny = %d\n",x, y); 
	return 0;
}
