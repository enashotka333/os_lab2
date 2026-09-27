#include "swap.h"

void Swap(char *left, char *right)
{
    if (!left || !right)
    {
        return;
    }

    char temp = *left;
    *left = *right;
    *right = temp;
}