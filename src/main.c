#include <stdio.h>
#include "train_cpp/caluculation.h"

int main(int argc, char** argv){
    int n1, n2;
    int r1, r2;
    printf("n1 = ");
    scanf("%d", &n1);
    printf("n2 = ");
    scanf("%d", &n2);
    r1 = div(n1, n2);
    r2 = mod(n1, n2);
    printf("div = %d, mod = %d\n", r1, r2);
    return 0;
}