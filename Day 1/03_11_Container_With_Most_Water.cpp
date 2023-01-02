// https://leetcode.com/problems/container-with-most-water/

#include<iostream>
#include<vector>
using namespace std;
// Brute force solution
// int maxArea(vector<int> v1){
//     int res = 0;
// for(int i=0; i<v1.size(); i++){
//     for(int j=i+1; j<v1.size(); j++){
//         int area = (j-i)*(min(v1[i],v1[j]));
//         res = max(area,res);
//     }
// }
// return res;
// }

// In o(n) complexity
int maxArea(vector<int> v1){
   int res = 0;
   int i=0;
   int j=v1.size()-1;
   while(i<j){
    int area = (j-i)*(min(v1[i],v1[j]));
    res = max(res,area);
    if(v1[i]<v1[j]){
        i++;
    }else if(v1[i]>v1[j]){
        j--;
    }else{
        j--;
    }
   }
   return res;
}
int main(){
vector<int> v1;
v1 = {1,8,6,2,5,4,8,3,7};
int a;
a = maxArea(v1);
cout<<a;
return 0;
}