#include <stdio.h>

int main(int argc, char** argv) {
    double d[3]; //サイズ3の配列の宣言
    double sum, avg; //変数の宣言
    int i; //変数の宣言
    d[0] = 10.0; //配列の初期化
    d[1] = 20.0; //配列の初期化
    d[2] = 30.0; //配列の初期化
    sum = 0.0; //変数の初期化
    for(i = 0; i < 3; i++){
        printf("%lf", d[i]);
        sum += d[i];
    }
    printf("\n");
    avg = sum / 3.0; //平均値の計算
    printf("sum = %lf\n", sum);
    printf("avg = %lf\n", avg);
    return 0;
}