#include "middle_list.h"
int get_len_str(string str)
{
	int i = 0;
	while (str[i] != '\0'){i++;}
	return i;
}

void out_vect_char(vector <char>& vec)
{
	int i = 0, len = vec.size();
	while (i < len)
	{
		cout << vec[i] <<" ";
		i++;
	}
}

void out_vect_int(const vector <int>& vec)
{
	int i = 0, len = vec.size();
	while (i < len)
	{
		cout << vec[i] <<" ";
		i++;
	}
}

vector <char> itc_strtlist(string s)
{
	vector<char> res;
	for (int i = 0; i < s.size(); i++) res.push_back(s[i]);
	return res;
}

string itc_join(vector <char> list, string sep)
{
	if (list.size() < 1) return "";
	string res = "";
	for (int i = 0; i < list.size(); i++) {
		if (i != list.size() - 1) {
			res += list[i];
			for (int j = 0; j < sep.size(); j++) res += sep[j];
		}
		else res += lst[i];
	}
	return res;
}

string itc_rmstrspc(string s)
{
	int len = get_len_str(s), i = 0;
	string res = "";
	while (i < len)
	{
		if (s[i] != ' ')
		{
			res = res + s[i];
		}
		i++;
	}
	return res;
}

string itc_rmstrchar(string s, string less)
{
	int len1 = get_len_str(str), len2 = get_len_str(less), i = 0, sum = 0;
	string res = "";
	bool isDel = 0;
	while (i < len1)
	{
		while (sum < len2)
		{
			if (s[i] == less[sum])
			{
				isDel = 1;
			}
			sum++;
		}
		sum = 0;
		if (isDel == 0)
		{
			res = res + s[i];
		}
		isDel = 0;
		i++;
	}
	return res;
}

long itc_sumlst(const vector <int>& list)
{
	long sum = 0;
	int i = 0, len = list.size();
	while (i < len)
	{
		sum = sum + list[i];
		i++;
	}
	return sum;
}
long itc_sum_even_lst(const vector <int>& list)
{
	int i = 0, len = list.size();
	long res = 0;
	while (i < len)
	{
		res = res + list[i];
		i = i + 2;
	}
	return res;
}

long itc_sum_even_part_lst(const vector <int>& list)
{
	long res = 0;
	int i = 0, len = list.size();
	while (i < len)
	{
		if (list[i] % 2 == 0)
		{
			res = res + list[i];
		}
		i++;
	}
	return res;
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

void itc_pos_neg_separator_lst(const vector <int> &list, vector <int> &list1, vector <int> &list2, vector <int> &list3)
{
    for (int i = 0; i < list.size(); i++) {
        if (list[i] < 0)
            list1.push_back(list[i]);
        else if (list[i] == 0)
            list2.push_back(list[i]);
        else
            list3.push_back(list[i]);
    }
}
void itc_odd_even_analysis_lst(const vector <int>& list)
{
	vector<int> list1, list2;
	int listMax = -2147483648, listMin = 2147483647, list1Max = -2147483648, list1Min = 2147483647;
	itc_odd_even_separator_lst(lst, even, odd);
	if (even.size() > 0) {
		for (int i = 0; i < list1.size(); i++) {
			if (list1[i] > listMax) listMax = list1[i];
			if (list1[i] < listMin) listMin = list1[i];} }
	else {
		listMax = 0;
		listMin = 0; }
	if (list2.size() > 0) {
		for (int i = 0; i < list2.size(); i++) {
			if (list2[i] > list1Max) list1Max = list2[i];
			if (list2[i] < list1Min) list1Min = list2[i]; } }
	else {
		list1Max = 0;
		list1Min = 0; }
	cout<< "  List analysis:" << endl
		<< "  Amount of even numbers: " << list1.size() << "\t\tAmount of odd numbers: " << list2.size() << endl
		<< "  Maximum even number: " << listMax << "\t\tMaximum odd number: " << listMax << endl
		<< "  Minimum even number: " << listMin << "\t\tMinimum odd number: " << list1Min << endl
		<< "  Sum of even numbers: " << itc_sumlst(list1) << "\t\tSum of odd numbers: " << itc_sumlst(list2) << endl;
}
void itc_pos_neg_analysis_lst(const vector <int>& list)
{
	int len = list.size(), i = 0, nolCol = 0, colpol = 0, maxpol = -1, minpol = 10, sumpol = 0, colOtr = 0, maxOtr = -1, minOtr = 10, sumOtr = 0;
	float srpol = 0, srOtr = 0;
	while (i < len)
	{
		if (list[i] == 0) { nolCol++; }
		else
		{
			if (list[i] > 0)
			{
				colpol++;
				if (colpol == 1) { maxpol = list[i]; minpol = list[i]; }
				if (list[i] > maxpol) { maxpol = list[i]; }
				if (list[i] < minpol) { minpol = list[i]; }
				sumpol = sumpol + lst[i];
			}
			if (list[i] < 0)
			{
				colOtr++;
				if (colOtr == 1) { maxOtr = list[i]; minOtr = list[i]; }
				if (list[i] > maxOtr) { maxOtr = list[i]; }
				if (list[i] < minOtr) { minOtr = list[i]; }
				sumOtr = sumOtr + list[i];
			}
		}
		i++;
	}
	srpol = (float)sumpol / (float)colpol;
	srOtr = (float)sumOtr / (float)colOtr;
	if (colpol == 0) { srpol = -1; }
	if (colOtr == 0) { srOtr = -1; }
	cout << "Ïîëîæèòåëüíûå: " << '\t' << '\t' << '\t' << "Îòðèöàòåëüíûå: " <<endl;
	cout << "Êîëè÷åñòâî ÷èñåë: " << colpol << '\t' << '\t' << "Êîëè÷åñòâî ÷èñåë: " <<colOtr <<endl;
	cout << "Ìàêñèìàëüíàÿ öèôðà: " <<maxpol << '\t' << '\t' << "Ìàêñèìàëüíàÿ öèôðà: " <<maxOtr <<endl;
	cout << "Ìèíèìàëüíàÿ öèôðà: " <<minpol << '\t' << '\t' << "Ìèíèìàëüíàÿ öèôðà: " <<minOtr <<endl;
	cout << "Ñóììà ÷èñåë: " <<sumpol << '\t' << '\t' << '\t' << "Ñóììà ÷èñåë: " <<sumOtr <<endl;
	cout << "Ñðåäíåå çíà÷åíèå: " <<srpol << '\t' << '\t' << "Ñðåäíåå çíà÷åíèå: " << srOtr << endl << endl;
	cout << "Êîëè÷åñòâî íóëåé:" <<nolCol;
}}
