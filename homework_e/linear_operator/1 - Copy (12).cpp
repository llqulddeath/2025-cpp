#include<cstdio>

int main(int argc, char** argv)
{
    int number = 0;
    int last_digit = 0;
    
    scanf_s("%d", &number);
    
    last_digit = number % 10;
    
    printf("%d", last_digit);
    
    return 0;
}