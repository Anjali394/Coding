#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<vector<int>>v = {{1,2},{1,3},{2,4}};
    cout<<"2D vector : "<<endl;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"vector pair : "<<endl;
    vector<pair<int,int>>p;
    
    for( auto i : v){
        p.push_back({i[0],i[1]});
    }
    
    for(auto i : p){
        cout<<i.first<<"-->"<<i.second<<endl;
    }
    
    cout<<"map : "<<endl;
    map<int,int>mp;
    
    for(auto i : p){
        mp[i.first]=i.second;
    }
    for(auto i : mp){
        cout<<i.first<<"->"<<i.second<<endl;
    }
    cout<<"adjacency list: "<<endl;
    map<int, vector<int>>adj;
    for(auto i : p){
        adj[i.first].push_back(i.second);
    }
    for(auto i : adj){
        cout<<i.first<<"->";
        for(int j =0;j<i.second.size();j++){
            cout<<i.second[j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}
