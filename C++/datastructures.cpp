#include <bits/stdc++.h>
using namespace std;

// Function to display a list
void showlist(list<int> g) {
    for (auto it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

int main() {


    // ===================== LIST =====================
    // List - Doubly linked list: O(1) for insertion/deletion
    // In contrast, vector insertion takes time.
    list<int> ls;
    ls.push_back(2);       // {2} - O(1)
    ls.emplace_back(4);    // {2, 4} - O(1)
    ls.push_front(5);      // {5, 2, 4} - O(1)
    showlist(ls);

    /* List functions:
    front()       - O(1): Returns the value of the first element.
    back()        - O(1): Returns the value of the last element.
    push_front()  - O(1): Adds a new element at the beginning.
    push_back()   - O(1): Adds a new element at the end.
    pop_front()   - O(1): Removes the first element.
    pop_back()    - O(1): Removes the last element.
    insert()      - O(n): Inserts elements before a specified position.
    size()        - O(1): Returns the number of elements.
    clear()       - O(n): Removes all elements.
    swap()        - O(1): Swaps the contents of two lists.
    */



    // ===================== DEQUE =====================
    // Deque - Double-ended queue, allows O(1) insertion/removal at ends
    deque<int> dq;
    dq.push_back(1);       // {1} - O(1)
    dq.emplace_back(2);    // {1, 2} - O(1)
    dq.push_front(4);      // {4, 1, 2} - O(1)
    dq.emplace_front(3);   // {3, 4, 1, 2} - O(1)

    dq.pop_back();         // Removes last element - O(1)
    dq.pop_front();        // Removes first element - O(1)

    cout << dq.back() << endl;   // Reference to last element - O(1)
    cout << dq.front() << endl;  // Reference to first element - O(1)

    /* Deque functions:
    push_back(), push_front() - O(1): Insert at ends.
    pop_back(), pop_front()   - O(1): Remove from ends.
    back(), front()           - O(1): Access elements at ends.
    */


    // ===================== STACK =====================
    // Stack - Last In First Out (LIFO) structure
    stack<int> st;
    st.push(1); st.push(2); st.push(3); st.push(4); st.push(5); // O(1) each
    st.pop(); // O(1)

    cout << st.top() << endl;     // Topmost element - O(1)
    cout << st.size() << endl;    // Number of elements - O(1)
    cout << st.empty() << endl;   // Check if stack is empty - O(1)

    stack<int> cps1;
    cps1.swap(st);                // Swap contents of stacks - O(1)

    /* Stack functions:
    push()  - O(1): Add element to the stack.
    pop()   - O(1): Remove topmost element.
    top()   - O(1): Access the topmost element.
    size()  - O(1): Returns size of stack.
    empty() - O(1): Checks if stack is empty.
    swap()  - O(1): Swap contents with another stack.
    */




    // ===================== QUEUE =====================
    // Queue - First In First Out (FIFO) structure
    queue<int> q;
    q.push(5); q.push(2); q.push(3); q.push(4); q.push(1); // O(1) each
    q.back() += 10;               // Modify last element - O(1)

    cout << q.back() << endl;     // Last element - O(1)
    cout << q.front() << endl;    // First element - O(1)
    q.pop(); // O(1)
    cout << q.front() << endl;    // Updated first element - O(1)

    /* Queue functions:
    push()  - O(1): Add element to the back.
    pop()   - O(1): Remove element from the front.
    front() - O(1): Access the front element.
    back()  - O(1): Access the last element.
    size()  - O(1): Returns size of queue.
    empty() - O(1): Checks if queue is empty.
    */


    // ================= PRIORITY QUEUE (MAX HEAP) =================
    // Priority queue - Max heap by default
    priority_queue<int> pq;       
    pq.push(10); pq.push(14); pq.push(16); pq.push(12); pq.push(11); pq.push(8); // O(log n) each

    cout << pq.top() << endl;     // Topmost (max) element - O(1)
    pq.pop();                     // Remove topmost element - O(log n)
    cout << pq.top() << endl;

    /* Priority Queue functions:
    push()  - O(log n): Add element.
    pop()   - O(log n): Remove topmost element.
    top()   - O(1): Access topmost element.
    size()  - O(1): Returns size.
    empty() - O(1): Checks if empty.
    */


    // ================= PRIORITY QUEUE (MIN HEAP) =================
    // Min heap using priority queue
    priority_queue<int, vector<int>, greater<int>> minpq;
    minpq.push(5); minpq.push(10); minpq.push(8); minpq.push(2); minpq.push(9); // O(log n) each

    cout << minpq.top() << endl;  // Topmost (min) element - O(1)



    // ===================== SET =====================
    // Set - Sorted and unique, implemented as a tree
    set<int> s;
    s.insert(10); s.insert(10); s.insert(11); s.insert(5); s.insert(1); s.insert(8); // O(log n) each

    auto it = s.find(-1);         // Points beyond the last element if not found - O(log n)
    auto it2 = s.find(8);         // Points to the element if found - O(log n)

    s.erase(1);                   // Delete element "1" - O(log n)
    s.erase(it2);                 // Delete using iterator - O(log n)

    int count = s.count(10);      // 1 if present, else 0 - O(log n)

    /* Set functions:
    insert()  - O(log n): Add elements (unique).
    erase()   - O(log n): Remove elements by value/iterator.
    find()    - O(log n): Returns iterator to element or end.
    count()   - O(log n): Checks presence of an element.
    size()    - O(1): Returns size of set.
    */



    // ===================== MULTISET =====================
    // Multiset - Sorted, but allows duplicates
    multiset<int> ms;
    ms.insert(1); ms.insert(1); ms.insert(1); ms.insert(1); ms.insert(1); // O(log n) each

    ms.erase(ms.find(1));         // Deletes one instance of "1" - O(log n)
    // ms.erase(ms.find(1), next(ms.find(1)));  // Deletes a range of elements - O(log n) per element

    /* Multiset functions:
    insert()  - O(log n): Add elements (allows duplicates).
    erase()   - O(log n): Remove elements by value/iterator/range.
    find()    - O(log n): Returns iterator to element.
    count()   - O(log n): Returns count of a specific element.
    */


    // ===================== UNORDERED SET =====================

    unordered_set <int> us;
    //unique and not sorted
    //o(1) best case and all operations
    //sometimes o(n) 
    //caz its implemented using hashmap in c
    //no lower and upper bound functs.



    // ===================== MAP =====================

    //just using to map two datatypes to each other,keys will be in sorted manner and unique
    map<int,int>mp;
    map<pair<int,int>,int>mp1;
    map<int,pair<int,int>>mp2;

    mp.insert({1,2});
    // mp.emplace({2,3});
    mp[3]=4;

    for(auto ittt:mp){
        cout<<ittt.first<<" "<<ittt.second<<endl;
    }

    cout<<mp[3]<<endl;//4 will print
    cout<<mp[5]<<endl;//NULL or 0 will be printed
    
    auto itt=mp.find(2);
    cout<<(*itt).second<<endl;

    auto ir=mp.find(5);//points to map.end() location


    //lower bound ,upper bound,erase,swap,size,empty all are same
    /* Map functions:
    insert(), erase(), find(), count() - O(log n).
    size(), empty() - O(1).
    */


    // ===================== MULTI MAP =====================
    multimap<int, int> mmp;
    mmp.insert({1, 2}); mmp.insert({1, 3}); mmp.insert({2, 4}); // O(log n) each

    for (auto p : mmp) {
        cout << p.first << " " << p.second << endl;
    }

    /* Multimap functions:
    insert(), erase(), find(), count() - O(log n).
    size(), empty() - O(1).
    */ 

    // ===================== UNORDERED MAP =====================

    unordered_map<int, int> ump;
    ump[1] = 2; ump[2] = 3; ump[3] = 4; // O(1) avg

    for (auto ittt : ump) {
        cout << ittt.first << " " << ittt.second << endl;
    }

    /* Unordered Map functions:
    insert(), erase(), find(), count() - O(1) avg, O(n) worst.
    */

    return 0;
}
