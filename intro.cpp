#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> graph;
void insert(int src,int dst){
    graph[src].push_back(dst);
    graph[dst].push_back(src);
}
void display(){
    cout<<"Graph : \n";
    for(int i=0;i<graph.size();i++){
        cout<<i<<" -> ";
        for(auto el : graph[i]){
            cout<<el<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int v;
    cin>>v;
    graph.resize(v);
    int e;
    cin>>e;
    while(e--){
        int s,d;
        cout<<"Enter the source and destination : ";
        cin>>s>>d;
        insert(s,d);
    }
    display();
    return 0;
}