#include <iostream>
#include <string>
using namespace std;

#define MAX 5

class Stack
{
private:
    string books[MAX];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(string book)
    {
        if(top == MAX-1)
        {
            cout<<"Stack is Full"<<endl;
            return;
        }

        top++;
        books[top] = book;
        cout<<"Book Returned Successfully"<<endl;
    }

    void pop()
    {
        if(top == -1)
        {
            cout<<"No books to arrange"<<endl;
            return;
        }

        cout<<books[top]<<" arranged on shelf"<<endl;
        top--;
    }

    void peek()
    {
        if(top == -1)
        {
            cout<<"Stack Empty"<<endl;
            return;
        }

        cout<<"Top Book : "<<books[top]<<endl;
    }

    void display()
    {
        if(top == -1)
        {
            cout<<"Stack Empty"<<endl;
            return;
        }

        cout<<"\nBooks in Stack\n";

        for(int i=top;i>=0;i--)
        {
            cout<<books[i]<<endl;
        }
    }
};

int main()
{
    Stack s;

    int choice;
    string book;

    do
    {
        cout<<"\n------ Library Menu ------"<<endl;
        cout<<"1. Return Book"<<endl;
        cout<<"2. Arrange Book"<<endl;
        cout<<"3. Top Book"<<endl;
        cout<<"4. Display"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter Choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"Enter Book Name : ";
                cin.ignore();
                getline(cin,book);
                s.push(book);
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.peek();
                break;

            case 4:
                s.display();
                break;

            case 5:
                cout<<"Program Ended"<<endl;
                break;

            default:
                cout<<"Wrong Choice"<<endl;
        }

    }while(choice!=5);

    return 0;
}