#include "cstdio"

int main(int argc, char *argv[])
{
    int n;
    int sum;
    int a;
    int b;
    int c;
    
    scanf("%d", &n);
    
    a = n / 100;
    b = (n / 10) % 10;
    c = n % 10;
    sum = a + b + c;
    
    printf("%d", sum);
    
    return 0;
}