#include <cstdio>

int main(int argc, char** argv)
{
    int n = 0;
    
    scanf("%d", &n);
    
    if (n == 0)
    {
        printf("0\n");
    }
    else if (n == 1)
    {
        printf("1\n");
    }
    else
    {
        int prevPrev = 0;
        int prev = 1;
        int current = 0;
        
        for (int i = 2; i <= n; i++)
        {
            current = prevPrev + prev;
            prevPrev = prev;
            prev = current;
        }
        
        printf("%d\n", current);
    }
    
    return 0;
}