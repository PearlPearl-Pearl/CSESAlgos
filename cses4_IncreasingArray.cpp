#include <iostream>
#include <vector>

void increasingArray(int n, std::vector<int> array){
    int count = 0;
    for (int i=1; i<n; i++){
        // std::cout << "This is the old value at index " << i << ": " << array[i] << '\n';
        while (array[i-1] > array[i]){
            // std::cout<<"The " << i-1 << "th element is "<< array[i-1];
            // std::cout<<"The " << i << "th element is "<< array[i];
            array[i]++;
            count++;
        }
        // std::cout << "This is the new value at index " << i << ": " << array[i] << '\n';
    }
    std::cout << count;
}

int main(){
    int n;
    std::vector<int> array(n, 0);

    std::cin >> n;
    
    for (int i=0; i<n; i++){
        int num;
        std::cin >> num;
        array[i] = num;
    }

    increasingArray(n, array);

    return 0;
}