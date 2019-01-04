#include "g12.h"


void printList(Node **startPtr)
{
    Node *Ptr;
    Ptr = *startPtr;
    if(isEmpty(Ptr))
    {
        printf("There is no data!\n");
    }
    else
	{
        while(!isEmpty(Ptr))
        {
            printf("ID : %d\n", Ptr->directory.ID);
            printf("Name : %s\n", Ptr->directory.name);
            printf("Phone : %s\n", Ptr->directory.phone);
            printf("Email : %s\n\n", Ptr->directory.Email);
            Ptr = Ptr->nextPtr;
        }
    }
}
