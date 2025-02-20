#include "user.h"
#include "utils.h"

extern char account[5];
extern char password[20];

void Enroll()
{
    char pwd1[20] = {'\0'};
    char pwd2[20] = {'\0'};

    Clear();
    while (1)
    {
        printf("请输出你的密码:");
        fgets(pwd1, 20, stdin);
        PerfectFgets(pwd1);
        printf("请再次输出你的密码:");
        fgets(pwd2, 20, stdin);
        PerfectFgets(pwd2);
        printf("\n");
        if (!strcmp(pwd1, pwd2))
        {
            strcpy(password, pwd2);
            printf("恭喜你注册成功！\n");
            break;
        }
        else
            printf("两次输入密码不正确,请重新输入:\n");
    }
    sprintf(account, "%d", (rand() % (9999 - 1000 + 1) + 1000));
    printf("用户的账号是:%s\n", account);
    printf("用户的密码是:%s\n", password);
}

int Login()
{
    char acc[6] = {'\0'};
    char pwd[20] = {'\0'};
    Clear();
    int i = 3;
    while (1)
    {
        printf("请输入你的账号:");
        fgets(acc, 6, stdin);
        PerfectFgets(acc);
        printf("请输入你的密码:");
        fgets(pwd, 20, stdin);
        PerfectFgets(pwd);
        if (!strcmp(acc, account) && !strcmp(pwd, password))
        {
            printf("登陆成功！\n");
            return 1;
        }
        else
        {
            i--;
            if (i == 0)
            {
                printf("您没机会了,结束喽\n");
                return 0;
            }
            printf("登陆失败,账号或者密码错误,您还有%d次机会,请重新输入\n", i);
        }
    }
}