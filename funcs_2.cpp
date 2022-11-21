//
// Created by Sch1561-it-27 on 14.11.2022.
//
#include "str_easy.h"
#include <iostream>
#include <string>

using namespace std;

string itc_cmp_str(string str1, string str2, int num) {
  string str, str_;
  long long len1 = itc_len(str1), len2 = itc_len(str2);
  if ((len1 < num) || (num < 0)) return str1;
  for (int i = 0; i < num; i++) str += str1[i];
  for (int i = 0; i < len2; i++) str += str2[i];
  for (int i = num; str1[i] != '\0'; i++) str += str1[i];
  for (int i = 0; i < len1; i++) str_ += str[i];
  return str_;
}

int itc_find_str(string str1, string str2) {
  long long len_string_1 = itc_len(str1);
  long long len_string_2 = itc_len(str2);
  for (long long i = 0; i < len_string_1; i++) {
    if (str1[i] == str2[0]) {
      long long k = i;
      long long j = 0;
      for (; j < len_string_2 && k < len_string_1; j++, k++) {
        if (str1[k] != str2[j])
          break;
      }
      if (j == len_string_2)
        return i;
    }
  }
  return -1;
}

string itc_three_str(string str1, string str2, string str3) {
  long long c;
  while (itc_find_str(str1, str2) != -1) {
    string a, b;
    c = itc_find_str(str1, str2);
    for (long long i = 0; i < c; i++)
      a += str1[i];
    for (long long i = c + itc_len(str2); str1[i] != '\0'; i++)
      b += str1[i];
    str1 = a + str3 + b;
  }
  return str1;
}

int itc_max_char_on_end(string str) {
  int a = 0, b = 0, c = 0;
  while (str[c] != '\0') {
    if (str[c] >= '0' && str[c] <= '9') b++;
    else {
      if (b > a) a = b;
      b = 0;
    }
    c++;
  }
  if (b > a) a = b;
  return a;
}
