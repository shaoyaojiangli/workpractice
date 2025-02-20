#include "main.h"

struct info Stu[N] = {{1001, "jack", 98},
                      {1002, "rose", 93},
                      {1003, "brown", 96}};

char account[5] = {'\0'};
char password[20] = {'\0'};
// char account[5] = {"123"};
// char password[20] = {"123"};

int main()
{
    srand(time(0));

    while (1)
    {
        int ret1 = Menu1();
        switch (ret1)
        {
        case 1:
            // 登录
            int flag = Login();
            if (flag)
            {
                Menu2();
                return 0;
            }
            else
            {
                return 0;
            }
            break;
        case 2:
            // 注册
            Enroll();
            break;
        case 3:
            // 退出
            printf("退出\n");
            return 0;
        }
    }
    return 0;
}
