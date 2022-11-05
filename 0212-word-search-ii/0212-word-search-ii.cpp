class TrieNode {
    public : 
    TrieNode *next[26] = {};
    string s;
    bool endHere = false;
};

class Solution {
public:
    vector<string> res;
    int vis[12][12];
    TrieNode *root;
    
    void insert(string s) {
        int n = s.size();
        TrieNode *cur = root;
        for(int i = 0; i < n; i++) {
            int val = s[i] - 'a';
            if(!cur->next[val]) { 
                cur->next[val] = new TrieNode();
            }
            cur = cur->next[val];
        }
        cur->endHere = true;
        cur->s = s;
    }
    
    void run(int i, int j, TrieNode* r, vector<vector<char>>& board) {
        if(r->endHere) {
            res.push_back(r->s);
            r->endHere = false;
        }
        
        int n = board.size(), m = board[0].size();
        if(i < 0 || i >= n || j < 0 || j >= m || vis[i][j]) return;
        
        vis[i][j] = 1;
        int val = board[i][j] - 'a';
        if(r->next[val]) {
            int dx[4] = {1, -1, 0, 0};
            int dy[4] = {0, 0, 1, -1};
            
            for(int t = 0; t < 4; t++){
                int nx = i + dx[t];
                int ny = j + dy[t];
                run(nx, ny, r->next[val], board);
            }
        }
        vis[i][j] = 0;
    }
    
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        res.clear();
        memset(vis, 0, sizeof(vis));
        root = new TrieNode();
        for(auto word : words) insert(word);
        int n = board.size(), m = board[0].size();
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                run(i, j, root, board);
            }
        }
        return res;
    }
};