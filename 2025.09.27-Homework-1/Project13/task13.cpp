#include "cstdio"

int main(int argc, char *argv[])
{
    int k;
    int n;
    int page;
    int line;
    
    scanf("%d %d", &k, &n);
    
    page = (n - 1) / k + 1;
    line = (n - 1) % k + 1;
    
    printf("%d %d", page, line);
    
    return 0;
}