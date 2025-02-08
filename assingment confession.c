#include <stdio.h>

// Function to get time input from user
int get_time(const char *prompt) {
    int time;
    while (1) {
        printf("%s", prompt);
        if (scanf("%d", &time) == 1) {
            if (time < 0) {
                printf("Time cannot be negative. Please enter a valid value.\n");
            } else {
                return time;
            }
        } else {
            printf("Invalid input. Please enter a whole number.\n");
            // Clear input buffer
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
        }
    }
}

// Function to calculate total time
int calculate_total_time(int read_time, int write_time) {
    return read_time + write_time;
}

// Function to display message based on total time
void display_message(int total_time) {
    if (total_time > 120) {
        printf("Oye! 2 ghante se zyada confessions mein laga diye? Itna waqt barbaad! Socho agar yeh 2 ghante parhai ya skill seekhne mein lagate to kidhar pohanch gaye hote! Zindagi mein kuch bara karna hai toh yeh confession waghera chor do, aur apne goals par focus karo!\n");
    } else if (total_time >= 60 && total_time <= 120) {
        printf("Abey yar, 1 se 2 ghante confessions par lagana thoda zyada ho gaya na? Dekho, thora socho kya yeh waqt waqayi mein tumhe agay leke ja raha hai? Zindagi mein aise activities ka balance rakhna seekho, warna regret ho ga baad mein!\n");
    } else {
        printf("Wah bhai, kamal kar rahe ho! Sirf thori der mein confessions check kar liya, aur phir apne kaam par wapas lag gaye. Isi tarah focus rakho, tum bahut agay jao ge. Parhai aur apne goals pe dhyan rakho, shabash!\n");
    }
}

int main() {
    printf("Confession Page Time Tracker\n");
    
    int read_time = get_time("Enter time spent reading confession posts (in minutes): ");
    int write_time = get_time("Enter time spent writing a confession post (in minutes): ");
    
    int total_time = calculate_total_time(read_time, write_time);
    
    printf("Total time spent on confession pages: %d minutes\n", total_time);
    
    display_message(total_time);
    
    return 0;
}

