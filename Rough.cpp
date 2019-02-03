#include<bits/stdc++.h>
using namespace std;
#define read() freopen("input.txt", "r", stdin);
#define write() freopen("output.txt", "w", stdout);
#define ll long long int 
#define V 4


bool isBipartite(int G[][V], int src) 
{ 
    
    int colorArr[V]; 
    for (int i = 0; i < V; ++i) 
        colorArr[i] = -1; 
  
    
    colorArr[src] = 1; 
    queue <int> q; 
    q.push(src); 
    while (!q.empty()) 
    { 
        
        int u = q.front(); 
        q.pop(); 
  
        
        if (G[u][u] == 1) 
        return false;  
  
         
        for (int v = 0; v < V; ++v) 
        { 
            // An edge from u to v exists and  
            // destination v is not colored 
            if (G[u][v] && colorArr[v] == -1) 
            { 
                // Assign alternate color to this adjacent v of u 
                colorArr[v] = 1 - colorArr[u]; 
                q.push(v); 
            } 
  
            // An edge from u to v exists and destination  
            // v is colored with same color as u 
            else if (G[u][v] && colorArr[v] == colorArr[u]) 
                return false; 
        } 
    } 
  
    // If we reach here, then all adjacent   
    // vertices can be colored with alternate color 
    return true; 
} 
  
// Driver program to test above function 
int main() 
{ 

	#ifdef asiuzzaman
	read(); write();
	#endif

    int G[][V] = {
    	{0, 0, 1, 0}, 
        {0, 0, 0, 1}, 
        {1, 0, 0, 0}, 
        {0, 1, 1, 0} 
    }; 

    cout<<"hellor"<<endl;
  
    isBipartite(G, 0) ? cout << "Yes" : cout << "No"; 
    return 0; 
} 