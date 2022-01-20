//Link Problem==>https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V
#include <iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
#define ll long long
#define ld long double
#define pi 3.141592653589793238
#define ahmed  ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
int counter[1000001] = {};
string insertion_sort(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i; j >= 0; j--)
        {
            if (s[j] == s[j + 1])
            {
                swap(s[j], s[j - 1]);
            }
        }
    }
    return s;
}
int main()
{
    ahmed; 
    string s; cin >> s;
    while (s.find("EGYPT") != -1) {
        s.replace(s.find("EGYPT"),5," ");
    }
    cout << s;
}
//مهما الدنيا إتنيلت ضلمت لازم يبقى عندك زفت أمل و تعرف إن في نور في أخر أم النفق//

        //اهو بنتنيل نستمر ف السعي رغم فقدان الزفت الشغف
