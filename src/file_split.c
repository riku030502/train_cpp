#include <stdio.h>
#include "train_cpp/average.h"

int main(int argc, char** argv){
    double d1, d2, d3; //変数の宣言
    double a = 1.2, b = 3.4, c = 2.7; //変数の宣言と初期化

    d1 = average(a, b); //平均値の計算
    d2 = average(4.1, 5.7); //平均値の計算
    d3 = average(c, 2.8); //平均値の計算
    printf("d1 = %lf, d2 = %lf, d3 = %lf\n", d1, d2, d3); //結果の表示
    return 0;
}