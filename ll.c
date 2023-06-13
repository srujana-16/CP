#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head;
void insertNode(int data)
{
    struct Node* NewNode = (struct Node*) malloc(sizeof(struct Node));
    NewNode->data = data;
    NewNode->next = head;
    head = NewNode;
}

void PrintList()
{
    struct Node* temp = head;
    while(head!=NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    head = NULL; //empty list
    int n, element;
    printf("Number of elements in the list?\n");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d ", &element);
        insertNode(element);
        PrintList();
    }

}

