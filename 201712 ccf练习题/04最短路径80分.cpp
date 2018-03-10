#include<bits/stdc++.h>
using namespace std;
const long long INF = 1e18;
int n,m;
struct node{
    int to;
    long long cost;
};

struct edge{
    int id; 
    long long cost;
    int len;
    bool operator < (const edge & a)const {
        return cost > a.cost;
    }
};

vector<node> G[510][2];
long long d[510];
priority_queue<edge>que;

long long p2(long long a){
    return a * a;
}

int solve(){
    fill(d,d+n+1,INF);
    d[1] = 0;    
    que.push({1,0,0});
    while(!que.empty() ){
        edge a = que.top();
        que.pop();
        int v = a.id;
        if(v == n)
            break;
        if(d[v] < a.cost)
            continue;
        for(int i=0;i<G[v][0].size();i++){
            node e = G[v][0][i];
            if(d[e.to] > d[v] + e.cost){
                d[e.to] = d[v] + e.cost;
                que.push(edge{e.to,d[e.to],0});
            }
        }
        for(int i=0;i<G[v][1].size();i++){
            node e = G[v][1][i];
            int cost = p2(a.len+e.cost)-p2(a.len);
            if(d[e.to] > d[v] + cost){
                d[e.to] = d[v] + cost;
                que.push(edge{e.to,d[e.to],a.len+e.cost}); 
            }
        }
    } 
    return d[n];    
}

int main ()
{
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++){
        int t,a,b;
        long long c;
        scanf("%d %d %d %lld",&t,&a,&b,&c);
        G[a][t].push_back({b,c}); 
        G[b][t].push_back({a,c});        
    }
    cout << solve() <<endl;
    return 0;    
}