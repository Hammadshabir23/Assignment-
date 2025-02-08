#include<stdio.h>
float calculateGPA(int marks){
    if(marks >= 85){
	  return 4.0;
    } else if(marks >= 80){
	 return 3.7;
    } else if(marks >= 75){
	 return 3.3;
    } else if(marks >= 70){
	 return 3.0;
    } else if(marks >= 65){
	 return 2.7;
    } else if(marks >= 60){
	 return 2.3;
    } else{
	 return 1;     // Fail
  }
}

int main(){
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    
    float gpa = calculateGPA(marks);
    if(gpa != 1){
	    printf("GPA: %.0f\n", gpa);
   } else{
        printf("Fail\n");
   }
    return 0;
}
