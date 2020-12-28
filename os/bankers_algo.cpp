#include <bits/stdc++.h>
using namespace std;

#define ll              long long int
#define loop(i, a, b)   for(int i=(a); i<b; i++)
#define loopr(i, a, b)  for(int i=(a); i>b; i--)

#define sz(a)           int((a).size())
#define all(c)          c.begin(), c.end()
#define allr(c)         c.rbegin(), c.rend()

#define print(dp, n); \
    loop(i, 0, n){cout << dp[i] << " ";}cout << endl; 
#define print2(dp, n, m); \
    loop(i, 0, n){loop(j, 0, m){cout << dp[i][j] << " ";}cout << endl;} 
#define countetbits(i)\
    __builtin_popcount(i)

typedef vector< long long int > vi;
typedef vector< vi > vvi;

void file_i_o(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
}
            
bool safe_state(vi &sequence, vi available, vvi allocation, vvi need){
    ll n = int(allocation.size());
    ll r = int (allocation[0].size());
    vi p(n);
    loop(i, 0, n) p[i] = i; 
    bool ans;
    vi seq = sequence;
    //checking every permutation of processes
    do{
        vi av = available;
        seq = sequence;
        ans = true;
        for(int i=0; i<n; i++){
            bool granted = true;
            for(int j=0; j<r; j++){
                if (need[p[i]][j] > av[j]){
                    granted = false;
                }
            }
            if(granted) {
                loop(j, 0, r) av[j] += allocation[p[i]][j];
                seq[i] = p[i];
            }
            else {
                ans = false;
            }
        }
        if(ans){
            sequence = seq;
            break;
        }
    }while(next_permutation(all(p)));
    return ans;
}

//function to calculate new data
void new_state(int process_p, vi req, vi &available, vvi &allocation, vvi &need){
    int r = int (allocation[0].size());
    loop(j, 0, r) available[j] -= req[j];
    for(int j = 0; j<r; j++) {
        allocation[process_p][j] += req[j];
        need[process_p][j] -= req[j];
    }
}

void run_case(){
    ll p, r;
    // Input for the no. of processes
    cin >> p;

    // Input for the no. of resouces
    cin >> r;

    //Resources allocated to different processes
    vector< vector<ll>> allocation(p, vector<ll>(r));
    for(int i=0; i<p; i++){
        for (int j=0; j<r; j++){
            cin >> allocation[i][j];
        }
    }

    //Max resouces a process have
    vector< vector<ll>> max(p, vector<ll>(r));
    for(int i=0; i<p; i++){
        for (int j=0; j<r; j++){
            cin >> max[i][j];
        }
    }

    //Available resouces
    vi available(r);
    for(int i=0; i<r; i++) cin >> available[i];
    //needed resorces
    vector< vector<ll>> need(p, vector<ll>(r));
    for(int i=0; i<p; i++){
        for(int j=0; j<r; j++){
            need[i][j] = max[i][j] - allocation[i][j];
        }
    }
    vi sequence(p);
    cout << "Initially the process is ";
    cout << (safe_state(sequence, available, allocation, need)? "SAFE." : "not SAFE.") << endl;
    cout << "this is the sequence followed: ";
    print(sequence, p);

    int process_p;
    cin >> process_p;
    vi req(r);
    for(int i=0; i<r; i++){ cin >> req[i];}
    bool possible = true;
    loop(j, 0, r){
        if(req[j] > available[j]){
            possible = false;
        }
    }
    if(possible){
        cout << "New Request can be granted." << endl;
        new_state(process_p, req, available, allocation, need);
        cout << "New availibility" << endl;
        print(available, r);
        cout << "New need matrix" << endl;
        print2(need, p, r);
        cout << "Allocation matrix" << endl;
        print2(allocation, p, r);
        if(safe_state(sequence, available, allocation, need)){
            cout << "Safe sequence is found.";
            print(sequence, p);
        }
        else cout << "No safe sequence could be found" << endl;
    }
    else{
        cout << "Request can't be granted" << endl;
    }
}

int main(){
    clock_t begin = clock();
    file_i_o();
    int tests = 1;

    while(tests-- > 0)
        run_case();

    #ifndef ONLINE_JUDGE
        clock_t end = clock();
    cout << "\n\nExecuted In: " << double(end - begin) /CLOCKS_PER_SEC << " seconds" << endl;
    #endif
    return 0;
}


