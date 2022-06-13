
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include "sort.h"
#include "stack.h"
#include "linked_list.h"
#include "sleep.h"

int run_sort();
int run_stack();
int run_linked_list();
int run_tiny_sleep();

int main(int argc, char** argv)
{
    printf("  _____  _  __  _ __  __    _     _ _____  \n");
    printf(" |_   _|| ||  \\| |\\ \\/ /   | |__ | || () ) \n");
    printf("   |_|  |_||_|\\__| |__|    |____||_||_()_) \n");
    printf("                            - Collections   \n\n");

    srand(time(NULL));

    run_sort();
    run_stack();
    run_linked_list();
    run_tiny_sleep();

    return 0;
}

int run_sort()
{
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

    x = rand() % 100;
    printf("Push ... %d ... %s\n", x, !push(x) ? "Success" : "Failed");
    x = rand() % 100;
    printf("Push ... %d ... %s\n", x, !push(x) ? "Success" : "Failed");
    x = rand() % 100;
    printf("Push ... %d ... %s\n", x, !push(x) ? "Success" : "Failed");
    x = rand() % 100;
    printf("Push ... %d ... %s\n", x, !push(x) ? "Success" : "Failed");
    x = rand() % 100;
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

    printf("\n");
    return 0;
}

int run_linked_list()
{
    printf("+-------------+\n");
    printf("| Linked list |\n");
    printf("+-------------+\n");

    init_node();
    printf("Init | ");
    dump_nodes();

    append(1, rand() % 100);
    printf("Append key 1 | ");
    dump_nodes();

    append(2, rand() % 100);
    printf("Append key 2 | ");
    dump_nodes();

    append(2, rand() % 100);
    printf("Append key 2 | ");
    dump_nodes();

    append(2, rand() % 100);
    printf("Append key 2 | ");
    dump_nodes();

    append(7, rand() % 100);
    printf("Append key 7 | ");
    dump_nodes();

    delete(2);
    printf("delete key 2 | ");
    dump_nodes();

    delete(1);
    printf("delete key 1 | ");
    dump_nodes();

    append(5, rand() % 100);
    printf("Append key 5 | ");
    dump_nodes();

    delete_all();
    printf("Delete all | ");
    dump_nodes();

    printf("\n");
    return 0;
}

int run_tiny_sleep()
{
    printf("+-------------------+\n");
    printf("| Sleep 1.1 seconds |\n");
    printf("+-------------------+\n");

    double sleep_time = 1.1;

    printf("Sleep %lf seconds, start...", sleep_time);
    tiny_sleep(sleep_time);
    printf("Finished\n");

    printf("\n");
    return 0;
}
