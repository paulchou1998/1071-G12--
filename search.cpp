#include "g12.h"


void search(Node **startPtr)
{
	Node *Ptr ;
	Ptr = *startPtr;
    int m;
    char *name, *phone;
    name = (char *)malloc(sizeof(char));
    phone = (char *)malloc(sizeof(char));
    printf("1.Enter the Name\n");
    printf("2.Enter the Phone\n");
    scanf("%d", &m);

    if(1==m)
	{
		printf("1.Enter the Name :");
		scanf("%s",name);
		if(isEmpty(*startPtr))
        {
           printf("%s is not int the data!\n", name);
        }
        else
        {
        	while(Ptr != NULL)
            {
            	if(strcmp(Ptr->directory.name,name))
            	{
            		printf("ID : %d\n", Ptr->directory.ID);
            		printf("Name : %s\n", Ptr->directory.name);
            		printf("Phone : %s\n", Ptr->directory.phone);
            		printf("Email : %s\n\n", Ptr->directory.Email);
           		}
           		else
           		{
           		    Ptr=Ptr->nextPtr;
				}
            }
		}

	}
	if(2==m)
	{
		printf("1.Enter the Phone :");
		scanf("%s",phone);
		if(isEmpty(*startPtr))
        {
           printf("%s is not int the data!\n", phone);
        }
        else
        {
        	while(Ptr != NULL)
            {
            	if(strcmp(Ptr->directory.phone,phone))
            	{
            		printf("ID : %d\n", Ptr->directory.ID);
            		printf("Name : %s\n", Ptr->directory.name);
            		printf("Phone : %s\n", Ptr->directory.phone);
            		printf("Email : %s\n\n", Ptr->directory.Email);
           		}
           		else
           		{
           		    Ptr=Ptr->nextPtr;
				}
            }
		}

	}
}
