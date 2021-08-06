#include <stdio.h>

 int main(void){
 	
 	printf("??가 좋아하는 구구단 게임 게임 Start~!! \n");
 	
 	for(int i = 1; i < 10; i ++)
 	{
	 for(int j = 1; j < 10; j++)
	 {
	 	printf("  %d X %d = %d \n", i, j, i*j);
	 }	
	 	printf("==============\n");
	}
 	return 0;
 }
