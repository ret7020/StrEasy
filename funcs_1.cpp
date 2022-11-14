//
// Created by Sch1561-it-27 on 14.11.2022.
//
#include "str_easy.h"
#include <string>

using namespace std;

string itc_even_place(string str) {
    string new_str = "";
    for (long long i = 1; i <= itc_len(str); ++i) {
        if (i % 2 == 1)
            new_str += str[i];
    }
    return new_str;
}

double itc_percent_lower_uppercase(string str) {
    double upper = 0;
    double lower = 0;
    for (long long i = 0; i <= itc_len(str); ++i) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            upper++;
        if (str[i] >= 'a' && str[i] <= 'z')
            lower++;
    }
    return lower / upper * 100;
}

string itc_reverse_str(string str){
    string new_str = "";
    for(int i = itc_len(str) - 1; i >= 0; i--){
        new_str += str[i];
    }
    return new_str;
}

string itc_slice_str(string str, int start, int end){
    string new_str;
    long long len = itc_len(str);
    if (start < 0)
        start = 0;
    if (start > end)
        return str;
    for (long long i = start; i <= end && i < len; i++)
        new_str += str[i];
    return new_str;
}

bool itc_equal_reverse(string str){
    return itc_reverse_str(str) == str;
}