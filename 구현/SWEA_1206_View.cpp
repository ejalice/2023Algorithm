// SWEA 1206번
// View
// D3

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T = 10;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int result = 0;
        
        // 건물 개수
        int N;
        cin >> N;
        
        int arr[1000] = {0,};
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        
        for (int i = 2; i < N-2; i++) {
            int left = max(arr[i-1], arr[i-2]);
            int right = max(arr[i+1], arr[i+2]);
            int m = max(left, right);
            int tmp = arr[i] - m;
            if (tmp > 0)
                result += tmp;
        }
        
        cout << "#" << test_case << " " << result << '\n';
	}
    
	return 0;
}