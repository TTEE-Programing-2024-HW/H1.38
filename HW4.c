#include <stdio.h>  // �зǿ�J��X�禡�w
#include <stdlib.h> // �зǨ禡�w�A�]�Asystem()�禡
#include <string.h> // �r�Ŧ�B�z�禡�w

#define PASSWORD 2024// �w�]�K�X
#define MAX_STUDENTS 10// �̤j�ǥͼƶq

typedef struct// �ǥͦ��Z���c�� 
{
    char name[50];      // �ǥͩm�W
    int id;             // �ǥ;Ǹ�
    int math;           // �ƾǦ��Z
    int physics;        // ���z���Z
    int english;        // �^�妨�Z
    float average;      // �������Z
} 
Student;

Student students[MAX_STUDENTS]; // �x�s�ǥ͸�ƪ��}�C
int student_count = 0;          // �ثe�ǥͼƶq

/*
// �M���ù�
void clear_screen() {
    system("clear || cls");
}
*/

void display_main_menu() 
{
    printf("----------[Grade System]----------\n"); // ��ܥD�����D
    printf("|  a. Enter student grades        |\n"); // ��ܿﶵ a
    printf("|  b. Display student grades      |\n"); // ��ܿﶵ b
    printf("|  c. Search for student grades   |\n"); // ��ܿﶵ c
    printf("|  d. Grade ranking               |\n"); // ��ܿﶵ d
    printf("|  e. Exit system                 |\n"); // ��ܿﶵ e
    printf("----------------------------------\n"); // ��ܥD��橳��
}

void enter_student_grades() 
{
    int n; // �ǥͼƶq�ܼ�
    system("cls"); // �M���ù�
    printf("��J�ǥͼƶq (5-10): "); // ���ܿ�J�ǥͼƶq
    while (scanf("%d", &n) != 1 || n < 5 || n > 10) // �ˬd��J�O�_��5��10�������Ʀr
    {
        printf("�L�Ŀ�J�C�п�J5��10�������Ʀr: "); // ��J�L�Ĵ���
        while (getchar() != '\n'); // �M���w�İ�
    }
    student_count = n; // �]�w�ǥͼƶq
    for (int i = 0; i < n; i++) // �j���J�C�Ӿǥͪ����
    {
        printf("��J�ǥ�%d���m�W: ", i + 1); // ���ܿ�J�ǥͩm�W
        scanf("%s", students[i].name); // ��J�ǥͩm�W
        printf("��J�ǥ�%d���Ǹ� (6���): ", i + 1); // ���ܿ�J�ǥ;Ǹ�
        while (scanf("%d", &students[i].id) != 1 || students[i].id < 100000 || students[i].id > 999999) 
        {
            printf("�L�Ŀ�J�C�п�J6��ƾǸ�: "); // ��J�L�Ĵ���
            while (getchar() != '\n'); // �M���w�İ�
        }
        printf("��J�ǥ�%d���ƾǦ��Z (0-100): ", i + 1); // ���ܿ�J�ƾǦ��Z
        while (scanf("%d", &students[i].math) != 1 || students[i].math < 0 || students[i].math > 100) 
        {
            printf("�L�Ŀ�J�C�п�J0��100���������Z: "); // ��J�L�Ĵ���
            while (getchar() != '\n'); // �M���w�İ�
        }
        printf("��J�ǥ�%d�����z���Z (0-100): ", i + 1); // ���ܿ�J���z���Z
        while (scanf("%d", &students[i].physics) != 1 || students[i].physics < 0 || students[i].physics > 100) 
        {
            printf("�L�Ŀ�J�C�п�J0��100���������Z: "); // ��J�L�Ĵ���
            while (getchar() != '\n'); // �M���w�İ�
        }
        printf("��J�ǥ�%d���^�妨�Z (0-100): ", i + 1); // ���ܿ�J�^�妨�Z
        while (scanf("%d", &students[i].english) != 1 || students[i].english < 0 || students[i].english > 100) 
        {
            printf("�L�Ŀ�J�C�п�J0��100���������Z: "); // ��J�L�Ĵ���
            while (getchar() != '\n'); // �M���w�İ�
        }
        students[i].average = (students[i].math + students[i].physics + students[i].english) / 3.0; // �p�⥭�����Z
    }
    system("cls"); // �M���ù�
}

