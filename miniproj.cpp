#include<iostream>
using namespace std;

string arr1[20], arr2[20], arr3[20],arr4[20],arr5[20];
int total=0;

// enter the data
void enter() {
	int ch=0;
	cout<<"How many students do you want to enter?"<<endl;
	cin>>ch;
	if(total==0) {
		total=ch+total;
		for(int i=0;i<ch;i++) {
			cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;
			cout<<"Enter name : ";
			cin>>arr1[i];
			cout<<"Enter Roll no : ";
			cin>>arr2[i];
			cout<<"Enter course : ";
			cin>>arr3[i];
			cout<<"Enter class : ";
			cin>>arr4[i];
			cout<<"Enter contact : ";
			cin>>arr5[i];		
		}
	} else {    		
	    for(int i=total;i<ch+total;i++) {
			cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;
			cout<<"Enter name : ";
			cin>>arr1[i];
			cout<<"Enter Roll no : ";
			cin>>arr2[i];
			cout<<"Enter course : ";
			cin>>arr3[i];
			cout<<"Enter class : ";
			cin>>arr4[i];
			cout<<"Enter contact : ";
			cin>>arr5[i];
		}
		total=ch+total;
	}
}

// display the data
void show() {
	if(total==0){
		cout<<"No data is entered"<<endl;
	} else {
		for(int i=0;i<total;i++){
	    		cout<<"\nData of Student "<<i+1<<endl<<endl;
	    		cout<<"Name "<<arr1[i]<<endl;
	    		cout<<"Roll no "<<arr2[i]<<endl;
	    		cout<<"Course "<<arr3[i]<<endl;
	    		cout<<"Class "<<arr4[i]<<endl;
	    		cout<<"Contact "<<arr5[i]<<endl;
	    }
	}
}

// diplays the array
void disparr(){
	string name;
	cout<<"Enter name of the student :"<<endl;
	cin>>name;
	for(int i=0;i<=total;i++) {
			if(name==arr1[i]) {
			cout<<"Name "<<arr1[i]<<endl;
	    	cout<<"Roll no "<<arr2[i]<<endl;
	    	cout<<"Course "<<arr3[i]<<endl;
	    	cout<<"Class "<<arr4[i]<<endl;
	    	cout<<"Contact "<<arr5[i]<<endl;
			bool found = true;
			break;
			}
		}
		

}

// searchs the name using sequential search
void search() {
	if(total==0) {
		cout<<"No data is entered"<<endl;
	} else 
	{
		bool found = false;
		disparr();
		if(found==true){
		cout<<"Name found."<<endl;
		}else{
			cout<<"Name not found."<<endl;
		}
	}
}

// searchs the name using binary search
int binarySearch(string arr[], string x, int n) {
   int lower = 0;
   int upper = n - 1;
   while (lower <= upper) {
      int mid = lower + (upper - lower) / 2;
      int res;
      if (x == (arr[mid]))
         res = 0;
      if (res == 0)
         return mid;
      if (x > (arr[mid]))
         lower = mid + 1;
      else
         upper = mid - 1;
   }
   return -1;
}

int main() {
	cout << "======================================================================" << endl
         << "=  _____ _             _            _    ______          _        _  =" << endl
         << "= /  ___| |           | |          | |   | ___ \\        | |      | | =" << endl
         << "= \\ `--.| |_ _   _  __| | ___ _ __ | |_  | |_/ /__  _ __| |_ __ _| | =" << endl
         << "=  `--. \\ __| | | |/ _` |/ _ \\ '_ \\| __| |  __/ _ \\| '__| __/ _` | | =" << endl
         << "= /\\__/ / |_| |_| | (_| |  __/ | | | |_  | | | (_) | |  | || (_| | | =" << endl
         << "= \\____/ \\__|\\__,_|\\__,_|\\___|_| |_|\\__| \\_|  \\___/|_|   \\__\\__,_|_| =" << endl
         << "======================================================================" << endl;
	int value, result;
	string rollno;
	while(true) {
		cout<<"Press 1 to enter data"<<endl;
		cout<<"Press 2 to show data"<<endl;
		cout<<"Press 3 to search names with sequential search"<<endl;
		cout<<"Press 4 to search rollnos with binary search"<<endl;
		cout<<"Press 5 to exit"<<endl;
		cin>>value;
		switch(value) {
			case 1:
				enter();
				break;
			case 2:
				show();
				break;
			case 3:
				search();
				break;
			case 4:
				cout<<"Enter the rollno of the student :"<<endl;
				cin>>rollno;
   				result = binarySearch(arr2, rollno, total);
   				if(result == -1){
      				cout<<"Element not present."<<endl<<endl;
					break;
				}
   				else{
	    			cout<<"\nData of Student "<<endl<<endl;
	    			cout<<"Name "<<arr1[result]<<endl;
	    			cout<<"Roll no "<<arr2[result]<<endl;
	    			cout<<"Course "<<arr3[result]<<endl;
	    			cout<<"Class "<<arr4[result]<<endl;
	    			cout<<"Contact "<<arr5[result]<<endl<<endl;
					break;
				}
			case 5:
				cout<<"\nThank you for using the system!";
				exit(0);
				break;
			default:
				cout<<"Invalid input"<<endl;
				break;
	    }
    }
}