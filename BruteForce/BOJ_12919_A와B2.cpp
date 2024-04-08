// BOJ 12919번
// A와 B 2
// Gold 5
int S;

int recursion(string T) {
    if (S == T)
        return 1;
    
    if (len(T) == 0)
        return 0;

    if (T[0] == 'B' && S[0] != 'B') {
        string temp = "";
        for (int i = len(T)-1; i > 0; i--) {
            temp += T[i];
        }
        T = temp;
    } else {
        T
    }
}

int main() {
    int T;
    cin >> S;
    cin >> T;



    return 0;
}