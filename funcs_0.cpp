//
// Created by Sch1561-it-27 on 14.11.2022.
//
#include "str_easy.h"
#include <string>
using namespace std;

string itc_hello_str(string name) { return "Hello, " + name; }

long long itc_len(string str) {
  long long kol = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    kol++;
  }
  return kol;
}
void itc_print_copy_str(string str, int number) {
  for (int i = 0; i < number; ++i)
    cout << str;
}
void itc_first_end_three(string str) {
  long long str_length = itc_len(str);
  if (str_length > 5) {
    cout << str[0] << str[1] << str[2] << str[str_length - 3]
         << str[str_length - 2] << str[str_length - 1];
  } else {
    while (str_length > 0) {
      cout << str[0];
      str_length--;
    }
  }
}
int itc_count_char_in_str(char ch, string str) {
  int cnt = 0;
  for (int i = 0; i <= itc_len(str); i++) {
    if (ch == str[i])
      cnt++;
  }
  return cnt;
}