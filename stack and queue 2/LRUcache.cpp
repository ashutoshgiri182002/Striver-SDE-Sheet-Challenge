class LRUCache {
public:
    class node {
    public:
        int key;
        int val;
        node* next;
        node* prev;

        node(int _key, int _val) {
            key = _key;
            val = _val;
        }
    };

    node* head = new node(-1, -1);
    node* tail = new node(-1, -1);

    int cap;
    unordered_map<int, node*> mp;

    LRUCache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }

    void addnode(node* newnode) {
        node* temp = head->next;
        newnode->next = temp;
        newnode->prev = head;
        head->next = newnode;
        temp->prev = newnode;
    }

    void deletenode(node* delnode) {
        node* delprev = delnode->prev;
        node* delnext = delnode->next;
        delprev->next = delnext;
        delnext->prev = delprev;
    }

    int get(int key_) {
        if (mp.find(key_) != mp.end()) {
            node* resnode = mp[key_];
            int res = resnode->val;

            mp.erase(key_);
            deletenode(resnode);
            addnode(resnode);
            mp[key_] = head->next;
            return res;
        }
        return -1; // Return a default value if the key is not found
    }

    void put(int key_, int value) {
        if (mp.find(key_) != mp.end()) {
            node* existingNode = mp[key_];
            mp.erase(key_);
            deletenode(existingNode);
        }

        if (mp.size() == cap) {
            mp.erase(tail->prev->key);
            deletenode(tail->prev);
        }

        addnode(new node(key_, value));
        mp[key_] = head->next;
    }
};
