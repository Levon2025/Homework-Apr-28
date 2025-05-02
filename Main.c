#include <stdio.h>
#include "math.h"

int main(){
    printf("Fact of 5: %lu\n",fac(5));
    printf("Fib of 7: %lu\n",fib(7));
    printf("GCD of 36 and 24:%d\n",gcd(36,24));
    printf("Is 29 prime %d\n",prime_check(29));

    return 0;
}
