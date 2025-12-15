#include<cstdio>

int main(int argc, char** argv)
{
    int k = 0;
    int result = 0;
    
    scanf_s("%d", &k);
    
    if (k == 1)
    {
        result = 0;
    }
    else
    {
        result = (k - 1) * 5;
    }
    
    printf("%d", result);
    
    return 0;
}