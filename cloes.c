#include <stdio.h>

char y[20];
int x, n;
float i, totel, dis1, dis2, dis3, dis4, dis5, discuont_totel, totel1, totel2, totel3, totel4, totel5;
int main(void)
{
    while (1)
    {
        printf("Enter name of the piece: ");
        scanf("%s", y);
        printf("Enter the number of the piece: ");
        scanf("%d", &n);
        printf("Enter the price of the piece: ");
        scanf("%d", &x);
        i = x * n;
        if (n == 1)
        {
            dis1 = 0.01 * 10;
            printf("befor discuont = %f\n", i);
            printf("discuont 10%% = %f\n", i * dis1);
            totel1 = i - (i * dis1);
            printf("totel = %f\n", totel1);
        }

        else if (n == 2)
        {
            dis2 = 0.01 * 20;
            printf("befor discuont = %f\n", i);
            printf("discuont 20%% = %f\n", i * dis2);
            totel2 = i - (i * dis2);
            printf("totel = %f\n", totel2);
        }

        else if (n == 3)
        {
            dis3 = 0.01 * 30;
            printf("befor discuont = %f\n", i);
            printf("discuont 30%% = %f\n", i * (0.01 * 30));
            totel3 = i - (i * dis3);
            printf("totel = %f\n", totel3);
        }

        else if (n == 4)
        {
            dis4 = 0.01 * 40;
            printf("befor discuont = %f\n", i);
            printf("discuont 40%% = %f\n", i * dis4);
            totel4 = i - (i * dis4);
            printf("totel = %f\n", totel4);
        }
        else if (x == 0)
        {
            printf("Sorry,there is nothing. \n");
            break;
        }
        else
        {
            dis5 = 0.01 * 50;
            printf("befor discuont = %f\n", i);
            printf("discuont 50%% = %f\n", i * dis5);
            totel5 = i - (i * dis5);
            printf("totel = %f\n", totel5);
        }
    }
    return 0;
}
