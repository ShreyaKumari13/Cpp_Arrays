//C++ Menu Driven Program for Queue Operations using Arrays
#include<iostream>
using namespace std;

int front=0,rear=-1,arr[35],n,element;

int isEmpty(){
    if(rear==front-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(){
    if(rear==n-1){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(){
    if(isFull()){
        cout<<"Queue is full!!!"<<endl;
    }
    else{
        cout<<"Enter the number : "<<endl;
        cin>>element;
        rear++;
        arr[rear] = element;
        cout<<"Enqued element: "<<element<<endl;
    }

}

void display(){
    if(isEmpty()){
        cout<<"Queue Empty!!!";
    }
    else{
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<"\t"<<endl;
        }
    }

}

void dequeueu(){
    if(isEmpty()){
        cout<<"Queue is empty!!!"<<endl;
    }
    else{
        element = arr[front];
        front++;
        cout<<"Dequeued element is : "<<element<<endl;
    }
}

int main(){
    cout<<"Enter the total number of elements : ";
    cin>>n;
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
                enqueue();
                break;
            case 2: 
                dequeueu();
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