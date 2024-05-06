#include <stdio.h>
#include <conio.h> // 這個標頭檔包含了getch()函數


void menu()
{ 
    printf("--------------------------\n");
    printf("|                        |\n");
    printf("|                        |\n");
    printf("|                        |\n");
    printf("|  a.     |\n");
    printf("|  b.         |\n");
    printf("|  c.                |\n");
    printf("|                        |\n");
    printf("|                        |\n");
    printf("--------------------------\n");
}



int main() {
    int password = 2024;
    int input_password;
    char choice;
    int i, j;
    int n;

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
    for (i = 0; i < 3; i++) {
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
        system("cls");
        menu()

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
                    
					
					getch();
                    break;
                }

                // 顯示直角三角形
                system("cls");
                for (i = 'a'; i <= choice; i++) {
                    for (j = 'a'; j <= i; j++) {
                        printf("%c ", j);
                    }
                    printf("\n");
                }
                printf("\n按下任意鍵返回主選單...");
                getch();
                break;

            case 'b':
            case 'B':
                // 清除螢幕，要求輸入1至9的整數 n
                system("cls");
                printf("請輸入1至9的整數 n: ");
                scanf("%d", &n);

                if (n < 1 || n > 9) {
                    printf("\n警告：輸入無效！請再試一次。\n");
                    getch();
                    
					break;
                }

                // 顯示乘法表
                system("cls");
                printf("%d 的乘法表:\n\n", n);
                for (i = 1; i <= n; i++) {
                    for (j = 1; j <= n; j++) {
                        printf("%3d ", i * j);
                    }
                    printf("\n");
                }
                printf("\n按下任意鍵返回主選單...");
                getch();
                break;

            case 'c':
            case 'C':
                // 詢問是否繼續
                printf("\n是否繼續？(y/n): ");
                choice = getch();

                if (choice == 'y' || choice == 'Y') {
                    break;
                } else if (choice == 'n' || choice == 'N') {
                    printf("\n正在退出程式...");
                    return 0;
                } else {
                    printf("\n輸入無效！請再試一次。");
                    getch();
                    break;
                }

            default:
                printf("\n選擇無效！請再試一次。\n");
                getch();
        }
    }

    return 0;
}

