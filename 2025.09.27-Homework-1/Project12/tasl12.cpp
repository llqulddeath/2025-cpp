#include "cstdio" 

int main(int argc, char *argv[]) {
    long long N, M;
    scanf("%lld %lld", &N, &M);
    
    long long min_val = (M < N ? N : M);
    long long result = min_val;
    
    printf("%lld", result);
    return 0;
}