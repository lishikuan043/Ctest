//
// Created by Administrator on 2018/6/13.
//
#include <iostream>
#include <string>
using namespace std;

static int mcount=0;

void showstring(string s,int i=0){
    mcount++;
    if (i==0){
        cout << s << endl;
    } else{
        for (int j = 0; j < mcount; ++j) {
            cout << s << endl;
        }
    }
}

void test1(){
    string s;
    getline(cin,s);
    showstring(s);
    showstring(s,2);
}

struct CandyBar{
    string bandname;
    double weight;
    double hot;
};

void test2edit(CandyBar& cb,char* bandname = "Millennium Munch", double weight=2.85, double hot=350){
    cb.bandname = bandname;
    cb.weight = weight;
    cb.hot = hot;
}

void test2show(const CandyBar& cb){
    cout << cb.bandname << endl;
    cout << cb.weight << endl;
    cout << cb.hot << endl;
}

void test2(){
    CandyBar cb;
    test2edit(cb);
    test2show(cb);
}

void showtest2(const string s){
    for (int i = 0; i < s.length(); ++i) {
        cout << (char)toupper(s[i]);
    }
}

void test3(){
    string s;
    cout << "Enter a string:";
    while(getline(cin,s)){
        if (s!="q"){
            showtest2(s);
            cout << endl;
        } else{
            cout << "bye.";
            break;
        }
        cout << "Enter a string:";
        //cin.clear();
    }
}

int main(){
    //test1();
    //test2();
    //test3();
    return 0;
}
