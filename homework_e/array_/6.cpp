#include<cstdio>

int main(int argc, char** argv)
{
    int n = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    
    scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
    
    int array[1001];
    
    for (int i = 0; i < n; i = i + 1)
    {
        array[i] = i + 1;
    }
    
    int start = a - 1;
    int end = b - 1;
    
    while (start < end)
    {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        
        start = start + 1;
        end = end - 1;
    }
    
    start = c - 1;
    end = d - 1;
    
    while (start < end)
    {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        
        start = start + 1;
        end = end - 1;
    }
    
    for (int i = 0; i < n; i = i + 1)
    {
        printf("%d", array[i]);
        if (i < n - 1)
        {
            printf(" ");
        }
    }
    
    return 0;
}