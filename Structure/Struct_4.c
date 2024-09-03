// comparing two objects of one class using structure.

#include <stdio.h>
#include <stdbool.h>

struct date
{
    int day;
    int month;
    int year;
};

int main()
{
    struct date d1;
    struct date d2;

    d1.day = 9;
    d1.month = 6;
    d1.year = 2005;

    d2.day = 9;
    d2.month = 6;
    d2.year = 2005;

    bool flag = true;

    if (d1.day == d2.day)
    {
        if (d1.month == d2.month)
        {
            if (d1.year == d2.year)
            {
                flag = true;
            }
            else
            {
                flag = false;
            }
        }
        else
        {
            flag = false;
        }
    }
    else
    {
        flag = false;
    }

    if (flag == true)
    {
        printf("Date Matched.\n");
    }
    else
    {
        printf("Date not Matched.\n");
    }

    return 0;
}