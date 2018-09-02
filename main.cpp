#include<iostream>
#include"insert.h"
using namespace std;
int main()
{
  insert *start=NULL;
  insert i;
  i.Insert(&start,5);
  i.Insert(&start,165);
  i.Insert(&start,73);
  //i.print(start);
  i.Insert(&start,822);
  i.Insert(&start,91);
  i.print(start);
  insert *temp1= i.seacrh(16,start);
  insert *temp2=i.seacrh(5,start);
  cout<<"swap"<<endl;
  //i.swap(temp1,temp2,&start);
  //i.print(start);
  i.sort(start);
  cout<<"Sort :"<<endl;
  i.print(start);
  system("pause");
}