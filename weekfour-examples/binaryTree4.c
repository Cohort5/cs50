#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//minichallenge create the NODE for a binary tree.
typedef struct NODE
{
    int value;
    struct NODE *low;
    struct NODE *high;
} NODE;

NODE *rootNode;

typedef struct QNODE
{
    nodeAddress *value;
    struct QNODE *next;
} QNODE;

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

void displayTreeOnEnter(NODE *curNode)
{
    printf("%i ", curNode->value);

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
    //4 7 6 5 9 8 13 18 20 17 15 10

    if (curNode->low)
    {
        displayTreeOnEnter(curNode->low);
    }

    if (curNode->high)
    {
        displayTreeOnEnter(curNode->high);
    }

    printf("%i ", curNode->value);
}

int doesContain(int value)
{
    NODE *trav = rootNode;
    while(1)
    {
        if(trav->value == value)
        {
            return 1;
        }
        if (value < trav->value)
        {
            if (trav->low == NULL)
            {
                return 0;
            }
            trav = trav->low;
            continue;
        }
        if (value > trav->value)
        {
            if ( trav->high == NULL)
            {
                return 0;
            }
            trav = trav->high;
            continue;
        }
    }
}

void freeTree(NODE *curNode) {
    if (curNode->low)
    {
        freeTree(curNode->low);
    }

    if (curNode->high)
    {
        freeTree(curNode->high);
    }

    free(curNode);
}

void populateTree()
{
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
}

void tests()
{
    populateTree();
    assert(doesContain(10) && "Tree Contains the number 10");
    assert(doesContain(8) && "Tree contains the number 8");
    assert(doesContain(15) && "Tree contains the number 15");
    assert(doesContain(5) && "Tree contains the number 5");
    assert(!doesContain(3) && "Tree does not contain 3");
    assert(doesContain(17) && "Tree does contain the number 17");
    assert(!doesContain(21) && "Tree does no contain 21");
    assert(doesContain(13) && "tree does contain the number 13");
    assert(doesContain(9) && "tree does contain the number 9");
    assert(!doesContain(16) && "tree does not contain the number 16");
}

int main(void)
{
    printf("hello\n");
    populateTree();

    displayTreeOnEnter(rootNode);
    printf("\n");

    freeTree(rootNode);

    // tests();
    // printf("%i\t%i\n", rootNode->low->value, rootNode->high->value);

}

// create a que node
// access binary tree via root node/head = HRT
// common used names
// rootNode
// headNode
//confirm code and test in valgrind return
//peak - show's the item and length displays the item

create quepop(trav) and (remove node)
quepush(add) for your que
//create pushNode(addNode) for your que
void pushNode(int value)
{
    NODE *newNode = malloc(sizeof(NODE));
    newNode->value = value;
    newNode->next = NULL;
    if (rootNode == NULL)
    {
        rootNode = newNode;
        return;
    }
    NODE *trav = rootNode;
    while(trav->next != NULL)
    {
        trav = trav->next;
    }

    trav->next = newNode;

}
//create popNode(removeNode) for your que
void popNode(int value)
{
    //if empty list will crash
    NODE *trav = rootNode;
    if(rootNode->value == value)
    {
        rootNode = rootNode->next;
        free(trav);
        return;
    }

    while(trav->next->value != value)
    {
        trav = trav->next;
    }
    NODE *temp = trav->next;
    trav->next = temp->next;
    free(temp);

}

