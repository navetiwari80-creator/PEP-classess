#include <iostream>
#include <vector>
#include <set>
using namespace std;

class SocialNetwork {
    int users;
    vector<vector<int>> graph;

public:
    SocialNetwork(int n) {
        users = n;
        graph.resize(n);
    }

    void addFriendship(int u, int v) {
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    void dfs(int current, int target,
             vector<bool>& visited,
             set<int>& mutualFriends,
             int depth,
             int maxDepth) {

        
        if (depth > maxDepth)
            return;

        visited[current] = true;

        for (int neighbor : graph[current]) {

            
            for (int targetFriend : graph[target]) {
                if (neighbor == targetFriend) {
                    mutualFriends.insert(neighbor);
                }
            }

            if (!visited[neighbor]) {
                dfs(neighbor, target, visited,
                    mutualFriends, depth + 1, maxDepth);
            }
        }
    }

    void findMutualFriends(int user1, int user2) {

        vector<bool> visited(users, false);
        set<int> mutualFriends;

        int maxDepth = 10; 

        dfs(user1, user2, visited,
            mutualFriends, 0, maxDepth);

        cout << "Mutual Friends between User "
             << user1 << " and User "
             << user2 << ":\n";

        if (mutualFriends.empty()) {
            cout << "No mutual friends found.\n";
        } else {
            for (int user : mutualFriends) {
                cout << "User " << user << endl;
            }
        }
    }
};

int main() {

    
    SocialNetwork sn(100);

    sn.addFriendship(0, 1);
    sn.addFriendship(0, 2);
    sn.addFriendship(1, 3);
    sn.addFriendship(2, 3);
    sn.addFriendship(3, 4);
    sn.addFriendship(2, 4);

    sn.findMutualFriends(0, 4);

    return 0;
}