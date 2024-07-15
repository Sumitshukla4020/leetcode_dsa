class Solution {
public:
    bool dfsbackt(int i, unordered_map<int, list<int>> &adj, unordered_map<int, bool> &visited, unordered_map<int, bool> &dfsvisited){
        visited[i]=1;
        dfsvisited[i]=1;

        for(auto k: adj[i]){
            if(!visited[k]){
                bool prince = dfsbackt(k,adj,visited,dfsvisited);
                if(prince){
                    return true;
                }
            }
            else if(dfsvisited[k]==1){
                return true;
            }
        }
        dfsvisited[i]=0;
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int, list<int>> adj;
        for(int i=0;i<prerequisites.size();i++){
            int u = prerequisites[i][0];
            int v = prerequisites[i][1];
            adj[u].push_back(v);
        }

        unordered_map<int, bool> visited;
        unordered_map<int, bool> dfsvisited;

        for(int i=1;i<=numCourses;i++){
            if(!visited[i]){
                bool c = dfsbackt(i,adj,visited,dfsvisited);
                if(c){
                    return false;
                }
            }
        }
        return true;
    }
};