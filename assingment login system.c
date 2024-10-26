#include<stdio.h>
    int main(){
    	char username[50];
    	char password[50];
    	
    	printf("ENTER USERNAME: ");
    	scanf("%s",username);
    	
    	printf("ENTER PASSWORD: ");
    	scanf("%s",password);
    	
    	if ((strcmp(username, "admin") == 0) && (strcmp(password, "1234") == 0)) {
    		printf("Login Successfull\n");
		}
		else{
			printf("Login Failed\n");
		}
		
		return 0;
	}