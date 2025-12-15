#include<cstdio>

int main(int argc, char** argv)
{
    int n = 0;
    int result = 0;
    
    scanf_s("%d", &n);
    
    result = (n + 1) / 2;
    result = result * result;
    
    printf("%d", result);
    
    return 0;
}