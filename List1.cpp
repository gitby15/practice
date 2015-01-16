#include<stdio.h>
#include<stdlib.h>

/*
ADT List

Data:
     
        DataType a[];
        {a1,a2,a3,a4,a5....an}

Operation:
          InitList(*L): initialization
          ListEmpty(L): check whether the table is empty
          ClearList(*L): clear the list
          GetElem(L,i,*e): return data i to e
          LocateElem(L,e): match e in list  
          ListInsert(*L,i,e): insert e at i in list
          ListDelete(*L,i,*e): delete elem i ,and return i to e
          ListLength(L): get length
                 
end ADT

2015.01.16

*/


#define ERROR 99
#define OK 100


typedef int DataType ;


struct List
{
       DataType data;
   
       };
int main()
{
    int InitList(List** L,int length);
    int ClearList(List* L);
    int GetElem(List L,int i,DataType *e);
    List *L;
    //printf("_1_%d_\n",sizeof(L));
    
    
    InitList(&L,5);
    
  
    system("pause");
    
    ClearList(L);
    
    }

int InitList(List** L,int length)
{
    *L = (List *)malloc(sizeof(List)*(length+1));    //real length = length +1 ,first data is length
    *L->data = length;
    for(int i=0;i<length;i++)
    {
         //   L->data[i] = 0;
            }
  
    }




//int ListEmpty(){}  //dont use
int ClearList(List* L)
{
    
    
    free(L);
    
    
    
    }
    
    
    
int GetElem(List L,int i,DataType *e)
{
    if(i<1||i>L.data)
    {
                     printf("Illegal input i!\n");
                     return ERROR;
                     }
    *e = L.data[i];
    
    }
int LocateElem(){}
int ListInsert(){}
int ListDelete(){}
int ListLength(){}











































