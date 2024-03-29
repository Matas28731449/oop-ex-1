#include "headers/library.h"
#include "headers/references.h"

int main() {
    list<student> arr;       // array
    string        opt = " "; // option
    //----------INPUT----------
    auto start = std::chrono::high_resolution_clock::now();
    input(arr, opt);
    //----------OUTPUT----------
    output(arr, opt);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> difference = end - start;
    cout << "Program time: " << difference.count() << " s\n";
    //----------FREE UP THE MEMORY----------
    cout << "\nFreeing memory...\nEnd of the program.\n";
    for(auto &i : arr) {
        i.grade.clear();
    }
    arr.clear();

    return 0;
}
