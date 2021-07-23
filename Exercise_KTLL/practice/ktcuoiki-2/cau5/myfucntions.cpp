#include "myfucntions.hpp"
void writing(int &n){
    sinhvien* t;

    ofstream fout;

    fout.open("SinhVien.dat",ios::out);
    cout<<"enter n :";
    cin >> n;
    
    t = new sinhvien[n];
    
    if(fout.is_open()){

        for(int i =0;i<n;i++){
            cin.ignore();
            cout<<"enter name: ";
            getline(cin, t[i].name);
            cout <<"enter id: ";
            cin>>t[i].id;
            fout.write((char*)&t[i], sizeof(sinhvien));

        }
    }
    fout.close();
}

void reading(int &n){
    ifstream fin;
    sinhvien *t = new sinhvien[n];
    fin.open("SinhVien.dat",ios::in);
    
    if(fin.is_open()){
        for(int i = 0;i<n;i++){
            fin.read((char*)&t[i], sizeof(sinhvien));
            cout<<"name: " << t[i].name << " - ";
            cout<<"id: " << t[i].id << endl;
        }
    }
    fin.close();
}

void searching(int &n){
    int id;
    int found = 0;
    cout << "enter id muon tim: ";
    cin >> id;
    sinhvien * a = new sinhvien[n];
    ifstream fin;
    fin.open("SinhVien.dat",ios::in);
    if(fin.is_open() && found == 0){
        for(int i=0;i<n;i++){
            fin.read((char*)&a[i], sizeof(sinhvien));
            if( id == a[i].id ){
                found = 1;
            }
        }
    }
    fin.close();
}
