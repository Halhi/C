#include <stdio.h>

int main()
{
    int enteredNumber;
    int i;
    
    printf("Введите целое число: ");
    scanf("%d", &enteredNumber);
    printf("реверс вашего числа это: ");

    for(i = enteredNumber; i > 0; i = i/ 10)
    { 
        printf("%d", enteredNumber%10);
        enteredNumber /= 10;
    }
}