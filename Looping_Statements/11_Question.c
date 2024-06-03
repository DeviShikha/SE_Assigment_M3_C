/*
11. Accept 5 names from user at run time...?
*/

#include <stdio.h>

main() {
    char names[5][50]; 
    int i;

    printf("Enter 5 names, one per line:\n");
    for (i = 0; i < 5; i++) {
        printf("Name %d: ", i + 1 );
        scanf("%s", names[i]);
    }

    printf("\nNames you entered:\n");
    for (i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1 , names[i]);
    }

    return 0;
}


