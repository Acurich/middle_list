#include "middle_list.h"
int len(string str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}
vector<char> itc_strtlist(string s) {
    vector<char> s;
    for (unsigned int i = 0; s[i] != '\0'; i++) res.push_back(s[i]);
    return res;
}

string itc_join(vector <char> list, string sep) {
    string res = "";
    if (list.size() > 0) {
        for (int i = 0; i < list.size() - 1; i++) {
            res += list[i];
            res += sep;
        }
        res += list[list.size() - 1];
    }
    return res;
}
string itc_rmstrspc(string s)
{
    string res = "";
    for (int i = 0; i < len(s); i++)
    {
        if (s[i] != ' ')
            res += s[i];
    }
    return res;
}

string itc_rmstrchar(string s, string less)
{
    string res = "";
    for (int i = 0; i < len(s); i++)
    {
        bool flag = false;
        for (int j = 0; j < len(less); j++)
        {
            if (s[i] == less[j])
                flag = true;
        }
        if (!flag)
            res += s[i];
    }
    return res;
}
long itc_sumlst(const vector <int> &list){
    int count = list.size();
    long result = 0;
    if(count != 0){
        for(int i = 0; i < count; i++){
            result += list[i];
        }
    }
    return result;
}
long itc_sum_even_lst(const vector <int> &list){
    int count = list.size();
    long result = 0;
    if(count != 0){
        for(int i = 0; i < count; i += 2){
            result += list[i];
        }
    }
    return result;
}
long itc_sum_even_part_lst(const vector <int> &list){
    int count = list.size();
    long result = 0;
    if(count != 0){
        for(int i = 0; i < count; i++){
            if(list[i] % 2 == 0){
                result += list[i];
            }
        }
    }
    return result;
}
void itc_odd_even_separator_lst(const vector <int> &list, vector <int> &list1, vector <int> &list2){
    for(int i = 0; i < list.size(); i++){
        if(list[i] % 2 == 0)
            list1.push_back(list[i]);
        else
            list2.push_back(list[i]);
    }
}
void itc_pos_neg_separator_lst(const vector <int> &list, vector <int> &list1, vector <int> &list2, vector <int> &list3){
    for(int i = 0; i < list.size(); i++){
        if(list[i] < 0)
            list1.push_back(list[i]);
        if(list[i] == 0)
            list2.push_back(list[i]);
        if(list[i] > 0)
            list3.push_back(list[i]);
    }
}
int itc_max_lst(const vector <int> &lst){
    int max_num = -2147483648;
    if (lst.size() > 0){
        for(int i =0; i < lst.size(); i++){
            if (lst[i] > max_num)
                max_num = lst[i];
        }
    }
    return max_num;
}

int itc_min_lst(const vector <int> &lst){
    int min_num = 2147483648;
    if (lst.size() > 0){
        for(int i =0; i < lst.size(); i++){
            if (lst[i] < min_num)
                min_num = lst[i];
        }
    }
    return min_num;

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
    vector <int> negge, zero, positive;
    itc_pos_neg_separator_lst(list, negge, zero, positive);
    cout << "Положительные:" << '\t' << '\t' << "Отрицательные:" << endl;
    cout << "Количество чисел: " << positive.size() << "," << '\t' << '\t' << "Количество чисел: " << negge.size() << "," << endl;
    cout << "Максимальная цифра: " << itc_max_lst(positive) << "," << '\t' << '\t' << "Максимальная цифра: " << itc_max_lst(negge) <<  "," << endl;
    cout << "Минимальная цифра: " << itc_min_lst(positive) << "," << '\t' << '\t' << "Минимальная цифра: " << itc_min_lst(negge) << "," << endl;
    cout << "Сумма чисел: "<< itc_sumlst(positive) << "," << '\t'	<< '\t' << "Сумма чисел: "<< itc_sumlst(negge) <<"," << endl;
    cout << "Среднее значение: "<< itc_sumlst(positive) / positive.size()<< '\t'	<< '\t' << "Среднее значение: " << itc_sumlst(negge) / negge.size() << endl;
cout << endl;
   cout << "Количество нулей: " << zero.size() << endl;
}
