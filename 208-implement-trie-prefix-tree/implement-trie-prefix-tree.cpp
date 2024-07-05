class Node{
    public:
    Node* children[26];
    bool eow;

    Node() : eow(false){
        for(int i=0;i<26;i++){
            children[i] = nullptr;
        }
    }

    ~Node(){
        for(int i=0;i<26;i++){
            delete children[i];
        }
    }

};




class Trie {
public:
    Node* root;
    Trie() {
        root = new Node();
    }
    
    void insert(string word) {
        Node* curr = root;
        for(char c: word){
            int index = c-'a';
            if(curr->children[index]==NULL){
                curr->children[index]=new Node();
            }
            curr=curr->children[index];
        }
        curr->eow = true;
    }
    
    bool search(string word) {
        Node* curr = root;
        for(char ch: word){
            int idx = ch-'a';

            if(curr->children[idx]==NULL){
                return false;
            }
            curr = curr->children[idx];
        }
        return curr->eow;
    }
    
    bool startsWith(string prefix) {
        Node* curr = root;

        for(char ch:  prefix){
            int idx = ch-'a';

            if(curr->children[idx]==NULL){
                return false;
            }
            curr = curr->children[idx];
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