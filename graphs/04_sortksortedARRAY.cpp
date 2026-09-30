#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int>ksortedArray(vector<int>& arr,int k){
    priority_queue<int,vector<int>,greater<int>>pq;
    vector<int>ans;
for(int i=0;i<k+1;i++){
    pq.push(arr[i]);
}
for(int i=k+1;i<arr.size();i++){
    ans.push_back(pq.top());
    pq.pop();
    pq.push(arr[i]);
}
    while(!pq.empty()) {

        ans.push_back(pq.top());
        pq.pop();
    }

    return ans;


}