#include<stdio.h>
#include<conio.h>

void wapda(char city[]){
	printf("Load shedding Time table of %s is: \n\n",city);
	
	printf("Monday :: 10am - 12pm , 10pm - 12am :: \n");
	printf("Tuesday :: 10am - 12pm , 4pm - 6pm :: \n");
	printf("Wednesday:: 8am - 11am , 3pm - 5pm :: \n");
	printf("Thursday :: 6am - 8am ,  2pm - 3pm :: \n");
	printf("Friday :: 9am - 11am ,  11pm -  1am :: \n");
	printf("Saturday :: 10am - 11am ,  11pm -  12am :: \n");
	printf("Sunday :: 12pm - 2pm ,  11pm -  1am :: \n");
}

void main(){
	char city[15];
	printf("Enter the city :: ");
	scanf("%s",&city);
    wapda(city);
	
	getch();
}