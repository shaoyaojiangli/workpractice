// 按以下规律翻译密码：
// 将每一个字母变成它后面的字母，例如，将 A 变成 B，B 变成 C，…，Z 变成 A，非字母字符不//变，“ !”作为电文结束标志。
#include <stdio.h>
int main()
{
    char n = 10, arr[n];
    int i = 0;
    printf("请输入密码：");
    fgets(arr, n, stdin);
    // scanf("%s", arr);
    for (i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] >= 65 && arr[i] < 90)
            arr[i]++;
        else if (arr[i] == 90)
            arr[1] = 65;
        else if (arr[i] >= 97 && arr[i] < 122)
            arr[i]++;
        else if (arr[i] == 122)
            arr[i] = 97;
    }
    arr[i - 1] = '!';
    arr[i] = '\0';
    printf("%s\n", arr);
    return 0;
}