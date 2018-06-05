//
// Created by Administrator on 2018/6/4.
//

#include <iostream>
#include <cctype>
#include <vector>

using namespace std;

/*void test1(){
    char c;
    cin.get(c);
    while(c!='@'){
        if(!isdigit(c)){
            if (isupper(c)) c = tolower(c);
            else if (islower(c)) c = toupper(c);
            cout << c << endl;
        }

        cin.get();
        cin.get(c);
    }
}*/

/*void test2(){
    double d[10];
    int count = 0;
    double sum = 0.0;
    double ave = 0.0;
    for (int i = 0; i < 10; ++i) {
        cout << "Input the number:";
        if (!(cin>>d[i])){
            i=10;
        } else{
            sum+=d[i];
            count++;
        }
    }
    ave = sum/count;
    int bigcount = 0;
    for (int j = 0; j < count; ++j) {
        if (d[j]>ave) bigcount++;
    }
    cout << "input number is : " << count << endl;
    cout << "input average is : " << ave << endl;
    cout << "input number bigger than average is : " << bigcount << endl;
}*/

/*void test3(){
    char c;

    bool flag = false;
    while (!flag){
        cout << "Please enter one of the following choices: a)aaa b)bbb c)ccc d)ddd" << endl;
        cin.get(c);
        switch (c){
            case 'a': cout << "aaa"; flag=true;
                break;
            case 'b': cout << "bbb"; flag=true;
                break;
            case 'c': cout << "ccc"; flag=true;
                break;
            case 'd': cout << "ddd"; flag=true;
                break;
            default: cin.clear(); cin.get();
                break;
        }
    }
}*/

struct bop{
    char fullname[20];
    char title[20];
    char bopname[20];
    int preference;
};


void fun1(bop b){
    cout << b.fullname << endl;
}

void fun2(bop b){
    cout << b.title << endl;
}

void fun3(bop b){
    cout << b.bopname << endl;
}

void fun4(bop b){
    if(b.preference == 1) cout << b.fullname << endl;
    if(b.preference == 2) cout << b.title<< endl;
    if(b.preference == 3) cout << b.bopname << endl;
}

void test4(){

    vector<bop> bvector;
    bop b1 = {"gxh","pro","gemou",2};
    bop b2 = {"txt","stu_txt","little sun",3};
    bop b3 = {"lsk","stu_lsk","kuange",1};
    bvector.push_back(b1);
    bvector.push_back(b2);
    bvector.push_back(b3);
    cout << "input: a)fullname, b)titile, c)bopname d)preference q)quit";
    char c;
    bool flag = false;
    cin.get(c);
    while(!flag){
        switch (c){
            case 'a': for_each(bvector.begin(),bvector.end(),fun1);
            cin.get();
            cin.get(c);
                break;
            case 'b': for_each(bvector.begin(),bvector.end(),fun2);
                cin.get();
                cin.get(c);
                break;
            case 'c': for_each(bvector.begin(),bvector.end(),fun3);
                cin.get();
                cin.get(c);
                break;
            case 'd': for_each(bvector.begin(),bvector.end(),fun4);
                cin.get();
                cin.get(c);
                break;
            case 'q': flag = true;
                      cout<<"bye";
                break;
            default: {
                cin.clear();
                cin.get();
                cout << "input again";
                cin.get(c);
            }
        }
    }
}



int main() {
    //test1();
    //test2();
    //test3();
    test4();
    return 0;
}