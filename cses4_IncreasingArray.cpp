#include <iostream>
#include <vector>

void increasingArray(int n, std::vector<int> array){
    long long count = 0;
    for (int i=1; i<=n-1; i++){
        long long difference = array[i-1] - array[i];
        if (difference > 0){
            array[i] = array[i] + difference;
            count = count + difference;
        }
    }
    std::cout << count;
}

int main(){
    int n;
    std::cin >> n;

    std::vector<int> array(n, 0);

    for (int i=0; i<n; i++){
        int num;
        std::cin >> num;
        array[i] = num;
    }

    increasingArray(n, array);

    return 0;
}