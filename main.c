#include <stdio.h>
#include <unistd.h>
int main()
{
    int password = 123;
    int inputpwd = 0;
    int a = 1;
    int b = 3;
    int choice = 0;
    printf("���������룺");
    scanf("%d",&inputpwd);
    while (a == 1){
        if (inputpwd != password) {
            printf("�����������������(��ʣ��%d��)��",--b);
            scanf("%d",&inputpwd);
        }if(b == 1){
            printf("��������Ѵ��������ϵ�ͷ�.\n");
            a = 0;
        }
        a = 0;
    }while(a == 0){
        if (inputpwd == password);
        printf("******��ӭʹ��XX��������ȡ���******\n");
        printf("**************XX����*************\n");
        printf("1.�������롣\n");
        printf("2.ȡ�\n");
        printf("3.���.\n");
        printf("4.�˳�\n");
        printf("********************************\n");
        printf("��ѡ�������");
        scanf("%d",&choice);
        switch (choice) {
            case 1:
                a = 2;
                sleep(2);
                break;

        }
    }

    printf("Hello, World!\n");
    return 0;
}
