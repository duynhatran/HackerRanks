
#include <iostream>
using namespace std;
/*gop hai mang con L[] vaf R[]*/
void merge(int* arr, int l, int m, int r){
    int i, j, k;
    //tim so luong phan tu voi l la chi so trai va r la chi so phai
    int n1 = m - l + 1;
    int n2 = r - m;
    //int *a;
    //a = new int [30];
    /*tao cac ac tam*/
    int* L= new int[n1];
    int* R= new int[n2];
    
    /* copy du lieu sang mang tam*/
    for(int i =0; i<n1;i++){
        L[i] = arr[l + i];
    }
    for(int j =0; j<n2; j++){
        R[j] = arr[m +1 +j];
    }
    /*gop hai mang tam vua roi vao mang arr + sap xep*/
    i = 0;//khoi tao chi so mang l
    j = 0;//khoi tao chi so mang r
    k = l;//khoi tao chi so mang ket hop
    while(i<n1 && j <n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    /*copy cac phan tu con lai vao mang arr neu co*/
    while(i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j < n2){
        arr[k]  = R[j];
        j++;
        k++;
    }
}

void MergeSort( int arr[], int l, int r){
    if(l<r){
        int m = l + (r-l)/2;
        //goi de quy tiep tuc chia doi tung mang
        MergeSort(arr, l, m);
        MergeSort(arr, m+1, r);
        //ghep mang
        merge(arr, l, m, r);
    }
}
void output(int arr[], int size){
    for(int i = 0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout <<endl;
}
int main(int argc, const char * argv[]) {
//    int n;
//    cout<<"nhap so phan tu: ";
//    cin >> n;
    int* arr = new int[6]{34,35,12,14,46,65};
//    for(int i=0;i<n;i++){
//        cout <<"arr["<<i<<"]: ";
//        cin >>arr[i];
//    }
    int size = 6;
    MergeSort(arr, 0, size-1);
    output(arr, size);
    
    return 0;
}
