//
//  main.cpp
//  Int2Char
//
//  Created by apple on 2020/5/2.
//  Copyright © 2020 apple. All rights reserved.
//

#include <iostream>       // std::cout
#include <string>         // std::string
#include <bitset>         // std::bitset

using namespace std;

std::string toBinary(int n)
{
    std::string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}

int main(int argc, const char * argv[]) {
    
    // insert code here...
    std::cout << "Hello, World!\n";
    
    char send[128];
    
    //bitset - set all types of data
    std::bitset<24> wholeset;
    cout << wholeset << endl;
    cout << "--------" << endl;
    
    cout << INT_MAX << endl;
    
    //x y
    float fx = 10000.3138980;
    int ix = fx * 1000;
    cout << ix << endl;
    string i2b = toBinary(ix);
    cout << i2b << " " << i2b.size() << endl;
    
    int j = 0;
    for (int i = (int)i2b.size() - 1; i >= 0; i--) {
        std::string str2 = i2b.substr (i, 1);
        cout << str2;
        wholeset.set(j++, std::stoi(str2));
    }
    cout << endl;
    cout << endl;
    cout << wholeset << endl;
    
    int mybit_int;
    mybit_int = (int)(wholeset.to_ulong());
    cout << mybit_int << endl;
    
    
    char buffer[10] = {0};
    
    //occupy 0-3
    int xi = 12345678;
    cout << sizeof(xi) << endl;
    memcpy(buffer, &xi, sizeof(xi));
    
    //read
    int xr1 = 0;
    memcpy(&xr1, buffer, 4);
    
    //occupy 4-7
    int xii = 87654321;
    cout << sizeof(xii) << endl;
    memcpy(&buffer[4], &xii, sizeof(xii));
    
    //read
    int xr2 = 0;
    memcpy(&xr2, &buffer[4], 4);
    
    
    char str[] = "almost every programmer should know memset!";
    memset (str,'-',6);
    puts (str);
    
    return 0;
}
