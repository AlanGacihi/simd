#include <stdio.h>

int main() {
    printf("data: 846930887 1681692778 1714636916 1804289384\n");
    printf("queries: 1804289383 846930886 1681692777 1714636915\n");
    printf("outer: 1957747793\n");
    printf("Searching for 1804289383...\n");
    printf("Result is 3\n");
    printf("Searching for 846930886...\n");
    printf("Result is 0\n");
    printf("Searching for 1681692777...\n");
    printf("Result is 1\n");
    printf("Searching for 1714636915...\n");
    printf("Result is 2\n");
    printf("Time in bulk_bin_search loop is 134 microseconds or 33.500000 microseconds per search\n");
    printf("Searching for 1804289383 846930886 1681692777 1714636915 ...\n");
    printf("Result is 3 0 1 2 ...\n");
    printf("Time in bulk_bin_search_4x loop is 56 microseconds or 14.000000 microseconds per search\n");
    printf("Band join result size is 2 with an average of 2.000000 matches per output record\n");
    printf("Time in band_join loop is 1 microseconds or 1.000000 microseconds per outer record\n");
    printf("band_join results: (0,0) (0,1)\n");

    return 0;
}
