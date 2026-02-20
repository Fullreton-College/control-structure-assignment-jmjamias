#include <iostream>
#include <iomanip>
using namespace std;

const double BasePlan_A = 39.99;
const double BasePlan_B = 59.99;
const double BasePlan_C = 79.99;
const double add_cost = 8.00;
const double DataPlan_A = 2.0;
const double DataPlan_B = 8.0;

int main() {
string name;
char plan; 
double GB, total, savings;

cout << "Enter customer name: ";
getline(cin, name);

cout << "Enter plan (A, B, C): ";
cin >> plan;

cout << "Enter gigabytes used: ";
cin >> GB;

if(plan == 'A') {
    if (GB <= DataPlan_A) {
        total = BasePlan_A;
  } else {
    total = BasePlan_A + (GB - DataPlan_A) * add_cost;
  }
} else if (plan == 'B') {
    if (GB <= DataPlan_B) {
        total = BasePlan_B;
    } else {
        total = BasePlan_B + (GB - DataPlan_B) * add_cost;
    }
} else {
    total = BasePlan_C;
}

cout << fixed << setprecision(2);
cout << "\n-- Monthly Bill ---\n";
cout << "Customer: " << name << endl;
cout << "Plan: " << plan << endl;
cout << "Gigabytes used: " << GB << endl;
cout << "Total due: $" << total << endl;

if(plan == 'A') {
    double costOnB;
    if(GB <= DataPlan_B) {
        costOnB = BasePlan_B;
    } else {
        costOnB = BasePlan_B + (GB - DataPlan_B) * add_cost;
    }
    savings = total - costOnB;
    if(savings > 0) {
        cout << "You would save $" << savings << " with Plan B." << endl;
    }
    savings = total - BasePlan_C;
    if(savings > 0) {
        cout << "You would save $" << savings << " with Plan C." << endl;
    }
} else if(plan == 'B') {
    savings = total - BasePlan_C;
    if(savings > 0) {
        cout << "You would save $" << savings << " with Plan C." << endl;
    }
}






return 0;
}

