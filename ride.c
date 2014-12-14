/*
ID: elissa.1
LANG: C
PROG: ride
*/
#include <stdio.h>
#include <stdlib.h>

int num(char * name)
{
    int prod = 1;
    int i = 0;
    while (name[i] != '\0') {
        prod *= name[i] - 64;
        i++;
    }
    return prod % 47;
}

int main()
{
    FILE *fin = fopen ("ride.in", "r");
    FILE *fout = fopen ("ride.out", "w");

    char comet[10], group[10];

    fscanf(fin, "%s", comet);
    fscanf(fin, "%s", group);

    if (num(comet) == num(group))
        fprintf(fout, "GO\n");
    else
        fprintf(fout, "STAY\n");

    return 0;
}
