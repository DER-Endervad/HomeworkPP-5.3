#include <iostream>

class functor {
    int* arr;
    int size;
    int sum;
    int count;
public:
    functor(int arr[], const int size) : sum{0}, count{0} {
        this->arr = arr;
        this->size = size;
    }
    void get_sum() {
        for (int i = 0; i < size; ++i) {
            if (arr[i] % 3 == 0) {
                sum += arr[i];
            }
        }
        std::cout << "[OUT]: get_sum() = " << sum << std::endl;
    }
    void get_count() {
        for (int i = 0; i < size; ++i) {
            if (arr[i] % 3 == 0) {
                ++count;
            }
        }
        std::cout << "[OUT]: get_count() = " << count << std::endl;
    }
    ~functor() {

    }
};

int main()
{
    const int size = 6;
    int arr[size] = { 4, 1, 3, 6, 25, 54 };
    functor f(arr, size);
    std::cout << "[IN]:";
    for (int x : arr) {
        std::cout << " " << x;
    } std::cout << std::endl;
    f.get_sum();
    f.get_count();
    system("pause");
    return 0;
}
