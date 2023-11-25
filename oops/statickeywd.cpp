#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Hero{
    public:
    int health = 50;
    int level = 0;
    static int timetakentocomplete ;

    static void random(){
        cout<<timetakentocomplete<<endl;
    }

};

int Hero::timetakentocomplete = 5;

int main(){

    //accessing wo creating an object
    cout<<Hero::timetakentocomplete << endl;

    Hero::random();

    return 0;
}