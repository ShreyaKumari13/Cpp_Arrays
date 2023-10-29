//C++ Menu Driven Program for Stack Operations Using Arrays class
#include<iostream>
using namespace std;

class stack{
    private:
        int arr[3];
        int n = sizeof(arr)/sizeof(int);
        int top=-1;
    public:
        int isEmpty();
        int isFull();
        void push();
        void pop();
        void display();
};

int stack :: isEmpty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int stack :: isFull(){
    if(top==n-1){
        return 1;
    }
    else{
        return 0;
    }
}

void stack :: push(){
    if(isFull()){
        cout<<"Stack Full!!!"<<endl;
    }
    else{
        int ele;
        cout<<"Enter the element : "<<endl;
        cin>>ele;
        top++;
        arr[top] = ele;
    }
}

void stack :: pop(){
    if(isEmpty()){
        cout<<"Stack Empty!!!"<<endl;
    }
    else{
        int element = arr[top];
        top--;
        cout<<"Popped element is : "<<element<<endl;
    }
}

void stack :: display(){
    if(isEmpty()){
        cout<<"Stack Empty!!!"<<endl;
    }
    else{
        cout<<"The element is -> "<<endl;
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<"\t";
        }
    }
}

int main(){
    stack s;
    int choice;
    while (1)
    {
        cout<<"\n---MENU---"<<endl;
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Display"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter your choice:\t"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1: 
                s.push();
                break;
            case 2: 
                s.pop();
                break;
            case 3: 
                s.display();
                break;
            case 4: 
                exit(0);
                break;
            default:
                printf("\n INVALID CHOICE:\n");
                break;
        }
    }
    return 0;
}
