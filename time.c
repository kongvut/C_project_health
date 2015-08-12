#include <time.h>
#include <stdlib.h>
#include <stdio.h>

char* time_now(void)
{
    time_t current_time;
    char* c_time_string;

    /* Obtain current time as seconds elapsed since the Epoch. */
    current_time = time(NULL);

    if (current_time == ((time_t)-1))
    {
        (void) fprintf(stderr, "Failure to compute the current time.\n");
        return EXIT_FAILURE;
    }

    /* Convert to local time format. */
    c_time_string = ctime(&current_time);

    if (c_time_string == NULL)
    {
        (void) fprintf(stderr, "Failure to convert the current time.\n");
        return EXIT_FAILURE;
    }

    /* Print to stdout. ctime() has already added a terminating newline character. */
    //(void) printf("Current time is %s", c_time_string);
    return c_time_string;
}
