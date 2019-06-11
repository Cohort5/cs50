#include <stdio.h>
#include <stdlib.h>

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
}

int main(void)
{
    printf("hello\n");
    addNode(10);
    addNode(8);
    addNode(15);
    addNode(17);
    addNode(19);

}