#include <cstdio>

int main(int argc, char *argv[]) {
    int N;
    scanf("%d", &N);
    
    int half = (N + 1) / 2;
    int result = half * half;
    
    printf("%d", result);
    
    return 0;
}