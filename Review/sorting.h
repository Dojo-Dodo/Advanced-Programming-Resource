
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
        for(int j=i+1; j<n; j++){
            if(a[mi] > a[j]){
                mi = j;
            }
        }
        if(mi != i){
            swap(a[mi], a[i]);
            display(a,n);
        }
    }
}

void insertionSort(int* a, int n){
    cout << "=====Insertion Sort=====" << endl;
    for (int i = 1; i < n; ++i) {
        int j = i;
        while (j > 0 && a[j - 1] > a[j]) {
            swap(a[j - 1], a[j]);
            display(a, n);
            --j;
        }
    }
}