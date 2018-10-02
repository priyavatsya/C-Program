#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>


//merging of two sorted array
//traversing matrix
//print lower and upper triangular matrix
//to find matrix is symmetric or not
//to print a sparse matrix of a given matrix
//to find strings are same or not


/*
// [swapping two numbers by call by value]

void swap(int, int);
void main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    swap(a,b);
}
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("Value after swapping:\n%d %d",x,y);
}
*/


/*
// [swapping two numbers by call by reference]

void swap(int *, int *);
void main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("Value after swapping:\n%d %d",*x,*y);
}
*/


/*
// [to traversing an array]

int main()
{
    int a[3],i,n;
    printf("Enter size of an array:\n");
    scanf(" %d",&n);
    printf("Enter elements of an array:\n");
    for (i=0;i<n;i++)
        scanf(" %d",&a[i]);
    printf("Array elements:\n");
    for (i=0;i<n;i++)
        printf(" %d\n", a[i]);
    return 0;
}
*/


/*
// [to insert an element in array at any position]

void insert(int[], int);
void display(int[], int);
void main()
{
    int a[10],i,n;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    insert(a,n);
    display(a,n);
}
void insert(int a[],int n)
{
    int p,u,i;
    printf("Enter position at which you want to insert:\n");
    scanf("%d",&p);
    if (p==0)
        printf("Error: Entered position smaller than initial one.\n");
    else if (p>n)
    {
        printf("Error: Entered position greater than size of array.\n");
    }
    else
    {
        printf("Enter the value:\n");
        scanf("%d",&u);
        for (i=n-1;i>=p-1;i--)
            a[i+1]=a[i];
        a[p-1]=u;
    }
}
void display(int a[],int n)
{
    int i;
    printf("New array is:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
*/


/*
// [to delete an element in an array]

int deletepos(int[], int);
void display(int[],int);
int main()
{
    int a[10],i,n;
    printf("Enter no. of elements in an array:\n");
    scanf("%d",&n);
    printf("Enter elements of an array:\n");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    if(deletepos(a,n))
        n = n-1;
    display(a,n);
}
int deletepos(int b[], int m)
{
    int p,i;
    printf("Enter position which you want to delete:\n");
    scanf("%d",&p);
    if (p==0)
        printf("Error: Entered position smaller than initial one.\n");
    else if (p>m)
    {
        printf("Error: Entered position greater than size of array.\n");
    }
    else
    {
        for (i=p-1;i<(m-1);i++)
            b[i]=b[i+1];
        return 1;
    }
    return 0;
}
void display(int b[],int n)
{
    int i;
    printf("New array is:\n");
    for (i=0;i<n;i++)
        printf("%d\n",b[i]);
}
*/


/*
// [linear search]

int main()
{
    int n,i,v,a[10];
    printf("Enter no. of elements:\n");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter element you want to search:\n");
    scanf("%d",&v);
    for (i=0;i<n;i++)
    {
        if (a[i]==v)
        {
            printf("Element found at %d position.",i+1);
            break;
        }
        else
            printf("Element not found.");
    }
    return 0;
}
*/


/*
// [concatenation of two arrays]

int main()
{
    int a[50],b[50],c[100],n,m,i,j,k;
    printf("Enter the no. of elements in first array: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for (i=0;i<n;i++)
        scanf(" %d",&a[i]);

    printf("Enter the no. of elements in second array: ");
    scanf("%d",&m);
    printf("Enter elements:\n");
    for (j=0;j<m;j++)
        scanf(" %d",&b[j]);

    for (i=0;i<n;i++)
        c[i]=a[i];
    for (i=0,j=n;i<m,j<m+n;i++,j++)
        c[j]=b[i];
    for (i=0;i<m+n;i++)
        printf(" %d",c[i]);
    return 0;
}
*/


/*
// [to reverse a string]

int main()
{
    char a[10];
    int i,len;
    printf("Enter a string: ");
    scanf(" %s",a);
    len = strlen(a);
    for(i=len-1;i>=0;i--)
        printf("%c", a[i]);

    return 0;
}
*/


/*
// [to concatenate two strings]

int main()
{
    char str1[10], str2[10];
    int i,j;
    printf("Enter first string:\n");
    scanf(" %s",str1);
    printf("Enter second string:\n");
    scanf(" %s",str2);

    i=0;
    while(str1[i]!='\0')
        i++;

    j=0;
    while (str2[j]!='\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
    printf("Concatenated string = %s",str1);
    return 0;
}
*/


/*
// [switch case to create, insert, delete, count and display a linked list]

struct node
{
    int data;
    struct node *next;
}*head;



void append(int num)
{
    struct node *temp,*right;
    temp= (struct node *)malloc(sizeof(struct node));
    temp->data=num;
    right=(struct node *)head;
    while(right->next != NULL)
        right=right->next;
    right->next =temp;
    right=temp;
    right->next=NULL;
}



void add( int num )
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=num;
    if (head== NULL)
    {
        head=temp;
        head->next=NULL;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
}
void addafter(int num, int loc)
{
    int i;
    struct node *temp,*left,*right;
    right=head;
    for(i=1;i<loc;i++)
    {
        left=right;
        right=right->next;
    }
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=num;
    left->next=temp;
    left=temp;
    left->next=right;
    return;
}



void insert(int num)
{
    int c=0;
    struct node *temp;
    temp=head;
    if(temp==NULL)
    {
        add(num);
    }
    else
    {
        while(temp!=NULL)
        {
            if(temp->data<num)
                c++;
            temp=temp->next;
        }
        if(c==0)
            add(num);
        else if(c<count())
            addafter(num,++c);
        else
            append(num);
    }
}



int delete(int num)
{
    struct node *temp, *prev;
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data==num)
        {
            if(temp==head)
            {
                head=temp->next;
                free(temp);
                return 1;
            }
            else
            {
                prev->next=temp->next;
                free(temp);
                return 1;
            }
        }
        else
        {
            prev=temp;
            temp= temp->next;
        }
    }
    return 0;
}


void  display(struct node *r)
{
    r=head;
    if(r==NULL)
    {
        return;
    }
    while(r!=NULL)
    {
        printf("%d ",r->data);
        r=r->next;
    }
    printf("\n");
}


int count()
{
    struct node *n;
    int c=0;
    n=head;
    while(n!=NULL)
    {
        n=n->next;
        c++;
    }
    return c;
}


int  main()
{
    int i,num;
    struct node *n;
    head=NULL;
    while(1)
    {
        printf("\nList Operations\n");
        printf("1.Insert\n");
        printf("2.Display\n");
        printf("3.Size\n");
        printf("4.Delete\n");
        printf("5.Exit\n");
        printf("Enter your choice : ");
        if(scanf("%d",&i)<=0){
            printf("Enter only an Integer\n");
            exit(0);
        } else {
            switch(i)
            {
                case 1:      printf("Enter the number to insert : ");
                    scanf("%d",&num);
                    insert(num);
                    break;
                case 2:     if(head==NULL)
                    {
                        printf("List is Empty\n");
                    }
                    else
                    {
                        printf("Element(s) in the list are : ");
                    }
                    display(n);
                    break;
                case 3:     printf("Size of the list is %d\n",count());
                    break;
                case 4:     if(head==NULL)
                        printf("List is Empty\n");
                    else{
                        printf("Enter the number to delete : ");
                        scanf("%d",&num);
                        if(delete(num))
                            printf("%d deleted successfully\n",num);
                        else
                            printf("%d not found in the list\n",num);
                    }
                    break;
                case 5:     return 0;
                default:    printf("Invalid option\n");
            }
        }
    }
    return 0;
}
*/


/*
// [to reverse a linked list]

{
    int data;
    struct Node* next;
};

static void reverse(struct Node** head_ref)
{
    struct Node* prev   = NULL;
    struct Node* current = *head_ref;
    struct Node* next;
    while (current != NULL)
    {
        next  = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head_ref = prev;
}

void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node =
            (struct Node*) malloc(sizeof(struct Node));

    new_node->data  = new_data;

    new_node->next = (*head_ref);

    (*head_ref)    = new_node;
}

void printList(struct Node *head)
{
    struct Node *temp = head;
    while(temp != NULL)
    {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
}
*/


/*
// [to add polynomials using linked list]

struct node
{
    int coefficient, exponent;
    struct node *next;
};

struct node* createpolynomial();
void display(struct node*);
struct node* add(struct node* , struct node*);
void main()
{
    struct node *start1, *start2, *start3;
    printf("Enter first polynomial:\n");
    start1 = createpolynomial();
    printf("Enter second polynomial:\n");
    start2 = createpolynomial();
    start3 = add(start1, start2);
    printf("\nFirst polynomial: ");
    display(start1);
    printf("\nSecond polynomial: ");
    display(start2);
    printf("\nAdded polynomial: ");
    display(start3);
}

struct node* createpolynomial()
{
    int i, terms;
    struct node *start = NULL, *t, *tail = NULL;
    printf("Enter no. of terms:");
    scanf("%d", &terms);
    for (i = 1; i <= terms; i++)
    {
        t = (struct node *) malloc(sizeof(struct node));
        printf("Enter coefficient and exponent:\n");
        scanf("%d %d", &t->coefficient, &t->exponent);

        if (start == NULL)
        {
            t->next = start;
                start = t;
        }
        else
        {
            tail->next = t;
            t->next = NULL;

        }
            tail = t;
    }
    return (start);
}

void display(struct node *start3)
{
    struct node *t = NULL;
    t = start3;

    while(t != NULL)
    {
        printf("%dx^%d + ",t->coefficient, t->exponent);
        t = t->next;
    }
}

struct node* add(struct node *P1, struct node *P2)

{
    struct node *P3 , *start3, *tail;
    start3 = NULL;
    while (P1 != NULL && P2 != NULL)
    {

        P3 = (struct node*)malloc(sizeof(struct node));
        P3 -> next = NULL;
        if (start3 == NULL)
        {
            start3 = P3;
        }
        else
        {
            tail -> next = P3;
        }
        tail = P3;

        if (P1 -> exponent == P2 -> exponent)
        {
            P3->coefficient = P1->coefficient + P2->coefficient;
            P3->exponent = P1->exponent;
            P1 = P2->next;
            P2 = P2->next;
        }
        else if(P1->exponent > P2->exponent)
        {
            P3->coefficient = P1->coefficient;
            P3->exponent = P1->exponent;
            P1 = P1->next;
        }
        else
        {
            P1->exponent = P2->exponent;
            P3->coefficient = P2->coefficient;
            P3->exponent = P2->exponent;
            P2 = P2->next;
        }
    }

    while(P1 != NULL)
    {
        P3 -> next = NULL;
        P3->coefficient = P1->coefficient;
        P3->exponent = P1->exponent;
        P1 = P1->next;
    }

    while(P2 != NULL)
    {
        P3 -> next = NULL;
        P3->coefficient = P2->coefficient;
        P3->exponent = P2->exponent;
        P2 = P2->next;
    }
}
*/


/*
// [create and display circular doubly linked list]

struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*start, *tail;

void createlist()
{
    struct node *t;
    int n,i;
    printf("Enter no. of nodes:\n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        t = (struct node*)malloc(sizeof(struct node));
        printf("Enter data:\n");
        scanf("%d",&t->data);
        if (start == NULL)
        {
            t->next = t;
            t->prev = t;
            start = t;
            tail = t;
        }
        else
        {
            t->next = start;
            t->prev = tail;
            tail->next = t;
            start->prev = t;
            tail = t;
        }
    }
}

void display()
{
    struct node *t;
    t = start;
    if (start == tail)
        printf("%d\n",start->data);
    else
    {
        while (t->next != start)
        {
            printf("%d\n",t->data);
            t = t->next;
        }
        printf("%d\n",t->data);
    }
}

void main()
{
    int data;
    start = NULL;
    tail = NULL;
    createlist();
    display();
}
*/