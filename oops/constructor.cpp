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

    Hero(char name[]){
        cout<<"constructor was called"<<endl;
        name = new char[100];
        strcpy(this->name, name);
    }

    Hero(int health){
        cout<<"constructor was called"<<endl;
        this->health = health;
    }

    void getName(){
        cout<<"name is: "<<this->name<<endl;
    }

};

int main(){
    char temp[6] = {'a', 'r', 'y', 'a', 'n'};
    Hero invin ;
    cout<<invin.health<<endl;
    cout<<invin.level<<endl;
    cout<<invin.name<<endl;

    
    invin.getName();
    // invin.name = "Don";
    invin.getName();

    

    

    return 0;
}