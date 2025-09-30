#include <stdio.h>

int main() {
    int i; //変数の宣言
    printf("数値を入力してください: ");
    scanf("%d", &i); //キーボードからの入力
    if (i % 2 == 0) { //条件分岐
        printf("%d は偶数です。\n", i);
    } else {
        printf("%d は奇数です。\n", i); //条件分岐
    }
    return 0;
}