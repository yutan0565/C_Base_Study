#include <stdio.h>
#include <limits.h>
#define NUMBER 5 

// �迭���� ������ ��Ÿ���ִ� index ���� ������.  



int main(void){
	int i, max = INT_MIN, min=INT_MAX, index = 0;
	int array[NUMBER];  // �迭�� ���� ���ֱ� 
	// array[0]���� array[4] ���� �� 5���� �����Ͱ� ��
	for(i =0; i < NUMBER ; i++){
		scanf("%d", &array[i]);
		if(max < array[i]){
			max = array[i];
			index = i;
		}
	} 
	
	printf("���� ū ���� %d �Դϴ�. �׸��� %d���翡 �ֽ��ϴ�.\n", max, index+1);
	
	for(i =0; i < NUMBER ; i++){
		scanf("%d", &array[i]);
		if(min > array[i]){
			min = array[i];
			index = i;
		}
	} 
	
	printf("��������  ���� %d �Դϴ�. �׸��� %d���翡 �ֽ��ϴ�.\n", min, index+1);
	return 0;
} 
