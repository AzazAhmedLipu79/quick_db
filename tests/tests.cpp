#include "db.h"
#include <cassert>
#include <iostream>

using namespace std;

int main() {
    InMemoryDB db;

    db.insert("name", "Alice");
    db.insert("age", "25");
    db.insert("city", "New York");

    assert(db.size() == 3);

    assert(db.get("name").value_or("Key not found") == "Alice");
    assert(db.get("age").value_or("Key not found") == "25");
    assert(db.get("city").value_or("Key not found") == "New York");

    db.remove("age");

    assert(db.size() == 2);

    cout << "All key-value pairs in the database:" << endl;
    db.display_all();

    return 0;
}


