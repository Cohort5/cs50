#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
// minichallenge create the NODE for a binary tree
typedef struct NODE
{
    int value;
    struct NODE *low;  //creates branch
    struct NODE *high;  //creates branch
} NODE; // identified the struct

NODE *rootNode;

void addNode(int value)
{
    NODE *newNode = malloc(sizeof(NODE));
    newNode->value = value;
    newNode->high = NULL;
    newNode->low = NULL;

    if (rootNode == NULL)
    {
        rootNode = newNode;
        return; // we are done we added something to our tree
    }
    // if our value of new node is less the root node attach to low
    // else add to high
    NODE *trav = rootNode;   // TRAVELER - trav nav
    // printf("add node %i\n", newNode->value);
    while(1) // keep doing this until I say stop - INFINIT LOOP
    {
        // trav->low method
        if (newNode->value < trav->value)
        {
            // printf("empty spot %i\n");
            if(trav->low == NULL)
            {
                trav->low = newNode;
                return;
            }
            trav = trav->low;
            continue;  // restarts the loop
        }
        else
        {
            if(trav->high == NULL)
            {
                trav->high = newNode;
                return;
            }
            trav = trav->high;
            continue;  // restarts the loop
        }
    }
}

void displayTreeOnEnter(NODE *curNode)
{
    printf("%i ", curNode->value);  // print the left side

    if (curNode->low)
    {

        displayTreeOnEnter(curNode->low);
    }

    if (curNode->high)
    {
         displayTreeOnEnter(curNode->high);
    }
}

void displayTreeOnDeparture(NODE *curNode)
{
    // 4 7 6 5 9 8 13 18 20 17 15 10
}

int doesContain(int value)
{
    // searcht the tree
    // return 0 if value is not in the tree
    // return 1 if value does exist in the tree
    return 0;
}

int main(void)
{
    printf("hello\n");
    addNode(10);
    addNode(8);
    addNode(15);
    addNode(17);
    addNode(20);
    addNode(18);
    addNode(5);
    addNode(6);
    addNode(9);
    addNode(4);
    addNode(13);
    addNode(7);

    displayTreeOnEnter(rootNode);
     printf("\n");
}