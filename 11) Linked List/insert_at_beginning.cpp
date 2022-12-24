#include <bits/stdc++.h>
using namespace std;

struct NODE{
    int data;
    NODE *next;
    NODE (int x) {
        data=x;
        next=NULL;
    }
};

NODE *insertbeg(NODE *head) {
    int data;
    printf("Enter the data : ");
    scanf("%d",&data);
    NODE *newnode=new NODE(data);
    newnode->next=head;
    return newnode;
}

void display(NODE *head) {
    NODE *curr=head;
    if(curr==NULL) {
        printf("Nodes are empty\n");
        return;
    }
    while(curr!=NULL) {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main() {
    NODE *head=NULL;
    head = insertbeg(head);
    head = insertbeg(head);
    head = insertbeg(head);
    display(head);
    return 0;
}