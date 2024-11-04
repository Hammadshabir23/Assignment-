#include<stdio.h>
 int main(){
 float subject1,subject2,subject3;
 float average;
 char grade;
 
 printf("ENTER MARKS FOR SUBJECT 1: ");
 scanf("%f", &subject1);
 printf("ENTER MARKS FOR SUBJECT 2: ");
 scanf("%f", &subject2);
 printf("ENTER MARKS FOR SUBJECT 3: ");
 scanf("%f", &subject3);
 
 // calculate averge 
   average = (subject1 + subject2 + subject3) / 3;
 // determine grade 
   if(average < 50){
   	grade = 'F';
   	printf("YOU RE FAIL: ");
}
   else if(average >= 75){
   	grade = 'A';
   	printf("YOU GOT A GRADE: ");
}
   else{
   	grade = 'B';
   	printf("YOU GOT B GRADE: ");
}
  
// display result
  printf("AVERAGE MARKS: %.2f\n",average);
  printf("GRADE: %c\n",grade);
  
  return 0;
  	
 }