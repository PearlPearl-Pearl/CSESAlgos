#include <iostream>
#include <vector>

void increasingArray(int n, std::vector<int> array){
    int count = 0;
    for (int i=1; i<n; i++){
        while (array[i-1] > array[i]){
            array[i]++;
            count++;
        }
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