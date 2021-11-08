#include<iostream>
using namespace std;
struct node
{
    int val;
    node*next;
}
void printreverse(node*n)
{
    while(n!=NULL)
    {
        cout<<n->val;
        n=n->next;
    }
}
int main()
{   
    node*head=NULL;
    node*sec=NULL;
    node*thi=NULL;
    head=new node();
    sec=new node();
    thi=new node();
    head->next=sec;
    sec->next=thi;
    cin>>head->val;
    cin>>sec->val;
    cin>>thi->val;
    printreverse(head);
    return 0;


}