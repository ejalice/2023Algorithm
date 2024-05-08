// BOJ 1802번
// 종이 접기
// Silver 1

#include <iostream>
#include <string>
using namespace std;

bool segment(string value, int first, int last);
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        string value;
        cin >> value;
        int n = value.length();
        
        if (segment(value, 0, n-1))
            cout << "YES" << '\n';
        else
            cout <<"NO" << '\n';

    }

    return 0;

}

bool segment(string value, int first, int last) {
    if (first >= last)
        return true;
    
    int left = first;
    int right = last;
    int mid = (first + last) / 2;

    while (left < right) {
        if (value[left] != value[right]) {
            left++;
            right--;
        } else return false;
    }

    return segment(value, first, mid-1) && segment(value, mid+1, last);
}