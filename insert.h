#include<iostream>
using namespace std;
class insert
{
  public:

   void  Insert(insert **start,int val)
{
  insert *ptr=new insert;
  ptr->value=val;
  ptr->next=NULL;
 // ptr->prev=*start;

  if((*start)==NULL)
  {
    *start=ptr;
    ptr->prev=NULL;
  }

  else{
    insert *curr=*start;
    while(curr->next!=NULL)
    {
     curr=curr->next;
    }
    curr->next=ptr;
    ptr->prev=curr;
  }
}
insert* seacrh(int val,insert *start)
  {
    insert *temp=NULL;
  if(start==NULL)
  {
  }
  else
 {
   int a=0;
  insert *curr = start;
  while(curr->value!=val)
  {
    if(curr->next==NULL)
    {
      a++;
      break;
    }
    curr=curr->next;
  }
     if(curr->next!=NULL || a==0)
  {
    temp=curr;
  }
 }
 return temp;
  }

void swap(insert *p1,insert *p2,insert**start)
{
  if(p1==p2 || p1==NULL || p2==NULL)
  {
  }
  else
  {
    insert *temp3=NULL;
    if(p2->next==p1 || p2==*start) 
    {
      temp3=p1;
        p1=p2;
        p2=temp3;
    }
    if(p1->next==p2 )
    {
      temp3=p2->next;
      p2->next=p1;
      p1->next=temp3;
      if(p1!=*start)
      {
        //insert *temp1=retprev(p1,*start);
        (p1->prev)->next=p2;
      }
      else
      {
       *start=p2; 
      }
    }
    else
    {
    //linklist *temp1=retprev(p1,*start);
    //linklist *temp2=retprev(p2,*start);
    temp3=p1->next;
    p1->next=p2->next;
    p2->next=temp3;
    if(p1!=*start && p2!=*start)
    {
    temp3=(p1->prev)->next;
    (p1->prev)->next =(p2->prev)->next;
    (p2->prev)->next=temp3;
    }
    else
    {
     (p2->prev)->next=p1;
      *start=p2;
      p1->prev=NULL;
    }
    }

  } 
}
void print(insert *start)
{
   if(start==NULL)
    {
      cout<<"List is empty"<<endl;
    }
    else
    {
      insert *curr=start;
      while(curr->next!=NULL)
      {
        cout<<curr->value<<"   ";
        curr=curr->next;
      }
      cout<<curr->value<<endl;
    }
}

void sort(insert *start)
{
  insert *curr=start;
  curr=curr->next;
  start=start->next;
  while(start!=NULL)
  {
    int hold = start->value;
    curr=start;
    while(hold < (curr->prev)->value)
    {
      curr->value=(curr->prev)->value;
      curr=curr->prev;
    }
    curr->value=hold;
    start=start->next;
  }
}

  private:
  int value;
  insert *next;
  insert *prev;
};