#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <limits>

using namespace std;

struct Entry {
    string name;
    string number;
};

vector<Entry> phone_book;

void add_entries(int i) {
    phone_book.resize(phone_book.size() + i);
}

void new_ent(string s, string n) {
    add_entries(1);
    phone_book[phone_book.size() - 1].name = s;
    phone_book[phone_book.size() - 1].number = n;
}

void read_last_entry() {
    cout << phone_book.back().name << ": " << phone_book.back().number << endl;
}

void read_entry(int i) {
    cout << phone_book[i].name << ": " << phone_book[i].number << endl;
}

void clear_buffer() {
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}


void f() {
    string str;
    string number;
    int counter = 0;

    while (true) {
       clear_buffer();

        cout << "Entry Index -> " << counter << endl;
        cout << "name: ";
        getline(cin, str);

        if (str == "exit")
            break;

        cout << "number: ";
        getline(cin, number);

        new_ent(str, number);
        counter++;
    }

    while (true) {
        int index;

        cout << "index: ";
        cin >> index;

        read_entry(index);
    }
}

int main(void) {
    f();

    return 0;
}

// More Vector Properties

/*
    vector.push_back(): append to the array

    vector.pop_back(): remove the last item in the array

    vector.insert(vector.begin() + index number, "some value") inserts item at a certain index

    or__ vector.insert(vector.end()): similar to push_back()

    vector.capacity(): returns how much the vector can hold::
                                                if cap is 4 and the size is about to be 5,
                                                the cap will be changed to be cap * 2 which
                                                in this case is 8, but if i remove the item
                                                the cap will still be 8, so in order to save
                                                memory, you can use::
    vector.shrink_to_fit(): makes cap = size

    vector.remove(vector.begin() + index number) removes item at certain index

    or__ vector.remove(vector.end()) similar to pop_back()
*/
