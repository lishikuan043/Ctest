/*
//
// Created by Administrator on 2018/6/1.
//
#include <iostream>
#include <cstring>
using namespace std;

*/
/*void test1(){
    int min,max,sum;
    sum=0;
    cout << "input min int:";
    cin >> min;
    cout << "input max int:";
    cin >> max;
    for (int i = min; i <= max; ++i) {
        sum+=i;
    }
    cout << "sum between min and max is: "<< sum;
}*//*


*/
/*void test4(){
    double daphne = 100.0;
    double cleo = 100.0;
    int year=0;
    for (;  daphne>=cleo ; year++) {
        daphne+=10;
        cleo*=1.05;
    }
    cout << "after " << year << "years cleo upgrow daphne."<< endl;
    cout << "daphne = " << daphne << " cleo=" << cleo;
}*//*


*/
/*void test8(){
    char ch[20];
    int count = 0;
    while(strcmp(ch,"done")!=0){ //strcmp中若str1==str2，则返回零；
        cin >> ch;
        count++;
    }
    cout <<"you enter total of " << count << " words.";


}*//*


void test10(){
    cout << "Enter number of rows:";
    int row;
    cin >> row;
    for (int i = 1; i <= row; ++i) {
        int j = row - i;
        for (int k = 0; k < j; ++k) {
            cout<< ".";
        }
        for (int l = 0; l < i; ++l) {
            cout<<"*";
        }
        cout << endl;
    }
}

int main(){
    //test1();
    //test4();
    //test8();
    test10();
    return 0;
}
*/
