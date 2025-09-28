#include "cstdio"

int main(int argc, char *argv[])
{
    int n;
    int tens;
    int integer_10;
    scanf("%d", &n);
    integer_10 = n/10;
    tens = integer_10 % 10;
    printf("%d", tens);
    
    return 0;
}