#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h> // 用於 _getch() 函數

#define ROWS 9
#define COLS 9
#define PASSWORD 2024
#define MAX_TRIES 3

void displayWelcomeScreen() 
{
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
}

int verifyPassword() {
    int input, tries = 0;
    while (tries < MAX_TRIES) {
        printf("Please enter the 4-digit password: ");
        scanf("%d", &input);
        if (input == PASSWORD) {
            printf("Welcome!\n");
            return 1;
        } else {
            printf("Incorrect password. Try again.\n");
            tries++;
        }
    }
    printf("Too many incorrect attempts. Exiting program.\n");
    return 0;
}
    
      
   void displayMenu() {
    printf("----------[BookingSystem]----------\n");
    printf("|  a. Available seats              |\n");
    printf("|  b. Arrange for you              |\n");
    printf("|  c. Choose by yourself           |\n");
    printf("|  d. Exit                         |\n");
    printf("------------------------------------\n");
}

void initializeSeats(char seats[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            seats[i][j] = '-';
        }
    }
}
void generateRandomBookings(char seats[ROWS][COLS]) {
    srand(time(0));
    for (int i = 0; i < 10; i++) {
        int row = rand() % ROWS;
        int col = rand() % COLS;
        if (seats[row][col] == '-') {
            seats[row][col] = '*';
        } else {
            i--; // 確保生成10個不同的預訂座位
        }
    }
}

void displaySeats(char seats[ROWS][COLS]) {
    printf("  123456789\n");
    for (int i = 0; i < ROWS; i++) {
        printf("%d ", ROWS - i);
        for (int j = 0; j < COLS; j++) {
            printf("%c", seats[i][j]);
        }
        printf("\n");
    }
}

void arrangeSeats(char seats[ROWS][COLS], int numSeats) {
    int found = 0;
    for (int i = 0; i < ROWS && !found; i++) {
        for (int j = 0; j < COLS - numSeats + 1 && !found; j++) {
            int empty = 1;
            for (int k = 0; k < numSeats; k++) {
                if (seats[i][j + k] != '-') {
                    empty = 0;
                    break;
                }
            }
            if (empty) {
                for (int k = 0; k < numSeats; k++) {
                    seats[i][j + k] = '@';
                }
                found = 1;
            }
        }
    }
    if (!found && numSeats == 4) {
        for (int i = 0; i < ROWS - 1 && !found; i++) {
            for (int j = 0; j < COLS && !found; j++) {
                if (seats[i][j] == '-' && seats[i + 1][j] == '-' &&
                    seats[i][j + 1] == '-' && seats[i + 1][j + 1] == '-') {
                    seats[i][j] = '@';
                    seats[i + 1][j] = '@';
                    seats[i][j + 1] = '@';
                    seats[i + 1][j + 1] = '@';
                    found = 1;
                }
            }
        }
    }
    displaySeats(seats);
    char response;
    printf("Are you satisfied with the arrangement? (y/n): ");
    scanf(" %c", &response);
    if (response == 'y' || response == 'Y') {
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                if (seats[i][j] == '@') {
                    seats[i][j] = '*';
                }
            }
        }
    }
}

int main() {
    char seats[ROWS][COLS];
    char choice;
    int numSeats;

    displayWelcomeScreen();
    if (!verifyPassword()) {
        return 0;
    }

    initializeSeats(seats);
    generateRandomBookings(seats);

    while (1) {
        system("cls"); // 清除螢幕
        displayMenu();
        choice = _getch();

        switch (choice) {
        case 'a':
            system("cls"); // 清除螢幕
            displaySeats(seats);
            printf("Press any key to return to the menu...");
            _getch();
            break;
        case 'b':
            printf("How many seats do you need (1-4)? ");
            scanf("%d", &numSeats);
            if (numSeats >= 1 && numSeats <= 4) {
                system("cls"); // 清除螢幕
                arrangeSeats(seats, numSeats);
                printf("Press any key to return to the menu...");
                _getch();
            } else {
                printf("Invalid number of seats. Please try again.\n");
            }
            break;
        case 'c':
            printf("Choose by yourself feature not implemented.\n");
            printf("Press any key to return to the menu...");
            _getch();
            break;
        case 'd':
            printf("Exiting program.\n");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    }
    return 0;
}
//這次的作業很難
//我一直做一直錯 
//快瘋了 
//做到快抓狂 
//做到快崩潰 
//做到很生氣 
//不過過程有學習到東西
//助教也很耐心地幫我除錯 
//還不錯
//希望學習git hub真的在未來能對我有所幫助
//不然我真的會...
//不過助教真得很有耐心很用心
//每次去找助教他都很有耐心很用心地教導我
//我覺得他很棒很優秀 

      
      
