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

//�ѨMHW4.c�Q�ק���S���K�[��Ȧs�Ϫ����D
//����Ȧs�Ϥ����ܧ�A�òK�[����T��
//����-6
//git push HW4.c�A�o���O�@�ӥ��T���Ϊk�C
//git push �R�O���ӬO�Ψӱ��e����컷�{�ܮw���A
//�Ӥ��O���e��Ӥ��C
//�H�����Өϥ�git push origin main 
 
/*
// �M���ù�
void clear_screen() {
    system("clear || cls");
}
*/
