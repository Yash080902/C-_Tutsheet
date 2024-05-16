// #include<iostream>
// using namespace std;

// //  int add(int *n, int *x){
// //          int sum ;
// //          sum= *x + *n;
// //          return sum;
// //     }
// // int main(){
// //     int n, x;
// //     cin>>n;
// //     cin>>x;
// //     cout<<"This is the sum of n & x"<<add(&n, &x);

// void swapv(int, int);
// void swapa(int *, int *);
// void swapr(int &, int &);

// int main(){
//     int a=10; int b=20;

// swapv(a,b);
// cout<<a<<"& "<<b;

// // swapa(&a,&b);
// // cout<<a<<"& "<<b;

// // swapr(a,b);
// // cout<<a<<"& "<<b;
// return 0;

// }

// void swapv(int i , int j ){
//     int t = i;
//     i=j;
//     j=t;
//     // cout<<i<<" "<<j;
//     cout <<i;

// }

// // void swapa(int *i , int *j ){
// //     int t = *i;
// //     *i=*j;
// //     *j=t;
// //     cout<<*i<<"\t"<<*j;
// // }

// // void swapr(int &i , int &j ){
// //     int t = i;
// //     i=j;
// //     j=t;
// //     cout<<i<<"\t"<<j;
// // }

/* Returning by Referencing*/

#include <iostream>
using namespace std;

int& increment(int &x) {
    x++;
    return x;
}

int main() {
    int number = 5;
    cout << "Original number: " << number << endl;
    
    int& result = increment(number);
    cout << "Number after increment: " << number << endl;
    cout << "Result reference: " << result << endl;
    
    result = 100; // Modifying through the reference
    cout << "Modified number: " << number << endl;
    cout << "Modified result: " << result << endl; // these are the referencing here used
    
    return 0;
}
