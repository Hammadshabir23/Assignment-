#include<stdio.h>
 int main(){
 int daynumber;
 
 printf("ENTER DAY NUMBERS(1-7): ");
 scanf("%d", &daynumber );
 
 if(daynumber < 1 || daynumber > 7){
 	printf("INVALID INPUT\n ");
}
 else{
 	switch (daynumber){
 	 case 1:
	  printf("Monday\n ");
	  break;
	  case 2:
	  printf("Tuesday\n ");
	  break;
	  case 3:
	  printf("Wednesday\n ");
	  break;
	  case 4:
	  printf("Thursday\n ");
	  break;
	  case 5:
	  printf("Friday\n ");
	  break;
	  case 6:
	  printf("Saturday\n ");
	  break;
	  case 7:
	  printf("Sunday\n ");
	  break;		    	
}

 }
 	return 0;
 	
 }