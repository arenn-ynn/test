#include <stdio.h>

int main()
{
    int size;

    do
    {
        printf("How many numbers do you want to compare? : ");
        scanf("%d", &size);

        if (size < 2)
        {
            printf("You can't compare numbers less than 2! Try again!\n");
        }

    } while (size < 2);

    int nums[size];
    int max;

    for (int i = 0; i < size; ++i)
    {
        int p = i + 1;

        // checking number's suffix for each printf (th, st, nd, rd)

        if (p % 100 >= 11 && p % 100 <= 13)
        {
            printf("Type the %dth number! : ", p);
        }
        else if (p % 10 == 1)
        {
            printf("Type the %dst number! : ", p);
        }
        else if (p % 10 == 2)
        {
            printf("Type the %dnd number! : ", p);
        }
        else if (p % 10 == 3)
        {
            printf("Type the %drd number! : ", p);
        }
        else
        {
            printf("Type the %dth number! : ", p);
        }

        scanf("%d", &nums[i]);

        if (i == 0)
        {
            max = nums[i];
        }
        else
        {
            if (max < nums[i])
            {
                max = nums[i];
            }
        }
    }

    printf("The biggest number was %d!\n", max);
}
