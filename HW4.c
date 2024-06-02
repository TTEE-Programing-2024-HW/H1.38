#include <stdio.h>  // 標準輸入輸出函式庫
#include <stdlib.h> // 標準函式庫，包括system()函式
#include <string.h> // 字符串處理函式庫

#define PASSWORD 2024// 預設密碼
#define MAX_STUDENTS 10// 最大學生數量

typedef struct// 學生成績結構體 
{
    char name[50];      // 學生姓名
    int id;             // 學生學號
    int math;           // 數學成績
    int physics;        // 物理成績
    int english;        // 英文成績
    float average;      // 平均成績
} 
Student;

Student students[MAX_STUDENTS]; // 儲存學生資料的陣列
int student_count = 0;          // 目前學生數量

/*
// 清除螢幕
void clear_screen() {
    system("clear || cls");
}
*/

void display_main_menu() 
{
    printf("----------[Grade System]----------\n"); // 顯示主選單標題
    printf("|  a. Enter student grades        |\n"); // 顯示選項 a
    printf("|  b. Display student grades      |\n"); // 顯示選項 b
    printf("|  c. Search for student grades   |\n"); // 顯示選項 c
    printf("|  d. Grade ranking               |\n"); // 顯示選項 d
    printf("|  e. Exit system                 |\n"); // 顯示選項 e
    printf("----------------------------------\n"); // 顯示主選單底部
}

void enter_student_grades() 
{
    int n; // 學生數量變數
    system("cls"); // 清除螢幕
    printf("輸入學生數量 (5-10): "); // 提示輸入學生數量
    while (scanf("%d", &n) != 1 || n < 5 || n > 10) // 檢查輸入是否為5到10之間的數字
    {
        printf("無效輸入。請輸入5到10之間的數字: "); // 輸入無效提示
        while (getchar() != '\n'); // 清除緩衝區
    }
    student_count = n; // 設定學生數量
    for (int i = 0; i < n; i++) // 迴圈輸入每個學生的資料
    {
        printf("輸入學生%d的姓名: ", i + 1); // 提示輸入學生姓名
        scanf("%s", students[i].name); // 輸入學生姓名
        printf("輸入學生%d的學號 (6位數): ", i + 1); // 提示輸入學生學號
        while (scanf("%d", &students[i].id) != 1 || students[i].id < 100000 || students[i].id > 999999) 
        {
            printf("無效輸入。請輸入6位數學號: "); // 輸入無效提示
            while (getchar() != '\n'); // 清除緩衝區
        }
        printf("輸入學生%d的數學成績 (0-100): ", i + 1); // 提示輸入數學成績
        while (scanf("%d", &students[i].math) != 1 || students[i].math < 0 || students[i].math > 100) 
        {
            printf("無效輸入。請輸入0到100之間的成績: "); // 輸入無效提示
            while (getchar() != '\n'); // 清除緩衝區
        }
        printf("輸入學生%d的物理成績 (0-100): ", i + 1); // 提示輸入物理成績
        while (scanf("%d", &students[i].physics) != 1 || students[i].physics < 0 || students[i].physics > 100) 
        {
            printf("無效輸入。請輸入0到100之間的成績: "); // 輸入無效提示
            while (getchar() != '\n'); // 清除緩衝區
        }
        printf("輸入學生%d的英文成績 (0-100): ", i + 1); // 提示輸入英文成績
        while (scanf("%d", &students[i].english) != 1 || students[i].english < 0 || students[i].english > 100) 
        {
            printf("無效輸入。請輸入0到100之間的成績: "); // 輸入無效提示
            while (getchar() != '\n'); // 清除緩衝區
        }
        students[i].average = (students[i].math + students[i].physics + students[i].english) / 3.0; // 計算平均成績
    }
    system("cls"); // 清除螢幕
}

void display_student_grades() 
{
    system("cls"); // 清除螢幕
    for (int i = 0; i < student_count; i++) // 迴圈顯示每個學生的資料
    {
        printf("姓名: %s\n", students[i].name); // 顯示學生姓名
        printf("學號: %d\n", students[i].id); // 顯示學生學號
        printf("數學: %d\n", students[i].math); // 顯示數學成績
        printf("物理: %d\n", students[i].physics); // 顯示物理成績
        printf("英文: %d\n", students[i].english); // 顯示英文成績
        printf("平均: %.1f\n\n", students[i].average); // 顯示平均成績
    }
    printf("按任意鍵返回主選單..."); // 提示按任意鍵返回主選單
    getchar(); // 等待輸入
    getchar(); // 等待輸入
    system("cls"); // 清除螢幕
}

void search_student_grades() 
{
    char search_name[50]; // 儲存搜尋姓名的變數
    system("cls"); // 清除螢幕
    printf("輸入要搜尋的姓名: "); // 提示輸入要搜尋的姓名
    scanf("%s", search_name); // 輸入要搜尋的姓名
    int found = 0; // 設定找到的標誌
    for (int i = 0; i < student_count; i++) // 迴圈查找學生
    {
        if (strcmp(students[i].name, search_name) == 0) // 比較姓名是否相符
        {
            printf("姓名: %s\n", students[i].name); // 顯示學生姓名
            printf("學號: %d\n", students[i].id); // 顯示學生學號
            printf("數學: %d\n", students[i].math); // 顯示數學成績
            printf("物理: %d\n", students[i].physics); // 顯示物理成績
            printf("英文: %d\n", students[i].english); // 顯示英文成績
            printf("平均: %.1f\n", students[i].average); // 顯示平均成績
            found = 1; // 設定找到的標誌
            break; // 跳出循環
        }
    }
    if (!found) // 如果沒有找到
    {
        printf("資料不存在。\n"); // 顯示資料不存在
    }
    printf("按任意鍵返回主選單..."); // 提示按任意鍵返回主選單
    getchar(); // 等待輸入
    getchar(); // 等待輸入
    system("cls"); // 清除螢幕
}

void grade_ranking() 
{
    system("cls"); // 清除螢幕
    for (int i = 0; i < student_count - 1; i++) 
    {
        for (int j = 0; j < student_count - i - 1; j++) 
        {
            if (students[j].average < students[j + 1].average) // 比較學生的平均成績
            {
                Student temp = students[j]; // 暫存當前學生資料
                students[j] = students[j + 1]; // 交換學生資料
                students[j + 1] = temp; // 完成交換
            }
        }
    }
    for (int i = 0; i < student_count; i++) // 迴圈顯示排序後的學生資料
    {
        printf("姓名: %s\n", students[i].name); // 顯示學生姓名
        printf("學號: %d\n", students[i].id); // 顯示學生學號
        printf("平均: %.1f\n\n", students[i].average); // 顯示平均成績
    }
    printf("按任意鍵返回主選單..."); // 提示按任意鍵返回主選單
    getchar(); // 等待輸入
    getchar(); // 等待輸入
    system("cls"); // 清除螢幕
}

void displayWelcomeScreen() // 顯示歡迎畫面
{
    printf("************************************\n");// 顯示個人風格 
    printf("*last homework                     *\n");// 顯示個人風格
    printf("*                                  *\n");// 顯示個人風格
    printf("*last homework                     *\n");// 顯示個人風格
    printf("*                                  *\n");// 顯示個人風格
    printf("*last homework                     *\n");// 顯示個人風格
    printf("*                                  *\n");// 顯示個人風格
    printf("*last homework                     *\n");// 顯示個人風格
    printf("*                                  *\n");// 顯示個人風格
    printf("*last homework                     *\n");// 顯示個人風格
    printf("*                                  *\n");// 顯示個人風格
    printf("*last homework                     *\n");// 顯示個人風格
    printf("*                                  *\n");// 顯示個人風格
    printf("*last homework                     *\n");// 顯示個人風格
    printf("*                                  *\n");// 顯示個人風格
    printf("*last homework                     *\n");// 顯示個人風格
    printf("*                                  *\n");// 顯示個人風格
    printf("*last homework                     *\n");// 顯示個人風格
    printf("*                                  *\n");// 顯示個人風格
    printf("*last homework                     *\n");// 顯示個人風格
    printf("*                                  *\n");// 顯示個人風格
    printf("*last homework                     *\n");// 顯示個人風格
    printf("************************************\n");// 顯示個人風格
}

int main() 
{
    int password_attempts = 0; // 密碼嘗試次數
    int input_password; // 輸入的密碼
    
    displayWelcomeScreen(); // 顯示歡迎畫面
    
    while (password_attempts < 3) // 最多允許3次密碼錯誤
    {
        printf("輸入4位數密碼: "); // 提示輸入密碼
        scanf("%d", &input_password); // 輸入密碼
        if (input_password == PASSWORD) // 檢查密碼是否正確
        {
            printf("歡迎!\n"); // 顯示歡迎訊息
            break; // 密碼正確，跳出循環
        }
        else 
        {
            printf("密碼錯誤。請再試一次。\n"); // 顯示密碼錯誤提示
            password_attempts++; // 增加嘗試次數
        }
    }

    if (password_attempts == 3) 
    {
        printf("錯誤次數過多。程式將結束。\n"); // 顯示錯誤次數過多提示
        return 0; // 密碼嘗試次數過多，結束程式
    }

    
    fflush(stdin); // 清除輸入緩衝區
    getchar(); // 等待輸入
    system("cls"); // 清除螢幕

