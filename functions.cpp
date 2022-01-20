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
void itc_odd_even_analysis_lst(const vector<int> &list){
    setlocale( LC_ALL,"Russian" );
    int cntlist =  list.size();
    vector<int> cnt;
    vector<int> maxcnt;
    vector<int> mincnt;
    vector<long> sum;
    vector<bool> empty;
    for(int i =0; i < 2; i++  ){
        cnt.push_back(0);
        maxcnt.push_back(0);
        mincnt.push_back(0);
        sum.push_back(0);
        empty.push_back(false);
    }
    for(int i = 0 ; i < cntlist ; i++){
        int h;
        if( list[i] % 2 == 0){
        h = 0;
        }else{
        h = 1;
        }
        ++cnt[h];
        if( empty[h] == false ) {
            empty[h] = true;
            maxcnt[h] = list[i];
            mincnt[h] = list[i];
        } else{
            if( list[i] > maxcnt[h]){
                maxcnt[h] = list[i];
            }
            if( list[i] < mincnt[h]){
                mincnt[h] = list[i];
            }
        }
            sum[h]+=list[i];

    }
    cout<<"Àíàëèç ñïèñêà:"<<endl
        <<"Êîëè÷åñòâî ÷åòíûõ ÷èñåë: "<<cnt[0]<<","<<"		"<<"Êîëè÷åñòâî íå÷åòíûõ ÷èñåë: "<<cnt[1]<<","<<endl
        <<"Ìàêñèìàëüíàÿ ÷åòíàÿ öèôðà: "<<maxcnt[0]<<","<<"		"<<"Ìàêñèìàëüíàÿ íå÷åòíàÿ öèôðà: "<<maxcnt[1]<<","<<endl
        <<"Ìèíèìàëüíàÿ ÷åòíàÿ öèôðà: "<<mincnt[0]<<","<<"		"<<"Ìèíèìàëüíàÿ íå÷åòíàÿ öèôðà: "<<mincnt[1]<<","<<endl
        <<"Ñóììà ÷åòíûõ ÷èñåë: "<<sum[0]<<","<<"			"<<"Ñóììà íå÷åòíûõ ÷èñåë: "<<sum[1]<<","<<endl;
}
void itc_pos_neg_analysis_lst(const vector <int> &list){
    setlocale( LC_ALL,"Russian" );
    int cntlist =  list.size();
    vector<int> cnt;
    vector<int> maxcnt;
    vector<int> mincnt;
    vector<long> sum;
    vector<bool> empty;
    int zerocnt = 0;
    for(int i =0; i < 2; i++  ){
        cnt.push_back(0);
        maxcnt.push_back(0);
        mincnt.push_back(0);
        sum.push_back(0);
        empty.push_back(false);
    }
    for( int i = 0 ; i < cntlst; ++i ){
    if( list[i] == 0 ){
        zerocnt++;
    } else{
        int h = 0;
        if(list[i] > 0){
            h = 1;
        }
        ++cnt[h];
        if( empty[h] == false ) {
            empty[h] = true;
            maxcnt[h] = list[i];
            mincnt[h] = list[i];
        } else{
            if( lst[i] > maxcnt[h]){
                maxcnt[h] = list[i];
            }
            if( list[i] < mincnt[h]){
                mincnt[h] = list[i];
            }
        }
            sum[h]+=list[i];

    }

}
    vector <double> middle;
    for(int i =0; i < 2; i++  ){
        middle.push_back((double)(sum[i])/cnt[i] );
    }
    cout<<"Ïîëîæèòåëüíûå:			Îòðèöàòåëüíûå:"<<endl
    <<"Êîëè÷åñòâî ÷èñåë: "<<cnt[1]<<","<<"	"<<"Êîëè÷åñòâî ÷èñåë: "<<cnt[0]<<","<<endl
    <<"Ìàêñèìàëüíàÿ öèôðà: "<<maxcnt[1]<<","<<"		"<<"Ìàêñèìàëüíàÿ öèôðà: "<<maxcnt[0]<<","<<endl
    <<"Ìèíèìàëüíàÿ öèôðà: "<<mincnt[1]<<","<<"		"<<"Ìèíèìàëüíàÿ öèôðà: "<<mincnt[0]<<","<<endl
    <<"Ñóììà ÷èñåë: "<<sum[1]<<","<<"			"<<"Ñóììà ÷èñåë: "<<sum[0]<<","<<endl
    <<"Ñðåäíåå çíà÷åíèå: "<<middle[1]<<" 		"<<"Ñðåäíåå çíà÷åíèå: "<<middle[0]<<endl
    <<" "<<endl
    <<"Êîëè÷åñòâî íóëåé: "<<zerocnt<<endl;
}
