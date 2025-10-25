#include <cstdio>

int main(int argc, char** argv)
{

    int n = 0;
    int x = 0;
    int count = 0;
    

    scanf_s("%d", &n);
    

    int array[1000] = {0};

    for (int i = 0; i < n; i++)
    {
        scanf_s("%d", &array[i]);
    }
    

    scanf_s("%d", &x);
    

    for (int i = 0; i < n; i++)
    {
        if (array[i] == x)
        {
            count = count + 1;
        }
    }
    

    printf("%d", count);
    
    return 0;
}