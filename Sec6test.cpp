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

void test4(){
    int strsize = 20;
    struct bop{
        char fullname[strsize];
        char title[strsize];
        char bopname[strsize];
        int preference;
    };
    vector<bop> bvector;
    bop b1("l","s","k",1);

    bvector.push_back(bop(""))

}

int main() {
    //test1();
    //test2();
    //test3();
    return 0;
}