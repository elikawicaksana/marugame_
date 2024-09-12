#include <stdio.h>

int main() {
    long long N = 1;
    
    scanf("%ld", &N);
    
    if (N % 6 == 1 | N % 6 == 5 | N == 2 | N == 3){
        printf("PRIMA");
    }else {
        printf("BUKAN");
    }
    
    return 0;
}
