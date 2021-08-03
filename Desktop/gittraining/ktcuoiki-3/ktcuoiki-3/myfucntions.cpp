#include "myfucntions.hpp"
void init(queue &q ){
    q.phead = q.ptail = NULL;
}

node* CreateNode(int x){
    node *p = new node;
    if(!p) exit(1);
    p->pnext = NULL;
    p->data = x;
    return p;
}
//queue first in first out
//push them vao
//top xem phan tu dau tien
//pop lay ra

void push( queue & q, node *p){
    if(q.phead == NULL){
        q.phead = q.ptail = p;
    }else{
        q.ptail->pnext = p;
        q.ptail = p;
    }
}

void top(queue &q){
    if(q.phead != NULL){
        cout << q.phead->data << endl;
    }
}

int pop(queue &q){
    if(q.phead !=  NULL){
        node *p = q.phead;
        q.phead = q.phead->pnext;
        cout <<"pop: " << p->data <<endl;
        delete p;
    }
    return 0;
}

void output( queue &q){
    node * p= q.phead;
    while(p!=NULL){
        cout << p->data << "->";
        p = p->pnext;
    }
    if(p== NULL){
        cout <<"NULL"<<endl;
    }
}

void nhapdanhsach(queue &q){
    int n,x;
    cout <<"nhap so phan tu muon them";
    cin >> n;
    for(int i=1;i<=n;i++){
        cout<<"nhap gia tri cho phan tu: ";
        cin>>x;
        node*p = CreateNode(x);
        push(q, p);
    }
}




