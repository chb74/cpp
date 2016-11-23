
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Create a vector to store int 
    vector<int> vec;
    int i;

    // Display the original size of vector 
    cout << "Vector Size = " << vec.size() << endl;

    // push 5 values into the vector
    for(i = 0; i < 5; i++){
        vec.push_back(i);
    }
    // Display extended size of vec
    cout << "entended vector size = " << vec.size() << endl;

    // Access 5 values from the vector 
    for(i = 0; i < 5; i++) {
        cout << "value of vec [" << i << "] = " << vec[i] << endl;
    }

    // Use iterator to access the values 
    vector<int>::iterator v = vec.begin();
    while(v != vec.end()) {
        cout << "value of v = " << *v << endl;
        v++;
    }

    return 0;
}
