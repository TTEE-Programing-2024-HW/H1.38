#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 預設密碼
#define PASSWORD 2024

// 函數宣告
void displayWelcomeScreen();
int verifyPassword();
void displayMainMenu();

// 主程式
int main() {
    int passwordCorrect = 0;

    displayWelcomeScreen();

    // 驗證密碼
    for (int i = 0; i < 3; i++) {
        if (verifyPassword()) {
            passwordCorrect = 1;
            break;
        } else {
            printf("密碼錯誤！請再試一次。\n");
        }
    }

    if (passwordCorrect) {
        printf("密碼正確！\n");
        displayMainMenu();
    } else {
        printf("密碼連續錯誤三次，程式結束。\n");
    }

    return 0;
}

// 顯示個人風格的畫面
void displayWelcomeScreen() {
    printf("************************************\n");
    printf("*                                  *\n");
    printf("*             *\n");
    printf("*                                  *\n");
    printf("*               *\n");
    printf("*                                  *\n");
    printf("*                                  *\n");
    printf("*        請輸入密碼以繼續          *\n");
    printf("*                                  *\n");
    printf("************************************\n");
}

// 驗證密碼
int verifyPassword() {
    int inputPassword;

    printf("請輸入4位數密碼：");
    scanf("%d", &inputPassword);

    if (inputPassword == PASSWORD) {
        return 1;
    } else {
        return 0;
    }
}

// 顯示主選單
void displayMainMenu() {
    system("clear"); // 清除螢幕 (在 Windows 上使用 system("cls"))
    printf("----------[BookingSystem]----------\n");
    printf("|  a. Available seats              |\n");
    printf("|  b. Arrange for you              |\n");
    printf("|  c. Choose by yourself           |\n");
    printf("|  d. Exit                         |\n");
    printf("------------------------------------\n");

    // 選單功能可在此處繼續實作
}

