template<typename T>
class Array {
private:
    std::vector<T> vec;

public:
    void append(T element) {
        vec.push_back(element);
    }

    T operator[](std::size_t index) {
        return vec[index];
    }
};
