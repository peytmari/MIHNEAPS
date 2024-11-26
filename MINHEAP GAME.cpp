#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to heapify the subtree rooted at index i in Min-Heap
void minHeapify(vector<int>& heap, int i, int size) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < size && heap[left] < heap[smallest])
        smallest = left;

    if (right < size && heap[right] < heap[smallest])
        smallest = right;

    if (smallest != i) {
        swap(heap[i], heap[smallest]);
        minHeapify(heap, smallest, size); // Recursively heapify the affected subtree
    }
}

// Function to insert new elements into the Min-Heap
void insertElements(vector<int>& heap, const vector<int>& values) {
    for (int value : values) {
        heap.push_back(value);
        int i = heap.size() - 1;


        cout << " > Hero with power level " << value << " has been recruited!" << endl;

        // Move the new value up to maintain the heap property
        while (i != 0 && heap[(i - 1) / 2] > heap[i]) {
            swap(heap[i], heap[(i - 1) / 2]);
            i = (i - 1) / 2;
        }
    }
        cout << endl;
        cout << " Ready for battle! " << endl;
}

// Function to delete the root (minimum element) from the Min-Heap
void deleteRoot(vector<int>& heap) {
    if (heap.empty()) { // Check if the heap is empty
        cout << "No heroes to send on a quest! The heap is empty." << endl;
        return;
    }


    int rootPower = heap[0];
    cout << " Sending the weakest hero with power level " << rootPower << " on a minor quest..." << endl;

    // Replace root with the last element
    heap[0] = heap.back();
    heap.pop_back();

    // Restore the Min-Heap property if the heap is not empty
    if (!heap.empty()) {
        minHeapify(heap, 0, heap.size());
    }
}

// Function to display the heap
void displayHeap(const vector<int>& heap) {
    if (heap.empty()) {
        cout << " The hero roster is empty!" << endl;
    } else {
        cout << "\n  Current Hero Power Levels (Weakest to Strongest): ";
        for (int val : heap)
            cout << val << " ";
        cout << endl;
    }
}

int main() {
    vector<int> minHeap;
    int choice;

    // Instructions at the beginning
    cout << "===========================================" << endl;
    cout << "   Welcome to the Hero Management System!" << endl;
    cout << "  Manage your superhero team using Min-Heap" << endl;
    cout << "===========================================" << endl;
    cout << " Menu Instructions:" << endl;
    cout << " 1. Insert hero power levels into the roster." << endl;
    cout << " 2. Remove and deploy the weakest hero." << endl;
    cout << " 3. Display current hero power levels." << endl;
    cout << " 4. Exit the mission control." << endl;
    cout << "===========================================" << endl;

    while (true) {
        cout << "\n-------------------------------------------" << endl;
        cout << " 1. Insert Hero Power Levels" << endl;
        cout << " 2. Remove the Weakest Hero" << endl;
        cout << " 3. Display the Heap" << endl;
        cout << " 4. Exit" << endl;
        cout << "-------------------------------------------" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int numHeroes;
                cout << "Enter the number of heroes you want to recruit: ";
                cin >> numHeroes;
                vector<int> heroPowers(numHeroes);
                cout << "Enter " << numHeroes << " power levels: ";
                for (int i = 0; i < numHeroes; ++i) {
                    cin >> heroPowers[i];
                }
                insertElements(minHeap, heroPowers);
                break;
            }
            case 2: {
                deleteRoot(minHeap);
                break;
            }
            case 3: {
                displayHeap(minHeap);
                break;
            }
            case 4: {
                cout << "\nExiting the mission control... Stay heroic!" << endl;
                cout << "===========================================" << endl;
                return 0;
            }
            default: {
                cout << " Invalid choice. Please try again." << endl;
            }
        }
    }
}
