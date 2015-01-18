
#include<stdio.h>
#include "function.h"

int main()
{
    
    int a[LENGTH];
    getValue(a,LENGTH);
    
    int i,j,k,temp;
    i = 0;
    j = 0;
    k = 0;
    for(i = 1;i<LENGTH;i++)
    {
          k = i-1;
          for(j = i;j<LENGTH;j++)
          {
                if(a[j]<a[k])
                {
                             k = j;
                             
                             }
                
                }
          
          temp = a[k];
          a[k] = a[i-1];
          a[i-1] = temp;
          
          
          printf("__a[%d]  =  %d  __\n",i-1,a[i-1]);
          }
    
     printf("__a[%d]  =  %d  __\n",9,a[9]);
    
    getchar();
    }

                        
   
