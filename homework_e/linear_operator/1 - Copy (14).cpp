#include<cstdio>

int main(int argc, char** argv)
{
    int k = 0;
    int n = 0;
    int page = 0;
    int line = 0;
    
    scanf_s("%d %d", &k, &n);
    
    page = (n - 1) / k + 1;
    line = (n - 1) % k + 1;
    
    printf("%d %d", page, line);
    
    return 0;
}