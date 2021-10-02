#include <iostream>
#include <iomanip>
#include <chrono>
using namespace std;

namespace TimerUtils {

    struct Timer {

        chrono::high_resolution_clock::time_point start, end;
        chrono::duration<double> duration;

        Timer() {
            start = chrono::high_resolution_clock::now();
        }

        ~Timer() {
            end = chrono::high_resolution_clock::now();
            duration = end - start;

            cout << "Took " << duration.count() * 1000 << " milliseconds." << endl;
        }
    };

    template<typename T>
    void timer(T&& func) {

        Timer timer;
        func();
    }

}
