#include <stdio.h>// Include standard input-output header
#include <stdlib.h>// Include standard library header
#include <string.h>// Include string manipulation header
#include <unistd.h> // Include delay function sleep()

#define PASSWORD "2024" // Define password constant

int main() {
    int attempts = 0;
    char input[5];

    // Print initial interface
    printf("************************************\n"); 
    printf("*                                  *\n"); 
    printf("*                                  *\n");
    printf("*                                  *\n");
    printf("*                 1                *\n"); 
    printf("*                 2                *\n");
    printf("*                 3                *\n");
    printf("*                 4                *\n");
    printf("*                 5                *\n");
    printf("*                 6                *\n");
    printf("*                 7                *\n");
    printf("*                 8                *\n");
    printf("*                 9                *\n");
    printf("*                 10               *\n");
    printf("*                 11               *\n");
    printf("*                 12               *\n");
    printf("*                 13               *\n");
    printf("*                 14               *\n");
    printf("*                 15               *\n");
    printf("*                                  *\n");
    printf("*                                  *\n");
    printf("*                                  *\n");
    printf("************************************\n"); // Print bottom border

   // Verify password
    while (attempts < 3) {
        printf("Enter a four-digit password: ");
        scanf("%s", input);

        if (strcmp(input, PASSWORD) == 0) {
            printf("Welcome!\n"); // Print welcome message
            // Delay a few seconds to display the welcome message
            sleep(3);
            break;
        } else {
            attempts++;
            printf("Incorrect password. Remaining attempts: %d\n", 3 - attempts); // Print incorrect password message and remaining attempts
        }
    }

    // Three consecutive errors
    if (attempts == 3) {
        printf("Too many incorrect attempts. Exiting...\n"); // Print message for too many incorrect attempts
        return 0;
    }
     // Clear screen
      system("cls || clear");
      
      // Print main menu
    printf("----------[BookingSystem]----------\n"); // Print main menu title
    printf("|  a. Available seats             |\n"); // Print menu options
    printf("|  b. Arrange for you             |\n");
    printf("|  c. Choose by yourself          |\n");
    printf("|  d. Exit                        |\n");
    printf("------------------------------------\n"); // Print menu bottom separator

    return 0;
}
//這次的作業很難
//我一直做一直錯 
//快瘋了 
//做到快抓狂 
//做到快崩潰 
//做到很生氣 
//不過過程有學習到東西
//還不錯
//希望學習git hub真的在未來能對我有所幫助
//不然我真的會...
//不過助教真得很有耐心很用心
//每次去找助教他都很有耐心很用心地教導我
//我覺得他很棒很優秀 
      
      
