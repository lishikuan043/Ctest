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


struct box{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void showBox(const box b){
    cout << "maker:" << b.maker << endl << "height=" << b.height;
    cout << " width=" << b.width << " length=" << b.length << " volume=" << b.volume<<endl;
}

void setBox(box* bpoint){
    cout<<"set box volume..."<<endl;
    bpoint->volume = bpoint->height*bpoint->width*bpoint->length;
}

void test3(){
    box b = {"lsk",1.1,2.2,3.3,0};
    showBox(b);
    setBox(&b);
    showBox(b);
}

long getfal(long n){
    if(n==0){
        return 1;
    } else{
        return n*getfal(n-1);
    }
}

void test4(){
    long l;
    while(cin >> l){
        cout << "l=" << l << " l!=" << getfal(l)<<endl;
    }
}

int main(){
    //test1();
    //test2();
    //test3();
    //test4();
    return 0;
}
