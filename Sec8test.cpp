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

template <class T>
void quicksortdemo(T* arrs,int start,int end);


template <class T>
void maxn(T* ts,int n){
   //int length = sizeof(ts)/ sizeof(ts[0]);
    //int length = end(ts)- begin(ts);
    //cout << n << endl;
    quicksortdemo(ts,0,n-1);
    //return ts[n-1];
}

template <class T>
void quicksortdemo(T* arrs,int start,int end){
    T key = arrs[start];
    int l = start;
    int h = end;
    while(l<h){
        while (l<h && arrs[h]>=key){
            h--;
        }
        if(l<h){
            arrs[l] = arrs[h];
            l++;
        }
        while(l<h && arrs[l]<=key){
            l++;
        }
        if(l<h){
            arrs[h] = arrs[l];
            h--;
        }
    }
    arrs[l] = key;
    if(l>start){
        quicksortdemo(arrs,start,l-1);
    }
    if(end>l){
        quicksortdemo(arrs,h+1,end);
    }

}

template<class T>
int length(T& arr)
{
    cout << sizeof(arr[0]) << endl;
    cout << sizeof(arr) << endl;
    return sizeof(arr) / sizeof(arr[0]);
}

void test5(){
    int ints[] = {6,2,4,1,3};
    int n1 = sizeof(ints)/ sizeof(ints[0]);
    double ds[] = {2.2,1.1,5.5,4.4,3.3};
    int n2 = sizeof(ds)/ sizeof(ds[0]);
    maxn(ints,n1);
    maxn(ds,n2);
    cout << ints[4] << endl;
    cout << ds[4] << endl;
    //cout << maxn(ds,n2) << endl;
}

int main(){
    //test1();
    //test2();
    //test3();
    //test5();
    return 0;
}
