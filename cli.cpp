#include "src/db.cpp"
#include <iostream>
#include <string>
#include <limits>


using namespace std;

void displayMenu() {
    cout << "\nIn-Memory Database CLI" << endl;
    cout << "1. Insert key-value pair" << endl;
    cout << "2. Get value by key" << endl;
    cout << "3. Remove key" << endl;
    cout << "4. Display all key-value pairs" << endl;
    cout << "5. Get database size" << endl;
    cout << "6. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    InMemoryDB db;
    int choice;
    string key, value;


    while (true) {
        displayMenu();
        if (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        cin.ignore(); // Ignore newline character

        switch (choice) {
            case 1:
                cout << "Enter key: ";
                if (!getline(cin, key) || key.empty()) {
                    cout << "Invalid key. Please try again." << endl;
                    break;
                }
                cout << "Enter value: ";
                if (!getline(cin, value) || value.empty()) {
                    cout << "Invalid value. Please try again." << endl;
                    break;
                }
                db.insert(key, value);
                cout << "Inserted successfully!" << endl;
                break;
            case 2:
                cout << "Enter key: ";
                if (!getline(cin, key) || key.empty()) {
                    cout << "Invalid key. Please try again." << endl;
                    break;
                }
                try {
                    cout << "Value: " << db.get(key) << endl;
                } catch (const exception& e) {
                    cout << "Error: " << e.what() << endl;
                }
                break;
            case 3:
                cout << "Enter key: ";
                if (!getline(cin, key) || key.empty()) {
                    cout << "Invalid key. Please try again." << endl;
                    break;
                }
                db.remove(key);
                cout << "Removed successfully!" << endl;
                break;
            case 4:
                cout << "All key-value pairs:" << endl;
                db.display_all();
                break;
            case 5:
                cout << "Database size: " << db.size() << endl;
                break;
            case 6:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 6." << endl;
        }
    }
}
