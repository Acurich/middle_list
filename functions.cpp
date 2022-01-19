#include "middle_list.h"

vector<char> itc_strtlist(string s) {
    vector<char> ans;
    for (unsigned int i = 0; s[i] != '\0'; i++) ans.push_back(s[i]);
    return ans;
}

string itc_join(vector <char> list, string sep) {
    string ans = "";
    if (list.size() > 0) {
        for (int i = 0; i < list.size() - 1; i++) {
            ans += list[i];
            ans += sep;
        }
        ans += list[list.size() - 1];
    }
    return ans;
}

string itc_rmstrspc(string s) {
    string ans = "";
    for (int i = 0; s[i] != '\0'; i++) if (s[i] != ' ') ans += s[i];
    return ans;
}

unsigned long long itc_len(string s) {
    unsigned long long a = 0;
    while (s[a] != '\0') a++;
    return a;
}

int itc_find_str(string s1, string s2) {
    if (itc_len(s2) > itc_len(s1))
        return -1;
    else
    {
        int answer = 1;
        for (int i = 0; i < itc_len(s1); i++)
        {
            if (s1[i] == s2[0] && itc_len(s1) - i >= itc_len(s2))
            {
                for (int j = 1; j < itc_len(s2); j++)
                {
                    if (s2[j] == s1[i + j])
                        answer++;
                    else
                    {
                        answer = 1;
                    }
                }
                if (answer == itc_len(s2))
                    return i;
            }
        }
        return -1;
    }
}

long long itc_sumlst(const vector <int> &list){
    
    long long sum = 0;
    for(int i = 0; i < list.size(); i++ ){
        sum += list[i];
    }
    return sum;
}
long long itc_sum_even_lst(const vector<int>& list) {
    long long sum = 0;
    for (int i = 1; i < list.size(); i += 2) {
        sum += list[i];
    }
    return sum;
}

long long itc_sum_even_part_lst(const vector<int>& list) {
    long long sum = 0;
    for (int i = 0; i < list.size(); i++) {
        if (lst[i] % 2 == 0)
            sum += list[i];
    }
    return sum;
}

void itc_odd_even_separator_lst(const vector <int> &list, vector <int> &list1, vector <int> &list2)
{
    for(long long i =0; i < list.size(); i++){
        if(list[i] % 2 == 0){
            list1.push_back(list[i]);
        }else{
            list2.push_back(list[i]);
        }
    }
}

void itc_pos_neg_separator_lst(const vector <int> &list, vector <int> &list1, vector <int> &list2, vector <int> &list3)
{
    for(long long i =0; i < list.size(); i++){
        if (list[i] < 0){
            list1.push_back(list[i]);
        }else if (lst[i] == 0){
            list2.push_back(list[i]);
        }else{
            list3.push_back(list[i]);
        }
    }
}