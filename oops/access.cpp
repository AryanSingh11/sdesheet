#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Hero{
    public:
    int health = 90;
    string name = "rameshji";
    int level = 8;

    Hero(){
        cout<<"constructor called automatically"<<endl;
    }

    void setHealth(int health){
        this->health = health;
    }
   

    private:
    int power = 2;
    void print(){
        cout<<"power = "<<power<<endl;
    }

    public:
    int getpower(){
        return power;
    }

    void getAddr(){
        cout<<"this is: "<<this<<endl;
    }

    void setpower(int inputpower){
        power  = inputpower;
    }

};

int main(){
    Hero ramesh ;
    
//     Hero* d = new Hero ;
    
//     cout<<(*d).getpower()<<endl;
//    (*d).setpower(889);
//    cout<<(*d).getpower()<<endl;

    cout<<ramesh.health<<endl;
    ramesh.setHealth(90000);
    cout<<ramesh.health<<endl;
    cout<<"addr of ramesh is "<<&ramesh<<endl;
    ramesh.getAddr();

    

    return 0;
}