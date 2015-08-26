/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int Data;
    Node* Next;
};

Node* TopNode;
int Size=0;

void Push(int num)
{
    Node* PushData;
    PushData=new Node;
    PushData->Data=num;
    PushData->Next=NULL;

    Node* EndNode;
    EndNode=TopNode;

    if(EndNode == NULL)
       TopNode=PushData;
    else
    {
        while(EndNode->Next!=NULL)
            EndNode=EndNode->Next;

        EndNode->Next=PushData;
    }
    Size++;
}

void Pop()
{
    Node* FrontNode;
    FrontNode=TopNode;

    if(Size==0)
       cout<<"Error : Trying to pop from empty Queue."<<endl;
    else if(FrontNode->Next==NULL)
    {
        cout<<"Popped value is: "<<FrontNode->Data<<endl;
        delete FrontNode;
        Size--;
    }
    else
    {
        TopNode=FrontNode->Next;
        cout<<"Popped value is: "<<FrontNode->Data<<endl;
        delete FrontNode;
        Size--;
    }
}

void Top()
{
    if(Size==0)
        cout<<"Queue is empty!"<<endl;
    else
        cout<<"Top value is: "<<TopNode->Data<<endl;
}

void QueueSize()
{
    if(Size==0)
        cout<<"Queue is empty!"<<endl;
    else
        cout<<"Queue size is: "<<Size<<endl;
}


void PrintQueue()
{
    if(Size==0)
        cout<<"Queue is empty!"<<endl;
    else
    {
        Node* Traverse=TopNode;
        cout<<"Queue is: ";
        while(Traverse!=NULL)
        {
            cout<<Traverse->Data<<" ";
            Traverse=Traverse->Next;
        }
        cout<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    
    TopNode=NULL;

    Push(7);
    Push(9);
    Push(3);
    PrintQueue();
    QueueSize();
    Top();
    Pop();
    Pop();
    PrintQueue();
    QueueSize();

    return 0;
}


