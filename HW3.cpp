#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h> // �Ω� _getch() ���

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
    return 0;
}
//�o�����@�~����
//�ڤ@�����@���� 
//�ֺƤF 
//����֧�g 
//����ֱY�� 
//����ܥͮ� 
//���L�L�{���ǲߨ�F��
//�U�Ф]�ܭ@�ߦa���ڰ��� 
//�٤���
//�Ʊ�ǲ�git hub�u���b���ӯ��ڦ������U
//���M�گu���|...
//���L�U�Яu�o�ܦ��@�߫ܥΤ�
//�C���h��U�ХL���ܦ��@�߫ܥΤߦa�оɧ�
//��ı�o�L�ܴΫ��u�q 

      
      
