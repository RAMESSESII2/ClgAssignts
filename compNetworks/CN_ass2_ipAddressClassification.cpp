#include<bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long int

void file_i_o(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    freopen("cerr.txt", "w", stderr);
#endif
}

int TC;
int main()
{
    file_i_o();
    cin >> TC;
    while (TC--)
    {
        string s;
        // binary representation of ip addresses taken as input
        cin >> s;
        string first = (s.substr(0, 8));
        int count = 0;
        for( auto x: (first) ){
            if( ((x-'0')& 1) == 0 ) break;
            else count++;
        }
        if( count == 0 ){ 
            cout << "Class A\n";
            cout << (s.substr(0, 8)) + string(32-8, '0') << endl;
        }
        else if( count == 1 ){ 
            cout << "Class B\n";
            cout << (s.substr(0, 16))+ string(32-16, '0')  << endl;
        }
        else if( count == 2 ){ 
            cout << "Class C\n";
            cout << (s.substr(0, 24))+ string(32-24, '0')  << endl;
        }
        else if( count == 3 ){ 
            cout << "Class D\n";
            cout << "No subnetting"<< endl;
        }
        else{
            cout << "Class E\n";
            cout << "No subnetting"<< endl;
        }
    }
    return 0;
}


