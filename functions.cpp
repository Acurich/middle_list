#include "middle_list.h"

vector <char> itc_strtlist(string s)
{
    vector <char> a;
    for (int i = 0; s[i] != '\0'; i++) {
        a.push_back(s[i]);
    }
    return a;
}

string itc_join(vector <char> list, string sep)
{
    string result = "";
    for (int i = 0; i < list.size() - 1; i++) {
        result += list[i];
        result += sep;
    }
    result += list[list.size() - 1];
    return result;
}

string itc_rmstrspc(string s)
{
    string result = "";
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ')
            result += s[i];
    }
    return result;
}

string itc_rmstrchar(string s, string less)
{
    string res = "";
    int kek = 0;
    int len = itc_len(less);
    if (itc_len(s) < len)
        return s;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == less[kek]) {
            if (len > 1 && kek < len - 1)
                kek++;
            else if (kek >= len - 1)
                kek = 0;
        }
        else {
            kek = 0;
            result += s[i];
        }
    }
    return result;
}

long itc_sumlst(const vector <int>& list)
{
    int result = 0;
    for (int i = 0; i < list.size(); i++) {
        result += list[i];
    }
    return result;
}}
long itc_sum_even_lst(const vector <int>& list)
{
    int result = 0;
    for (int i = 0; i < list.size(); i++) {
        if (i % 2 == 0)
            result += list[i];
    }
    return result;
}

long itc_sum_even_part_lst(const vector <int>& list)
{
    int result = 0;
    for (int i = 0; i < list.size(); i++) {
        if (list[i] % 2 == 0)
            result += list[i];
    }
    return result;
}

void itc_odd_even_separator_lst(const vector <int>& list, vector <int>& list1, vector <int>& list2)
{
    for (int i = 0; i < list.size(); i++) {
        if (list[i] % 2 == 0)
            list1.push_back(list[i]);
        else
            list2.push_back(list[i]);
    }
}

void itc_pos_neg_separator_lst(const vector <int>& lst, vector <int>& negative, vector <int>& null, vector <int>& positive)
{
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] < 0)
            negative.push_back(lst[i]);
        else if (lst[i] == 0)
            null.push_back(lst[i]);
        else
            positive.push_back(lst[i]);
    }
}
    void itc_odd_even_analysis_lst(const vector<int> &list){
    if(list.size() == 0)
        return;
    long long buffer1 = 0; 
    long long evenSum = 0;
    long long buffer2 = 0;
    long long oddSum = 0;
    for(long long i = 0; i < list.size(); i++){
        list[i] % 2 == 0 ? buffer1++ : buffer2++;
        list[i] % 2 == 0 ? evenSum += list[i] : oddSum += list[i];
    }
    cout << "Количество четных чисел: " << buffer1 << ",        Количество нечетных чисел: " << buffer2 << endl;
    cout << "Максимальная четная цифра: " << itc_max_vector_num(list, true) << ",        Максимальная нечетная цифра: " << itc_max_vector_num(list, false) << "," << endl;
    cout << "Минимальная четная цифра: " << itc_min_vector_num(list, true) << ",        Минимальная нечетная цифра: " << itc_min_vector_num(list, false) << "," << endl;
    cout << "Сумма четных чисел: " << evenSum << ",        Сумма нечетных чисел: " << oddSum << ",";
}
void itc_pos_neg_analysis_lst(const vector <int> &list){
    setlocale(LC_ALL, "rus"); // language
    vector <int> ot;
    vector <int> nul;
    vector <int> pol;
    itc_pos_neg_separator_lst(list, ot, nul, pol);
    int s = itc_sumlst(ot);
    int kol = ot.size();
    cout << "Положительные:"<< '\t'	<< '\t' << "Отрицательные:" << endl;
    cout << "Количество чисел: " << pol.size() << "," << '\t'	<< '\t' << "Количество чисел: " << ot.size() << "," << endl;
    cout << "Максимальная цифра: " << itc_max_lst(pol) << "," << '\t'	<< '\t' << "Максимальная цифра: " << itc_max_lst(ot) << "," << endl;
    cout << "Минимальная цифра: "<< itc_min_lst(pol) << "," << '\t' << '\t' << "Минимальная цифра: "<< itc_min_lst(ot) << "," << endl;
    cout << "Сумма чисел: "<< itc_sumlst(pol) << "," << '\t'	<< '\t' << "Сумма чисел: "<< itc_sumlst(ot) << "," << endl;
    cout << "Среднее значение: "<< itc_sumlst(pol) / pol.size()<< '\t'	<< '\t' << "Среднее значение: "<< s / kol << endl;
    cout << "Количество нулей: " << nul.size() << endl;
}
