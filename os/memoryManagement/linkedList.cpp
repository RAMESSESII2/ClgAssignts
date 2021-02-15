
#include <bits/stdc++.h>
using namespace std;

void file_i_o(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
}

class node
{
    public:
        int val;
        node *next;
};

void pushBack( node **head, int x ){
    node *neww = new node();
    neww->val = x;
    neww->next = NULL;

    node *end = *head;
    if( *head == NULL ){
        *head = neww;
        return;
    }
    while( end->next != NULL) end = end->next;
    end->next = neww;
    return;
}

void print( node *h ){
    while( h != NULL ){
        cout << " " << h->val;
        h = h->next;
    }
    cout << endl;
}

bool deleteNode( node **head, int x ){
    node *cur = *head;
    node *t = *head;
    while( t && t->val != x ){
        t = t->next;
    }
    if( t == NULL or head == NULL ){
        return false;
    }
    if( t == *head ){
        *head = cur->next;
        delete t;
        return true;
    }
    while( cur ){
        if( cur->next == t ){
            cur->next = t->next;
            delete t;
            return true;
        }
        cur = cur->next;
    }
    return false;
}

int search( node *head, int x ){
    node *cur = head;
    if( head == NULL ){
        return -1;
    }
    int count = 0;
    while( cur ){
        if( cur->val == x ) return ++count;
        cur = cur->next;
        ++count;
    }
    return -1;
}
            
int main(){
    file_i_o();
    node *head = NULL;
    pushBack(&head, 5);
    pushBack(&head, 8);
    pushBack(&head, 9);
    print( head );
    cout << deleteNode( &head, 8 ) << endl;
    print( head );
    cout<< search( head, 5 )<<endl;
    cout<< search( head, 9 )<<endl;
    return 0;
}


