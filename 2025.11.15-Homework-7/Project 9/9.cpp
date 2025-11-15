#include <cstdio>

int min(int a, int b, int c, int d)
{
    int min1 = a;
    
    if (b < min1)
    {
        min1 = b;
    }
    
    if (c < min1)
    {
        min1 = c;
    }
    
    if (d < min1)
    {
        min1 = d;
    }
    
    return min1;
}

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    int result = min(a, b, c, d);
    
    printf("%d", result);
    
    return 0;
}