#include "cstdio"

int main(int argc, char *argv[])
{
    int n; int a; int b; int area; int fullarea;
    scanf("%d %d %d", &n, &a, &b);
    
    area = a * b;
    fullarea = area * n * 2;
    printf("%d", fullarea);
    
    return 0;
}