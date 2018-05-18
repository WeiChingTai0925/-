#include <stdio.h>
void main(void) {
    int i=1;
    float L, S, X;      /* L=程计S=程计X=块*/
    printf("块计: ");
    scanf("%f", &X);     /*パ龄絃块计*/
    L = S = X;
    do {
        printf("块计: ");
        scanf("%f",&X);
        if (X > L) {
            L = X; /*璝块L盢L砞Θ块X */
        }
        if (X < S) {
            S = X; /*璝块S盢S砞Θ块X */
        }
        i = i + 1;
    } while (i < 10);
    /*羆㎝*/
    printf("程 %f, 程 %f ", L, S) ; /*挡狦*/
	printf("程 %f, 程 %f ", L, S) ; /*挡狦*/ 
    printf("\n") ;
}
