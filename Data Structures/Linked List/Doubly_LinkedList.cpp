/*  Bismillah hir rahmanir raheem. Thanks to Allah for everything.
    Coder: Abdullah Al Imran
    Email: abdalimran@gmail.com   */

#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int Data;
    Node* Next;
    Node* Prev;
};

Node *Head;

void InsertFront(int num)
{
    Node* NewNode;
    NewNode=new Node;
    NewNode->Data=num;
    NewNode->Next=NULL;
    NewNode->Prev=NULL;

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
    Node* FrontNode=Head;
    Head=Head->Next;
    Head->Prev=NULL;

    cout<<FrontNode->Data<<" was deleted!"<<endl;

    delete FrontNode;
}

void Search(int data)
{
    Node* Traverse;
    Traverse=Head;

    int l=1;
    bool Found=false;

    while(Traverse!=NULL)
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
    Node* Traverse=Head;

    cout<<"Doubly Linked list is: ";

    while(Traverse!=NULL)
    {
        cout<<Traverse->Data<<" ";
        Traverse=Traverse->Next;
    }
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    
    Head=NULL;

    InsertFront(5);
    InsertFront(7);
    InsertFront(8);

    PrintList();

    DeleteFront();
    PrintList();
    Search(5);

    return 0;
}
