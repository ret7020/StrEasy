//
// Created by Sch1561-it-27 on 14.11.2022.
//
#include <iostream>
#include "str_easy.h"
#include <string>
using namespace std;

string itc_cmp_str(string str1, string str2, int num){
    long long len = itc_len(str1);
    string new_str;
    if (num > len)
        return str1;
    if (num == len)
        return str1 + str2;
    for (long long i = 0; i < len; i++)
    {
        if (i != num)
            new_str += str1[i];
        else
        {
            new_str += str2;
            new_str += str1[i];
        }
    }
    return new_str;
}

int itc_find_str(string str1, string str2){
    long long len_string_1 = itc_len(str1);
    long long len_string_2 = itc_len(str2);
    for (long long i = 0; i < len_string_1; i++)
    {
        if (str1[i] == str2[0])
        {
            long long k = i;
            long long j = 0;
            for (; j < len_string_2 && k < len_string_1; j++, k++)
            {
                if (str1[k] != str2[j])
                    break;
            }
            if (j == len_string_2)
                return i;
        }
    }
    return -1;
}

string itc_three_str(string str1, string str2, string str3){

}