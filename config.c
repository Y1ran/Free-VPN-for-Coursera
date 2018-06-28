

//Compute the weight of a box from input

#include <stdio.h>

int main(void)
{
    int height,length,width,volume,weight;
    printf("Enter height for box: \a");

    scanf("%d", &height);
    printf("enter length for box: \a");
    scanf("%d", &length);
    printf("enter width of box: \a");
    scanf("%d", &width);
    volume = height *length * width;
    weight = (volume + 165) / 166;

    printf("Volume of box: %d\n", volume);
    printf("Dimensional weight : %d\n", weight);

    printf("                   *");
    printf("                  *\n");
    printf("                 *\a");
    printf("                *");
    printf("               *");
    printf("*             *");
    printf(" *           *");
    printf("  *         *\a");
    printf("   *       *\a");
    printf("    *     *\a");
    printf("     *   *\a");
    printf("       *\a");

    return 0;
}

