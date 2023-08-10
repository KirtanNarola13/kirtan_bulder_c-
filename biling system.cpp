#include<iostream>
using namespace std;

class Wllcome{
	public:
		int choice;
		int qty;
		int sub_total;
	public:
		Wellcome_store(){
			cout << "======================================================================================================================" << endl << endl ;
			cout << "\t\t\t\t\t-: Wellcome To Mongha Retorent :)  " << endl << endl;
			cout << "======================================================================================================================" << endl << endl << endl << endl ;
				
		}
		public:
	 Product_manu(){
			cout << "\t\t1) Garlic pizza \t\t299 Rs" << endl;
			cout << "\t\t2) Tomato Pizaa \t\t299 Rs" << endl;
			cout << "\t\t3) 7 Cheezy Pizza \t\t299 Rs" << endl;
			cout << "\t\t4) Margerita Pizza \t\t299 Rs" << endl;
			cout << "\t\t5) For Exit........" << endl << endl << endl << endl;
			cout << "\t\tEnter your choice for order pizza : ";
			cin >> choice;
		}
		
		Buy(){
			switch(choice)	{
				
				case 1:
					cout << endl <<  "\t\tGarlic pizza :- " << endl ;
					cout << "\t\tEnter Quantity : ";
					cin >> qty;
				break;
				case 2:
					cout << endl << "\t\tTomato pizza :- " << endl;
					cout << "\t\tEnter Quantity : ";
					cin >> qty;
				break;
				case 3:
					cout <<endl << "\t\t7 Cheezy Pizza :- "<< endl;
					cout << "\t\tEnter Quantity : ";
					cin >> qty;
				break;
				case 4:
					cout << endl <<"\t\tMargerita Pizza :- "<< endl;
					cout << "\t\tEnter Quantity : ";
					cin >> qty;
				break;
				default:
					cout <<endl <<  " Invald choice ......";
					break;
			}

	}
	Sub_bill(){
			cout << endl << endl << endl << endl<< "======================================================================================================================" << endl << endl ;
			cout << "\t\t\t\t\t-: Wellcome To Mongha Retorent :)  " << endl << endl;
			cout << "======================================================================================================================" << endl << endl << endl << endl ;
			if(choice=1){
				cout << "\t\t\t\tMongha Reatorent " << endl << endl;
				cout << "\t\t\t\tGarlic pizza \t\t299" << endl << endl << endl;
				cout << "\t\t\t\tSub Total is \t\t" << qty*299 << endl<< endl << endl;
			}
			else if(choice=2){
				cout << "\t\t\t\tMongha Reatorent " << endl << endl;
				cout << "\t\t\t\tTomato pizza \t\t299" << endl << endl << endl;
				cout << "\t\t\t\tSub Total is \t\t" << qty*299 << endl<< endl << endl;
			}
			else if(choice=3){
				cout << "\t\t\t\tMongha Reatorent " << endl << endl;
				cout << "\t\t\t\t7 Cheezy izza \t\t299" << endl << endl << endl;
				cout << "\t\t\t\tSub Total is \t\t" << qty*299 << endl << endl << endl;
			}
			else if(choice=4){
				cout << "\t\t\t\tMongha Reatorent " << endl << endl;
				cout << "\t\t\t\tMargeita pizza \t\t299" << endl << endl << endl;
				cout << "\t\t\t\tSub Total is \t\t" << qty*299 << endl << endl << endl;
			}
			else{
				cout << "\t\t\t\tinvalid choice.... ";
			}
	}
	
};



int main (){
	Wllcome w;

	
	w.Wellcome_store();
	w.Product_manu();
	w.Buy();
	if(w.choice <= 4){
	w.Sub_bill();	
	}
	
	
	return 0;
}