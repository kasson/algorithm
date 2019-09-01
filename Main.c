
#include "main.h"

int main(int argc, char **argv)
{

    printf("entering main\n");

    int score[10] = { 1, 3, 5, 7, 9, 10, 15, 18, 20, 35 };
    int index, len;
    len = sizeof(score)/sizeof(score[0]);

    index = binary_search(score, len, 1);
    if (index >= 0)
    {
        printf("index is [%d], value is [%d] \n", index, score[index]);
    }

    index = binary_search(score, len, 10);
    if (index >= 0)
    {
        printf("index is [%d], value is [%d] \n", index, score[index]);
    }

    index = binary_search(score, len, 35);
    if (index >= 0)
    {
        printf("index is [%d], value is [%d] \n", index, score[index]);
    }

    index = binary_search(score, len, 40);
    if (index >= 0)
    {
        printf("index is [%d], value is [%d] \n", index, score[index]);
    }
    else
    {
        printf("cannot find 40 in array.\n");
    }

    printf("program finished\n");
    return 0;
}

