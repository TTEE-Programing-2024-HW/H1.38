#include <stdio.h>
#include <conio.h> // 這個標頭檔包含了getch()函數


void menu()// 顯示主選單
{ 
    printf("--------------------------\n");
    printf("|                        |\n");
    printf("|                        |\n");
    printf("|                        |\n");
    printf("|  a. 畫出直角三角形     |\n");
    printf("|  b. 顯示乘法表        |\n");
    printf("|  c. 結束              |\n");
    printf("|                        |\n");
    printf("|                        |\n");
    printf("--------------------------\n");
}


// 顯示個人風格的畫面
int main() { 
    int password = 2024;// 預設密碼
    int input_password; // 用戶輸入的密碼
    char choice;// 用戶選擇的選項
    int i, j;// 迴圈計數器
    int n;// 迴圈計數器

    // 顯示個人風格的畫面
   printf("************************************************************\n");
    printf("*                                                          *\n");
    printf("*                                                          *\n");
    printf("*                                                          *\n");
    printf("*                                                          *\n");
    printf("*                                                          *\n");
    printf("*                                                          *\n");
    printf("*                           123                            *\n");
    printf("*                                                          *\n");
    printf("*                                                          *\n");
    printf("*                                                          *\n");
    printf("*                                                          *\n");
    printf("*                                                          *\n");
    printf("*                                                          *\n");
    printf("*                                                          *\n");
    printf("************************************************************\n");


    // 輸入密碼
    for (i = 0; i < 3; i++) { // 最多輸入三次密碼
        printf("請輸入密碼 (4 位數字): ");
        scanf("%d", &input_password);

        if (input_password == password) { 
            break;
        } else 
		{
            printf("密碼錯誤！請再試一次。\n");
        }
    }

    // 檢查密碼是否正確
    if (i == 3 && input_password != password) {
        printf("您已連續輸入錯誤的密碼三次。正在退出...\n");
        return 0;
    }


//以上的主程式都正確 
    {
        // 清除螢幕，並顯示主選單
        system("cls");// 清除螢幕
        menu();

        printf("請輸入您的選擇 (a, b, c): ");
        choice = getch();
        printf("%c\n", choice);

        switch (choice) {
            case 'a':
            case 'A':
                // 清除螢幕，要求輸入字元 'a' 到 'n'
                system("cls");
                printf("請輸入 'a' 到 'n' 之間的字元: ");
                choice = getch();

                if (choice < 'a' || choice > 'n') {
                    printf("\n警告：輸入無效！請再試一次。\n");
                    
					
					getch();// 等待用戶按鍵繼續
                    break;
                }

                // 顯示直角三角形
                system("cls");// 清除螢幕
                for (i = 'a'; i <= choice; i++) {
                    for (j = 'a'; j <= i; j++) {
                        printf("%c ", j);
                    }
                    printf("\n");
                }
                printf("\n按下任意鍵返回主選單...");
                getch();// 等待用戶按鍵繼續
                break;

            case 'b':
            case 'B':
            	// 顯示乘法表
                system("cls");// 清除螢幕，要求輸入1至9的整數 n
                printf("請輸入1至9的整數 n: ");
                scanf("%d", &n);

                if (n < 1 || n > 9) {
                    printf("\n警告：輸入無效！請再試一次。\n");
                    getch();// 等待用戶按鍵繼續
                    
					break;
                }

                // 顯示乘法表
                system("cls"); // 清除螢幕
                printf("%d 的乘法表:\n\n", n);
                for (i = 1; i <= n; i++) {
                    for (j = 1; j <= n; j++) {
                        printf("%3d ", i * j);
                    }
                    printf("\n");
                }
                printf("\n按下任意鍵返回主選單...");
                getch();// 等待用戶按鍵繼續
                break;

            case 'c':
            case 'C':
                // 詢問是否繼續
                printf("\n是否繼續？(y/n): ");
                choice = getch();

                if (choice == 'y' || choice == 'Y') {
                    break;// 返回主選單
                } else if (choice == 'n' || choice == 'N') {
                    printf("\n正在退出程式...");
                    return 0;// 退出程式
                } else {
                    printf("\n輸入無效！請再試一次。");
                    getch();// 等待用戶按鍵繼續
                    break;
                }

            default:
                printf("\n選擇無效！請再試一次。\n");
                getch();// 等待用戶按鍵繼續
        }
    }

    return 0;
}
//我在做這個作業的過程中
//感受到了很大的疲憊感
//覺得十分的煩
//不過中間也體會到了朋友之間互相幫忙學習的感覺，這種感覺很好
//不過以後我應該不會想特別去專研寫程式
//因為真的太累了 
//寫到我都快忘記自己是誰了 
