#include<cstdio>

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int sum = 0;
    
    scanf_s("%d %d %d", &a, &b, &c);
    
    sum = a + b + c;
    
    printf("%d", sum);
    
    return 0;
}