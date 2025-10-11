#include<cstdio>

int main(int argc, char** argv)
{
    int n = 0;
    scanf("%d", &n);
    
    int digit1 = n / 100000;
    int digit2 = (n / 10000) % 10;
    int digit3 = (n / 1000) % 10;
    int digit4 = (n / 100) % 10;    
    int digit5 = (n / 10) % 10;
    int digit6 = n % 10;
    
    int sumFirst = digit1 + digit2 + digit3;
    int sumLast = digit4 + digit5 + digit6;
    
    if (sumFirst == sumLast)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    return 0;
}