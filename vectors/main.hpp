# include <vector>
# include <algorithm>

// template
// typename - type T = name of the type as a const
template <typename T>
class Array {

private:
    using type = T;
    // so people couldn't do Array.array
    std::vector<type> array;


public:
    // returns the vector
    std::vector<type> as_iter() {
        // -> is just ".", but for pointers
        return this -> array;
    }

    // Adds an element at the end of the list
    void append(type item) {
        // append to the vector
        this -> array.push_back(item);
    }

    // Removes all the elements from the list
    void clear() {
        this -> array.clear();
    }

    // Returns a copy of the list
    Array copy() {
        /*
            * making a new array
            * looping through the array
            * appending to the tmp array the item in the index
        */ 
        Array tmp;
        for (std::size_t i = 0; i < this -> array.size(); ++i) {
            tmp.append(array[i]);
        }
        return tmp;
    }

    // Returns the number of elements with the specified value
    int count(type value) {
        int count = 0;
        for (std::size_t i = 0; i < this -> array.size(); ++i) {
            if (this -> array[i] == value) {
                ++count;
            }
        }
        return count;
    }

    // Add the elements of a list (or any iterable), to the end of the current list
    void extend(Array<type> iter) {
        for (std::size_t i = 0; i < iter.size(); ++i) {
            this -> array.push_back(iter.as_iter()[i]);
        }
    }

    // Returns the index of the first element with the specified value
    int index(type value) {
        for (std::size_t i = 0; i < this -> array.size(); ++i) {
            if (this -> array[i] == value) {
                return i;
            }
        }
        return -1;
    }

    // Adds an element at the specified position
    void insert(int index, type value) {
        this -> array.insert(this -> array.begin() + index, value);
    }

    // Removes the element at the specified position
    void pop(int index) {
        this -> array.erase(this -> array.begin() + index);
    }

    // Removes the first item with the specified value
    void remove(type value) {
        for (std::size_t i = 0; i < this -> array.size(); ++i) {
            if (this -> array[i] == value) {
                this -> array.erase(this -> array.begin() + i);
                break;
            }
        }
    }

    // Reverses the order of the list
    void reverse() {
        std::reverse(this -> array.begin(), this -> array.end());
    }

    // Sorts the list
    void sort() {
        std::sort(this -> array.begin(), this -> array.end());
    }

    // Returns the size of the list
    std::size_t size() {
        //! returns a size_t (container size)
        return this -> array.size();
    }

};
