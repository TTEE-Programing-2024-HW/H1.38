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

