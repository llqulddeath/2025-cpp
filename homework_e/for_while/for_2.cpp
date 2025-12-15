#include <cstdio>

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    int firstFound = 0;
    int secondFound = 0;
    int thirdFound = 0;
    int count = 0;
    
    for (int x = -100; x <= 100; x++)
    {
        long long result = (long long)a * x * x * x + (long long)b * x * x + (long long)c * x + (long long)d;
        
        if (result == 0)
        {
            if (count == 0)
            {
                firstFound = x;
                count = 1;
            }
            else if (count == 1 && x != firstFound)
            {
                secondFound = x;
                count = 2;
            }
            else if (count == 2 && x != firstFound && x != secondFound)
            {
                thirdFound = x;
                count = 3;
            }
        }
    }
    
    if (count == 1)
    {
        printf("%d\n", firstFound);
    }
    else if (count == 2)
    {
        if (firstFound < secondFound)
        {
            printf("%d %d\n", firstFound, secondFound);
        }
        else
        {
            printf("%d %d\n", secondFound, firstFound);
        }
    }
    else if (count == 3)
    {
        int temp = 0;
        
        if (firstFound > secondFound)
        {
            temp = firstFound;
            firstFound = secondFound;
            secondFound = temp;
        }
        if (secondFound > thirdFound)
        {
            temp = secondFound;
            secondFound = thirdFound;
            thirdFound = temp;
        }
        if (firstFound > secondFound)
        {
            temp = firstFound;
            firstFound = secondFound;
            secondFound = temp;
        }
        
        printf("%d %d %d\n", firstFound, secondFound, thirdFound);
    }
    
    return 0;
}