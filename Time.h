#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED


struct Time {
private:
    int totalSeconds = 0;

    void Normalize();

public:
    Time() = default;
    Time(int h, int m, int s);
    Time(int s): Time(0, 0, s){
    }

    int getTotalSeconds() const {
        return totalSeconds;
    }

    void setTotalSeconds(int seconds) {
        if (totalSeconds >= 0)
            totalSeconds = seconds;
        else
            std::cout << "Total seconds cannot be negative" << std::endl;
    }

    bool addSeconds(int seconds) {
        if (totalSeconds + seconds >= 0)
            totalSeconds += seconds;
        else
            std::cout << "Total seconds cannot be negative" << std::endl;
    }

    int getHours() const;
    //
    int getMinutes() const;

    int getSeconds() const;

    void print();
};

#endif // TIME_H_INCLUDED
