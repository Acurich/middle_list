#include "middle_list.h"
int len(string s)
{
    int g = 0;
    while (s[g] != '\0')
        g++;
    return g;
}
vector<char> itc_strtlist(string s) {
    vector<char> res;
    for (unsigned int g = 0; s[g] != '\0'; g++) res.push_back(s[g]);
    return res;
}

string itc_join(vector <char> list, string sep) {
    string res = "";
    if (list.size() > 0) {
        for (int g = 0; g < list.size() - 1; g++) { res += list[g]; res += sep;}
        res += list[list.size() - 1];
    }
    return res;
}
string itc_rmstrspc(string s)
{
    string res = "";
    for (int g = 0; g < len(s); g++){if (s[g] != ' ') res += s[g];}
    return res;
}

string itc_rmstrchar(string s, string less)
{
    string res = "";
    for (int g = 0; g < len(s); g++)
    {
        bool flag = false;
        for (int f = 0; f < len(less); f++){if (s[g] == less[f]) flag = true;}
        if (!flag) res += s[g];
    }
    return res;
}
long itc_sumlst(const vector <int> &list){
    int cnt = list.size();
    long long res = 0;
    if(cnt != 0){
        for(int g = 0; g < cnt; g++){res += list[i];}
    }
    return res;
}
long itc_sum_even_lst(const vector <int> &list) {
    long long res = 0;
    int cnt = list.size();
    for (int g = 0; i < cnt; g++) if (g % 2 == 0) res += lst[g];
    return res;
}
long itc_sum_even_part_lst(const vector <int> &list){
    int cnt = list.size();
    long res = 0;
    if(cnt != 0){for(int g = 0; g < cnt; g++){ if(list[g] % 2 == 0){ res += list[g];}}}
    return res;
}
void itc_odd_even_separator_lst(const vector <int> &list, vector <int> &list1, vector <int> &list2){
    int cnt = list.size();
    for(int g = 0; g < cnt; g++){ if(list[g] % 2 == 0) list1.push_back(list[g]); else list2.push_back(list[g]);}
}
void itc_pos_neg_separator_lst(const vector <int> &list, vector <int> &list1, vector <int> &list2, vector <int> &list3){
    int cnt = list.size();
    for(int g = 0; g < cnt; g++){if(list[g] < 0) list1.push_back(list[g]); else if(list[g] == 0) list2.push_back(list[g]); else if(list[g] > 0) list3.push_back(list[g]);}
}
int itc_max_lst(const vector <int> &list){
    int min_num = -229742966;
    int cnt = list.size();
    if (cnt > 0){ for(int g = 0; g < cnt; g++){ if (list[g] > min_num) min_num = list[g];}}
    return min_num;
}

int itc_min_lst(const vector <int> &lst){
    int max_num = 229742966;
    int cnt = list.size();
    if (cnt > 0){ for(int g = 0; g < cnt; g++){ if (list[g] < max_num) max_num = list[g];}}
    return max_num;
}

void itc_odd_even_analysis_lst(const vector <int> &list){
    setlocale(LC_ALL, "rus");
    vector<int> list1, list2;
    itc_odd_even_separator_lst(list, list1, list2);
    cout << "Àíàëèç ñïèñêà:" << endl;
    cout << "Êîëè÷åñòâî ÷åòíûõ ÷èñåë: " << list1.size() << "," << '\t'    << '\t' << "Êîëè÷åñòâî íå÷åòíûõ ÷èñåë: " << list2.size() << endl;
    cout << "Ìàêñèìàëüíàÿ ÷åòíàÿ öèôðà: " << itc_max_lst(list1) << "," << '\t' << '\t' << "Ìàêñèìàëüíàÿ íå÷åòíàÿ öèôðà: " << itc_max_lst(list2) <<"," << endl;
    cout << "Ìèíèìàëüíàÿ ÷åòíàÿ öèôðà: " << itc_min_lst(list1) << "," << '\t' <<'\t' << "Ìèíèìàëüíàÿ íå÷åòíàÿ öèôðà: " << itc_min_lst(list2)<<"," << endl;
    cout << "Ñóììà ÷åòíûõ ÷èñåë: " << itc_sumlst(list1) << "," << '\t' <<'\t' << "Ñóììà íå÷åòíûõ ÷èñåë: "  << itc_sumlst(list2)<<"," << endl;
}
 void itc_pos_neg_analysis_lst(const vector <int> &list){
    setlocale(LC_ALL, "rus");
    vector <int> pos, null, kek;
    itc_pos_neg_separator_lst(list, pos, null, kek);
    cout << "Положительные:" << '\t' << '\t' << "Отрицательные:" << endl;
    cout << "Количество чисел: " << kek.size() << "," << '\t' << '\t' << "Количество чисел: " << pos.size() << "," << endl;
    cout << "Максимальная цифра: " << itc_max_lst(kek) << "," << '\t' << '\t' << "Максимальная цифра: " << itc_max_lst(pos) <<  "," << endl;
    cout << "Минимальная цифра: " << itc_min_lst(kek) << "," << '\t' << '\t' << "Минимальная цифра: " << itc_min_lst(pos) << "," << endl;
    cout << "Сумма чисел: "<< itc_sumlst(kek) << "," << '\t'	<< '\t' << "Сумма чисел: "<< itc_sumlst(pos) <<"," << endl;
    cout << "Среднее значение: "<< itc_sumlst(kek) / kek.size()<< '\t'	<< '\t' << "Среднее значение: " << itc_sumlst(pos) / pos.size() << endl;
    cout << endl;
    cout << "Количество нулей: " << null.size() << endl;
}
