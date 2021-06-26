template <typename T>
class Array {
private:
    std::vector<T> vec;

public:
    /* driver code */
    std::size_t size() {
        return this -> vec.size();
    }

    void append(T item) {
        this -> vec.push_back(item);
    }

    void clear() {
        this -> vec.clear();
    }

    Array<T> copy() {
        Array<T> tmp;
        tmp.vec = this -> vec;
        return tmp;
    }

    int count(T value) {
        return std::count(this -> vec.begin(), this -> vec.end(), value);
    }

    void extend(Array<T> array) {
        this -> vec.insert(this -> vec.end(), array.vec.begin(), array.vec.end());
    }

    int index(T item) {
        // Iterator used to store the position 
        // of searched element
        typename std::vector<T>::iterator it;

        // std::find function call
        it = std::find(this -> vec.begin(), this -> vec.end(), item);

        // check if the item is present
        if (it != this -> vec.end()) {
            return it - this -> vec.begin();
        } else {
            return -1;
        }
    }

    void insert(T item, std::size_t pos) {
        this -> vec.insert(this -> vec.begin() + pos, item);
    }

    void pop(std::size_t pos) {
        typename std::vector<T>::iterator it;
        it = this -> vec.begin() + pos;
        this -> vec.erase(it);
    }

    void remove(T item) {
        this -> pop(this -> index(item));
    }

    void reverse() {
        std::reverse(this -> vec.begin(), this -> vec.end());
    }

    void sort(bool descending = false) {
        if (descending) {
            std::sort(this -> vec.begin(), this -> vec.end(), std::greater<T>());
        } else {
            std::sort(this -> vec.begin(), this -> vec.end());
        }
    }

    /* operators */
    T operator[](std::size_t index) {
        return this -> vec[index];
    }

    void operator+(Array<T> array) {
        this -> extend(array);
    }

    void operator-(T element) {
        this -> remove(element);
    }
};
