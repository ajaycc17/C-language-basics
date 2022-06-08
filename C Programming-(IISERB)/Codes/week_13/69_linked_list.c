#include<stdio.h>
#include<stdlib.h>

struct linked_list
{
  int num;
  struct linked_list *next;
};

typedef struct linked_list node;

void create(node* list);

void print(node* list);

int count(node* list,int i);

void insert(node* list,int new,int pos,int coun);

void delete(node* list,int del_pos,int coun);


void main()
{
  node* head;

  head=(node*)malloc(sizeof(node));
  
  create(head);

  print(head);

  printf("The number of elements in linked list is %d\n",count(head,0));

  printf("Enter the value to be inserted: ");
  int new,pos;
  scanf("%d",&new);

  printf("Enter the position at which it should be entered: ");
  scanf("%d",&pos);

  if(pos==1)
    {
      node* new1;
      new1=(node*)malloc(sizeof(node));
      new1->num=new;
      new1->next=head;
      head=new1;
    }

  else
    insert(head,new,pos,1);

  print(head);

  printf("Enter the position of the value to be deleted\n");
  int del_pos;
  scanf("%d",&del_pos);

  if(del_pos==1)
    {
      head=head->next;
    }

  else
    delete(head,del_pos,1);

  print(head); 
}




void create(node* list)
{
  printf("Enter the element of the list-(enter -1 to exit)\n");
  scanf("%d",&list->num);

  if(list->num==-1)
    list->next=NULL;

  else
    {
      list->next=(node*)malloc(sizeof(node));
      create(list->next);
    }

}





void print(node* list)
{
  
  if(list->num!=-1)
    {
      printf("The element of linked list is %d\n",list->num);
      print(list->next);
      
    }
}






int count(node* list,int i)
{

  
  if(list->num!=-1)
    {

     
      i=i+1;
      
      count(list->next,i);
    }

  else
    return i;
}







void insert(node* list,int new,int pos,int coun)
{

  if(coun!=pos-1)
    {
      coun++;
      insert(list->next,new,pos,coun);
    }
  

  else
    {
      node* new1;
      new1=(node*)malloc(sizeof(node));
      new1->num=new;
      new1->next=list->next;
      list->next=new1;
    }
}




void delete(node* list,int del_pos,int coun)
{

  node* q;
  
  if(coun!=del_pos-1)
    {
      coun++;
      delete(list->next,del_pos,coun);
    }

  else
    {
      q=(list->next)->next;
      list->next=q;
    }
}
      
      
  
  
    
