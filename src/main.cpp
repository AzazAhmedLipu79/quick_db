#include "db.cpp"
#include <iostream>

using namespace std;


int main() {
    InMemoryDB db;


    db.insert("name", "Alice");
    db.insert("age", "25");
    db.insert("city", "New York");

    cout << "Size of database: " << db.size() << endl;

    cout << "Value of key 'name': " << db.get("name") << endl;
    cout << "Value of key 'age': " << db.get("age") << endl;
    cout << "Value of key 'city': " << db.get("city") << endl;

    db.remove("age");

    cout << "Size of database after removing 'age': " << db.size() << endl;

    cout << "All key-value pairs in the database:" << endl;
    db.display_all();

    return 0;
}

    