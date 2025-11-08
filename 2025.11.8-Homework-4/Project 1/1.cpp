#include <cstdio>

int main(int argc, char** argv)
{

    int n = 0;
    

    scanf("%d", &n);
    

    if (n <= 0 || n > 100)
    {
        printf("Invalid array size\n");
        return 1;
    }
    

    int* array = new int[n];
    

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    

    for (int i = 0; i < n; i = i + 2)
    {
        printf("%d", array[i]);
        

        if (i + 2 < n)
        {
            printf(" ");
        }
    }
    printf("\n");
    

    delete[] array;
    
    return 0;
}