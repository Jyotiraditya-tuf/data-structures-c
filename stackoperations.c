#include <stdio.h>
#include <stdlib.h>

#define MAX 5
int stack[MAX];
int top=-1;
int choice,element;

int isEmpty() {
    return(top==-1);
}
int isFull() {
    return(top==MAX-1);
}

void push(int val) {
    if(isFull()) {
        printf("Stack overflow!!");
    }
    else {
        stack[++top]=val;
        printf("value %d pushed.\n",val);
    }
}

void pop() {
    if(isEmpty()) {
        printf("Stack underflow!!");
    }
    else {
        printf("Popped element %d",stack[top--]);
    }
}

void peek() {
    if(isEmpty()){
        printf("Stack underflow!!");
    }
    else{
        printf("Element at top : %d",stack[top]);
    }
}

int main() {
    do {
        printf("\n------Stack operations-----\n");
        printf("1. Push, 2. Pop, 3. Peek, 4. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch(choice) {
            case 1:
                printf("Enter value to push to stack: ");
                scanf("%d",&element);
                push(element);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                break;
            default:
                printf("Invalid choice!!");
                break;
        }
    } while(choice!=4);
    return 0;
}






        
