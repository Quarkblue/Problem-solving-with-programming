#include <stdio.h>
int main(){
    int mgiven, billamt,q,r;
    scanf("%d %d", &mgiven,&billamt);
    q = mgiven/billamt;
    r = mgiven%billamt;
    printf("Quotient: %d",q);
    printf("\nRemainder: %d",r);

    return 0;

}



/*
input given in one line as :-
"<amount given by santo> <bill amount by shopkeeper>"
output give as:
"<qoutient after dividing the amount given by santo by bill amount>
<remainder of the same above>"
*/