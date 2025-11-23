#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n[10];
    int i;

    // 將陣列全部初始化為 0
    for (i = 0; i < 10; i++)
    {
        n[i] = 0;
    }

    printf("%s%13s\n", "Element", "Value");

    // 印出每個元素的索引和值
    for (i = 0; i < 10; i++)
    {
        printf("%7d%13d\n", i, n[i]);
    }

    system("pause");
    return 0;
}
