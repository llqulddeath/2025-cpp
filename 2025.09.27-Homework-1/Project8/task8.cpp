#include <cstdio>

int main(int argc, char *argv[]) {
    int M; int T; int circumference; int distance; int max_coins; int max_coins;
    scanf("%d", &M);
    scanf("%d", &T);
    circumference = 2 * 355 * (T - M) / 113;
    distance = 2 * M;
    max_coins = circumference / distance;
    
    if (max_coins % 2 == 1) {
        printf("Ivan");
    } else {
        printf("Denis");
    }
    
    return 0;
}