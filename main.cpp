#include <iostream>
using namespace std;
class STACK_info
{
private:
    int a[5];
    int top;
public:
    STACK_info()
    {
        top=-1;
    }

    bool isfull()
    {
        if(top==4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isempty()
    {
        if(top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void push(int x)
    {
        if(isfull()==true)
        {
            cout<<"Stack is full."<<endl;
            cout<<x<<" is not pushed in stack."<<endl;
        }
        else
        {
            top++;
            a[top]=x;
            cout<<x<<" is pushed in stack ,successfully."<<endl;
        }
    }

    void pop()
    {
        if(isempty()==true)
        {
            cout<<"Stack is empty."<<endl;
        }
        else
        {
            int x=a[top];
            top--;
            cout<<x<<"is poped from stack."<<endl;
        }
    }

    void display()
    {
        if(isempty()==true)
        {
            cout<<"Stack is empty."<<endl;
        }
        else
        {
            cout<<"The values in stack are :";

            for(int i=0; i<=top; i++)
            {
                cout<<a[i]<<"\t";
            }
            cout<<endl;
        }
    }

    void menu()
    {
        cout<<"*====================================*"<<endl;
        cout<<"*----------------Menu----------------*"<<endl;
        cout<<"*====================================*"<<endl;
        cout<<"Press 1 to check full stack."<<endl;
        cout<<"Press 2 to check empty stack."<<endl;
        cout<<"Press 3 to add a value in stack."<<endl;
        cout<<"Press 4 to delete a value in stack."<<endl;
        cout<<"Press 5 to view the values in stack."<<endl;
        cout<<"Press 6 for exit"<<endl;
        cout<<"choose the option :";
    }
};
int main()
{
    STACK_info s1;

    int opt;
d:
    s1.menu();
#include <iostream>
using namespace std;
class STACK_info
{
private:
    int a[5];
    int top;
public:
    STACK_info()
    {
        top=-1;
    }

    bool isfull()
    {
        if(top==4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isempty()
    {
        if(top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void push(int x)
    {
        if(isfull()==true)
        {
            cout<<"Stack is full."<<endl;
            cout<<x<<" is not pushed in stack."<<endl;
        }
        else
        {
            top++;
            a[top]=x;
            cout<<x<<" is pushed in stack ,successfully."<<endl;
        }
    }

    void pop()
    {
        if(isempty()==true)
        {
            cout<<"Stack is empty."<<endl;
        }
        else
        {
            int x=a[top];
            top--;
            cout<<x<<"is poped from stack."<<endl;
        }
    }

    void display()
    {
        if(isempty()==true)
        {
            cout<<"Stack is empty."<<endl;
        }
        else
        {
            cout<<"The values in stack are :";

            for(int i=0; i<=top; i++)
            {
                cout<<a[i]<<"\t";
            }
            cout<<endl;
        }
    }

    void menu()
    {
        cout<<"*====================================*"<<endl;
        cout<<"*----------------Menu----------------*"<<endl;
        cout<<"*====================================*"<<endl;
        cout<<"Press 1 to check full stack."<<endl;
        cout<<"Press 2 to check empty stack."<<endl;
        cout<<"Press 3 to add a value in stack."<<endl;
        cout<<"Press 4 to delete a value in stack."<<endl;
        cout<<"Press 5 to view the values in stack."<<endl;
        cout<<"Press 6 for exit"<<endl;
        cout<<"choose the option :";
    }
};
int main()
{
    STACK_info s1;

    int opt;
d:
    s1.menu();
    cin>>opt;

    if(opt==1)
    {
        if(s1.isfull()==true)
        {
            cout<<"Stack is full"<<endl;
        }
        else
        {
            cout<<"Stack is  NOT full"<<endl;
        }
    }
    else if(opt==2)
    {
        if(s1.isempty()==true)
        {
            cout<<"Stack is empty"<<endl;
        }
        else
        {
            cout<<"Stack is  NOT empty"<<endl;
        }
    }
    else if(opt==3)
    {
        int x;
        cout<<"Enter value to push in stack :";
        cin>>x;
        s1.push(x);
    }
    else if(opt==4)
    {
        s1.pop();
    }
    else if(opt==5)
    {
        s1.display();
    }
    else if(opt==6)
    {
        cout<<"bye bye"<<endl;
        exit(1);
    }
    else
    {
        cout<<"invalid option";
    }

    goto d;
    return 0;
}
    ￼Enter
