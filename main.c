#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int a ;
    scanf("%d",&a);
    const int maxNumber = a ;
    int isPrime[maxNumber];
    int i;
    int x;
    
    for (i = 0; i < maxNumber ; i++) {
        isPrime[i] = i;
    }
    for (x = 2; x < maxNumber ; x++) {
        if (isPrime[x] ) {
            for ( i = 2; i*x<maxNumber ; i++) {
                isPrime[i*x] = 0;
            }
        }
    }
    for (i = 2; i < maxNumber ; i++) {
        if (isPrime[i]) {
            printf("%d\t",i);
        }
    }
    return 0;
}
