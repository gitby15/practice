#include<stdio.h>
#define LENGTH 10
/*
插入算法
算法导论第十页
复杂度O(n^2)



*/


int main()
{
    
    int a[LENGTH]={9,5,8,7,6,5,6,3,2,1};
    int i,j,key;
    int temp;
    
    
    for(i=0;i<LENGTH;i++)
    {
                         a[i] = 10-i;                     
                         
    }
    
    a[4]=4;
    
    
    for(j=1;j<LENGTH;j++)
    {
        key = a[j];
        i = j-1;
        
        while(i>=0&&a[i]>key)
        {
                            a[i+1] = a[i];
                            i--;                    
        }
        a[i+1] = key;
        
        
                          
    }
    
    for(i=0;i<10;i++)
    {
                     printf("%d\n",a[i]);
                     }
    getchar();
    
    } 
