#include<cstdio>

int main(int argc, char** argv)
{
    int n = 0;
    scanf("%d", &n);
    
    int array[1001];
    
    for (int i = 0; i < n; i = i + 1)
    {
        scanf("%d", &array[i]);
    }
    
    for (int i = n - 1; i >= 0; i = i - 1)
    {
        printf("%d", array[i]);
        if (i > 0)
        {
            printf(" ");
        }
    }
    
    return 0;
}