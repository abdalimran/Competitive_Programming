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
    Node* PreviousNode;
    PreviousNode=TopNode;

    Node* EndNode=TopNode->Next;

    if(Size==0)
       cout<<"Error : Trying to pop from empty stack."<<endl;
    else if(TopNode->Next==NULL)
    {
        cout<<"Popped value is: "<<TopNode->Data<<endl;
        delete TopNode;
        Size--;
    }
    else
    {
        while(EndNode->Next!=NULL)
        {
            EndNode=EndNode->Next;
            PreviousNode=PreviousNode->Next;
        }
        PreviousNode->Next=NULL;
        cout<<"Popped value is: "<<EndNode->Data<<endl;
        delete EndNode;
        Size--;
    }
}


void StackSize()
{
    if(Size!=0)
        cout<<"Stack size is: "<<Size<<endl;
    else
        cout<<"Stack is empty!"<<endl;
}

void Top()
{
    Node* TopData;
    TopData=TopNode;

    if(Size==0)
        cout<<"Stack is empty!"<<endl;
    else
    {
        while(TopData->Next!=NULL)
            TopData=TopData->Next;

        cout<<"Top value is: "<<TopData->Data<<endl;
    }
}


void PrintStack()
{
	Node* Traverse=TopNode;
	if(Size==0)
        cout<<"The Stack is empty!"<<endl;
	else
    {
        cout<<"Stack is: ";
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
    PrintStack();
    StackSize();
    Top();
    Pop();
    Pop();
    PrintStack();
    StackSize();

    return 0;
}


