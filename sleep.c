
#include <stdio.h>
#include <sys/select.h>

int tiny_sleep(double seconds)
{
    unsigned int integer = (unsigned int)seconds;
    double decimal = seconds - integer;
    struct timeval sleep_time;
    sleep_time.tv_sec = integer;
    sleep_time.tv_usec = decimal * 1000000;

    select(0, NULL, NULL, NULL, &sleep_time);

    return 0;
}
