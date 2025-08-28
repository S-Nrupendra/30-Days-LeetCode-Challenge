#include<bits/stdc++.h>
using namespace std;

class MyCircularQueue {
    vector<int>v;
    int rear =0;
    int front =0;
    int n;
public:
    MyCircularQueue(int k) {
        v = vector<int>(k + 1);
        n = k + 1;
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        v[rear] = value;
        rear = (rear + 1) % n;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        front = (front + 1) % n;
        return true;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        return v[front];
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        int ele = (rear == 0) ? n-1 : rear-1;
        return v[ele];
    }
    
    bool isEmpty() {
        return front == rear;
    }
    
    bool isFull() {
        return (rear + 1)%n == front;
    }
};

int main(){
    return 0;
}