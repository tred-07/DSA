#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[5];
    int front=-1,rear=-1;
    int option;
    while(1){
        cout<<"1 for enqueue, 2 for dequeue, 3 for display:";
        cin>>option;
        if(option==1){
            int x;
            cin>>x;
            if(front==-1 && rear==-1){
                front=0;
                rear=0;
                a[rear]=x;
            }
            else if(front== (rear+1)%5){
                cout<<"Overflow"<<endl;
            }
            else{
                rear=(rear+1)%5;
                a[rear]=x;
            }
        }
        else if(option==2){
            if(front==-1 && rear==-1)cout<<"Queue uderflow"<<endl;
            else if(front==rear){cout<<a[front]<<endl;front=-1,rear=-1;}
            else {
                front=(front+1)%5;
            }
        }
        else if(option==3){
            if(front==-1 && rear==-1){
                cout<<"Queue empty"<<endl;
                continue;
            }
            int i=front;
            while(i!=rear){
                cout<<a[i]<<" ";
                i=(i+1)%5;
            }
            cout<<a[rear]<<endl;
        }
        else if(option==0)break;
        else cout<<"Invalid input";
        cout<<"Front: "<<front<<" Rear: "<<rear<<endl;
    }




}

