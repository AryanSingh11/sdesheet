//https://www.youtube.com/watch?v=2D0D8HE6uak&t=9s
//definitely watch the above video  

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    // Write your code here 
	vector<int> ans = {1,2,3,4,4,6};
	vector<int> arr = {1,2,3,4,4,6};
    int n = 6;

    sort(ans.begin(), ans.end());

    long long missing = -1;
    long long repeated = 0;
    bool hasone = false;

    for(int x : arr){
        if(x==1) hasone = true;
    }

    for( long long i =0 ; i< ans.size()-1; i++){
        if(ans[i]==ans[i+1]){
            //repeated
            repeated = (long long) ans[i];
            continue;
        }
        else if (ans[i+1]!=ans[i]+1){
            //that means missing
            missing =  (long long) ans[i]+1;
            continue;
        }
         
    }

    if(missing==-1){
        if(hasone==true){
            missing = ans[n-1]+1; //last element mein + 1 kar do
        }else{
            missing = 1; // array mein 1 nahi tha toh missing toh 1 hai
        }
    }
    

    
    
    auto p = make_pair(missing, repeated);
    cout<<"missing "<<p.first<<endl;
    cout<<"repeated "<<p.second<<endl;

    return 0;

}

	
	
	

