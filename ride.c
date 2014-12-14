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
    while (i < 10) {
        int num = name[i] - 'a' + 1;
        prod = prod * num;
        i++;
    }
    return prod % 47;
}

int main() {
    FILE *fin = fopen ("ride.in", "r");
    FILE *fout = fopen ("ride.out", "r");

    char comet[10], group [10];
    fgets(fin, 10, comet);
    fgets(fin, 10, group);

    if (num(comet) == num(group))
        fprintf(fout, "GO\n");
    else
        fprintf(fout, "STAY\n");

    return(0);
}

