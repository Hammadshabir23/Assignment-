#include<stdio.h>
 void even();
 
  int main(){
  	even();
}

void even(){
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if(num % 2 == 0){
		printf("Number is even. \n");
	}
	else{
		printf("Number is odd. \n");
	}
	
}


  