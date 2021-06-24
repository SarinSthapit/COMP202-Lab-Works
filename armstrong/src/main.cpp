#include <iostream>
#include <cmath>
#include "armstrong.h"

int main(){
    ArrayQueue a(15);
    int n = 0;
    int r = 0;
    int c = 0;
    int b = 0;

    std :: cout << "Insert an number: ";
    std :: cin >> n;
    int t = n;

    while(n!= 0){
        r = n % 10;
        n = n / 10;
        c = c + 1;
        a.enqueue(r);
        
    }

    for(int i = 1; i <= c; i++){
        b = pow(a.dequeue(), c) + b;
    }

    if( b == t) {
        std::cout << "Armstrong";
    }
    else{
        std::cout << "not";
    }
}