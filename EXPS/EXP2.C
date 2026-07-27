# include <stdio.h>
# define MAX 5

int front = -1;
int rear = -1;

int queue[MAX];

void enqueue(){

    int value;

    if(rear ==MAX-1)
        {printf("Queue Overflow \n");}

    else
        {
            printf("Enter Your Value : ");
            scanf("%d",&value);

            if(front == -1)
                {front = 0;}
            
            rear++;
            queue[rear] = value;

             printf("Element Enqueued : %d\n",queue[rear]);

        }

}


void dequeue(){

    if(front==-1 ||  front > rear)
        {printf("Queue Underflow, Queue Empty! \n");}
    
    else
        {
            printf("Element Dequeued : %d\n",queue[front]);
            front ++;

            if (front > rear)
                {
                front = -1;
                rear = -1;
                }

        }

}

void display(){

    if(rear == -1)
        {printf("Queue Empty \n");}
    
    else
        {
            printf("Elements Are : \n");
            for(int i = front, j = rear; i <= j; i++)
                {
                    printf("%d ",queue[i]);
                }
            printf("\n");
        }

}

void main(){

    printf("----- QUEUE USING ARRAY -----\n");

    int choice;

    printf("\n 1.ENQUEUE \n 2.DEQUEUE \n 3.DISPLAY \n 4.EXIT \n \n");

    printf("\n\nENTER CHOICE : \n");
    scanf("%d",&choice);

    printf("\n");


    while(choice!=4){
   
	switch(choice)
	{ case 1: enqueue();
	  break;

      case 2: dequeue();
	  break;

	  case 3: display();
	  break;

      case 4: 
	  break;

	  default: printf("Invalid Choice \n");
	  break;

	}

    printf("\n\nENTER CHOICE : \n");
    scanf("%d",&choice);

    printf("\n");
    

}

printf("EXITING.....");




}