#include<stdio.h>
  
  int main(){
  	int age;
  	
  	printf("ENETER YOUR AGE:");
  	scanf("%d",&age);
  	
  	if(age >= 18){
	    printf("YOU ARE ELIGIBLE TO VOTE.\n");
     }
     else{
     	printf("YOU ARE NOT ELIGIBLE TO VOTE . YOU MUST BE 18 YEARS OLD.\n");
    }
    
    return 0;
  }