#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	int data[50], swap, terkecil, input, lagi;
	
	awal:
	system("cls");	
	cout<<"SELECTION SORT ASCENDING"<<endl;
    cout<<"--------------------------"<<endl;
    
    
	cout<<"Masukkan banyak bilangan : ";
	cin>>input;
	
	
	for(int i=0; i<input; i++){
		cout<<"--------------------------"<<endl;
		cout<<"Input Data Ke-"<<(i+1)<<" = " ;
		cin>>data[i];
		
	}
	
	system("cls");
	cout<<endl;
	cout<<"Data Yang Sebelum Di Selection  : \n"<<endl;
	for(int i=0; i<input; i++){

		cout<<data[i]<<"  ";
	}
	
	cout<<"\n\n---------------------------------------------"<<endl;
	cout<<"  T A H A P   S E L E C T I O N"<<endl;
	cout<<"---------------------------------------------"<<endl;
	for(int i=0; i<input; i++){
		terkecil=i;
		for(int j=i+1; j<input; j++){
			if(data[terkecil] > data[j])
			terkecil=j;
		}
		if(data[i] != data[terkecil]){
			swap = data[i];
			data[i] = data[terkecil];
			data[terkecil] = swap;
			
		}
		cout<<endl;
		cout<<"Tahap Selection ke "<<i+1<<" : ";
		for(int j=0; j<input; j++){
			cout<<data[j]<<" ";
			
		}
		cout<<"\n";
	}
	
	cout<<"\n\n---------------------------------------------"<<endl;
	cout<<"Hasi Data Yang Sudah Di Selection \n"<<endl;
	for(int i=0; i<input; i++){
		cout<<data[i]<<"  ";
		}
	
	cout<<"\n---------------------------------------------\n"<<endl;
	cout<<"\n\nApakah Anda Ingin Menginput data lagi ?(1/2)"<<endl;
    cin>>lagi;
    if(lagi==1)
    {
        goto awal;
    }
    else{
        goto akhir;
    }
akhir:
		
	return 0;
}


