#include<iostream>
using namespace std;
    
void selection_sort(int arr[], int n) {
    for (int i = 0; i <= n-2; i++) {
        int min = i;
        for (int j = i; j <= n-1; j++) {
            if (arr[i] > arr[j]) min = j;
        }
        swap(arr[i], arr[min]);
    }
}

void insertion_sort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int j = i;
        while (j > 0 && arr[j-1] > arr[j]) {
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}

void buble_sort(int arr[], int n) {
    for (int i = n-1; i >= 0; i--) {
        int isSwaped = 0;
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
            isSwaped = 1;
        }
        if(!isSwaped) break;
    }
}

int main() {
    cout << "How many number? ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " numbers" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //selection_sort(arr, n);
    //insertion_sort(arr, n);
    //buble_sort(arr, n);
    cout << "After sorting the array will be" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
