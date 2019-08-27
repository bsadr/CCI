//
// Created by behzad on 8/27/19.
//
#include <iostream>
#include <string>
#include <map>

// using string
bool is_uniquec(const std::string &s){
    std::string::const_iterator it;
    std::map<char, int> map_chars;
    for (it=s.begin(); it!=s.end(); ++it){
        auto rp = map_chars.insert( { *it, 1 } );
        if (! rp.second){
            std::cout << "string duplicate found! " << *it << std::endl;
            return false;
        }
    }
    return true;
}

// using c_string
bool is_uniquec(const char *s){
    std::map<char, int> map_chars;
    for (unsigned int i = 0; s[i]; ++i){
        auto rp = map_chars.insert( { s[i], 1 } );
        if (! rp.second){
            std::cout << "c_string duplicate found! " << s[i] << std::endl;
            return false;
        }
    }
    return true;
}

// using c_string and *
bool is_uniquec_2(const char *s){
    std::map<char, int> map_chars;
    for (const char *ip = s; *ip; ++ip){
        if (*ip != 0){
            auto rp = map_chars.insert( { *ip, 1 } );
            if (! rp.second){
                std::cout << "c_string * duplicate found! " << *ip << std::endl;
                return false;
            }
        }
    }
    return true;
}


int main() {
    char c_str[] = "geksforgeeks";
//    char c_str[] = "geksfor";
//    std::string str = "geksforgeeks";
    std::string str(c_str);
    bool un = is_uniquec(str);
    un = is_uniquec(c_str);
    un = is_uniquec_2(c_str);
    return 0;
}