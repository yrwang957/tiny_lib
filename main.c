
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include "sort.h"
#include "stack.h"

int run_sort();
int run_stack();

int main(int argc, char** argv)
{
    printf("  _____  _  __  _ __  __    _     _ _____  \n");
    printf(" |_   _|| ||  \\| |\\ \\/ /   | |__ | || () ) \n");
    printf("   |_|  |_||_|\\__| |__|    |____||_||_()_) \n\n");

    run_sort();
    run_stack();

    return 0;
}

int run_sort()
{
    srand(time(NULL));

    if(true)
    {
        printf("+------------+\n");
        printf("| Qucik sort |\n");
        printf("+------------+\n");

        srand(time(NULL));

        int array[16] = {};
        int len = sizeof(array) / sizeof(int);

        for(int i = 0; i < len; ++i)
            array[i]= rand() % 100;

        printf("Before sort:\n");
        for(int i = 0; i < len; ++i)
            printf("%d  ", array[i]);
        printf("\n");

        quick_sort(array, len);

        printf("After sort:\n");
        for(int i = 0; i < len; ++i)
            printf("%d  ", array[i]);
        printf("\n\n");
    }

    if(true)
    {
        printf("+-------------+\n");
        printf("| Bubble sort |\n");
        printf("+-------------+\n");

        int array[16] = {};
        int len = sizeof(array) / sizeof(int);

        for(int i = 0; i < len; ++i)
            array[i]= rand() % 100;

        printf("Before sort:\n");
        for(int i = 0; i < len; ++i)
            printf("%d  ", array[i]);
        printf("\n");

        bubble_sort(array, len);

        printf("After sort:\n");
        for(int i = 0; i < len; ++i)
            printf("%d  ", array[i]);
        printf("\n\n");
    }

    return 0;
}

int run_stack()
{
    printf("+----------------+\n");
    printf("| Stack push pop |\n");
    printf("+----------------+\n");

    int x = 0;

    printf("Pop ... %s ... ", !pop(&x) ? "Success" : "Failed");
    printf("%d\n", x);

    printf("Peek ... %s ... ", !peek(&x) ? "Success" : "Failed");
    printf("%d\n", x);

    x = 1;
    printf("Push ... %d ... %s\n", x, !push(x) ? "Success" : "Failed");

    x = 3;
    printf("Push ... %d ... %s\n", x, !push(x) ? "Success" : "Failed");

    x = 5;
    printf("Push ... %d ... %s\n", x, !push(x) ? "Success" : "Failed");

    x = 7;
    printf("Push ... %d ... %s\n", x, !push(x) ? "Success" : "Failed");

    x = 9;
    printf("Push ... %d ... %s\n", x, !push(x) ? "Success" : "Failed");

    printf("Peek ... %s ... ", !peek(&x) ? "Success" : "Failed");
    printf("%d\n", x);

    printf("Pop ... %s ... ", !pop(&x) ? "Success" : "Failed");
    printf("%d\n", x);

    printf("Pop ... %s ... ", !pop(&x) ? "Success" : "Failed");
    printf("%d\n", x);

    printf("Pop ... %s ... ", !pop(&x) ? "Success" : "Failed");
    printf("%d\n", x);

    printf("Pop ... %s ... ", !pop(&x) ? "Success" : "Failed");
    printf("%d\n", x);

    printf("Pop ... %s ... ", !pop(&x) ? "Success" : "Failed");
    printf("%d\n", x);

    printf("Peek ... %s ... ", !peek(&x) ? "Success" : "Failed");
    printf("%d\n", x);


    return 0;
}
