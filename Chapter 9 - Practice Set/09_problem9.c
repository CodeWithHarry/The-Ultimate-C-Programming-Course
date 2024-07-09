#include <stdio.h>

typedef struct Date
{
    int mm;
    int dd;
    int yyyy;
} DT;

int compare(DT d1, DT d2)
{
    // if d1 is in the future, return 1
    if ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd))
    {
        return 0;
    }

    if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    else if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }
    else if (d1.mm > d2.mm)
    {
        return 1;
    }
    else if (d1.mm < d2.mm)
    {
        return -1;
    }
    else if (d1.dd > d2.dd)
    {
        return 1;
    }
    else if (d1.dd < d2.dd)
    {
        return -1;
    }
}

int main()
{
    DT d1 = {12, 4, 2154};
    DT d2 = {12, 8, 2154};
    printf("%d", compare(d1, d2));
    return 0;
}