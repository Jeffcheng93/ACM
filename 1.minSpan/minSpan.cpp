// Build the graph
#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>

using namespace std;
const int N=105, L=50;


bool tag[N];
vector<int> adj_list[N];   // graph matrix 
vector<int> component[N];  // 
int component_count;

void init(int node_count)
{
    // 初始化图
    for (int i = 0; i < node_count; i++)
    {
        // 矩阵表示连通情况
        adj_list[i].clear();
        component[i].clear();
    }
    //分配内存空间
    memset(tag, 0, sizeof(tag));
}


int main (void)
{
    char fname[L];
    int node_count, edge_count, u, v;
    cout<< "Pease input the file name : "<<endl; 
    cin >> fname;

    // 读取文件
    ifstream infile; 
    infile.open(fname);

    //freopen(fname, "r", stdin);
    // cout<< "Please input the numbers of edges and vertices separately : "<<endl;
    // cin >> node_count >> edge_count;
    // init(node_count);

    infile >> node_count;
    infile >> edge_count;

    cout << node_count<< "  "<<edge_count<<endl;

    // for (int i = 0; i < edge_count; i++)
    // {
    //     cin >> u >> v;
    //     // undirected graph, 1-4; 
    //     adj_list[u].push_back(v); 
    //     adj_list[v].push_back(u);
    // }

    // for (int i = 1; i < node_count; i++)
    // {
    //     if (!tag[i])
    //     {
    //         ++component_count; 
    //         tag[i] = true;
    //         dfs(i);
    //     }
    // }
    // print_ans();
}