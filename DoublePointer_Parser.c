
#include <stdio.h>
#include <stdlib.h>

/*Every string correspond to a transaction, such transaction is composed by a sender, receiver and amount*/
/*Format in the strings: sender receiver amount*/
/*Fake data just emulate the entry from user*/
char str1[50] = "40 50 3000";
char str2[50] = "20 30 2000";
char str3[50] = "30 40 10000";


int main()
{
    //Use dinamic storege insted of static storage. Practice for double pointers.
    char** logs = malloc(3*sizeof(char*)); 
    logs[0] = str1;
    logs[1] = str2;
    logs[2] = str3;    
    
    
    //Parce,extract number and conver to int 
    for (int i=0; i<3; i++)
    {
        //mem assignation for my current string
        char *trans = malloc(50 * sizeof(char)); 
        trans = logs[i]; 
        char *endptr; 
        
        //Conver to base 10
        int sender = strtol(trans, &endptr, 10); 
        int receiver = strtol(endptr, &endptr, 10);
        int amount = strtol(endptr, &endptr, 10);
        
        printf("transaction: %d\n",i);
        printf("Sender id: %d\n",sender);
        printf("Receiver id: %d\n",receiver);
        printf("Amount %d\n",amount);
        printf("\n");
    }
    
    return 0;
}




