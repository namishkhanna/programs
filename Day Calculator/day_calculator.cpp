#include<bits/stdc++.h>
using namespace std;

int main()
{
    int date=0, month=0, year=0, new_month=0, new_year=0;
    int cal=0, cal_year=0, new_cal=0, week=7;

    cout<<"Enter Date (1-31) : ";
    cin>>date;
    cout<<"Enter Month (1-12) : ";
    cin>>month;
    cout<<"Enter the year (1600-2099) : ";
    cin>>year;
        switch(month)
        {
            case 1: new_month=0;
                break;
            case 2: new_month=3;
                break;
            case 3: new_month=3;
                break;
            case 4: new_month=6;
                break;
            case 5: new_month=1;
                break;
            case 6: new_month=4;
                break;
            case 7: new_month=6;
                break;
            case 8: new_month=2;
                break;
            case 9: new_month=5;
                break;
            case 10: new_month=0;
                break;
            case 11: new_month=3;
                break;
            case 12: new_month=5;
                break;
        }

        if(year>=1600 && year<=1699)
        {
            new_year=6;
        }
        else if(year>=1700 && year<=1799)
        {
            new_year=4;
        }
        else if(year>=1800 && year<=1899)
        {
            new_year=2;
        }
        else if(year>=1900 && year<=1999)
        {
            new_year=0;
        }
        else if(year>=2000 && year<=2099)
        {
            new_year=6;
        }

        cal_year=year%100;
        cal=date+new_month+cal_year+(cal_year/4)+new_year;
        new_cal=cal%week;

        cout<<"Day on "<<date<<"-"<<month<<"-"<<year<<" : ";
        if(new_cal==0)
            cout<<"Sunday";
        else if(new_cal==1)
            cout<<"Monday";
        else if(new_cal==2)
            cout<<"Tuesday";
        else if(new_cal==3)
            cout<<"Wednesday";
        else if(new_cal==4)
            cout<<"Thursday";
        else if(new_cal==5)
            cout<<"Friday";
        else if(new_cal==6)
            cout<<"Saturday";

}
