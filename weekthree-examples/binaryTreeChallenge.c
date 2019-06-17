#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define true 1  // truthy
#define false 0  // falsy values instead of boolean

//minichallenge create the NODE for a binary tree.
typedef struct NODE
{
    int value;
    struct NODE *low;
    struct NODE *high;
} NODE;

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
        return;
    }

    // if value of new node is less the root node attach to low
    // else add to high.
    NODE *trav = rootNode;
    // printf("trying to add node %i\n", newNode->value);
    while(1)
    {
        if (newNode->value < trav->value)
        {
            if (trav->low == NULL)
            {
                // printf("found empty spot\n");
                trav->low = newNode;
                return;
            }
            // printf("found a low node valued: %i moving to it\n", trav->low->value);
            trav = trav->low;
            continue;
        }
        else
        {
            if (trav->high == NULL)
            {
                // printf("found empty spot\n");
                trav->high = newNode;
                return;
            }
            // printf("found a high node valued: %i moving to it\n", trav->high->value);
            trav = trav->high;
            continue;
        }
    }
}

// void displayTreeOnEnter(NODE *curNode)
// 10 8 5 4 6 7 9 15 13 17 20 18
// {
//     printf("%i ", curNode->value);

//     if (curNode->low)
//     {
//         displayTreeOnEnter(curNode->low);
//     }

//     if (curNode->high)
//     {
//         displayTreeOnEnter(curNode->high);
//     }
// }

void displayTreeOnDeparture(NODE *endNode)

    //4 7 6 5 9 8 13 18 20 17 15 10
{
    if (endNode->low)
    {
        displayTreeOnDeparture(endNode->low);
    }

    if (endNode->high)
    {
        displayTreeOnDeparture(endNode->high);
    }
    printf("%i ", endNode->value);
}

int doesContain(int value)
{
        NODE *trav = rootNode;
        while(1)
        {
            if (trav->value == value)
            {
                return 1;
            }
        }
        if (value < trav->value)
        {
            if(trav->low == NULL)
            {
            return 0;
            }
            trav = trav->low;
            continue;
        }
        if (!trav->high)
        {
            return 0;
        }
        trav = trav->high;
        continue;
    }
}

// {
//     // search the tree - char*
//     // return 0 if value is not in the tree
//     // return 1 if value does exist in the tree
//     return 0;
// }

void tests()
{
    assert(doesContain(10) && "tree does contain 10");
    assert(doesContain(13) && "tree does contain 13");
    assert(doesContain(8) && "tree does contain 8");
    assert(doesContain(7) && "tree does contain 7");
    assert(doesContain(4) && "tree does contain 4");
    assert(!doesContain(1) && "tree does not contain 1");
    assert(!doesContain(15) && "tree does not contain 15");
    assert(!doesContain(16) && "tree does not contain 16");
    assert(!doesContain(150) && "tree does not contain 150");
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

    // printf("%i\n");
    tests();


    // displayTreeOnEnter(rootNode);
    displayTreeOnDeparture(rootNode);
    printf("\n");

    // printf("%i\t%i\n", rootNode->low->value, rootNode->high->value);

}