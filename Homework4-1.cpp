//  这道题目是程序抄写题，使用的是冒泡排序法
//  Created by Eli on 2017/7/3.
//  Copyright © 2017年 Eli. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int n, a[1000]; // 一共n个数，n不超过1000。a用来保存这些数
    cin >> n;
    // 输入n个数
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // 冒泡，不断比较相邻的两个数，如果顺序错了，那么就交换
    for (int i = 0; i < n - 1; i++) {
        for (int j = 1; j < n - i; j++) {
            if (a[j - 1] > a[j]) {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
    // 依次输出
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    
    return 0;
}
