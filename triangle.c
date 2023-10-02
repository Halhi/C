#include <stdio.h>

int main()
{
    int heightOfTriangle;
    printf("Введите высоту треугольника: ");
    scanf("%d", &heightOfTriangle);
    printf("Ваш треугольник!\n");

 
    for(int i = 0; i < heightOfTriangle; i++)
    {
         for (int j = 1; j < heightOfTriangle - i; j++)
        {
            printf(" ");
        }
        for(int j = heightOfTriangle - 2 * i; j <= heightOfTriangle; j++)
        {
            printf("^");
        }
        printf("\n");
    }
}