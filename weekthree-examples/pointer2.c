#include <stdio.h>
#include <stdlib.h>

// struct called node containing
//  an int identified as 'value',
//  a reference to another node identified as 'next'

#define true 1
#define false 0

typedef struct NODE
{
    int value;
    struct NODE *next;
} NODE;

NODE *rootNode

int add(int *x, int y)
{
    *x += 3;
    return *x + y;
}

// iterate through the linked list until you get to the end
// once at end print out last value
// once at the end add the new node to the list

void addNode(int value, NODE *homeNode)  /// moves to the top of the HEAP in our stack
{
    NODE *trav = homeNode;

    while(trav->next != NULL)
    {
        trav = trav->next;
    }
    NODE *newNode = malloc(sizeof(NODE));
    newNode->value = value;
    newNode->next = NULL;

    if (rootNode == NULL)
    {
        rootNode = newNode;
        return;
    }

    trav->next = newNode;

    void removeNode(int value) // print removeNode(5)
    {
        NODE *trav = rootNode;
        if (rootNode->value == value)
        {
            rootNode = rootNode->next;
            free(trav);
            return;
        }
    }

    while(trav->next->value != value)  // print free temp rprint removeNode(8)
        {
            trav = trav->next;
        }
        NODE *temp = trav->next;
        trav->next = temp->next;
        free(temp);
}

void freeList()





    // while(true)
    // {
    //     if (trav->next == NULL)
    //     {
    //         NODE *newNode = malloc(sizeof(NODE));
    //         newNode->value = value;
    //         newNode->next = NULL;
    //         trav->next = newNode;
    //         break;
    //     }
    //     else
    //     {
    //         trav = trav->next;
    //         // printf("moved deeper\n");
    //     }
    // }

}

void displayList(NODE* trav)
{
    //should display
    // 5, 10, 8, 17

      while(trav->next != NULL)
    {
        printf("%i, ", trav->value); // prints 5, 10, 8
        trav = trav->next;
    }
        printf("%i\n", trav->value);  // prints 5, 10, 8, 17

    // printf("%i\n", trav->value);  print out first node (5)

}

int main(void)
{
    NODE rootNode;
    rootNode.value = 5;
    rootNode.next = NULL;
    addNode(10, &rootNode);
    addNode(8, &rootNode);
    addNode(17, &rootNode);
    displayList(&rootNode);



    // printf("%i\n%i\n", rootNode.next->next->value, rootNode.next->next->next->value);

    // int a = 5;
    // int b = 10;
    // printf("the total is: %i\n", add(&a, b));
    // printf("the total is: %i\n", add(&a, b));
    // int* intPointer;
    // intPointer = &b;
    // printf("b is: %i\n", b);
    // *intPointer = 47;
    // printf("b is %i\n", b);
}