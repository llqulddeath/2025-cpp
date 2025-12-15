#include<cstdio>

int main(int argc, char** argv)
{
    int number = 0;
    int sum = 0;
    int hundreds = 0;
    int tens = 0;
    int units = 0;
    
    scanf_s("%d", &number);
    
    hundreds = number / 100;
    tens = (number / 10) % 10;
    units = number % 10;
    
    sum = hundreds + tens + units;
    
    printf("%d", sum);
    
    return 0;
}