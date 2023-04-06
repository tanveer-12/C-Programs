#include<stdio.h>

#define SPEEDLIMIT 55
#define RATE 15
#define FIRST_TICKET 85
#define SECOND_TICKET 95
#define THIRD_TICKET 100

int main()
{
    int total, fine,speeding;
    puts("Speeding Tickets\n");

    //first ticket----
    speeding = FIRST_TICKET-SPEEDLIMIT;
    fine = speeding * RATE;
    total = total + fine;
    printf("For going %d in a %d zone: $%d\n",FIRST_TICKET,SPEEDLIMIT,fine);

    //second ticket
    speeding = SECOND_TICKET-SPEEDLIMIT;
    fine = speeding * RATE;
    total = total + fine;
    printf("For going %d in a %d zone: $%d\n",SECOND_TICKET,SPEEDLIMIT,fine);

    //third ticket
    speeding = THIRD_TICKET-SPEEDLIMIT;
    fine = speeding * RATE;
    total = total + fine;
    printf("For going %d in a %d zone: $%d\n",THIRD_TICKET,SPEEDLIMIT,fine);

    //displaying total
    printf("\n Total in fines: $%d\n",total);
    return 0;
}