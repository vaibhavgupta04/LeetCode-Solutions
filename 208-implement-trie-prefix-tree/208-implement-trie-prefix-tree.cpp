class Node{
public:
    Node *lk[26];
    bool end;
    Node(){
        end=false;
        for(int i=0;i<26;i++){
            lk[i]=NULL;
        }
    }
};


class Trie {
public:
    Node *root;
    Trie() {
        root=new Node();        
    }
    
    void insert(string word) {
        Node *node=root;
        for(auto i:word){
            if(node->lk[i-'a']==NULL){
                node->lk[i-'a']=new Node();
            }
            node=node->lk[i-'a'];
        }
        node->end=true;
    }
    
    bool search(string word) {
        Node *node=root;
        for(auto i:word){
            if(node->lk[i-'a']==NULL){
               return false;
            }
            node=node->lk[i-'a'];
        }
        return node->end;
        
    }
    
    bool startsWith(string prefix) {
        Node *node=root;
        for(auto i:prefix){
            if(node->lk[i-'a']==NULL){
               return false;
            }
            node=node->lk[i-'a'];
        }
        return true;
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */