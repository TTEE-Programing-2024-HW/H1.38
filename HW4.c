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
    int n, i; // �ǥͼƶq�ܼ�
    system("cls"); // �M���ù�
    printf("��J�ǥͼƶq (5-10): "); // ���ܿ�J�ǥͼƶq
    while (scanf("%d", &n) != 1 || n < 5 || n > 10) // �ˬd��J�O�_��5��10�������Ʀr
    {
        printf("�L�Ŀ�J�C�п�J5��10�������Ʀr: "); // ��J�L�Ĵ���
        while (getchar() != '\n'); // �M���w�İ�
    }
    student_count = n; // �]�w�ǥͼƶq
    for (i = 0; i < n; i++) // �j���J�C�Ӿǥͪ����
    
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

void display_student_grades() 
{
	int i; // �j���ܼ�
    system("cls"); // �M���ù�
    for (i = 0; i < student_count; i++) // �j����ܨC�Ӿǥͪ����
    {
        printf("�m�W: %s\n", students[i].name); // ��ܾǥͩm�W
        printf("�Ǹ�: %d\n", students[i].id); // ��ܾǥ;Ǹ�
        printf("�ƾ�: %d\n", students[i].math); // ��ܼƾǦ��Z
        printf("���z: %d\n", students[i].physics); // ��ܪ��z���Z
        printf("�^��: %d\n", students[i].english); // ��ܭ^�妨�Z
        printf("����: %.1f\n\n", students[i].average); // ��ܥ������Z
    }
    printf("�����N���^�D���..."); // ���ܫ����N���^�D���
    getchar(); // ���ݿ�J
    getchar(); // ���ݿ�J
    system("cls"); // �M���ù�
}

void search_student_grades() 
{
    char search_name[50]; // �x�s�j�M�m�W���ܼ�
    int i, found = 0; // �j���ܼƩM���лx
    system("cls"); // �M���ù�
    printf("��J�n�j�M���m�W: "); // ���ܿ�J�n�j�M���m�W
    scanf("%s", search_name); // ��J�n�j�M���m�W
    for (i = 0; i < student_count; i++) // �j��d��ǥ�
    {
        if (strcmp(students[i].name, search_name) == 0) // ����m�W�O�_�۲�
        {
            printf("�m�W: %s\n", students[i].name); // ��ܾǥͩm�W
            printf("�Ǹ�: %d\n", students[i].id); // ��ܾǥ;Ǹ�
            printf("�ƾ�: %d\n", students[i].math); // ��ܼƾǦ��Z
            printf("���z: %d\n", students[i].physics); // ��ܪ��z���Z
            printf("�^��: %d\n", students[i].english); // ��ܭ^�妨�Z
            printf("����: %.1f\n", students[i].average); // ��ܥ������Z
            found = 1; // �]�w��쪺�лx
            break; // ���X�`��
        }
    }
    if (!found) // �p�G�S�����
    {
        printf("��Ƥ��s�b�C\n"); // ��ܸ�Ƥ��s�b
    }
    printf("�����N���^�D���..."); // ���ܫ����N���^�D���
    getchar(); // ���ݿ�J
    getchar(); // ���ݿ�J
    system("cls"); // �M���ù�
}

void grade_ranking() 
{
	int i, j; // �j���ܼ�
    system("cls"); // �M���ù�
   for (i = 0; i < student_count - 1; i++) 
    {
        for (j = 0; j < student_count - i - 1; j++)
        {
            if (students[j].average < students[j + 1].average) // ����ǥͪ��������Z
            {
                Student temp = students[j]; // �Ȧs��e�ǥ͸��
                students[j] = students[j + 1]; // �洫�ǥ͸��
                students[j + 1] = temp; // �����洫
            }
        }
    }
    for ( i = 0; i < student_count; i++) // �j����ܱƧǫ᪺�ǥ͸��
    {
        printf("�m�W: %s\n", students[i].name); // ��ܾǥͩm�W
        printf("�Ǹ�: %d\n", students[i].id); // ��ܾǥ;Ǹ�
        printf("����: %.1f\n\n", students[i].average); // ��ܥ������Z
    }
    printf("�����N���^�D���..."); // ���ܫ����N���^�D���
    getchar(); // ���ݿ�J
    getchar(); // ���ݿ�J
    system("cls"); // �M���ù�
}

void displayWelcomeScreen() // ����w��e��
{
    printf("************************************\n");// ��ܭӤH���� 
    printf("*last homework                     *\n");// ��ܭӤH����
    printf("*                                  *\n");// ��ܭӤH����
    printf("*last homework                     *\n");// ��ܭӤH����
    printf("*                                  *\n");// ��ܭӤH����
    printf("*last homework                     *\n");// ��ܭӤH����
    printf("*                                  *\n");// ��ܭӤH����
    printf("*last homework                     *\n");// ��ܭӤH����
    printf("*                                  *\n");// ��ܭӤH����
    printf("*last homework                     *\n");// ��ܭӤH����
    printf("*                                  *\n");// ��ܭӤH����
    printf("*last homework                     *\n");// ��ܭӤH����
    printf("*                                  *\n");// ��ܭӤH����
    printf("*last homework                     *\n");// ��ܭӤH����
    printf("*                                  *\n");// ��ܭӤH����
    printf("*last homework                     *\n");// ��ܭӤH����
    printf("*                                  *\n");// ��ܭӤH����
    printf("*last homework                     *\n");// ��ܭӤH����
    printf("*                                  *\n");// ��ܭӤH����
    printf("*last homework                     *\n");// ��ܭӤH����
    printf("*                                  *\n");// ��ܭӤH����
    printf("*last homework                     *\n");// ��ܭӤH����
    printf("************************************\n");// ��ܭӤH����
}

int main() 
{
    int password_attempts = 0; // �K�X���զ���
    int input_password; // ��J���K�X
    
    displayWelcomeScreen(); // ����w��e��
    
    while (password_attempts < 3) // �̦h���\3���K�X���~
    {
        printf("��J4��ƱK�X: "); // ���ܿ�J�K�X
        scanf("%d", &input_password); // ��J�K�X
        if (input_password == PASSWORD) // �ˬd�K�X�O�_���T
        {
            printf("�w��!\n"); // ����w��T��
            break; // �K�X���T�A���X�`��
        }
        else 
        {
            printf("�K�X���~�C�ЦA�դ@���C\n"); // ��ܱK�X���~����
            password_attempts++; // �W�[���զ���
        }
    }

    if (password_attempts == 3) 
    {
        printf("���~���ƹL�h�C�{���N�����C\n"); // ��ܿ��~���ƹL�h����
        return 0; // �K�X���զ��ƹL�h�A�����{��
    }

    
    fflush(stdin); // �M����J�w�İ�
    getchar(); // ���ݿ�J
    system("cls"); // �M���ù�
while (1) // �D���`��
    {
        display_main_menu(); // ��ܥD���
        char choice; // �ﶵ�ܼ�
        scanf(" %c", &choice); // ��J�ﶵ

        switch (choice) 
        {
            case 'a':
                enter_student_grades(); // ��J�ǥͦ��Z
                break;
            case 'b':
                display_student_grades(); // ��ܾǥͦ��Z
                break;
            case 'c':
                search_student_grades(); // �j�M�ǥͦ��Z
                break;
            case 'd':
                grade_ranking(); // ���Z�ƦW
                break;
            case 'e':
                printf("�T�w�n�h�X�H (y/n): "); // ���ܬO�_�T�{�h�X
                char confirm; // �T�{�h�X�ܼ�
                scanf(" %c", &confirm); // ��J�T�{�ﶵ
                if (confirm == 'y') 
                {
                    return 0; // �T�{�h�X�A�����{��
                }
                system("cls"); // �M���ù�
                break;
            default:
                printf("�L�Ŀ�ܡC�ЦA�դ@���C\n"); // ��ܵL�Ŀ�ܴ���
                break;
        }
    }
    return 0; // �����{��
}
//�ڷPı�o�����@�~���²��A�ڤ���֧����A��ı�o���o�X���@�~�u�����ڹ�github����x�ާ@��ֳt
//��ı�o�o�����@�~�۹蠟�e�X���ڬO���o������e�n�� 
//�N��گu�����C�C�A�i�B��ı�o�ܦn 
