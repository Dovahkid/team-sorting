#pragma once

#include <iostream>
#include <iomanip>
#include <chrono>

namespace TimerUtils {

    /*
        To use this timer call create an instance of this struct when your function first begins
        When the function goes out of scope it will automatically call the destructor which will
        calculate and display the time the function took to run
    */
    struct Timer {

        std::chrono::high_resolution_clock::time_point start, end;
        std::chrono::duration<double> duration;

        Timer() {
            start = std::chrono::high_resolution_clock::now();
        }

        ~Timer() {
            end = std::chrono::high_resolution_clock::now();
            duration = end - start;

            std::cout << "Took " << duration.count() * 1000 << " milliseconds." << std::endl;
        }
    };

    /*
        This function allows you to pass in a lambda function containing your function
        The timer will be started, your function run then the timer will record how 
        long your function took to run

        The passed lambda should look like

        []() -> { func() }

        with func() being your function name and its parameters
        If the function has parameters being passed they mut be added to the []

        example:
        int arr[] = {...} // imagine it has values
        int size = 10; // or any other size obviously

        timer( [arr, size]() -> void{ insertionSort(arr, size) } )

        this will run the insertionSort function and record the time it takes

    */
    template<typename T>
    void timer(T&& func) {

        Timer timer;
        func();
    }

}
