#include "middle_list.h"

vector<char> itc_strtlist(string str) {
    vector<char> ans;
    for (unsigned int i = 0; str[i] != '\0'; i++) ans.push_back(str[i]);
    return ans;
}

string itc_join(vector <char> lst, string sep) {
    string ans = "";
    if (lst.size() > 0) {
        for (int i = 0; i < lst.size() - 1; i++) {
            ans += lst[i];
            ans += sep;
        }
        ans += lst[lst.size() - 1];
    }
    return ans;
}

string itc_rmstrspc(string str) {
    string ans = "";
    for (int i = 0; str[i] != '\0'; i++) if (str[i] != ' ') ans += str[i];
    return ans;
}

unsigned long long itc_len(string str) {
    unsigned long long a = 0;
    while (str[a] != '\0') a++;
    return a;
}

int itc_find_str(string str1, string str2) {
    if (itc_len(str2) > itc_len(str1))
        return -1;
    else
    {
        int answer = 1;
        for (int i = 0; i < itc_len(str1); i++)
        {
            if (str1[i] == str2[0] && itc_len(str1) - i >= itc_len(str2))
            {
                for (int j = 1; j < itc_len(str2); j++)
                {
                    if (str2[j] == str1[i + j])
                        answer++;
                    else
                    {
                        answer = 1;
                    }
                }
                if (answer == itc_len(str2))
                    return i;
            }
        }
        return -1;
    }
}

long long itc_sumlst(const vector <int> &lst){
    
    long long sum = 0;
    for(int i = 0; i < lst.size(); i++ ){
        sum += lst[i];
    }
    return sum;
}
long long itc_sum_even_lst(const vector<int>& lst) {
    long long sum = 0;
    for (int i = 1; i < lst.size(); i += 2) {
        sum += lst[i];
    }
    return sum;
}

long long itc_sum_even_part_lst(const vector<int>& lst) {
    long long sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] % 2 == 0)
            sum += lst[i];
    }
    return sum;
}

void itc_odd_even_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2)
{
    for(long long i =0; i < lst.size(); i++){
        if(lst[i] % 2 == 0){
            lst1.push_back(lst[i]);
        }else{
            lst2.push_back(lst[i]);
        }
    }
}

void itc_pos_neg_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2, vector <int> &lst3)
{
    for(long long i =0; i < lst.size(); i++){
        if (lst[i] < 0){
            lst1.push_back(lst[i]);
        }else if (lst[i] == 0){
            lst2.push_back(lst[i]);
        }else{
            lst3.push_back(lst[i]);
        }
    }
}
