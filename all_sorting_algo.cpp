#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>

using namespace std;

// Function to swap two elements
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Bubble Sort
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Selection Sort
void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}

// Insertion Sort
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Merge Sort
void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    vector<int> leftArr(n1);
    vector<int> rightArr(n2);
    for (int i = 0; i < n1; i++) {
        leftArr[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++) {
        rightArr[i] = arr[mid + 1 + i];
    }
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

// Quick Sort
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

// Heap Sort
void heapify(vector<int>& arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }
    if (largest!= i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

// Function to print the array
void printArray(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n; 
    vector<int>arr = {97, 23, 45, 72, 10, 86, 31, 55, 104, 5, 67, 29, 83, 13, 60, 17, 41, 79, 94, 25, 37, 88, 50, 3, 68, 19, 47, 78, 2, 99, 42, 63, 11, 84, 33, 71, 7, 52, 90, 27, 56, 14, 77, 40, 92, 30, 66, 20, 49, 80, 16, 38, 87, 48, 24, 61, 35, 73, 8, 53, 95, 21, 44, 75, 12, 57, 101, 1, 69, 32, 89, 46, 81, 34, 65, 9, 76, 28, 51, 96, 22, 43, 74, 15, 59, 103, 6, 70, 26, 54, 91, 39, 62, 18, 43, 82, 36, 64, 0, 85, 58, 100, 4, 50, 102, 66, 27, 55, 118, 97, 23, 45, 72, 10, 86, 31, 55, 104, 5, 67, 29, 83, 13, 60, 17, 41, 79, 94, 25, 37, 88, 50, 3, 68, 19, 47, 78, 2, 99, 42, 63, 11, 84, 33, 71, 7, 52, 90, 27, 56, 14, 77, 40, 92, 30, 66, 20, 49, 80, 16, 38, 87, 48, 24, 61, 35, 73, 8, 53, 95, 21, 44, 75, 12, 57, 101, 1, 69, 32, 89, 46, 81, 34, 65, 9, 76, 28, 51, 96, 22, 43, 74, 15, 59, 103, 6, 70, 26, 54, 91, 39, 62, 18, 43, 82, 36, 64, 0, 85, 58, 100, 4, 50, 102};
    cout << "Enter the number of elements: ";
    // cin >> n;
    n=135;
    // vector<int> arr(n);
    cout << "Enter the elements: ";
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }

    vector<int> arrCopy = arr;

    // Bubble Sort
    auto start = chrono::high_resolution_clock::now();
    bubbleSort(arrCopy);
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration = end - start;
    cout << "Bubble Sort: ";
    printArray(arrCopy);
    cout << "Time taken: " << duration.count() << " seconds" << endl;
    arrCopy = arr;

    // Selection Sort
    start = chrono::high_resolution_clock::now();
    selectionSort(arrCopy);
    end = chrono::high_resolution_clock::now();
    duration = end - start;
    cout << "Selection Sort: ";
    printArray(arrCopy);
    cout << "Time taken: " << duration.count() << " seconds" << endl;
    arrCopy = arr;

    // Insertion Sort
    start = chrono::high_resolution_clock::now();
    insertionSort(arrCopy);
    end = chrono::high_resolution_clock::now();
    duration = end - start;
    cout << "Insertion Sort: ";
    printArray(arrCopy);
    cout << "Time taken: " << duration.count() << " seconds" << endl;
    arrCopy = arr;

    // Merge Sort
    start = chrono::high_resolution_clock::now();
    mergeSort(arrCopy, 0, arrCopy.size() - 1);
    end = chrono::high_resolution_clock::now();
    duration = end - start;
    cout << "Merge Sort: ";
    printArray(arrCopy);
    cout << "Time taken: " << duration.count() << " seconds" << endl;
    arrCopy = arr;

    // Quick Sort
    start = chrono::high_resolution_clock::now();
    quickSort(arrCopy, 0, arrCopy.size() - 1);
    end = chrono::high_resolution_clock::now();
    duration = end - start;
    cout << "Quick Sort: ";
    printArray(arrCopy);
    cout << "Time taken: " << duration.count() << " seconds" << endl;
    arrCopy = arr;

    // Heap Sort
    start = chrono::high_resolution_clock::now();
    heapSort(arrCopy);
    end = chrono::high_resolution_clock::now();
    duration = end - start;
    cout << "Heap Sort: ";
    printArray(arrCopy);
    cout << "Time taken: " << duration.count() << " seconds" << endl;

    // Determine the most efficient algorithm
    double minTime = duration.count();
    string mostEfficientAlgorithm = "Heap Sort";
    if (duration.count() > 0.01) {
        if (duration.count() < minTime) {
            minTime = duration.count();
            mostEfficientAlgorithm = "Quick Sort";
        }
    }
    if (duration.count() > 0.01) {
        if (duration.count() < minTime) {
            minTime = duration.count();
            mostEfficientAlgorithm = "Merge Sort";
        }
    }
    if (duration.count() > 0.01) {
        if (duration.count() < minTime) {
            minTime = duration.count();
            mostEfficientAlgorithm = "Insertion Sort";
        }
    }
    if (duration.count() > 0.01) {
        if (duration.count() < minTime) {
            minTime = duration.count();
            mostEfficientAlgorithm = "Selection Sort";
        }
    }
    if (duration.count() > 0.01) {
        if (duration.count() < minTime) {
            minTime = duration.count();
            mostEfficientAlgorithm = "Bubble Sort";
        }
    }

    cout << "Most efficient algorithm: " << mostEfficientAlgorithm << endl;

    return 0;
}