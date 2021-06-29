#include <math.h>

class str_t {
private:
    std::string string;

public:
    str_t(const char *strs) {
        this -> string = strs;
    }

    str_t capitalize() {
        str_t tmp = str_t(this -> string.c_str());
        tmp.string[0] = std::toupper(tmp[0]);
        return tmp;
    }

    int count(char strc) {
        return std::count(this -> string.begin(), this -> string.end(), strc);
    }

    bool endswith(std::string strs) {
        if (this -> string.size() < strs.size()) {
            return false;
        } else {
            return std::equal(strs.rbegin(), strs.rend(), this -> string.rbegin());
        }
    }

    int find(std::string strs) {
        auto tmp = this -> string.find(strs);

        if (tmp != this -> string.npos) {
            return tmp;   
        } else {
            return -1;
        }
    }

    bool isalnum() {
        return std::isalnum(this -> string[0]);
    }

    bool isdigit() {
        return std::isdigit(this -> string[0]);
    }

    bool isalpha() {
        return std::isalpha(this -> string[0]);
    }

    void strip(char del = ' ') {
        this -> string.erase(std::remove(this -> string.begin(), this -> string.end(), del), this -> string.end());
    }

    bool isempty() {
        return this -> string.empty();
    }


    const char *operator!() {
        return this -> string.c_str();
    }

    char operator[](std::size_t idx) {
        return string[idx];
    }
};


class int_t {
private:
    int inta;

public:
    int_t(int i) {
        this -> inta = i;
    }

    int real() {
        return this -> inta;
    }

    //! conversion overloading to int, it breaks everything
    /* operator int() {
        return this -> inta;
    } */

    int operator-(int_t x) {
        return this -> inta - x.inta;
    }

    int operator+(int_t x) {
        return this -> inta + x.inta;
    }

    double operator/(int_t x) {
        return this -> inta / x.inta;
    }

    int operator*(int_t x) {
        return this -> inta * x.inta;
    }

    int operator^(int_t x) {
        return std::pow(this -> inta, x.inta);
    }

    bool operator>(int_t x) {
        return this -> inta > x.inta;
    }

    bool operator<(int_t x) {
        return this -> inta < x.inta;
    }

    void operator=(int_t x) {
        this -> inta = x.inta;
    }
};


class float_t {
private:
    float inta;

public:
    float_t(float i) {
        this -> inta = i;
    }

    float real() {
        return this -> inta;
    }


    int operator-(float_t x) {
        return this -> inta - x.inta;
    }

    int operator+(float_t x) {
        return this -> inta + x.inta;
    }

    double operator/(float_t x) {
        return this -> inta / x.inta;
    }

    int operator*(float_t x) {
        return this -> inta * x.inta;
    }

    int operator^(float_t x) {
        return std::pow(this -> inta, x.inta);
    }

    bool operator>(float_t x) {
        return this -> inta > x.inta;
    }

    bool operator<(float_t x) {
        return this -> inta < x.inta;
    }

    void operator=(float_t x) {
        this -> inta = x.inta;
    }
};
