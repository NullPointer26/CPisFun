class TrieNode {
public:
    bool is_word;
    TrieNode *children[26];
    TrieNode() {
        is_word = false;
        for (int i = 0; i < 26; i++)
            children[i] = NULL;
    }
};
class Trie {
public:
    TrieNode *root;
    Trie() {
        root = new TrieNode();
    }

    /** Inserts a word into the trie. */
    void insert(string word) {
        int n = word.length();
        TrieNode *cur = root;
        for(int i=0;i<n;i++)
        {
            int k = word[i] - 'a';
            if (cur->children[k] == NULL)
            {
                cur->children[k] = new TrieNode();
            }
            cur = cur->children[k];
        }
        cur->is_word = true;
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        int n = word.length();
        TrieNode *cur = root;
        for(int i = 0;i<n;i++)
        {
            int k = word[i] - 'a';
            cur = cur->children[k];
            if (cur == NULL)
                return false;
        }
        return cur->is_word;
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        int n = prefix.length();
        TrieNode *cur = root;
        for(int i = 0;i<n;i++)
        {
            int k = prefix[i] - 'a';
            cur = cur->children[k];
            if (cur == NULL)
                return false;
        }
        return true;
    }
};
