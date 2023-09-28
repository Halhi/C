#include <stdio.h>

int main()
{
    int countChoсolate = 3;
    int countCoffe = 1;
    int countMilk = 2;

    float priceChokolate = 119.99f;
    float priceCoffe = 300.0f;
    float priceMilk = 59.99f;
    float sum = 0.0f;

    sum = (countChoсolate * priceChokolate) + (countCoffe * priceCoffe) + (countMilk * priceMilk);


    printf ("Общая стоимость покупки составила: %f", sum);
}