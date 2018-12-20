#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct Directory
{
    int ID;
    char name[30];
    char phone[30];
    char Email[50];
};

struct Node
{
    Directory directory;
    Node *nextPtr;
};

int isEmpty(Node *startPtr)
{
    if(startPtr == NULL)
    {
        return 1;
    }
    return 0;
}


void printList(Node **startPtr);

void insert(Node **startPtr);

void del(Node **startPtr);

void search(Node **startPtr);

void modify(Node **startPtr);

void clear(Node **startPtr);
