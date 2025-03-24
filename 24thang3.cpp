#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct node{
	int data;//du lieu trong toa
	struct node *next;//khoi tao moc noi giuwa cac toa
};
typedef struct node node;
node* makenode(int x){
node *newnode = (node*)malloc(sizeof(node));
newnode->data = x;
newnode->next = NULL; 
return newnode;	
}
void pushfront(node **head,int x){
	node *newnode = makenode(x);
	newnode->next = (*head);
	(*head) = newnode;
}
void printList(Node *head) {
    printf("Danh sach lien ket: ");
    while (head != NULL) {
        printf("%d -> ", head->data); 
        head = head->next; 
    }
    printf("NULL\n"); 
}
int


