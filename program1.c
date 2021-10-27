#include<stdio.h>
#include<stdlib.h>
# define MAX 5
struct book
{	int book_id;
    char book_name[10];
    char book_author[10];
    float book_price;
};

void push(struct book bk,int *top,struct book stack[])
{
    (*top)++;
    stack[*top]=bk;
}

void pop(int *top,struct book stack[])
{
    (*top)--;

}

void display(int top,struct book stack[])
{
    	int i,j;
    	for(i=top;i>=0;i--)
        {
            printf("Book_id=%d \n Book_Name=%s \n Book_Author=%s \n Book_price=%f\n",stack[i].book_id,stack[i].book_name,stack[i].book_author,stack[i].book_price);

        }
        printf("\n");
}

void main()
{
    struct book stack[MAX],bk;
    int choice;int top=-1;
    for(;;)
    {
        printf("1.Insert Book\n 2 Remove Book \n 3 Display the existing book details\n 4: exit\nEnter choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:if(top==MAX-1)
                    {
                        printf("Box is full and books can't be added\n");
                        			break;

                    }
                    printf("Enter the book_id,book name,book author,book price\n");
                    scanf("%d %s %s %f",&bk.book_id,bk.book_name,bk.book_author,&bk.book_price);
                    push(bk,&top,stack);
                    break;
            case 2:if(top==-1)
                    {
                        printf("Box is empty\n");
                            break;
                    }
                    pop(&top,stack);
                    break;
            case 3:if(top==-1)
                    {
                        printf("Box is empty\n");
                        break;
                    }
                    printf("Books in the box are\n");
                    display(top,stack);
                    break;
            case 4:exit(0);
            }

        }
}
