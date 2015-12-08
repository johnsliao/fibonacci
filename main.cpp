//
//  main.cpp
//  fibbonaci
//
//  Created by John Liao on 12/7/15.
//  Copyright © 2015 John Liao. All rights reserved.
//

#include <iostream>

int fibb(int n) { // recursive
    
    if (n==0 || n==1)
        return n;
    
    return fibb(n-2)+fibb(n-1);
}

int main() {
    std::cout << fibb(3);    
}
