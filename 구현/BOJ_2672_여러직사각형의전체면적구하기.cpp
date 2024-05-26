// BOJ 2672 번
// 여러 직사각형의 전체 면적 구하기
// Gold 2

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

struct Rect {
    double _x1, _x2, _y1, _y2;

    bool isInside(double x1, double x2, double y1, double y2) const{
        return _x1 <= x1 && _x2 >= x2 && _y1 <= y1 && _y2 >= y2;
    }
};


int main() {
    int N;
    cin >> N;

    vector<double> x, y;
    vector<Rect> rects;

    for (int i = 0; i < N; i++) {
        double x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        x2 += x1;
        y2 += y1;
        x.push_back(x1);
        x.push_back(x2);
        y.push_back(y1);
        y.push_back(y2);
        rects.push_back(Rect {x1, x2, y1, y2});
    }

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    double area = 0;

    for (int i = 0; i < x.size() - 1; i++) {
        for (int j = 0; j < y.size() - 1; j++) {
            bool isAble = false;
            for (Rect& r: rects) {
                if (r.isInside(x[i], x[i+1], y[j], y[j+1])) {
                    isAble = true;
                    break;
                }
            }
            if (isAble) {
                area += (x[i+1] - x[i]) * (y[j+1] - y[j]);
            }
        }
    }

    if (floor(area) == area) {
        cout.precision(0);
    } else {
        cout.precision(2);
    }
    cout << fixed;
    cout << area << '\n';

    return 0;
}