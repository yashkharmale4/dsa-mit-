#include<iostream>
using namespace std;
class insertqueue
{
    private:
    int queue[5];
    int front,rear,size;

    public:
   insertqueue()
{
    size = 5;
    front = rear = -1;
}

    void insert(int value)
    {
        if(rear==size-1)
    {
        cout<<"full";
        return;

    }
    if(front==-1)
    {
        front=0;
    }
    rear++;
    queue[rear]=value;
    cout<<"\nelement inserted";
    }
    void peek()
    {
        if(front==-1)
        {
            cout<<"empty";
            return;
        }
        else
        {
            cout<<"\npeek element is"<<queue[front];
        }
    }
    void display()
    {
        if(front==-1)
        {
            cout<<"empty";
            return;
        }
        else
        {
           for(int i = front; i <= rear; i++)
            cout<<"\nall elements are"<<queue[i];
        }
    }
    void dequeue()
    {
        if (front>rear)
        {
        cout<<"queue empty";
        front=rear=-1;
        return;
        }
        cout<<"\ndeleted element:"<<queue[front];
        front++;
        if(front>rear)
        {
            front=rear=-1;
        }
    
    
    
    }





};

int main()
{
        int choice, value;
        insertqueue obj;
   


    do
 {
        cout<<"\n------ Library Menu ------"<<endl;
        cout<<"1. insert element"<<endl;
        cout<<"2. peek top element"<<endl;
        cout<<"3. dequeue"<<endl;
        cout<<"4. Display"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter Choice : ";
        cin>>choice;



        switch(choice)

{




    case 1:
  {
    
    int value;
    for(int i = 0; i < 5; i++)
    {
        cout<<"\nenter element";
    
    cin>>value;
    obj.insert(value);
    }
    break;
  }
    case 2:
                obj.peek();
                break;
    case 3:
                obj.dequeue();
                break;
    case 4:
                obj.display();
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



