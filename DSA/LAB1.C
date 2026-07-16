#include <stdio.h>
//#include <conio.h>
#define MAX 5

int top= -1;
int stack[MAX];

void push(){

    if(top== MAX - 1)
        {printf("STACK OVERFLOW\n");}
    else
        {
            top++;
            printf("Enter Element :");
            scanf("%d",&stack[top]);

            printf("\nElement PUSHED : %d\n",stack[top]);
        }

}

void pop(){

    if(top==-1)
        {printf("STACK UNDERFLOW\n");}
    else
        {

            printf("Element POPPED : %d\n",stack[top]);
            top--;

        }
}

void peek(){

    if(top==-1)
        {printf("STACK IS EMPTY\n");}
    else
        {printf("TOPMOST ELEMENT is %d\n",stack[top]);}
}


void display(){

    if(top==-1)
        {printf("STACK IS EMPTY\n");}
    else
        {
            printf("The Elements are :\n");
            for(int i=top; i>=0 ; i--)
            {printf("%d \n",stack[i]);}
        }
}



int main(){

printf("----- STACK USING ARRAY -----\n");

int choice;

printf("\n 1.PUSH \n 2.POP \n 3.PEEK \n 4.DISPLAY \n 5.EXIT \n \n");
scanf("%d",&choice);


while(choice!=5){
   
	switch(choice)
	{ case 1: push();
	  break;

      case 2: pop();
	  break;

	  case 3: peek();
	  break;

	  case 4: display();
	  break;

	}

    printf("\n\nENTER CHOICE : \n");
    scanf("%d",&choice);
    

}

printf("EXITING.....");


//getch();
//clrscr();

return 0;

}




