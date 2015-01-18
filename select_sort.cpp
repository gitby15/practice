
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
    for(i = 0;i<LENGTH;i++)
    {
          k = i;
          for(j = i;j<LENGTH;j++)
          {
                if(a[j]<a[k])
                {
                             k = j;
                             
                             }
                
                }
          
          temp = a[k];
          a[k] = a[i];
          a[i] = temp;
          
          
          printf("__a[%d]  =  %d  __\n",i,a[i]);
          }
    
    
    
    getchar();
    }
 //  a b c d e f g h i j
                        
   
