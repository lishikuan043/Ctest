//
// Created by 李世宽 on 2018/6/10.
//
#include <iostream>

using namespace std;


double getaveage(double i, double j) {
    if (i!=0&&j!=0){
        return 2.0*i*j/(i+j);
    } else{
        cout << "input error";
        return 0;
    }
}

void test1(){
    double i,j;
    cout << "please input two number:";
    while(cin>>i&&cin>>j&&i!=0&&j!=0){
        double ave = getaveage(i,j);
        cout << "average is: " <<ave << endl;
        cout << "please input two number:";
    }
    cout << "bye!";
}

int test2input(double arrys[]){
    int arrsize=0;
    for (int i = 0; i < 10; ++i) {
        if (cin >> arrys[i]){
            //continue;
            cout << "input number " << i+1 << endl;
            arrsize++;
        } else{
            break;
        }
    }
    return arrsize;
}

void test2show(double arrays[],int arrsize){
    cout << "input arrays is :"<< arrsize<<endl;
    for (int i = 0; i < arrsize;++i) {
        cout<<arrays[i] <<" ";
    }
}

void test2caculate(double arrays[],int arrsize){
    double sum;
    for (int i = 0; i < arrsize; ++i) {
        sum+=arrays[i];
    }
    cout << endl <<"the aveage is"<< sum/ arrsize<<endl;
}

void test2(){
    double arrays[10];
    int arrsize = test2input(arrays);
    test2show(arrays,arrsize);
    test2caculate(arrays,arrsize);
}




int main(){
    //test1();
    //test2();
    return 0;
}
