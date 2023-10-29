//C++ Menu Driven Program for Queue Operations using Arrays
#include<iostream>
using namespace std;

class queue{
    private:
        int front,rear,arr[20],n,element;
    public:
        queue(){
            rear = -1;
            front = -1;
            n = 5;
        }
        int isEmpty();
        int isFull();
        void enqueue();
        void display();
        void dequeueu();
};

int queue :: isEmpty(){
    if(rear==front){
        return 1;
    }
    else{
        return 0;
    }
}

int queue :: isFull(){
    if(rear==n-1){
        return 1;
    }
    else{
        return 0;
    }
}

void queue :: enqueue(){
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

void queue :: display(){
    for(int i=front+1;i<=rear;i++){
        cout<<arr[i]<<"\t"<<endl;
    }
}

void queue :: dequeueu(){
    if(isEmpty()){
        cout<<"Queue is empty!!!"<<endl;
    }
    else{
        front++;
        element = arr[front];
        cout<<"Dequeued element is : "<<element<<endl;
    }
}

int main(){
    queue q;
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
                q.enqueue();
                break;
            case 2: 
                q.dequeueu();
                break;
            case 3: 
                q.display();
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