
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

struct node
{
    int val;
    int occupied = 0;
    int allocatedProcessSize = 0;
    node *next;
};

class linkedList{
    private:
        node *head, *tail;
    public:
        linkedList(){
            head = NULL;
            tail = NULL;
        }
        void pushBack( int x ){
            node *neww = new node;
            neww->val = x;
            neww->next = NULL;

            if( head == NULL ){
                head = neww;
                tail = neww;
            }
            else{
                tail->next = neww;
                tail = tail->next;
            }
        }

        void print(){
            node *t = head;
            while( t != NULL ){
                cout << t->val;
                cout <<"(" << t->occupied << ")" ;
                cout <<"(" << t->allocatedProcessSize << ")  " ;
                t = t->next;
            }
            cout << endl;
            return;
        }

        bool deleteNode( int x ){
            node *cur = head;
            node *t = head;
            while( t && t->val != x ){
                t = t->next;
            }
            if( t == NULL or head == NULL ){
                return false;
            }
            if( t == head ){
                head = cur->next;
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

        int search( int x ){
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
        bool firstFit( int processSize ){
            node *cur = head;
            if( head == NULL ){
                return 0;
            }
            while( cur  ){
                if( cur->val >= processSize && !cur->occupied){
                    cur->occupied = 1;
                    cur->allocatedProcessSize = processSize;
                    return 1;
                }
                cur = cur->next;
            }
            return 0;
        }
        bool bestFit( int processSize ){
            node *temp = head;
            node *cur = head;
            if( head == NULL )return 0;
            while( cur ){
                if( cur->val >= processSize && !cur->occupied ){
                    if( cur->val < temp->val ){
                        temp = cur;
                    }
                }
                cur = cur->next;
            }
            if( temp ){
                if( temp->val >= processSize ){
                    temp->occupied = 1;
                    temp->allocatedProcessSize = processSize;
                    return 1;
                }
            }
            return 0;
        }
        bool worstFit( int processSize ){
            node *temp = head;
            node *cur = head;
            if( head == NULL )return 0;
            while( cur ){
                if( cur->val >= processSize && !cur->occupied ){
                    if( cur->val >= temp->val ){
                        temp = cur;
                    }
                }
                cur = cur->next;
            }
            if( temp ){
                if( temp->val >= processSize ){
                    temp->occupied = 1;
                    temp->allocatedProcessSize = processSize;
                    return 1;
                }
            }
            return 0;
        }
};
            
int main(){
    file_i_o();
    linkedList l;
    //populating linked list
    l.pushBack(500);
    l.pushBack(80);
    l.pushBack(900);
    l.pushBack(100);
    l.pushBack(342);
    l.pushBack(10);
    l.pushBack(230);
    //check
    l.print();
    cout<< l.search( 10 )<<endl;
    int pos = 0;
    pos = l.search( 9 );
    if(pos != -1){
        cout << pos << endl;
    }
    else cout << "NOT found" << endl;
    cout << l.deleteNode( 10 ) << endl;
    l.print();
    pos = l.search( 10 );
    if(pos != -1){
        cout << pos << endl;
    }
    else cout << "NOT found" << endl;
    cout <<"NO.of process: ";
    int n;
    cin >> n; 
    vector<pair<int, bool> > process(n);
    for(int i= 0; i < n; i++){
        cin >> process[i].first;
        process[i].second = 0;
    }
    for(int i= 0; i < n; i++){
        if( l.worstFit(process[i].first)){
            process[i].second = 1;
        }
    }
    l.print();

    for(int i= 0; i < n; i++){
        cout << process[i].first << " " << process[i].second << endl;
    }

    return 0;
}


