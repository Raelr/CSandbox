#include <iostream>
#include <vector>
#include "Player.h"
#include "Movies.h"
#include "MyString.h"

using namespace std;

double get_cost(double price, int count) {
    return price * count;
}

void aryehs_javelins() {
    cout << "Welcome to Aryeh's Javelins and Throwing axes!" << endl;
    cout << "\nHow many javelins would you like to buy? ";

    int javelins {0};
    cin >> javelins;

    cout << "\nHow many throwing axes would you like?";

    int throwing_axes {0};
    cin >> throwing_axes;

    const double price_per_javelin {10.0};
    const double price_per_throwing_axe {15.0};

    const double sales_tax {0.06};
    const int expiry {30};

    double javelin_cost = get_cost(price_per_javelin, javelins);
    double throwing_axe_cost = get_cost(price_per_throwing_axe, throwing_axes);
    double combined_cost = javelin_cost + throwing_axe_cost;

    cout << "\nEstimate for javelin cost" << endl;
    cout << "Number of javelins: " << javelins << endl;
    cout << "Number of throwing axes: " << throwing_axes << endl;
    cout << "Price per javelin: $" << price_per_javelin << endl;
    cout << "Price per throwing axe: $" << price_per_throwing_axe << endl;
    cout << "Cost: $" << combined_cost << endl;
    cout << "Tax: $" << combined_cost * sales_tax << endl;
    cout << "==================================" << endl;
    cout << "Total estimate: $" << combined_cost + (combined_cost * sales_tax) << endl;
    cout << "This estimate is valid for " << expiry << " days." << endl;
}

void collections_practice() {

    vector<int> vector1 {};
    vector<int> vector2 {};

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "Vector 1: [ " << vector1.at(0) << ", " << vector1.at(1) << " ]" << endl;
    cout << "vector 1 is size: " << vector1.size() << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "\nVector 2: [ " << vector2.at(0) << ", " << vector2.at(1) << " ]" << endl;
    cout << "vector 2 is size: " << vector2.size() << endl;

    vector<vector<int>> vector_2d {};

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "\nContents of vector 2d: [\n   " << 0 << ": [ " << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1) << " ]" << endl;
    cout << "   " << 1 << ": [ " << vector_2d.at(1).at(0) << ", " << vector_2d.at(1).at(1) << " ]\n]" << endl;

    vector_2d.at(0).at(0) = 1000;

    cout << "\nContents of vector 2d: [\n   " << 0 << ": [ " << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1) << " ]" << endl;
    cout << "   " << 1 << ": [ " << vector_2d.at(1).at(0) << ", " << vector_2d.at(1).at(1) << " ]\n]" << endl;

    cout << "\nVector 1: [ " << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1) << "]" << endl;
}

void check_currency() {

    int cents {0};
    const int dollar {100};
    const int quarter {25};
    const int dime {10};
    const int nickel {5};
    const int penny {1};

    cout << "Enter an amount in cents (US): ";
    cin >> cents;
    cout << "Change can be provided as follows:" << endl;
    int balance {0}, dollars {0}, quarters {0}, dimes {0}, nickels {0}, pennies {0};
    dollars = cents / dollar;
    balance = cents % dollar;
    cout << "Dollar: " << dollars << endl;
    quarters = balance / quarter;
    balance %= quarter;
    cout << "Quarter: " << quarters << endl;
    dimes = balance / dime;
    balance %= dime;
    cout << "Dime: " << dimes << endl;
    nickels = balance / nickel;
    balance %= nickel;
    cout << "Nickel: " << nickels << endl;
    pennies = balance;
    cout << "Pennies: " << pennies << endl;
}

void loop_challange() {

    vector<int> numbers {};
    char input {};

    do {
        cout << "Welcome to the List manipulator!\nWhat would you like to do?" << endl;
        cin >> input;

        switch (input) {
            case 'p':
            case 'P':
            {
                if (!numbers.empty()) {
                    cout << "Vector: [ ";
                    for (int i {0}; i < numbers.size() ; i++) {
                        if (i == 0) {
                            cout << numbers[i];
                        } else {
                            cout << ", " << numbers[i];
                        }
                        if (i == numbers.size() - 1) {
                            cout << " ]" << endl;
                        }
                    }
                } else {
                    cout << "Vector is empty!" << endl;
                }

            } break;
            case 'a':
            case 'A': {
                int num {0};
                cout << "Please input a number to add: ";
                cin >> num;
                numbers.push_back(num);

            } break;
            case 'm':
            case 'M':
            {
                int amount =numbers.size();
                double sum {0};
                for (auto num : numbers)
                    sum += num;
                cout << "The mean of the collection is: " << sum / amount << endl;
                cout << "===============================\n" << endl;

            } break;
            case 'l':
            case 'L':
            {
                int max = INT32_MIN;
                int result;
                for (auto value: numbers) {
                    if (max < value) {
                        result = value;
                        max = value;
                    }
                }
                cout << "The largest number is: " << result << endl;
            } break;
            case 's':
            case 'S':
            {
                int min = INT32_MAX;
                int result;
                for (auto value: numbers) {
                    if (min > value) {
                        result = value;
                        min = value;
                    }
                }
                cout << "The smallest value is: " << result << endl;
            } break;
            case 'f':
            case 'F':
            {
                int number {0};
                int count {0};
                cout << "What number do you want to find? ";
                cin >> number;

                for (auto val: numbers) {
                    if (val == number) {
                        count++;
                    }
                }

                if (count > 0) {
                    cout << "Number exists! It occurred " << count << " times!" << endl;
                } else {
                    cout << "Number did not exist in the vector!" << endl;
                }
            } break;
            case 'c':
            case 'C':
            {
                char option {};
                cout << "Are you sure you want to clear the list? (y/n)" << endl;
                cin >> option;

                if (option == 'n' || option == 'N') {
                    continue;
                } else if (option == 'y' || option == 'Y') {
                    cout << "Clearing vector..." << endl;
                    numbers.clear();
                    cout << "Vector is now empty!" << endl;
                }
            } break;
            default:
                cout << "Please add a valid Character!" << endl;
        }

    } while (input != 'q' && input != 'Q');
}

void simple_encryption() {

    string letters {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string cipher  {"XiQnF6a9ZpqmAesVjkSbocgHNu59xL5DKz7Bv3wR8G2JE0vhlWP1"};

    string message {};
    cout << "Insert your secret message: ";
    getline(cin, message);

    if (message.size() > 0) {
        for (size_t i {0}; i < message.size(); i++) {
            if (isspace(message[i])) {
                continue;
            }
            size_t position = letters.find(message[i]);
            char letter = cipher[position];
            message[i] = letter;
        }
        cout << "Encrypted message: " << message << endl;

        cout << "\nDecrypting message:" << endl;

        for (size_t i {0}; i < message.size(); i++) {
            if (isspace(message[i])) {
                continue;
            }
            size_t position = cipher.find(message[i]);
            char letter = letters[position];
            message[i] = letter;
        }

        cout << "Decrypted message: " << message << endl;
    } else {
        cout << "No message has been given!" << endl;
    }
}

void string_pyramid() {

    string input {};
    cout << "Enter your string: ";
    cin >> input;

    if (!input.empty()) {
        int spacing {};
        int rows = spacing = input.size();
        int letters{1};
        for (int i {0}; i < rows; i++) {
            string row_value {};
            // Add the necessary spaces
            for (int j {0}; j < spacing; j++) {
                row_value += " ";
            }
            for (int j {0}; j < letters; j++) {
                row_value += input[j];
            }
            if (i > 0) {
                for (int j = i-1; j >= 0 ; j--) {
                    row_value += input[j];
                }
            }
            cout << row_value << endl;
            letters++;
            spacing--;
        }
    }
}

void print(int *array, size_t size);

int *apply_all(int *array1, size_t size1, int *array2, size_t size2);

int main() {

    MyString str = MyString("Hello");
    str.display();
    MyString str_2 = MyString("World");
    str_2.display();
    str = str_2;
    str.display();
    str = "Hello!";
    str.display();
    return 0;
}

void print(int *array, size_t size) {
    cout << "[ ";
    for(size_t i = 0; i < size; i++) {
        cout << *array++ << " ";
    }
    cout << "]" << endl;
}

int *apply_all(int *array1, size_t size1, int *array2, size_t size2) {
    int *results {nullptr};
    results = new int[size1 * size2] {};

    size_t result_idx {0};
    for (size_t i = 0; i < size2; i++) {
        for (size_t j = 0; j < size1; j++) {
            results[result_idx] = *(array2+i) * *(array1+j);
            result_idx++;
        }
    }

    return results;
}

