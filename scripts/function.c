#include <stdio.h>

//②平均値を計算する関数を作成する
double avg(double x, double y) {
    return (x + y) / 2.0; //平均値の計算
}

int main(int argc, char** argv) {
    double d1, d2, d3; //変数の宣言
    double a = 1.2, b = 3.4, c = 2.7; //変数の宣言と初期化
    // //①同じ方法の計算を複数回行っている
    // d1 = (a + b) / 2.0; //平均値の計算
    // d2 = (4.1 + 5.7) / 2.0; //平均値の計算
    // d3 = (c + 2.8) / 2.0; //平均値の計算

    //③関数を使って平均値を計算する
    d1 = avg(a, b); //平均値の計算
    d2 = avg(4.1, 5.7); //平均値の計算
    d3 = avg(c, 2.8); //平均値の計算
    printf("d1 = %lf, d2 = %lf, d3 = %lf\n", d1, d2, d3); //結果の表示
    return 0;
}