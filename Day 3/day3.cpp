#include <bits/stdc++.h>
#include<cmath>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {
double tip,tax;
double total_cost,Round;
tip = meal_cost * tip_percent/100;
tax = meal_cost * tax_percent/100;
total_cost = meal_cost+tip+tax;
Round = round(total_cost);
cout<<Round;
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}

