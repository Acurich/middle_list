#include "middle_list.h"

int sizeofstr( string s ){
    int cnt = 0;
    while( s[cnt] != '\0' ){
        cnt++;
    }
    return cnt;
}
vector<char> itc_strtlist(string s){
    int dlina = sizeofstr(s);
    vector <char> list;
    for(int i = 0;i<dlina; i++){
        list.push_back(s[i]);
    }
    return list;
}
string itc_join(vector<char> list , string sep){
    int l = list.size();
    string join = "";
    for( int i = 0; i < l - 1 ; i++  ){
        join += list[i];
        join += sep;

    }
    join += list[l - 1];
    return join;
}
string itc_rmstrspc(string s){
    int cnt = sizeofstr(s);
    string rmstrspc = "";
    for(int i = 0; i < cnt ; i++){
        if(s[i] != ' '){
            rmstrspc += s[i];
        }
    }
    return rmstrspc;
}
string itc_rmstrchar(string s,string less){
    int dlinaless = sizeofstr(less);
    int dlinastr = sizeofstr(s);
    string rmstrchar = "";
    for( int i = 0; i < dlinastr; i++ ){
        bool iless = false;
        for(int h = 0; h < dlinaless ; h++){
            if( s[i] == less[h] ){
                iless = true;
            }
        }
        if( iless == false ){
            rmstrchar += s[i];
        }
    }

    return rmstrchar;
}
long itc_sumlst(const vector<int> &list){
    long sumlist = 0;
    int dlinalist = list.size();
    for( int i = 0; i < dlinalist; i++){
        sumlist += list[i];
    }
    return sumlist;
}
long itc_sum_even_lst(const vector<int> &list){
    long vecdlina = list.size();
    long sumlist = 0;
    for( int i = 1; i < vecdlina; i+=2 ){
        sumlist += list[i];
    }
    return sumlist;
}
long itc_sum_even_part_lst(const vector<int> &list){
    int dlinalist = list.size();
    long sumpart = 0;
    for( int i = 0 ; i < dlinalist; i++){
        if( list[i] % 2 == 0 ){
            sumpart += list[i];
        }
    }
    return sumpart;
}
void itc_odd_even_separator_lst(const vector<int> &list,vector<int> &list1,vector<int> &list2){
    int dlinalist = list.size();
    for( int i = 0 ; i < dlinalist; i++ ){
        if( list[i] % 2 == 0 ){
            list1.push_back(list[i]);
        } else{
            list2.push_back(list[i]);
        }
    }
}
void itc_pos_neg_separator_lst(const vector<int> &list,vector<int> &list1,vector<int> &list2,vector<int> &list3){
    int dlinalist = list.size();
    for( int i = 0 ; i < dlinalist; i++ ){
        if( list[i] > 0 ){
            list3.push_back(list[i]);
        } else if(list[i] == 0){
            list2.push_back(list[i]);
        } else{
            list1.push_back(list[i]);
        }
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
