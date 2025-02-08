#include<stdio.h>
int main(){
	char name[100];
	
	printf("Enter your name: ");
	scanf("%s", &name);

    if(alphanumeric(name)){
    	printf("%s is alphanumeric. please write name without numbers.\n", name);
	} else{
		printf("%s is not alphanumeric.\n");
	}
	
	return 0;
}

 int alphanumeric(char name[100]){
 	for(int i = 0 ; name[i] ; i++){
 		if((name[i] >= '0' && name[i] <= '9')){
 			return 1;
		}
	}
      return 0;	
 }