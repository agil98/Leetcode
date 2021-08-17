class MyHashSet {
public:
    /** Initialize your data structure here. */
    int map[1000001];
    MyHashSet() {
        for(int i = 0; i < 1000001;i++)
            map[i] = -1;
    }
    
    void add(int key) {
        map[key] = 1;
    }
    
    void remove(int key) {
        map[key] = -1;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return map[key] == 1;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */