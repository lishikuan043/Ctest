/*
//
// Created by Administrator on 2018/6/4.
//

#include <iostream>
#include <cctype>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

*/
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
}*//*


*/
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
}*//*


*/
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
}*//*


struct bop{
    char fullname[20];
    char title[20];
    char bopname[20];
    int preference;
};


*/
/*void fun1(bop b){
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
}*//*


struct donateItem{
    string name;
    double money;
};

*/
/*void test6(){
    int n;
    cout << "input total number:";
    cin >> n;
    cin.get();
    string tempname;
    double tempmoney;
    vector<donateItem> dvector_vip;
    vector<donateItem> dvector;
    for (int i = 0; i < n; ++i) {
        cout << "input the name (" << i+1 << " of " << n <<"):"<<endl;
        getline(cin,tempname);
        cout << "input the money (" << i+1 << " of " << n <<"):"<<endl;
        cin>>tempmoney;
        cin.get();
        struct donateItem d={tempname,tempmoney};
        if (tempmoney > 10000){
            dvector_vip.push_back(d);
        } else{
            dvector.push_back(d);
        }
    }
    cout << "Grand Patrons:" << endl;
    if (!dvector_vip.empty()){
        for (int i = 0; i < dvector_vip.size(); ++i) {
            cout << dvector_vip[i].name << endl;
        }
    } else{
        cout << "none" <<endl;
    }
    cout << "Patrons:" << endl;
    if (!dvector.empty()){
        for (int i = 0; i < dvector.size(); ++i) {
            cout << dvector[i].name << endl;
        }
    } else{
        cout << "none" <<endl;
    }
}*//*


*/
/*void test8(){
    ifstream infile;
    ofstream outfile;
    infile.open("test.txt");
    if (infile.is_open()){
        cout << "open successfully!" << endl;
        char c;
        int count = 0;
        while(infile>>c){
            count++;
        }
        cout << count << " characters read!";
    } else{
        cout << "open fail!"<<endl;
    }
}*//*


void test9(){
    ifstream infile;
    infile.open("test.txt");
    if (infile.is_open()){
        cout << "open successfully!" << endl;
        int n;
        string tempname;
        double tempmoney;
        vector<donateItem> dvector_vip;
        vector<donateItem> dvector;
        (infile>>n).get();
        for (int i = 0; i < n; ++i) {
            cout << "input the name (" << i+1 << " of " << n <<"):"<<endl;
            getline(infile,tempname);
            cout << "input the money (" << i+1 << " of " << n <<"):"<<endl;
            infile>>tempmoney;
            infile.get();
            struct donateItem d={tempname,tempmoney};
            if (tempmoney > 10000){
                dvector_vip.push_back(d);
            } else{
                dvector.push_back(d);
            }
        }
        cout << "Grand Patrons:" << endl;
        if (!dvector_vip.empty()){
            for (int i = 0; i < dvector_vip.size(); ++i) {
                cout << dvector_vip[i].name << endl;
            }
        } else{
            cout << "none" <<endl;
        }
        cout << "Patrons:" << endl;
        if (!dvector.empty()){
            for (int i = 0; i < dvector.size(); ++i) {
                cout << dvector[i].name << endl;
            }
        } else{
            cout << "none" <<endl;
        }
        infile.close();
        cout << "EOF AND CLOSED!"<< endl;
    } else{
        cout << "open fail!"<<endl;
    }
}

int main() {
    //test1();
    //test2();
    //test3();
    //test4();
    //test6();
    //test8();
    test9();
    return 0;
}*/
