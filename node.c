#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* next;
} 
*top=NULL;

int main() {
	struct node *nn,*ptr,*del;
	int item,ch;
	int counter=0;
	printf("****** LINKED LIST PROGRAM *******\n");
	printf("Press1 To delete\nPress2 To Insert\nPress3 to Traverse\nPress4 to Exit\n");
	while(1){
		// return 1;
		printf("What to do?: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				if (top==NULL){
					printf("\nUnderflow Condition, Deletion is not possible\n");
				}
				else {
					printf("Item popped from list: %d\n",top->data);
					// free(top->data);
					del=top;
					top=top->next;
					free(del);
				}
				break;
			case 2:
				nn=(struct node*)malloc(sizeof(struct node));
				printf("Enter the value to add: ");
				scanf("%d",&item);
				printf("\nAdded value %d to List\n",item);
				// counter++;
				nn->data=item;
				nn->next=top;
				top=nn;
				break;
			case 3:
				printf("Items: \n");
				for(ptr=top;ptr!=NULL;ptr=ptr->next){
					counter++;
					printf("\n#%d is %d\n",counter,ptr->data);
				}
				break;
			case 4:
				exit(0);
				free();
				break;
			default:
			printf("Invalid Input\n");
		}

	}

	return 0;
}