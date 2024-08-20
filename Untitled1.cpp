#include <iostream>
#include <math.h>
#include <stdio.h>

int main() {
    float a, b, c, x1, x2, x, d;
    setlocale(LC_ALL, "RUS");
    printf("Введите квадратное уравнение\n");
    scanf("%f %f %f", &a, &b, &c);

   if(a == 0)
   {
        if(b == 0)
        {
                if(c == 0)
                {
                    printf("Infinity");
                }
                else
                {
                    printf("Not answers");
                }
        }
        else
        {
            printf("x = %g", -c / b);
        }
    }
    else
    {

               d = b * b - 4 * a * c;
               if(d < 0)
                {
                    printf("Not answers");
                }
                else if(d == 0)
                {
                    printf("x = %g", -b / (2 * a));
                }
                else {
                    printf("x1 = %g, x2 = %g", ((-b - sqrt(d)) / (2*a)), ((-b + sqrt(d)) / (2*a)));

                }
    }





    }


