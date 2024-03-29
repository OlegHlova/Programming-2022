#include <iostream>
#include <string>

using namespace std;

//��������� ���������� ��� ��������� ������ ���� Month...

enum Month
{
	JANUARY,
	FEBRUARY,
	MARCH,
	APRIL,
	MAY,
	JUNE,
	JULY,
	AUGUST,
	SEPTEMBER,
	OCTOBER,
	NOVEMBER,
	DECEMBER
};

Month StringMonth(string name)
{
    int n = name.length();
    for (int i = 0; i < n; i++)
        if (name[i] >= 'A' && name[i] <= 'B')
                     name[i] = tolower(name[i]);


    if (name == "january" || name == "jan")
        return JANUARY;
    if (name == "february" || name == "feb")
        return FEBRUARY;
    if (name == "march" || name == "mar")
        return MARCH;
    if (name == "april" || name == "apr")
        return APRIL;
    if (name == "may" || name == "...")
        return MAY;
    if (name == "june" || name == "jn")
        return JUNE;
    if (name == "july" || name == "jl")
        return JULY;
    if (name == "august" || name == "aug")
        return AUGUST;
    if (name == "september" || name == "sep")
        return SEPTEMBER;
    if (name == "october" || name == "oct")
        return OCTOBER;
    if (name == "november" || name == "nov")
        return NOVEMBER;
    if (name == "december" || name == "dec")
        return DECEMBER;
}

string MonthString(Month str)
{
    switch (str)
    {
    case 0:
        return "january";
        break;
    case 1:
        return "february";
        break;
    case 2:
        return "march";
        break;
    case 3:
        return "april";
        break;
    case 4:
        return "may";
        break;
    case 5:
        return "june";
        break;
    case 6:
        return "july";
        break;
    case 7:
        return "august";
        break;
    case 8:
        return "september";
        break;
    case 9:
        return "october";
        break;
    case 10:
        return "november";
        break;
    case 11:
        return "december";
        break;
    }
}


Month IntMonth(int i)
{
    switch (i)
    {
    case 0:
        return JANUARY;
        break;
    case 1:
        return FEBRUARY;
        break;
    case 2:
        return MARCH;
        break;
    case 3:
        return APRIL;
        break;
    case 4:
        return MAY;
        break;
    case 5:
        return JUNE;
        break;
    case 6:
        return JULY;
        break;
    case 7:
        return AUGUST;
        break;
    case 8:
        return SEPTEMBER;
        break;
    case 9:
        return OCTOBER;
        break;
    case 10:
        return NOVEMBER;
        break;
    case 11:
        return DECEMBER;
        break;
    }
}

int main()
{
    int n;
    cout << "Enter array length: " << endl;
    string arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[n];
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    Month arrM[n];
    for (int i = 0; i < n; i++)
        arrM[i] = StringMonth(arr[i]);

    int arrI[12];
    for (int i = 0; i < 12; i++)
        arrI[i] = 0;

    for (int i = 0; i < n; i++)
        arrI[arrM[i]]++;

    for (int i = 0; i < 12; i++)
        if (arrI[i] != 0)
            cout << MonthString(IntMonth(i)) << " -- " << arrI[i] << " times" << endl;


}
