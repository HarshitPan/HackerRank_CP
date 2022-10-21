#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'dayOfProgrammer' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER year as parameter.
 */
int cal_day(int a,int day)
{
    return a-day;
}
int cal_month(int a[],int *day)
{
    int month=0;
    for(int i=0;i<12;i++)
    {
        if(a[i]<*day)
        {
            month++;
            *day-=a[i];
        }
        else {
            month++;
            break;
        }
    }   
    return month;
}
string dayOfProgrammer(int year) {
    int days_in_month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    char *date;
    date=new char[10];
    int days=0,month=0;
    int total=256;
    if(year==1918)
    {
        days_in_month[1]=29-14;
        month=cal_month(days_in_month,&total);
        days=total;//cal_day(days_in_month[month-1],total);
    }
    else if(year<1918)
    {
        if(year%4==0) days_in_month[1]=29;
        month=cal_month(days_in_month,&total);
        days=total;//cal_day(days_in_month[month-1],total);
    }
    else
    {
        if((year%100!=0 && year%4==0) || (year%100==0 && year%400==0)) days_in_month[1]=29;        \
         month=cal_month(days_in_month,&total);
        days=total;//cal_day(days_in_month[month-1],total);
    }
    int i;
    for(i=1;i>=0;i--)
    {
        date[i]=48+(days%10);
        days/=10;
    }
    date[2]='.';
    for(i=4;i>=3;i--)
    {
        date[i]=48+(month%10);
        month/=10;
    }
    date[5]='.';
    for(i=9;i>=6;i--)
    {
        date[i]=48+(year%10);
        year/=10;
    }
    for(int i=0;i<10;i++) cout<<date[i];
    return date;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string year_temp;
    getline(cin, year_temp);

    int year = stoi(ltrim(rtrim(year_temp)));

    string result = dayOfProgrammer(year);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
