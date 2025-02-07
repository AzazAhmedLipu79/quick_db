#ifndef IN_MEMORY_DB_H
#define IN_MEMORY_DB_H

#include <string>
#include <unordered_map> 


using namespace std;

class InMemoryDB {
    public:
    
        // Insert a key-value pair into the database
        void insert(string key, string value);

        // Get the value of a key from the database
        string get(string key);

        // Delete a key from the database
        void remove(string key);

        // Get the number of key-value pairs in the database
        int size();

        // Get all pairs in the database
        void display_all();



    private:
        unordered_map<string, string> db;
};



#endif
