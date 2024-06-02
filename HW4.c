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
