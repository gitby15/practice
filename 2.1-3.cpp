#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define LENGTH 10
#define NIL = 0;
int main()
{
    
    int a[LENGTH];
    srand((int)time(NULL));
    
    int i;
    for(i=0;i<LENGTH;i++)
    {
                         a[i] = rand()%99 +1;
                         printf("___  %d  ___\n",a[i]);
                         }
    int v;
    printf("input v:");
    scanf("%d",&v);
    fflush(stdin);
    
     for(i=0;i<LENGTH;i++)
    {
                         if(a[i] == v)
                         {
                                 v = i+1;
                                 break;
                                 
                                 }
                         }
    printf("v = %d\n",v);
    getchar();
    
    
    }
 
