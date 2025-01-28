#include<bits/stdc++.h>
using namespace std;

int main(){

    deque<int>dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(3);

    dq.pop_back();//no data is returned
    dq.pop_front();//no data is returned

    dq.back();//reference to the last element
    dq.front();//referenve to the first element
    


}