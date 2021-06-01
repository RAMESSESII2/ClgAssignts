#include<bits/stdc++.h>
#include <string>
#include <system_error>
using namespace std;
#define ll long long int

int TC;
int main()
{
    TC = 1;
    while (TC--)
    {
        // binary representation of ip addresses taken as input
        string s;
        cin >> s;

        //input for subnets
        int subnets;
        cin >> subnets;

        string first = (s.substr(0, 8));
        int count = 0;
        for( auto x: (first) ){
            if( ((x-'0')& 1) == 0 ) break;
            else count++;
        }
        if( count == 0 ){ 
            cout << "Class A\n";
            // mask and subnet address
            for( int n = 1; n <= subnets; n++ ){
                string mask(8, '1');
                for( int i = 0; i < 24; i++ ){
                    if(n&(1<<i)) mask += '1';
                    else mask += '0';
                }
                cout << "Mask for " << n<<"th subnet: \n" << mask << endl;
                cout << endl;
                cout << "Subnet address is: \n";
                for( int i = 0; i < 32; i++ ){
                    cout << ((s[i]-'0')&(mask[i]-'0'));
                }
                cout << endl << endl;
            }

        }
        else if( count == 1 ){ 
            cout << "Class B\n";
            cout << (s.substr(0, 16))+ string(32-16, '0')  << endl;
            // mask and subnet address
            for( int n = 1; n <= subnets; n++ ){
                string mask(16, '1');
                for( int i = 0; i < 16; i++ ){
                    if(n&(1<<i)) mask += '1';
                    else mask += '0';
                }
                cout << "Mask for " << n<<"th subnet: \n" << mask << endl;
                cout << endl;
                cout << "Subnet address is: \n";
                for( int i = 0; i < 32; i++ ){
                    cout << ((s[i]-'0')&(mask[i]-'0'));
                }
                cout << endl << endl;
            }
        }
        else if( count == 2 ){ 
            cout << "Class C\n";
            // mask and subnet address
            for( int n = 1; n <= subnets; n++ ){
                string mask(24, '1');
                for( int i = 0; i < 8; i++ ){
                    if(n&(1<<i)) mask += '1';
                    else mask += '0';
                }
                cout << "Mask for " << n<<"th subnet: \n" << mask << endl;
                cout << endl;
                cout << "Subnet address is: \n";
                for( int i = 0; i < 32; i++ ){
                    cout << ((s[i]-'0')&(mask[i]-'0'));
                }
                cout << endl << endl;
            }
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


