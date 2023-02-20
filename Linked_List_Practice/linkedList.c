#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//simple linked list node structure/object
typedef struct node{
    int data;
    struct node *next;
}Node;

//linked lis node creating functions
Node *creatListOfNumber()
{
    Node *head; 
    Node *currentNode;

    int num;

    printf("Please enter a number or -1 to finish.\n");
    scanf("%d", &num);

    if (num == -1)
        return NULL;

    head = (Node*)malloc(sizeof(Node));
    currentNode = head;
    currentNode -> data = num;

    printf("Please enter a number or -1 to finish.\n");
    scanf("%d", &num);

    while (num != -1)
    {
        currentNode -> next = (Node*)malloc(sizeof(Node));
        currentNode = currentNode -> next;
        currentNode -> data = num;

        printf("Please enter a number or -1 to finish.\n");
        scanf("%d", &num);
    }
    
    currentNode -> next = NULL;
    return head;
}

//counting nodes function
int countNodesInList (Node *head)
{
    int count = 0;
    Node *temp = head;
    while()
    {
        count++;
        temp = temp -> next;
    }
    return count;
}

//element finder function

bool isNumberOnTheList (Node *head, int num)
{
    Node *currentNode = head;

    while (currentNode -> next != NULL)
    {
        if (currentNode -> data == num)
            return true;
        currentNode = currentNode -> next;
    }
    return false;
}

//function that count repeated numbers

int totalNumberAppearencesInList (Node *head, int num)
{
    int count = 0;
    Node *temp = head;

    while (temp -> next != NULL)
    {
        if (temp -> data == num)
            count++;
        
        temp = temp -> next;
    }
    return count;
}

int main()
{
    return 0;
}