#include <iostream>
#include "Time.h"

using namespace std;


Time::Time(int h, int m, int s)
{
    totalSeconds = h * 60 * 60 + m * 60 + s;
    Normalize();
}

void Time::Normalize(){
    const int secondsInDay = 24 * 60 * 60;

    totalSeconds %= secondsInDay;

    if (totalSeconds < 0){
        totalSeconds += secondsInDay;
    }
}

int Time::getHours() const {
    return totalSeconds / (60 * 60);
}
//
int Time::getMinutes() const {
    return (totalSeconds / 60) % 60;
}
//
int Time::getSeconds() const {
    return totalSeconds % 60;
}

void Time::setTotalSeconds(int seconds) {
    if (seconds >= 0)
        totalSeconds = seconds;
    else
        std::cout << "Total seconds cannot be negative" << std::endl;
}

int Time::getTotalSeconds() const  {
    return totalSeconds;
}

void Time::print(){
     std::cout << getHours() << " : " << getMinutes() << " : " << getSeconds() << std::endl;
}
