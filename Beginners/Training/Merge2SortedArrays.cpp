#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
struct Node
{
	int data;
	struct Node* next;
};
void MoveNode(struct Node** destRef, struct Node** sourceRef);

struct Node* SortedMerge(struct Node* a, struct Node* b)
{
    struct Node *t1=a;
    struct Node *t2=b;
    struct Node *head=(struct Node *)malloc(sizeof(struct Node *));
    head->next=NULL;
    int r=t1->data;
    int s=t2->data;
    if(r>s)
    {
        head->data=s;
        t2=t2->next;
    }
    else
    {
        head->data=r;
        t1=t1->next;
    }
    struct Node *t=head;
    while(t1!=NULL && t2!=NULL)
    {
        struct Node *temp=(struct Node *)malloc(sizeof(struct Node *));
        temp->next=NULL;
        r=t1->data;
        s=t2->data;
        if(r>s)
        {
        temp->data=s;
        t2=t2->next;
        }
        else
        {
        temp->data=r;
        t1=t1->next;
        }
        t->next=temp;
        t=t->next;
    }
    while(t1!=NULL)
    {
       struct Node *temp=(struct Node *)malloc(sizeof(struct Node *));
       temp->data=t1->data;
       temp->next=NULL;
       struct Node *p=head;
       t->next=temp;
       t=t->next;
       t1=t1->next;
    }
    while(t2!=NULL)
    {
       struct Node *temp=(struct Node *)malloc(sizeof(struct Node *));
       temp->data=t2->data;
       temp->next=NULL;
       struct Node *p=head;
       t->next=temp;
       t=t->next;
       t2=t2->next;
    }
    return head;
}
void MoveNode(struct Node** destRef, struct Node** sourceRef)
{
	struct Node* newNode = *sourceRef;
	assert(newNode != NULL);

	*sourceRef = newNode->next;
	newNode->next = *destRef;
	*destRef = newNode;
}

void push(struct Node** head_ref, int new_data)
{
	/* allocate node */
	struct Node* new_node =
		(struct Node*) malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}
void printList(struct Node *node)
{
	while (node!=NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d",&n);
        scanf("%d",&m);

     	struct Node* res = NULL;
	    struct Node* a = NULL;
	    struct Node* b = NULL;
	    int arr[n];
	    for (int i = 0; i < n; ++i)
        {   
            scanf("%d",&arr[i]);
        }
        for (int i = n-1; i >=0; i--)
        {  
            push(&a, arr[i]);
        }
        int arr1[m];
        for(int i = 0; i<m; i++)
        {   
            scanf("%d",&arr1[i]);
            
        }
        for(int i = m-1; i>=0; i--)
        {   
            push(&b, arr1[i]);    
        }
        res = SortedMerge(a, b);
        printList(res);
        printf("\n");
    }
    return 0;
} 
