#include "db.h"
#include <iostream> 
using namespace std;


// Insert a key-value pair into the database
void InMemoryDB::insert(string key, string value) {
    db[key] = value;
}


// Get the value of a key from the database
string InMemoryDB::get(string key) {
    if (db.find(key) == db.end()) {
        return "NOT_FOUND"; 
    }
    return db[key];
}


// Delete a key from the database
void InMemoryDB::remove(string key) {
    db.erase(key);
}


// Get the number of key-value pairs in the database
int InMemoryDB::size() {
    return db.size();
}


// Get all pairs in the database
void InMemoryDB::display_all() {
    for (auto it = db.begin(); it != db.end(); it++) {
        cout << it->first << " : " << it->second << endl;
    }
}


