#include <stdio.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* createNode(int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void display(struct Node* temp)
{
    struct Node* trace = temp;
    while(trace)
    {
        printf("Data:%d\n",trace->data);
        trace = trace->next;
    }
}

// void insertAtEnd(struct Node **temp, int dat)
// {
//     struct Node* newNode = createNode(dat);
//     struct Node* trace = *temp;
    
//     while(trace->next != NULL)
//     {
//         trace=trace->next;
//     }
    
//     trace->next = newNode;
    
//     //temp = trace;
// }

void insertAtEnd(struct Node *temp, int dat)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode->data = dat;
    newNode->next = NULL;
    struct Node* trace = temp;
    
    while(trace->next != NULL)
    {
        trace=trace->next;
    }
    
    trace->next = newNode;
    
    //temp = trace;
}

void insertAtBegin(struct Node **temp, int dat)
{
    struct Node *newNode= createNode(dat);
    
    newNode->next = *temp;
    *temp = newNode;
}

int main() {
	// your code goes here
    struct Node* obj = createNode(10);
    
    //display(obj);  
    
    // insertAtEnd(&obj,11);
    // insertAtEnd(&obj,12);
    // insertAtEnd(&obj,13);
    
    insertAtEnd(obj,11);
    insertAtEnd(obj,12);
    insertAtEnd(obj,13);
    
    insertAtBegin(&obj,22);
    display(obj);
}

