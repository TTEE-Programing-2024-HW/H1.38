#include <stdio.h>
#include <conio.h> // �o�Ӽ��Y�ɥ]�t�Fgetch()���


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
    for (i = 0; i < 3; i++) {
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
        system("cls");
        menu()

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
                    
					
					getch();
                    break;
                }

                // ��ܪ����T����
                system("cls");
                for (i = 'a'; i <= choice; i++) {
                    for (j = 'a'; j <= i; j++) {
                        printf("%c ", j);
                    }
                    printf("\n");
                }
                printf("\n���U���N���^�D���...");
                getch();
                break;

            case 'b':
            case 'B':
                // �M���ù��A�n�D��J1��9����� n
                system("cls");
                printf("�п�J1��9����� n: ");
                scanf("%d", &n);

                if (n < 1 || n > 9) {
                    printf("\nĵ�i�G��J�L�ġI�ЦA�դ@���C\n");
                    getch();
                    
					break;
                }

                // ��ܭ��k��
                system("cls");
                printf("%d �����k��:\n\n", n);
                for (i = 1; i <= n; i++) {
                    for (j = 1; j <= n; j++) {
                        printf("%3d ", i * j);
                    }
                    printf("\n");
                }
                printf("\n���U���N���^�D���...");
                getch();
                break;

            case 'c':
            case 'C':
                // �߰ݬO�_�~��
                printf("\n�O�_�~��H(y/n): ");
                choice = getch();

                if (choice == 'y' || choice == 'Y') {
                    break;
                } else if (choice == 'n' || choice == 'N') {
                    printf("\n���b�h�X�{��...");
                    return 0;
                } else {
                    printf("\n��J�L�ġI�ЦA�դ@���C");
                    getch();
                    break;
                }

            default:
                printf("\n��ܵL�ġI�ЦA�դ@���C\n");
                getch();
        }
    }

    return 0;
}

