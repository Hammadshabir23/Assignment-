#include<stdio.h>
 int main(){
  int study_hours, total_hours = 0;
   int weekly_goal;
    int i = 0;
    
     printf("=============== ONLINE STUDY HOURS TRACKER ===============\n\n");
     
      // input weekly goal
       printf("ENTER YOUR WEEKLY GOAL: ");
        scanf("%d", &weekly_goal);
    
    
   // input study hours for each day 
   printf("ENTER STUDY HOURS FOR EACH DAY:\n ");
    for (i = 0; i < 7; i++){
    	printf("DAY %d:",i + 1);
    	scanf("%d", &study_hours);
    	total_hours += study_hours;
	}	
        // print total study hours
     	printf("\nTOTAL STUDY HOURS: %d\n", total_hours);
	
	// check if weekly goal met
    if(total_hours >= weekly_goal ){
    	printf("CONGRATULATIONS! YOU MET YOUR WEEKLY GOAL. KEEP IT UP.\n");
	} 	
	else{
		printf("YOU FELL SHORT OF YOU WEEKLY GOAL By %d hours\n", weekly_goal - total_hours);
		printf("STUDY HARDER NEXT WEEK.\n");
	}
	
	return 0;
	   
	  
 }