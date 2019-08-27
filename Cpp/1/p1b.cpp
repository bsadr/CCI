//
// Created by behzad on 8/27/19.
//
#include <iostream>
#include <string>
#include <map>

// using string
bool is_uniquec(const std::string &s){
    std::string::const_iterator it1, it2;
    for (it1=s.begin(); it1!=s.end(); ++it1){
        for (it2=it1+1; it2!=s.end(); ++it2){
           if (*it2 == *it1) {
               std::cout << "duplicate found!: " << *it1 << std::endl;
               return false;
           }
        }
    }
    std::cout << "duplicate not found!" << std::endl;
    return true;
}

int main() {
    char c_str[] = "geksforgeeks";
//    char c_str[] = "geksfor";
//    std::string str = "geksforgeeks";
    std::string str(c_str);
    bool un = is_uniquec(str);
    return 0;
}