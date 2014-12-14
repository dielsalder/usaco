/*
ID: elissa.1
LANG: C
*/
#include <stdio.h>

main() {
    FILE *fin = fopen ("names.txt", "r");
    size_t len = 0;
    ssize_t read;

    char* comet = getline(&line, &len, fin);
    char* group = getline(&line, &len, fin);

    int cnum = convert(comet);
    int gnum = convert(group);

    if (cnum % 47 == gnum % 47) {
        printf("GO\n");
    }
    else {
        printf("STAY\n");
    }
    exit(0);
}

int convert(char name)
{
    prod = 1;
    for (i; i < 4; i++) {
        num = name[i] - 'a' + 1;
        prod *= num;
    }

    return prod
}
