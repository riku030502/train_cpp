#include <stdio.h>

int main(int argc, char** argv) {
    int a; //変数の宣言
    int b; //変数の宣言
    int sum, diff, mul, div; //変数の宣言
    double avg; //変数の宣言
    a = 10; //変数の初期化
    b = 3; //変数の初期化
    sum = a + b; //加算
    diff = a - b; //減算
    mul = a * b; //乗算
    div = a / b; //除算
    avg = (a + b) / 2.0; //平均値の計算
    printf("a = %d, b = %d\n", a, b);
    printf("sum = %d\n", sum);
    printf("diff = %d\n", diff);
    printf("mul = %d\n", mul);
    printf("avg = %.2f\n", avg);  
    return 0;
}