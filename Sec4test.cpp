/*
//
// Created by Administrator on 2018/5/31.
//
#include <iostream>
#include <vector>
//#include <string>
using namespace std;

class student{
public:
    int age;
    student(int i) {
        this->age = i;
    }
    bool operator == (const student& s) const {
        return this->age==s.age;
    }
};

void test1(){
    cout << "What is your first name?";
    string fname;
    getline(cin,fname);
    cout << "What is your last name?";
    string lname;
    getline(cin,lname);
    cout << "What letter grade do you deserve?";
    char score;
    cin.get(score);
    cin.get();
    cout << "Whatis your age?";
    int age;
    cin>>age;

    cout << "Name: " << lname << ", " << fname<<endl;
    cout << "Grade: " << (char)(score+1) <<endl;
    cout << "Age: " << age <<endl;
}

void test3(){
    char fname[15];
    char lname[15];
    cout << "Enter your first name:";
    cin.getline(fname,15);
    cout << "Enter your last name:";
    cin.getline(lname,15);
    cout << "Here's the information in a single string: " << lname << ", " << fname <<endl;
}

void test5(){
    struct CandyBar{
        string name;
        double weight;
        int kaluli;
    };
    CandyBar snack = {"Mocha Munch",2.3,350};
    cout << snack.name << endl;
    cout << snack.weight << endl;
    cout << snack.kaluli << endl;
}

void test8(){
    struct pizza{
        string name;
        double redis;
        int weight;
    };
    pizza* p1 = new pizza;
    cout << "Enter name of pizza:";
    getline(cin,p1->name);
    cout << "Enter redis of pizza:";
    cin >> p1->redis;
    cout << "Enter weight of pizza:";
    cin >> p1->weight;
    cout << p1->name << endl;
    cout << p1->redis << endl;
    cout << p1->weight << endl;
    delete p1;
}

void test9(){
    vector<int> vector1(3);
    cin>>vector1[0];
    cin>>vector1[1];
    cin>>vector1[2];
    cout << (vector1[0]+vector1[1]+vector1[2])/3;
}

int main(){
    */
/*student s1(10);
    student s2(10);
    student s3(11);
    cout<< (s1==s3);*//*

    //test1();
    //test3();
    //test5();
    //test8();
    //test9();
    return 0;
}

*/
