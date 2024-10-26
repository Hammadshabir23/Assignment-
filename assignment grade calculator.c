#include<stdio.h>
#include<conio.h>

int main(){
	int obtain_marks;
	int english,math,pf,cf,urdu;
	printf("marks of english");
	scanf("%d",&english);
	
	printf("marks of math\t");
	scanf("%d",&math);
	
	printf("marks of pf\t ");
	scanf("%d",&pf);
	
	printf("marks of cf\t");
	scanf("%d",&cf);
	
	printf("marks of urdu\t");
	scanf("%d",&urdu);
	
	float obtained_marks = english + math + pf + cf + urdu;
	printf("obtained_marks %f\n",obtained_marks );
	
    float percentage = (obtained_marks/500) *100;
    printf("percentage %f\n",percentage);
   
   if (percentage > 85){
   printf("A1 GRADE");	
   }

   else if(percentage < 85){
   printf("A GRADE");	
   } 

   else{
   printf("B GRADE");	
   }

   return 0;

}






	
