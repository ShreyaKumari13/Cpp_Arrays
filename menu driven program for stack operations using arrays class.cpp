//C++ Menu Driven Program for Stack Operations Using Arrays
#include<iostream>
#include<stdlib.h>
using namespace std;

int n = 5,arr[5],top=-1;

int isEmpty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(){
    if(top==n-1){
        return 1;
    }
    else{
        return 0;
    }
}

void display(){
    if(isEmpty()){
        cout<<"Stack Empty!!!";
    }
    else{
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<"\t";
        }
    }
}

void push(){
    if(isFull()){
        cout<<"Stack Full!!!";
    }
    else{
        int ele;
        cout<<"Enter the element : "<<endl;
        cin>>ele;
        ++top;
        arr[top] = ele;
    }
    //temp = top;
}

void pop(){
    if(isEmpty()){
        cout<<"Stack Empty!!!";
    }
    else{
        int element = arr[top];
        top--;
        cout<<"Popped element is : "<<element<<endl;
    }
}

int main(){
    int choice;
    while (1)
    {
        printf("\n\n---MENU---\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("");
        printf("\nEnter your choice:\t");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: 
                push();
                break;
            case 2: 
                pop();
                break;
            case 3: 
                display();
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