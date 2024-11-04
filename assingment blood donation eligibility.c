#include<stdio.h>
 int main(){
 	int age;
 	float weight;
 	
 printf("ENTER YOUR AGE: ");
 scanf("%d", &age);
 
 printf("ENTER YOUR WEIGHT (IN KG): ");
 scanf("%f", &weight);
 
  if(age >= 18 && age <= 65){
  	if(weight >= 50){
  	printf("YOU ARE ELIGIBLE TO DONATE BLOOD: ");	
}
else{
	printf("YOU ARE NOT ELIGIBLE TO DONATE BLOOD DUE TO LOW WEIGHT: ");
}
}else{
	printf("YOU ARE NOT ELIGIBLE TO DONATE BLOOD DUE TO AGE: ");
}

  return 0;

}	
  
 
  
 