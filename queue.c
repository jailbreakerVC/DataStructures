#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* next;
};


int main() {
	struct node *nn,*ptr,*del;
     struct node *rear=NULL,*front=NULL;
	int item,ch;
	int counter=0;
     int i=0;
	printf("****** LINKED LIST PROGRAM *******\n");
	printf("Press1 To delete\nPress2 To Insert\nPress3 to Traverse\nPress4 to Exit\n");
	while(1){
		// return 1;
		printf("What to do?: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				if (front==NULL){
					printf("\nUnderflow Condition, Deletion is not possible\n");
				}
				else {
					printf("Item popped from list: %d\n",front->data);
					del=front;
					del->data=front->data;
                         front=front->next;
					free(del);
				}
				break;
			case 2:
				nn=(struct node*)malloc(sizeof(struct node));
				printf("Enter the value to add: ");
				scanf("%d",&item);
				printf("\nAdded value %d to List\n",item);

				counter++;
				nn->data=item;
				nn->next=NULL;
				//rear=nn;
                    if ( front == NULL && rear == NULL){
                         front=rear=nn;
                         break;
                    }
                    rear->next=nn;
                    rear=nn;
				break;
			case 3:
                    if ( front == NULL && rear == NULL){
                         printf("Queue is empty\n");
                         break;
                    }
				printf("Items: \n");
                    ptr=front;
                    while(ptr){
                         
                         printf("\n#%d is %d\n",i,ptr->data);
                         ptr=ptr->next;
                         i++;
                         
                    }
				break;
			case 4:
                    ptr=front;
                    while(ptr){
                         del=ptr;
                         ptr=ptr->next;
                         free(del);
                    }
                    exit(0);
                    break;
			default:
			printf("Invalid Input\n");
		}

	}

	return 0;
}