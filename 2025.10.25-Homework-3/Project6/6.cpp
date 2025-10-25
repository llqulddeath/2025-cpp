#include <cstdio>

int main(int argc, char** argv)
{
    int n = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    scanf_s("%d %d %d %d %d", &n, &a, &b, &c, &d);
    
    int array[1000] = {0};
    
    for (int i = 0; i < n; i++)
    {
        array[i] = i + 1;
    }
    
    int temp = 0;
    for (int i = a - 1, j = b - 1; i < j; i++, j--)
    {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
    
    for (int i = c - 1, j = d - 1; i < j; i++, j--)
    {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    
    return 0;
}