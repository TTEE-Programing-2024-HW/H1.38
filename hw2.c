#include <stdio.h>
#include <conio.h> // �o�Ӽ��Y�ɥ]�t�Fgetch()���


void menu()// ��ܥD���
{ 
    printf("--------------------------\n");
    printf("|                        |\n");
    printf("|                        |\n");
    printf("|                        |\n");
    printf("|  a. �e�X�����T����     |\n");
    printf("|  b. ��ܭ��k��        |\n");
    printf("|  c. ����              |\n");
    printf("|                        |\n");
    printf("|                        |\n");
    printf("--------------------------\n");
}


// ��ܭӤH���檺�e��
int main() { 
    int password = 2024;// �w�]�K�X
    int input_password; // �Τ��J���K�X
    char choice;// �Τ��ܪ��ﶵ
    int i, j;// �j��p�ƾ�
    int n;// �j��p�ƾ�

    // ��ܭӤH���檺�e��
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


    // ��J�K�X
    for (i = 0; i < 3; i++) { // �̦h��J�T���K�X
        printf("�п�J�K�X (4 ��Ʀr): ");
        scanf("%d", &input_password);

        if (input_password == password) { 
            break;
        } else 
		{
            printf("�K�X���~�I�ЦA�դ@���C\n");
        }
    }

    // �ˬd�K�X�O�_���T
    if (i == 3 && input_password != password) {
        printf("�z�w�s���J���~���K�X�T���C���b�h�X...\n");
        return 0;
    }


//�H�W���D�{�������T 
    {
        // �M���ù��A����ܥD���
        system("cls");// �M���ù�
        menu();

        printf("�п�J�z����� (a, b, c): ");
        choice = getch();
        printf("%c\n", choice);

        switch (choice) {
            case 'a':
            case 'A':
                // �M���ù��A�n�D��J�r�� 'a' �� 'n'
                system("cls");
                printf("�п�J 'a' �� 'n' �������r��: ");
                choice = getch();

                if (choice < 'a' || choice > 'n') {
                    printf("\nĵ�i�G��J�L�ġI�ЦA�դ@���C\n");
                    
					
					getch();// ���ݥΤ�����~��
                    break;
                }

                // ��ܪ����T����
                system("cls");// �M���ù�
                for (i = 'a'; i <= choice; i++) {
                    for (j = 'a'; j <= i; j++) {
                        printf("%c ", j);
                    }
                    printf("\n");
                }
                printf("\n���U���N���^�D���...");
                getch();// ���ݥΤ�����~��
                break;

            case 'b':
            case 'B':
            	// ��ܭ��k��
                system("cls");// �M���ù��A�n�D��J1��9����� n
                printf("�п�J1��9����� n: ");
                scanf("%d", &n);

                if (n < 1 || n > 9) {
                    printf("\nĵ�i�G��J�L�ġI�ЦA�դ@���C\n");
                    getch();// ���ݥΤ�����~��
                    
					break;
                }

                // ��ܭ��k��
                system("cls"); // �M���ù�
                printf("%d �����k��:\n\n", n);
                for (i = 1; i <= n; i++) {
                    for (j = 1; j <= n; j++) {
                        printf("%3d ", i * j);
                    }
                    printf("\n");
                }
                printf("\n���U���N���^�D���...");
                getch();// ���ݥΤ�����~��
                break;

            case 'c':
            case 'C':
                // �߰ݬO�_�~��
                printf("\n�O�_�~��H(y/n): ");
                choice = getch();

                if (choice == 'y' || choice == 'Y') {
                    break;// ��^�D���
                } else if (choice == 'n' || choice == 'N') {
                    printf("\n���b�h�X�{��...");
                    return 0;// �h�X�{��
                } else {
                    printf("\n��J�L�ġI�ЦA�դ@���C");
                    getch();// ���ݥΤ�����~��
                    break;
                }

            default:
                printf("\n��ܵL�ġI�ЦA�դ@���C\n");
                getch();// ���ݥΤ�����~��
        }
    }

    return 0;
}
//�ڦb���o�ӧ@�~���L�{��
//�P����F�ܤj���h�ηP
//ı�o�Q������
//���L�����]��|��F�B�ͤ������������ǲߪ��Pı�A�o�طPı�ܦn
//���L�H������Ӥ��|�Q�S�O�h�M��g�{��
//�]���u���Ӳ֤F 
//�g��ڳ��֧ѰO�ۤv�O�֤F 
