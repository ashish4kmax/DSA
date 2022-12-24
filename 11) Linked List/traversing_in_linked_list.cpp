#include <bits/stdc++.h>
using namespace std;

struct NODE {
    int data;
    NODE *next;
    NODE (int x) {
        data=x;
        next=NULL;
    }
};

void display(NODE *head) {
    NODE *curr=head;
    while(curr!=NULL) {
        cout<<(curr->data)<<" ";
        curr = curr->next;
    }
}

int main() {
    NODE *head=new NODE(10);
    head->next=new NODE(20);
    head->next->next=new NODE(30);
    display(head); 
    return 0;
}