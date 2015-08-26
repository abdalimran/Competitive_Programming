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

Node* Head;

void InsertFront(int num)
{
    Node *NewNode;
    NewNode=new Node;
    NewNode->Data=num;
    NewNode->Next=NULL;

    if(Head==NULL)
       Head=NewNode;
    else
    {
       NewNode->Next=Head;
       Head=NewNode;
    }
}

void DeleteFront()
{
    Node* FrontNode;

    FrontNode=Head;
    Head=FrontNode->Next;

    delete FrontNode;
}


void InsertEnd(int num)
{
    Node *NewNode;
    NewNode=new Node;
    NewNode->Data=num;
    NewNode->Next=NULL;

    Node* EndNode;
    EndNode=Head;

    if(EndNode == NULL)
       Head=NewNode;
    else
    {
        while(EndNode->Next!=NULL)
            EndNode=EndNode->Next;

        EndNode->Next=NewNode;

    }
}

void DeleteEnd()
{
    Node* PreviousNode;
    PreviousNode=Head;

    Node* EndNode=Head->Next;

    while(EndNode->Next!=NULL)
    {
        EndNode=EndNode->Next;
        PreviousNode=PreviousNode->Next;
    }
    PreviousNode->Next=NULL;
    delete EndNode;
}

void InsertNth(int data, int pos)
{
    Node* NewNode;
    NewNode=new Node;
    NewNode->Data=data;
    NewNode->Next=NULL;

    Node* FindNthNode=Head;
    Node* HoldNode;

    int i=1;
    if(pos>1)
    {
        while(i<pos-1)
        {
            FindNthNode=FindNthNode->Next;
            i++;
        }
        HoldNode=FindNthNode->Next;
        FindNthNode->Next=NewNode;
        NewNode->Next=HoldNode;
    }
    else
    {
        NewNode->Next=Head;
        Head=NewNode;
    }
}

void DeleteNth(int pos)
{
    Node* FindNthNode=Head;
    Node* PreviousNode;

    int i=1;
    if(pos>1)
    {
        while(i<pos)
        {
            PreviousNode=FindNthNode;
            FindNthNode=FindNthNode->Next;
            i++;
        }
        PreviousNode->Next=FindNthNode->Next;
        delete FindNthNode;
    }
    else
    {
        Head=FindNthNode->Next;
        delete FindNthNode;
    }
}

void Length()
{
    int l=1;
    Node* Traverse;
    Traverse=Head;

    while(Traverse->Next!=NULL)
    {
        Traverse=Traverse->Next;
        l++;
    }

    cout<<"Length is: "<<l<<endl;
}

void Search(int data)
{
    Node* Traverse;
    Traverse=Head;

    int l=1;
    bool Found=false;

    while(Traverse->Next!=NULL)
    {
        if(Traverse->Data==data)
        {
            Found=true;
            break;
        }
        Traverse=Traverse->Next;
        l++;
    }
    if(Found==true)
        cout<<data<<" Found in the list at position "<<l<<endl;
    else
        cout<<data<<" Not Found!"<<endl;
}


void PrintList()
{
	Node* NewNode=Head;
	cout<<"List is: ";
	while(NewNode!=NULL)
	{
		cout<<NewNode->Data<<" ";
		NewNode=NewNode->Next;
	}
	cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    
    Head=NULL;

    InsertFront(90);
    InsertFront(80);
    InsertEnd(70);
    InsertEnd(50);
    InsertNth(30,2);
    InsertNth(10,3);
    PrintList();
    Search(30);
    Length();
    DeleteNth(1);
    PrintList();
    DeleteEnd();
    Length();
    PrintList();
    DeleteFront();
    PrintList();

    return 0;
}

