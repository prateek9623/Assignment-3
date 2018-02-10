#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

class linked_list
{
private:
    node *head, *tail;

public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }

    void addNode(int n)
    {
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(head==NULL)
        {
            head= tmp;
            tail= tmp;
        }
        else
        {
            tail ->next = tmp;
            tail = tail->next;
        }
    }

    void display()
    {
        node *tmp;
        if(head==NULL)
        {
            cout<<endl<<"The list is empty";
        }
        else
        {
            tmp = head;
            cout<<endl<<"Element in the list are: "<<endl;
            while (tmp != NULL)
            {
                cout<<tmp->data<<"->";
                tmp=tmp->next;
            }
            cout<<"NULL"<<endl;
        }
    }

    void SubtractConsecutiveNodes()
    {
        if(head==NULL || head->next==NULL)
            {
                return;
            }
        node *first, *previous, *newNode;
        first = head;
//        while(first!=NULL||first->next!=NULL)
        {
            newNode->data=first->data-first->next->data;
            newNode->next = first;
            newNode=head;

        }
    }
};

int main()
{
    char choice;
    linked_list list;
    do
    {
        cout<<endl;
        cout<<"1. Insert nodes"<<endl;
        cout<<"2. Display nodes"<<endl;
        cout<<"3. Subtract two consecutive nodes."<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice....";
        cin>>choice;
        switch(choice)
        {
        case '1':
            int data;
            cout<<endl<<"Enter data for inserting to the list: ";
            cin>>data;
            list.addNode(data);
            cout<<endl<<data<<" Inserted to the list"<<endl;
            break;
        case '2':
            list.display();
            break;
        case '3':
            list.SubtractConsecutiveNodes();
            cout<<endl<<"Process Done"<<endl;
            break;
        case '4':
            break;
        default:
            cout<<endl<<"Incorrect choice please retry"<<endl;
        }
    }
    while(choice!='4');
    return 0;
}
