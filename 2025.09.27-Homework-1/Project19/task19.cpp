#include "cstdio"

int main(int argc, char *argv[])
{
    int n;
    int k;
    int first;
    int second;
    int third;
    
    scanf("%d %d", &n, &k);
    
    first = k / n;
    second = k % n;
    
    if(k % n == 0)
    {
        third = 0;
    }
    else
    {
        third = n - (k % n);
    }
    
    printf("%d %d %d", first, second, third);
    
    return 0;
}