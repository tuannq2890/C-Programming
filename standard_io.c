#include <stdio.h>
#include <conio.h>
#include <math.h>
const float PI = 3.14;

int main()
{
    float r, c, s;
    printf("Ban kinh duong tron:");
    scanf("%f", &r);

    c = 2 * PI * r;
    s = PI * pow(r, 2);

    printf("\n=> Chu vi duong tron la: %.2f", c);
    printf("\n=> Dien tich duong tron la: %.2f", s);

    return 0;
}