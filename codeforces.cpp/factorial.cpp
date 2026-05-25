int main() {
    int T;
    cin >> T;

    long long* arr = new long long[T];

    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;

        long long fact = 1;
        for (int j = 1; j <= N; j++) {
            fact = fact * j;
        }
        arr[i] = fact;
    }

    for (int i = 0; i < T; i++) {
        cout << arr[i] << "\n";
    }
}
