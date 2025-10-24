
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void display(int *a,int n){
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int* a, int n){
    cout << "=====Bubble Sort=====" << endl;
    for(int i=0; i<n-1;i++){
        for(int j=0; j<n-i-1; j++){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]);
                display(a,n);
            }
        }
    }
}

void selectionSort(int* a, int n){
    cout << "=====Selection Sort=====" << endl;
    for(int i=0; i<n-1; i++){
        int mi = i;
        for(int j=i+1; j<n-1; j++){
            if(a[mi] > a[j]){
                mi = j;
            }
        }
        swap(a[i], a[mi]);
        display(a,n);
    }
}

void insertionSort(int* a, int n){
    cout << "=====Insertion Sort=====" << endl;
     for(int i = 1; i < n; ++i) {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
        display(a,n);
    }
}