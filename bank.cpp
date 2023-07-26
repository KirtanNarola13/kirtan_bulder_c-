

#include <iostream>
#ifdef _WIN32
#include <windows.h> 
#else
#include <cstdlib>   
#endif
using namespace std;

void clearScreen() {
#ifdef _WIN32
    // For Windows systems
    COORD topLeft = {0, 0};
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO screen;
    DWORD written;

    GetConsoleScreenBufferInfo(console, &screen);
    FillConsoleOutputCharacterA(console, ' ', screen.dwSize.X * screen.dwSize.Y, topLeft, &written);
    FillConsoleOutputAttribute(console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE,
        screen.dwSize.X * screen.dwSize.Y, topLeft, &written);
    SetConsoleCursorPosition(console, topLeft);
#else
    // For non-Windows systems (Linux, macOS, etc.)
    std::cout << "\x1B[2J\x1B[H";
#endif
}

int main (){
	
	cout << endl << endl << endl << endl << endl << "\t\t\t\t\t\t -: Bank Management System :- " ;
	cout << endl  << "\t\t\t\t\t\t -----------------------------" ;
	cout << endl << "\t\t\t\t\t\t -: Designed & Programed BY :- "  ;
	cout << endl << "\t\t\t\t\t\t -----------------------------" ;
	cout << endl << "\t\t\t\t\t\t        Kirtan B Narola  "  << endl ;
	cout << endl << "\t\t\t\t\t\t *****************************" << endl ;
	cout << endl << "\t\t\t\t\t\t\t -: Trainer :- " ;
	cout << endl << "\t\t\t\t\t\t -----------------------------" ;
	cout << endl << "\t\t\t\t\t\t          Vraj Godhani  " << endl << endl << endl ;	
	string start;
	cout << "\t\t\t\t\t\tPess any key & enter to continue...";
	cin >> start;
	clearScreen();
	char log_in;
	cout << endl << endl << endl << endl << endl << endl  << "\t\t\t\t ---------------------------------------------------- " ;
	cout << endl << "\t\t\t\t -: Press A for login as administator S for staff :- "  ;
	cout <<  endl << "\t\t\t\t ---------------------------------------------------- " << endl << endl << endl ;
	cin  >> log_in;
	string name,e_mail,ph_num;
	int ac_num;
	int choice;
	
	if(log_in=='a' || log_in=='A'){
		clearScreen();
		cout << endl << endl << endl <<  "----------------------------------------------------------------------------------------------------------------------";
		cout << endl << "\t\t\t\t\t\t -: Wellcome As administator :- ";
		cout <<  endl <<  "----------------------------------------------------------------------------------------------------------------------"<<endl<<endl<<endl<<endl;\
		cout << "\t\t\t\t   Enter The Name OF administator\t\t     : ";
		cin >> name;
		cout << "\t\t\t\t   Enter The Account NUmber Of administator          : ";
		cin >> ac_num;
		cout << "\t\t\t\t   Enter The Phone NUmber Of administator\t     : ";
		cin >> ph_num;
		cout << "\t\t\t\t   Enter The E-mail Of administator\t             : ";
		cin >> e_mail;
		cout << endl << endl << endl;
		clearScreen();
		cout << endl  <<  "----------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "   Name           :- "<< name << endl;
		cout << "   Account NUmber :- " << ac_num << endl;
		cout << "   Phone NUmber   :- " << ph_num << endl;
		cout << "   E-mail         :- " << e_mail ;
		cout <<  endl <<  "----------------------------------------------------------------------------------------------------------------------"<<endl<<endl<<endl;
		cout << "\t\t\t\t\t-: Press [1] to Deposite the money :-" << endl << endl ;
		cout << "\t\t\t\t\t-: Press [2] to Transfer the money :-" << endl << endl;
		cout << "\t\t\t\t\t-: Press [3] to Withdraw the money :-" << endl << endl;
		cin >> choice;
		
		
		switch(choice){
			
			case 1:
				clearScreen();
				int deposite,aft_bal;
				cout << endl  <<  "----------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "   Enter Deposite Amaout : ";
				cin >> deposite;
				cout <<  "----------------------------------------------------------------------------------------------------------------------"<<endl;
				cout << endl << endl << endl;
				cout << "\t\t\tYour Actual Amount Is : 200000" << endl << endl;
				cout << "\t\t\tCongrates Your Amount Has deposite Successfully." << endl << endl;
				aft_bal=200000+deposite;
				cout << "\t\t\tYour Account Balance Is : " << aft_bal << endl << endl;
			break;
			
			case 2:
				clearScreen();
				int transfer,aft_t_bal,dumy_ac;
				cout << endl  <<  "----------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "   Enter Amaout Which You Wanna Transfer : ";
				cin >> transfer;
				cout << "   Enter Another Account NUmber (Where You Wanna Transfer MOney ) : ";
				cin >> dumy_ac;
				cout <<  "----------------------------------------------------------------------------------------------------------------------"<<endl;
				cout << endl << endl << endl;
				if(dumy_ac==ac_num){
					cout << "This is your account number " << dumy_ac;
				}
				else{
					cout << "\t\t\tYour Actual Amount Is : 200000" << endl << endl;
					cout << "\t\t\tCongrates Your Amount Has Transfer Successfully." << endl << endl;
					aft_t_bal=200000-transfer;
					cout << "\t\t\tYour Account Balance Is : " << aft_t_bal << endl << endl;		
			}
			break;
			
			case 3:
				clearScreen();
				int withdraw,aft_d_bal;
				cout << endl  <<  "----------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "   Enter Whithdraw Amaout : ";
				cin >> withdraw;
				cout <<  "----------------------------------------------------------------------------------------------------------------------"<<endl;
				cout << endl << endl << endl;
				cout << "\t\t\tYour Actual Amount Is : 200000" << endl << endl;
				cout << "\t\t\tCongrates Your Amount Has Withdraw Successfully." << endl << endl;
				aft_d_bal=200000-withdraw;
				cout << "\t\t\tYour Account Balance Is : " << aft_d_bal << endl << endl;
				break;
			
			default:
				cout << "Invalid choice.....";
			break;				
		}
		
		
	}
	else if(log_in=='s' || log_in=='S'){
		clearScreen();
		cout << endl << endl << endl <<  "----------------------------------------------------------------------------------------------------------------------";
		cout << endl << "\t\t\t\t\t\t -: Wellcome As staf :- ";
		cout <<  endl <<  "----------------------------------------------------------------------------------------------------------------------"<<endl<<endl<<endl<<endl;\
		cout << "\t\t\t\t\tEnter The Name OF Staff\t\t     : ";
		cin >> name;
		cout << "\t\t\t\t\tEnter The Account NUmber Of Staff    : ";
		cin >> ac_num;
		cout << "\t\t\t\t\tEnter The Phone NUmber Of Staff\t     : ";
		cin >> ph_num;
		cout << "\t\t\t\t\tEnter The E-mail Of Satff\t     : ";
		cin >> e_mail;
		cout << endl << endl << endl;
		clearScreen();
		cout << endl  <<  "----------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "   Name           :- "<< name << endl;
		cout << "   Account NUmber :- " << ac_num << endl;
		cout << "   Phone NUmber   :- " << ph_num << endl;
		cout << "   E-mail         :- " << e_mail ;
		cout <<  endl <<  "----------------------------------------------------------------------------------------------------------------------"<<endl<<endl<<endl;
		cout << "\t\t\t\t\t-: Press [1] to Deposite the money :-" << endl << endl ;
		cout << "\t\t\t\t\t-: Press [2] to Transfer the money :-" << endl << endl;
		cout << "\t\t\t\t\t-: Press [3] to Withdraw the money :-" << endl << endl;
		cin >> choice;
		
		
		switch(choice){
			
			case 1:
				clearScreen();
				int deposite,aft_bal;
				cout << endl  <<  "----------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "   Enter Deposite Amaout : ";
				cin >> deposite;
				cout <<  "----------------------------------------------------------------------------------------------------------------------"<<endl;
				cout << endl << endl << endl;
				cout << "\t\t\tYour Actual Amount Is : 200000" << endl << endl;
				cout << "\t\t\tCongrates Your Amount Has deposite Successfully." << endl << endl;
				aft_bal=200000+deposite;
				cout << "\t\t\tYour Account Balance Is : " << aft_bal << endl << endl;
			break;
			
			case 2:
				clearScreen();
				int transfer,aft_t_bal,dumy_ac;
				cout << endl  <<  "----------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "   Enter Amaout Which You Wanna Transfer : ";
				cin >> transfer;
				cout << "   Enter Another Account NUmber (Where You Wanna Transfer MOney ) : ";
				cin >> dumy_ac;
				cout <<  "----------------------------------------------------------------------------------------------------------------------"<<endl;
				cout << endl << endl << endl;
				if(dumy_ac==ac_num){
					cout << "This is your account number " << dumy_ac;
				}
				else{
					cout << "\t\t\tYour Actual Amount Is : 200000" << endl << endl;
					cout << "\t\t\tCongrates Your Amount Has Transfer Successfully." << endl << endl;
					aft_t_bal=200000-transfer;
					cout << "\t\t\tYour Account Balance Is : " << aft_t_bal << endl << endl;		
			}
			break;
			
			case 3:
				clearScreen();
				int withdraw,aft_d_bal;
				cout << endl  <<  "----------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "   Enter Whithdraw Amaout : ";
				cin >> withdraw;
				cout <<  "----------------------------------------------------------------------------------------------------------------------"<<endl;
				cout << endl << endl << endl;
				cout << "\t\t\tYour Actual Amount Is : 200000" << endl << endl;
				cout << "\t\t\tCongrates Your Amount Has Withdraw Successfully." << endl << endl;
				aft_d_bal=200000-withdraw;
				cout << "\t\t\tYour Account Balance Is : " << aft_d_bal << endl << endl;
				break;
			
			default:
				cout << "Invalid choice....";
			break;				
		}
		
		
	}
		
	else{
		clearScreen();
		cout << "Invalid Choice";
	}
	
}