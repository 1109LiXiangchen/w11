#include <stdio.h>

int main() {
    int a[10]; // 存储每一天结束时的桃子数
    a[9] = 1; // 第10天早上剩下1个桃子

    // 逆推回第一天
    int i;
    for (i = 8; i >= 0; i--) {
        a[i] = (a[i + 1] + 1) * 2;
    }

    printf("%d\n", a[0]); // 输出第一天所摘桃子的数量

    return 0;
}

