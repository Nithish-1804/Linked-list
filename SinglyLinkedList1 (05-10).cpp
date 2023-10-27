#include <iostream>
#include <bitset>
using namespace std;

class Node
{
    public:
    int  data;
    Node* next;

    Node() 
    {
        data = 0;
        next = NULL;
    }
};
int main()
{
    Node* head;

    Node* newNode1 = new Node;
    newNode1->data = 10;

    Node* newNode2 = new Node;
    newNode2->data = 20;

    Node* newNode3 = new Node;
    newNode3->data = 30;
    
    Node* newNode4 = new Node;
    newNode4->data = 40;

    newNode1->next = newNode2;
    newNode2->next = newNode3;
    newNode3->next = newNode4;

    cout<<"Data1 : "<<newNode1->data<<"\nSelf address : "<<newNode1<<"\nNext address : "<<newNode1->next<<endl;
    cout<<"\nData2 : "<<newNode2->data<<"\nSelf address : "<<newNode2<<"\nNext address : "<<newNode2->next<<endl;
    cout<<"\nData3 : "<<newNode3->data<<"\nSelf address : "<<newNode3<<"\nNext address : "<<newNode3->next<<endl;
    cout<<"\nData4 : "<<newNode4->data<<"\nSelf address : "<<newNode4<<"\nNext address : "<<newNode4->next<<endl;

    cout<<endl;
    cout<<"Priting through loop"<<endl;
    
    head = newNode1;
    Node* temp = head;
    while(temp !=NULL)
    {
        cout<<"Data : "<<temp->data<<"\nSelf address : "<<temp<<"\nNext address : "<<temp->next<<endl;
        temp = temp->next;
    }

    return 0;
}