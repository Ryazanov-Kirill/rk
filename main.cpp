#include <iostream>
#include <stdio.h>

using namespace  std;
void foo2(unsigned int a) {
    FILE *f1;
    f1 = fopen("test.dat", "w");
    int count = 0;
    int array[1000];
    while (a / 2 != 0) {
        if (a % 2 == 1) {
            array[count] = 1;
            count++;

            a=a-1;
            a=a/2;
        } else {
            array[count] = 0;
            count++;
            a=a/2;

        }
       array[count+1]=1;

    }

    for (int i = 0; i < count+1; i++) {
        cout << array[i];
        fprintf(f1, "%d", array[i]);
    }
    fclose(f1);
}

void foo7(int number, data& d, linkedlist* lst){
    node* newnode= new node(d);
    node* curnode=Head;
    for(int i=0;i!=number-1;i++){
       curnode=curnode->next;
   }
   newnode->prev=curnode->prev;
   curnode->prev=newnode;
    newnode->next=curnode;
};
void foo4(int a) // смещение верхней точки;
{
    int count=1;
    while(a>0) {
        for (int i=0; i < a; i++) {
            cout<<"\t";
        }
        for(int i=0;i<count;i++)
        cout<<"1\t";
        cout<<endl;
        count=count+2;
        a--;
    }
}
void foo6(){
    FILE * f1;
    f1=fopen("test1.dat","w");
    node* curnode= new node();
    if(Head== nullptr)
        return;
    if(curnode== nullptr)
        curnode=Head;
    for(int i=0;curnode->next!= nullptr;i++) {
        data *curd = curnode->data;
       curnode = curnode->next;
      fprintf(f1,"%d%s\t%s\t%d\n", i,"-й элемент списка", curd.ste,curd.size);
    }
}



int main() {




    return 0;
}
