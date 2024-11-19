#include <iostream>
#include <vector>
using namespace std;

vector <int> reverse(vector <int> v){

int s = 0, e= v.size() - 1;

while(s<=e){
swap(v[s],v[e]);
s++;
e--;
}

return v;
}

int main() {
vector<int> v;

v.push_back(11);
v.push_back(7);
v.push_back(3);
v.push_back(12);
v.push_back(4);

vector<int> ans = reverse(v);

cout <<"Origional Array"<< endl ;
for(int j=0; j<v.size();j++){
cout<< v[j] << " ";
}
cout << endl;


cout <<"Reverse Array"<< endl ;
for(int j=0; j<ans.size();j++){
cout<< ans[j] << " ";
}
cout << endl;


return 0;
}