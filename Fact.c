fact.c #include "math.h"

unsigned long fact(int n){
    if(n <= 1){
        return 1;
    }
    return n * fact(n - 1);
}
