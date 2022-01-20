#ifndef HOMEWORK_MIDDLE_LIST_H
#define HOMEWORK_MIDDLE_LIST_H

#include <iostream>
#include <vector>
using namespace std;
int sizeofstr( string s );
vector<char> itc_strtlist(string s);
string itc_join(vector<char> list , string sep);
string itc_rmstrspc(string s);
string itc_rmstrchar(string s,string less);
long itc_sumlst(const vector<int> &list);
long itc_sum_even_lst(const vector<int> &list);
long itc_sum_even_part_lst(const vector<int> &list);
void itc_odd_even_separator_lst(const vector<int> &list,vector<int> &list1,vector<int> &list2);
void itc_pos_neg_separator_lst(const vector<int> &list,vector<int> &list1,vector<int> &list2,vector<int> &list3);
void itc_odd_even_analysis_lst(const vector<int> &list);
void itc_pos_neg_analysis_lst(const vector <int> &list);
#endif //HOMEWORK_MIDDLE_LIST_H
