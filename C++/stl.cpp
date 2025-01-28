#include <bits/stdc++.h>
using namespace std;

int main() {
    /* PAIR (SIMILAR TO TUPLE IN PYTHON) */

    pair<int, int> a = {1, 2};
    cout << a.first << " " << a.second << endl;

    pair<int, int> c = {3, 4};
    cout << c.first << " " << c.second << endl;

    // Standard Template Library (STL)
    swap(a, c);
    cout << "After swapping:" << endl;
    cout << "a = " << a.first << " " << a.second << endl;
    cout << "c = " << c.first << " " << c.second << endl;

    pair<int, pair<int, int>> b = {1, {2, 3}};
    cout << b.first << " " << b.second.first << " " << b.second.second << endl;

    pair<int, int> arr[3] = {{1, 2}, {3, 4}, {5, 6}};
    for (int i = 0; i < 3; ++i) {
        cout << arr[i].first << " " << arr[i].second << endl;
    }

    /* VECTORS IN C++ */

    vector<int> v; // Empty container
    v.push_back(1); // Adds an element to the end of the vector
    v.emplace_back(2); // Faster alternative to push_back for constructing in place
    cout << "v = " << v[0] << endl;

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2); // Directly constructs the pair

    vector<int> arr1(5, 100); // arr1 = [100, 100, 100, 100, 100]
    vector<int> arr2(5);      // arr2 = [0, 0, 0, 0, 0] (default initialized)
    vector<int> coopy(arr1);   // Copy of arr1

    // Iterator usage
    vector<int>::iterator it = v.begin(); // Points to the first element
    it++;
    cout << *(it) << endl;

    // Other iterators
    // These iterators are not used in any operations but demonstrate usage:
    vector<int>::iterator it_end = v.end();     // Points one past the last element
    vector<int>::reverse_iterator it_rbegin = v.rbegin(); // Points to the last element
    vector<int>::reverse_iterator it_rend = v.rend();   // Points before the first element

    // Accessing elements
    cout << v[0] << " " << v.at(0) << endl; // Using at() for bounds-checked access
    cout << v.back() << endl;               // Last element

    // Printing full vector using iterator
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *(it) << " ";
    }
    cout << endl;

    // Using auto for cleaner code
    // 'auto' deduces the type of the variable automatically based on the assigned value
    auto num = 5;              // Compiler deduces 'num' as int
    auto name = "neeraj";      // Compiler deduces 'name' as const char*

    // Using auto with iterators
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *(it) << " ";
    }
    cout << endl;

    // Range-based loop (Python-like style)
    for (auto val : v) {
        cout << val << " ";
    }
    cout << endl;

    // Deletion
    // Syntax for erase:
    // v.erase(iterator) - Deletes the element at the given iterator position
    // v.erase(start_iterator, end_iterator) - Deletes elements in the range [start_iterator, end_iterator)
    if (!v.empty()) {
        v.erase(v.begin());                // Deletes the first element
    }
    if (v.size() >= 3) {
        v.erase(v.begin(), v.begin() + 3); // Deletes elements at positions 0, 1, 2
    }

    //insert
    vector<int>vtr(2,100);
    vtr.insert(vtr.begin(),300);//will insert 300 on v.begin position ie 1st element
    vtr.insert(vtr.begin()+1,3,10);//this will add 3 10's after v.begin

    //copy-insert
    vector<int>copy(2,50);
    vtr.insert(vtr.begin()+2,copy.begin(),copy.end());//will insert copy in the range to vtr.gein()+2 index;

    //size
    cout<<vtr.size();
    vtr.pop_back();//pops last element

    copy.swap(vtr);//swaps both vector;

    vtr.clear();//erease entire array
    cout<<vtr.empty();//check empty or not


    return 0;
}
