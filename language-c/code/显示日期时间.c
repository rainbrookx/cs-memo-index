#include <stdio.h>
#include <time.h>
int current_time()
{
    time_t cur = time(NULL);
    struct tm *ltm = localtime(&cur);  // ????
    printf("%dÄê", 1900 + ltm->tm_year);
    printf("%dÔÂ", 1 + ltm->tm_mon);
    printf("%dÈÕ", ltm->tm_mday);
    printf("  ");
    printf("%d:%d:%d\n", ltm->tm_hour, ltm->tm_min, ltm->tm_sec);

    return 0;
}
int main()
{
	current_time();
}
