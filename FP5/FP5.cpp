#include <iostream>
using namespace std;

int main() {//1
    //char symbol;
    //cout << "Enter a character: ";
    //cin >> symbol;
    //if ((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z')) {
    //    cout << "The character is a letter." << endl;
    //}
    //else if (symbol >= '0' && symbol <= '9') {
    //    cout << "The character is a digit." << endl;
    //}
    //else if ((symbol >= 33 && symbol <= 47) || (symbol >= 58 && symbol <= 64) ||
    //    (symbol >= 91 && symbol <= 96) || (symbol >= 123 && symbol <= 126)) {
    //    cout << "The character is a punctuation mark." << endl;
    //}
    //else {
    //    cout << "The character is something else." << endl;
    //}



//2
    //double base_cost;
    //int operator_from, operator_to;

    //cout << "Enter the base cost of the conversation: ";
    //cin >> base_cost;

    //cout << "Select the operator you are calling from (1 - Operator A, 2 - Operator B): ";
    //cin >> operator_from;

    //cout << "Select the operator you are calling to (1 - Operator A, 2 - Operator B): ";
    //cin >> operator_to;
    //double final_cost;
    //if (operator_from == 1 && operator_to == 1) {
    //    final_cost = base_cost;
    //}
    //else if (operator_from == 1 && operator_to == 2) {
    //    final_cost = base_cost * 1.5;
    //}
    //else if (operator_from == 2 && operator_to == 1) {
    //    final_cost = base_cost * 1.3;
    //}
    //else if (operator_from == 2 && operator_to == 2) {
    //    final_cost = base_cost;
    //}
    //else {
    //    cout << "Invalid operator selection!" << endl;
    //    
    //}
    //cout << "The cost of the call is: $" << final_cost << endl;

//3
    int option;
    cout << "Menu: \n";
    cout << "1. Calculate lines of code for desired salary and number of lateness\n";
    cout << "2. Calculate allowable lateness for given lines of code and salary\n";
    cout << "3. Calculate total payment based on lines of code and lateness\n";
    cout << "Enter your choice (1-3): ";
    cin >> option;

    const double salary_per_100_lines = 50;
    const double penalty_per_lateness = 20;
    int lines_of_code, lateness;
    double desired_salary;

    switch (option) {
    case 1:
        cout << "Enter desired salary: $";
        cin >> desired_salary;
        cout << "Enter number of lateness: ";
        cin >> lateness;

        int total_penalty;
        total_penalty = (lateness / 3) * penalty_per_lateness;
        int effective_salary = desired_salary + total_penalty;
        lines_of_code = (effective_salary / salary_per_100_lines) * 100;

        cout << "Vasya needs to write " << lines_of_code << " lines of code to get $" << desired_salary << endl;
        break;

    case 2:
        cout << "Enter the number of lines of code Vasya wrote: ";
        cin >> lines_of_code;
        cout << "Enter the desired salary: $";
        cin >> desired_salary;

        int max_lateness;
        double total_salary = (lines_of_code / 100) * salary_per_100_lines;
        max_lateness = (total_salary - desired_salary) / (penalty_per_lateness / 3);
        if (max_lateness < 0) max_lateness = 0;

        cout << "Vasya can be late " << max_lateness << " times to still get $" << desired_salary << endl;
        break;

    case 3:
        cout << "Enter the number of lines of code Vasya wrote: ";
        cin >> lines_of_code;
        cout << "Enter the number of lateness: ";
        cin >> lateness;

        total_salary = (lines_of_code / 100) * salary_per_100_lines;
        total_penalty = (lateness / 3) * penalty_per_lateness;
        double final_salary = total_salary - total_penalty;

        if (final_salary <= 0) {
            cout << "Vasya will not get paid due to penalties." << endl;
        }
        else {
            cout << "Vasya's final payment: $" << final_salary << endl;
        }
        break;

    default:
        cout << "Invalid option selected!" << endl;
        break;
    }
}
