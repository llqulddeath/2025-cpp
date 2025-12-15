#include<cstdio>

int main(int argc, char** argv)
{
    int n = 0;
    int a = 0;
    int b = 0;
    int result = 0;
    
    scanf_s("%d %d %d", &n, &a, &b);
    
    result = n * a * b * 2;
    
    printf("%d", result);
    
    return 0;
}