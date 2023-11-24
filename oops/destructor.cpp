#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Hero{
    public:
    int health = 50;
    int level = 0;
    char* name;

    Hero(){
        cout<<"constructor was called"<<endl;
    }

    //destructor
    ~Hero(){
        cout<<"destructor dada called"<<endl;
    }

};

int main(){

    //statically creted
    Hero a;

    //dynamically created 
    Hero* b = new Hero;

    //manual call for destructor of b
    delete b;
    
    
    

    return 0;
}