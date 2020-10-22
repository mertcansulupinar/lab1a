#include <stdio.h>
#include <stdlib.h>

int main()
{
    //first question
    printf("**************************\n");
    printf("first question\n");
    printf(" -   -\n'*' '*'\n   *  \n  <>   \n");

    //third question
    printf("\n**************************\n");
    printf("second question\n");

    int r;
    float a, c, pi;

    pi= 3.14f;

    printf("\nPlease, could you write radius of the circle?\n");
    scanf("%d", &r);

    a = pi * r * r;
    c = 2 * pi * r;

    printf("\nArea of this circle is %.2f and the circumference of this circle is %.2f \n", a, c);

    //third question
    printf("\n**************************\n");
    printf("third question\n");
    printf("\nRadius of circle: %d \nArea of circle: %.2f \nCircumference of circle:  %.2f \n", r, a, c);




   return 0;
}
