#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �w�]�K�X
#define PASSWORD 2024

// ��ƫŧi
void displayWelcomeScreen();
int verifyPassword();
void displayMainMenu();

// �D�{��
int main() {
    int passwordCorrect = 0;

    displayWelcomeScreen();

    // ���ұK�X
    for (int i = 0; i < 3; i++) {
        if (verifyPassword()) {
            passwordCorrect = 1;
            break;
        } else {
            printf("�K�X���~�I�ЦA�դ@���C\n");
        }
    }

    if (passwordCorrect) {
        printf("�K�X���T�I\n");
        displayMainMenu();
    } else {
        printf("�K�X�s����~�T���A�{�������C\n");
    }

    return 0;
}

// ��ܭӤH���檺�e��
void displayWelcomeScreen() {
    printf("************************************\n");
    printf("*                                  *\n");
    printf("*             *\n");
    printf("*                                  *\n");
    printf("*               *\n");
    printf("*                                  *\n");
    printf("*                                  *\n");
    printf("*        �п�J�K�X�H�~��          *\n");
    printf("*                                  *\n");
    printf("************************************\n");
}

// ���ұK�X
int verifyPassword() {
    int inputPassword;

    printf("�п�J4��ƱK�X�G");
    scanf("%d", &inputPassword);

    if (inputPassword == PASSWORD) {
        return 1;
    } else {
        return 0;
    }
}

// ��ܥD���
void displayMainMenu() {
    system("clear"); // �M���ù� (�b Windows �W�ϥ� system("cls"))
    printf("----------[BookingSystem]----------\n");
    printf("|  a. Available seats              |\n");
    printf("|  b. Arrange for you              |\n");
    printf("|  c. Choose by yourself           |\n");
    printf("|  d. Exit                         |\n");
    printf("------------------------------------\n");

    // ���\��i�b���B�~���@
}

