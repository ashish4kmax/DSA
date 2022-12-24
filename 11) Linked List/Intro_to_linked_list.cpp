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

int main() {
    NODE *head=new NODE(10);
    head->next=new NODE(20);
    head->next->next=new NODE(30);
    cout<<"Value at head is = "<<head->next->next->data;
    return 0;
}
