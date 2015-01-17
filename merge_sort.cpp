#include<stdio.h>
#include <limits.h>
#define LENGTH 10


int main()
{
   int merge_sort(int a[],int p,int q, int r);
   int i; 
   int a[LENGTH];
   for(i=0;i<LENGTH;i++)
   {
                        a[i] = 10-i;                     
   } 
   merge_sort(a,0,4,9); 
    
    for(i=0;i<LENGTH;i++)
   {
                        //printf("__ %d __\n",a[i]);                     
   } 
   
   getchar();
   
   
}
    
    
int merge_sort(int a[],int p,int q, int r)
{
    int x = q-p+1;
    int y = r-q;
    int L[x+1],R[y+1];
    
    
    
    int i,j;
    for(i=0;i<x;i++)
    {
                    L[i] = a[i];                
           //         printf("L[%d] =__ %d __\n",i,L[i]);   
                    
    }
    for(i=0;i<y;i++)
    {
                    R[i] = a[i+x];                
            //         printf("R[%d] =__ %d __\n",i,R[i]);
                    
    }
    L[x] = INT_MAX;
    R[y] = INT_MAX;
    
    
    i = 0;
    j = 0;
    int k;
    for(k = p;k<r+1;k++)
    {
           
          if(L[i]<R[j])
          {
                       a[k] = L[i];
                       i++;             
                       
          }else if(L[i]>R[j])
          {
                       a[k] = R[j];
                       j++;        
                
          }
          
          printf("a[%d] =__ %d __\n",k,a[k]);
          
    }
    
    
    
    return 0;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
