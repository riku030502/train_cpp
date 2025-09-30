#include <stdio.h>

int main() {
    int i; //変数の宣言
    int num; //変数の宣言

    printf("どれを選びますか？\n");
    printf("1: for文\n");
    printf("2: while文\n");
    printf("3: do-while文\n");
    scanf("%d", &i); //キーボードからの入力
    if (i == 1) { //条件分岐
        for (int j = 0; j < 5; j++) { //for文
            if (j == 2) { //条件分岐
                continue; //次のループへ
            }
            printf("%d", j);
        }
        printf("\n");
    } else if (i == 2) { //条件分岐
        int j = 0; //変数の宣言と初期化
        while (j < 5) { //while文
            printf("数値を入力してください: ");
            scanf("%d", &num); //キーボードからの入力
            if (num < 0) { //条件分岐
                printf("負の数が入力されたので終了します。\n");
                break; //ループを抜ける
            }
            j++; //インクリメント
        }
        printf("\n");
    } else if (i == 3) { //条件分岐
        int j = 0; //変数の宣言と初期化
        do { //do-while文
            printf("%d", j);
            j++; //インクリメント
        } while (j < 5);
    } else {
        printf("1から3の数字を入力してください。\n");
    }
    return 0;
}