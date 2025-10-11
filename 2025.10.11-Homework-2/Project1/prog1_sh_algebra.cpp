#include<cstdio>

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    int c = 0;
    
    scanf("%d %d %d", &a, &b, &c);
    
    int firstPrinted = 0;
    
    if (a != 0)
    {
        printf("%d", a);
        firstPrinted = 1;
    }
    
    if (b != 0)
    {
        if (firstPrinted == 1)
        {
            if (b > 0)
            {
                printf("+");
            }
        }
        
        if (b == -1)
        {
            printf("-");
        }
        else if (b == 1)
        {
            if (firstPrinted == 0)
            {
                printf("");
            }
        }
        else
        {
            printf("%d", b);
        }
        
        printf("x");
        firstPrinted = 1;
    }
    
    if (c != 0)
    {
        if (firstPrinted == 1)
        {
            if (c > 0)
            {
                printf("+");
            }
        }
        
        if (c == -1)
        {
            printf("-");
        }
        else if (c == 1)
        {
            if (firstPrinted == 0)
            {
                printf("");
            }
        }
        else
        {
            printf("%d", c);
        }
        
        printf("y");
        firstPrinted = 1;
    }
    
    if (firstPrinted == 0)
    {
        printf("0");
    }
    
    return 0;
}