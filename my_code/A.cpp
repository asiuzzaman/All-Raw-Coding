#include<bits/stdc++.h>
using namespace std;

vector<int>adjlist[100];
vector<int>cost[100];
int visited[100];
int distance[100];

void BFS(int source,int total_node )
{
    for(int i=0;i<=total_node;i++) {visited[i]=0; }
    queue<int>Q;
    visited[source]=1;
    Q.push(source);
    distance[source]=0;
      cout<<distance[source]<<endl;
    //cout<<"the front :"<<Q.front()<<endl;
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        for(int i=0;i<adjlist[u].size();i++)
        {
           if(visited[adjlist[u][i]]==0)
           {
               int v=adjlist[u][i];
               visited[v]=1;
               distance[u]=distance[u]+1;
               Q.push(v);
               
           }
        }
       
    }
    
 
}

int main()
{
    int n,e;
  //  ofstream("file.txt");
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int n1,n2;
        cin>>n1>>n2;
        adjlist[n1].push_back(n2);
        adjlist[n2].push_back(n1);
       // cost[n1].push_back(n2);

    }
    cout<<"print adjlist"<<endl;
    for(int i=1;i<=n;i++) {
      for(int j=0;j<adjlist[i].size();j++)
      {
        cout<<adjlist[i][j]<<" ";
      }
      cout<<endl;
    }
    BFS(6,n);
   
    
}
