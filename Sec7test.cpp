/*
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

int Fill_array(double d[],int n){
    int count = 0;

    for (int i = 0; i < n; ++i) {
        cout << "input a double please:" << endl;
        if (cin >> d[i]){
            count++;
        } else{
            break;
        }
    }
    cout << "end input."<<endl;
    return count;
}

void Show_array(const double d[],int n){
    for (int i = 0; i < n; ++i) {
        cout << "d[" << i << "]=" << d[i] << " " << endl;
    }
}

void Reverse_array(double d[],int n){
    double temp;
    for (int i = 0; i < n / 2; ++i) {
        temp = d[i];
        d[i] = d[n-i-1];
        d[n-i-1] = temp;
    }
}

void test6(){
    double d[7];
    int size = Fill_array(d,7);
    Show_array(d,size);
    Reverse_array(d,size);
    Show_array(d,size);
    Reverse_array(d,size);
    double temp = d[0];
    d[0] = d[size-1];
    d[size-1] = temp;
    Show_array(d,size);
}

double add1(double x, double y) {
    return x+y;
}

double add2(double x, double y) {
    return 2*x+2*y;
}

double add3(double x, double y) {
    return 3*x+3*y;
}

double calculate(double a, double b, double (*pf)(double, double)){
    return (*pf)(a,b);
}

void test10(){
    double a,b;
    cout << "input first double:" << endl;
    cin >> a;
    cout << "input last double:" << endl;
    cin >> b;
    double (*pf[3])(double, double);
    pf[0] = add1;
    pf[1] = add2;
    pf[2] = add3;
    for (int i = 0; i < 3; ++i) {
        cout << "the " << i << "th method result:";
        cout << calculate(a,b,pf[i]) << endl;
    }

}

int main(){
    //test1();
    //test2();
    //test3();
    //test4();
    //test6();
    test10();
    return 0;
}
*/
