#include <stdio.h>
#include <unistd.h>
int main()
{
    int password = 123;
    int inputpwd = 0;
    int a = 1;
    int b = 3;
    int choice = 0;
    printf("请输入密码：");
    scanf("%d",&inputpwd);
    while (a == 1){
        if (inputpwd != password) {
            printf("密码错误，请重新输入(还剩余%d次)：",--b);
            scanf("%d",&inputpwd);
        }if(b == 1){
            printf("输入次数已达最大，请联系客服.\n");
            a = 0;
        }
        a = 0;
    }while(a == 0){
        if (inputpwd == password);
        printf("******欢迎使用XX银行自助取款机******\n");
        printf("**************XX银行*************\n");
        printf("1.更改密码。\n");
        printf("2.取款。\n");
        printf("3.存款.\n");
        printf("4.退出\n");
        printf("********************************\n");
        printf("请选择操作：");
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
