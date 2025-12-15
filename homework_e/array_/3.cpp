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
    
    int x = 0;
    scanf("%d", &x);
    
    int count = 0;
    
    for (int i = 0; i < n; i = i + 1)
    {
        if (array[i] == x)
        {
            count = count + 1;
        }
    }
    
    printf("%d", count);
    
    return 0;
}