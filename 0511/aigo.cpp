#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    vector<int> v = {6,3,4,2,1};
    vector<int>::iterator it;
    for(it=v.begin(); it!=v.end(); it++) {
        cout<<*it<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end());
    for(it=v.begin(); it!=v.end(); it++) {
        cout<<*it<<" ";
    }
    cout<<endl;
}