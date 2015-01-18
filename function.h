#include<stdlib.h>
#include<time.h>
#include<stdio.h>

#define LENGTH 10
void getValue(int a[],int length)
{
     
    srand((int)time(NULL));
    printf("In getValue\n\n");
    int i;
    for(i=0;i<length;i++)
    {
                         a[i] = rand()%99 +1;
                         printf("___  %d  ___\n",a[i]);
                         }
     
     printf("\n\nOut getValue\n\n");
     
     }
