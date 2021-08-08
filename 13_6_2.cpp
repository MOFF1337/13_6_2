#include <iostream>
#include <vector>
int main() {

    int s;
    std::cout << "Input the number of goods in stock: ";
    std::cin >> s;
    std::vector<float> price_vec;

    for(int i = 0; i < s; i++){
        std::cout << "Input the product cost: ";
        float temp;
        std::cin >> temp;
        price_vec.push_back(temp);
    }

    std::cout << "Input the number of goods the customer bought: ";
    std::cin >> s;
    std::vector<int> basket_vec;

    for(int i = 0; i < s; i++){
        std::cout << "Input the product index: ";
        int temp;
        std::cin >> temp;
        basket_vec.push_back(temp);
    }

    float total = 0;
    for(int i = 0; i < s; i++){
        total += price_vec[basket_vec[i]];
    }
    std::cout << total;
}
