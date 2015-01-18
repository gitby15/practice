#include<stdio.h> 
#include<malloc.h>
#define EMPTY 1
#define NOTEMPTY 0


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

struct Node
{
       int data;
       Node* next;
       
       
       };


int main(){
	void InitList(Node **p);
	Node *p;
    InitList(&p);
    printf("%d\n",p->data);
	getchar();
	
}


void InitList(Node **p)
{
     *p = (Node *)malloc(sizeof(Node));
     (*p)->data = 0; 
     (*p)->next = 0;
     
     }

int ListEmpty(Node p)
{
     if((*p)->next == 0);
     {
                   return EMPTY;
                   }else{
                         return NOTEMPTY;
                         
                         }
     
     
     
     }


void ClearList(Node **p)
{
     
     
     
     
     }

































