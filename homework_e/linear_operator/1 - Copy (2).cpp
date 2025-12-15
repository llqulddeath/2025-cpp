#include<cstdio>

int main(int argc, char** argv)
{
    int number = 0;
    int prev = 0;
    int next = 0;
    
    scanf_s("%d", &number);
    
    prev = number - 1;
    next = number + 1;
    
    printf("The next number for the number %d is %d.\n", number, next);
    printf("The previous number for the number %d is %d.", number, prev);
    
    return 0;
}