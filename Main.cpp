#include <iostream>
#include "Employee.h"
using namespace std;
#include <fstream>
#include "Administration.h"
int main()
{
	

	bool Checker = false;
	string CompleteOrder[100]; //Holds all current items.
	int COCV = 0; //Complete order Iterator
	double FoodValue = 0; //Total value of order
	//string
	Employee E;
	bool Employeeclearence = false; //Set to true if Login successful
	string empname; //Stores current employee name
	int empid;
	string AdminName; //stores current Admin name;
	int AdminId = 0;
	bool AdminClearence = false; //Set to true if Login successful
	Administration A; 
	

	while (Checker == false)
	{
		system("CLS");

		if (Employeeclearence == true)
		{
			cout << "Current Employee: " << empname << endl;
		}

		if (AdminClearence == true)
		{
			cout << "Current Admin: " << AdminName << endl;
		}
		cout << "Welcome to Grandma BlueBerrys Cafe!" << endl;
		cout << "-----------------------------------" << endl;
		cout << "Enter 1 to view the menu and place an order" << endl;
		cout << "Enter 2 for Employee Menu" << endl;
		cout << "Enter 3 for Admin Menu" << endl;
		cout << "Enter 4 to exit" << endl;
		

		int choice = 0;
		
		cin >> choice;
#pragma region  Menu
		if (choice == 1)
		{
			system("CLS");
			bool MenuChecker = false;
			while (MenuChecker == false)
			{
				
				cout << "Menu Items" << endl;
				cout << "----------" << endl;
				cout << "Enter 1 for Soups" << endl;
				cout << "Enter 2 for Sandwiches" << endl;
				cout << "Enter 3 for Salads" << endl;
				cout << "Enter 4 to return to main menu" << endl;
				cout << "Enter 5 to view your current order" << endl;
				cout << "Enter 6 to place your order" << endl;
				int Menuchoice;
				cin >> Menuchoice;
#pragma region  Soups
				if (Menuchoice == 1)
				{
					system("CLS");
					bool SoupChecker = false;

					while (SoupChecker == false)
					{
						cout << "  Soups" << endl;
						cout << "----------" << endl;
						cout << "1. Cream of Mushroom Soup 2.99" << endl;
						cout << "2. Tomato soup 3.99$" << endl;
						cout << "3. Miso Soup 4.99" << endl;
						cout << "4. Borscht 5.99" << endl;
						cout << "Enter 5 to return to main menu" << endl;
						int SoupChoice;
						cin >> SoupChoice;

						if (SoupChoice == 1)
						{
							COCV++;
							CompleteOrder[COCV] = "Cream of Mushroom Soup 2.99$";
							FoodValue = FoodValue + 2.99;
						}
						if (SoupChoice == 2)
						{
							COCV++;
							CompleteOrder[COCV] = "Tomatoe soup 3.99$";
							FoodValue = FoodValue + 3.99;
						}
						if (SoupChoice == 3)
						{
							COCV++;
							CompleteOrder[COCV] = "Miso Soup 4.99$";
							FoodValue = FoodValue + 4.99;
						}
						if (SoupChoice == 4)
						{
							COCV++;
							CompleteOrder[COCV] = "Borscht 5.99$";
							FoodValue = FoodValue + 5.99;
						}

						if (SoupChoice == 5)
						{
							SoupChecker = true;
						}
						
					}
				}
#pragma endregion	

#pragma region Sandwiches
				if (Menuchoice == 2)
				{
					system("CLS");
					bool SandwichChecker = false;
					while (SandwichChecker == false)
					{
						cout << "  Sandwiches" << endl;
						cout << "----------" << endl;
						cout << "1. Classic Grilled Cheese 7.00$" << endl;
						cout << "2. Chipotle Bacon Melt 8.50$" << endl;
						cout << "3. Turkey Sandwich 7.99$" << endl;
						cout << "4. Bacon Turkey Bravo Sandwich 9.99$" << endl;
						cout << "Enter 5 to return to main menu" << endl;
						int Sandwichchoice;
						cin >> Sandwichchoice;

						if (Sandwichchoice == 1)
						{
							COCV++;
							CompleteOrder[COCV] = "Classic Grilled Cheese 7.00$";
							FoodValue = FoodValue + 7.00;
						}
						
						if (Sandwichchoice == 2)
						{
							COCV++;
							CompleteOrder[COCV] = "Chipotle Bacon Melt 8.50$";
							FoodValue = FoodValue + 8.50;
						}

						if (Sandwichchoice == 3)
						{
							COCV++;
							CompleteOrder[COCV] = "Turkey Sandwich 7.99$";
							FoodValue = FoodValue + 7.99;
						}

						if (Sandwichchoice == 4)
						{
							COCV++;
							CompleteOrder[COCV] = "Bacon Turkey Bravo Sandwich 9.99$";
							FoodValue = FoodValue + 9.99;
						}

						if (Sandwichchoice == 5)
						{
							SandwichChecker = true;
						}

					}
				}
#pragma endregion	
#pragma region Salads
				if (Menuchoice == 3)
				{
					system("CLS");
					bool SaladChecker = false;
					while (SaladChecker == false)
					{
						cout << "  Salads" << endl;
						cout << "----------" << endl;
						cout << "1. Apple Salad With Chicken 10.29$" << endl;
						cout << "2. Ceaser Salad 7.99$" << endl;
						cout << "3. BBQ Chicken Salad 10.29$" << endl;
						cout << "4. Teriyaki Chicken & Broccoli Bowl 11.49$" << endl;
						cout << "Enter 5 to return to main menu" << endl;
						int SaladChoice;
						cin >> SaladChoice;

						if (SaladChoice == 1)
						{
							COCV++;
							CompleteOrder[COCV] = "Apple Salad With Chicken 10.29$";
							FoodValue = FoodValue + 10.29;
						}

						if (SaladChoice == 2)
						{
							COCV++;
							CompleteOrder[COCV] = "Ceaser Salad 7.99$";
							FoodValue = FoodValue + 7.99;
						}

						if (SaladChoice == 3)
						{
							COCV++;
							CompleteOrder[COCV] = "BBQ Chicken Salad 10.29$";
							FoodValue = FoodValue + 10.29;
						}

						if (SaladChoice == 4)
						{
							COCV++;
							CompleteOrder[COCV] = "Teriyaki Chicken & Broccoli Bowl 11.49$";
							FoodValue = FoodValue + 11.49;
						}

						if (SaladChoice == 5)
						{
							SaladChecker = true;
						}
					}
				}
#pragma endregion	
#pragma region ReturnToMainMenu
				if (Menuchoice == 4)
				{
					
					MenuChecker = true;
				}
#pragma endregion

#pragma region ViewOrder
				if (Menuchoice == 5)
				{
					system("CLS");
					cout << "Current list of items" << endl;
					cout << "---------------------" << endl;
					for (int i = 0; i < COCV + 1; i++)
					{
						cout << CompleteOrder[i] << endl;
					}

					cout << "Total: " << FoodValue << endl;
					cout << " "  << endl;
				}

#pragma endregion
#pragma region Finish Order

				if (Menuchoice == 6 && FoodValue != 0)
				{
					system("CLS");
					string finalordername;
					bool finalchecker = false;
					while (finalchecker == false)
					{
						
						cout << "How will you be paying?" << endl;
						cout << "---------------------------------" << endl;
						cout << "Enter 1 for Cash" << endl;
						cout << "Enter 2 for Credit Card" << endl;
						cout << "Enter 3 to return to previous Menu" << endl;
						int moneychoice = 0;

						cin >> moneychoice;

						if (moneychoice == 1)
						{
							cout << "Please enter your name" << endl;

							cin >> finalordername;

							cout << "Thank you for placing your order " << finalordername << endl;

							double cash;
							cout << "Your order total comes out to: " << FoodValue << endl;
							cout << "Enter the amount you wish to pay" << endl;
							cin >> cash;

							if (cash < FoodValue)
							{
								cout << "Invalid cash amount" << endl;
								finalchecker = false;
							}

							else if (cash == FoodValue)
							{
								cout << "Thank you for again for your business " << finalordername << endl;
								cout << "Your Reciept is being printed " << finalordername << endl;

								ofstream Reciept;

								Reciept.open(finalordername + ".txt");

								Reciept << "Grandma BlueBerrys Cafe" << endl;
								Reciept << "Address: Granstreet BelwarBlvd 1124" << endl;
								Reciept << "415-667-1978" << endl;
								Reciept << "********************************************" << endl;
								Reciept << "R	e	c	i	e	p	t" << endl;
								Reciept << "********************************************" << endl;
								Reciept << "Items Ordered" << endl;
								Reciept << "                   " << endl;
								for (int i = 0; i < COCV + 1; i++)
								{
									Reciept << CompleteOrder[i] << endl;
								}

								Reciept << "Total Amount: " << FoodValue << endl;
								Reciept << "Cash: " << cash << endl;
								Reciept << "---------------------------------- "  << endl;
								Reciept << "*************THANK YOU****************"  << endl;
								Reciept.close();

								int done = 0;


								while (done != 1)
								{
									cout << "Reciept printed. Please enter 1" << endl;

									cin >> done;

									while (cin.fail()) //Checks to see if a bad input is entered
									{
										cin.clear(); // clear input buffer to restore cin to a usable state
										cin.ignore(INT_MAX, '\n'); // ignore last input
										cout << "Enter 1 Please.\n";
										cin >> done;
									}
								}
								 FoodValue = 0;
								for (int i = 0; i < 100; i++)
								{
									CompleteOrder[i].clear();
								}

								MenuChecker = true;
								finalchecker = true;
							}

							else if (cash > FoodValue)
							{
								double change;

								change = cash - FoodValue;

								cout << "Thank you for again for your business " << finalordername << endl;
								cout << "Your Change is: " << change <<  endl;
								cout << "Your Reciept is being printed " << endl;

								ofstream Reciept;

								Reciept.open(finalordername + ".txt");

								Reciept << "Grandma BlueBerrys Cafe" << endl;
								Reciept << "Address: Granstreet BelwarBlvd 1124" << endl;
								Reciept << "415-667-1978" << endl;
								Reciept << "**********************************" << endl;
								Reciept << "R	e	c	i	e	p	t" << endl;
								Reciept << "**********************************" << endl;
								Reciept << "Items Ordered" << endl;
								Reciept << "                   " << endl;
								for (int i = 0; i < COCV + 1; i++)
								{
									Reciept << CompleteOrder[i] << endl;
								}
								 
								Reciept << "Total Amount: " << FoodValue << endl;
								Reciept << "Cash: " << cash << endl;
								Reciept << "Change: " << change << endl;
								Reciept << "---------------------------------- " <<  endl;
								Reciept << "*************THANK YOU****************" << endl;
								Reciept.close();

								int done = 0;
							

								while (done != 1)
								{
									cout << "Reciept printed. Please enter 1" << endl;

									cin >> done;

									while (cin.fail()) //Checks to see if a bad input is entered
									{
										cin.clear(); // clear input buffer to restore cin to a usable state
										cin.ignore(INT_MAX, '\n'); // ignore last input
										cout << "Enter 1 Please.\n";
										cin >> done;
									}
								}

								FoodValue = 0;
								for (int i = 0; i < 100; i++)
								{
									CompleteOrder[i].clear();
								}
								MenuChecker = true;
								finalchecker = true;
							}
						}
						
						if (moneychoice == 2)
						{
							cout << "Please enter your name" << endl;

							cin >> finalordername;

							cout << "Thank you for placing your order " << finalordername << endl;

							string credit;
							cout << "Your order total comes out to: " << FoodValue << endl;
							cout << "Please enter your credit card number" << endl;
							cin >> credit;

							if (credit.length() < 15 || credit.length() > 19)
							{
								cout << "Invalid cash amount" << endl;
								finalchecker = false;
							}

							else 
							{
								cout << "Thank you for again for your business " << finalordername << endl;
								cout << "Your Reciept is being printed " << finalordername << endl;

								ofstream Reciept;

								Reciept.open(finalordername + ".txt");

								Reciept << "Grandma BlueBerrys Cafe" << endl;
								Reciept << "Address: Granstreet BelwarBlvd 1124" << endl;
								Reciept << "415-667-1978" << endl;
								Reciept << "********************************************" << endl;
								Reciept << "R	e	c	i	e	p	t" << endl;
								Reciept << "********************************************" << endl;
								Reciept << "Items Ordered" << endl;
								Reciept << "                   " << endl;
								for (int i = 0; i < COCV + 1; i++)
								{
									Reciept << CompleteOrder[i] << endl;
								}

								Reciept << "Total Amount: " << FoodValue << endl;
								Reciept << "Credit Card# " << credit << endl;
								Reciept << "---------------------------------- " << FoodValue << endl;
								Reciept << "*************THANK YOU****************" << FoodValue << endl;
								Reciept.close();

								int done = 0;


								while (done != 1)
								{
									cout << "Reciept printed. Please enter 1" << endl;

									cin >> done;

									while (cin.fail()) //Checks to see if a bad input is entered
									{
										cin.clear(); // clear input buffer to restore cin to a usable state
										cin.ignore(INT_MAX, '\n'); // ignore last input
										cout << "Enter 1 Please.\n";
										cin >> done;
									}
								}

								FoodValue = 0;
								for (int i = 0; i < 100; i++)
								{
									CompleteOrder[i].clear();
								}
								MenuChecker = true;
								finalchecker = true;
							}
						}

						if (moneychoice == 3)
						{
							finalchecker = true;
						}
					}
					
				}
#pragma endregion
			}
			
		}
#pragma endregion	

#pragma region Employee
		if (choice == 2)
		{

			bool EmployeeChecker = false;

			while (EmployeeChecker == false)
			{
				system("CLS");
				cout << "Press 1 to sign in" << endl;
				cout << "Press 2 to pull up a Reciept (Must be signed in)" << endl;
				cout << "Press 3 to log out" << endl;
				cout << "Press 4 to return to main menu" << endl;
				int EmpChoiceCheck;

				cin >> EmpChoiceCheck;

#pragma region Login
				if (EmpChoiceCheck == 1)
				{
					if (Employeeclearence == true || AdminClearence == true)
					{
						system("CLS");
						cout << "An Employee or Admin is already logged in" << endl;
						cout << "Please log out first to log in as another user" << endl;
						string choice;
						cout << "Press any button to continue" << endl;
						cin >> choice;
						continue;
					}
					cout << "Please Enter your Employee name" << endl;
					cin >> empname;

					cout << "Please enter your employee ID " << endl;

					cin >> empid;

					while (cin.fail()) //Checks to see if a bad input is entered
					{
						cin.clear(); // clear input buffer to restore cin to a usable state
						cin.ignore(INT_MAX, '\n'); // ignore last input
						cout << "You can only enter a number for your ID.\n";
						cout << "Enter your ID Please.\n";
						cin >> empid;
					}
					
					Employeeclearence = E.LoginCheck(empname, empid);


					if (Employeeclearence == true)
					{
						cout << "Welcome back " << empname << endl;
						EmployeeChecker = true;
					}

					else if(empid == 0)
					{
						cout << "Invalid username and password" << endl;
						string choice;
						cout << "Press any button to continue" << endl;
						cin >> choice;
						EmployeeChecker = false;
						Employeeclearence = false;
					}

					else
					{
						cout << "Invalid username and password" << endl;
						string choice;
						cout << "Press any button to continue" << endl;
						cin >> choice;
						EmployeeChecker = false;
						Employeeclearence = false;
					}
					
				}
#pragma endregion
#pragma region Reciept Puller
				if (EmpChoiceCheck == 2 && Employeeclearence == true)
				{
					string filename;
					cout << "RecieptSearch" << endl;
					cout << "--------------" << endl;
					cout << "Please enter a customer name in order to find a reciept" << endl;
					cin >> filename;
					while (cin.fail()) //Checks to see if a bad input is entered
					{
						cin.clear(); // clear input buffer to restore cin to a usable state
						cin.ignore(INT_MAX, '\n'); // ignore last input
						cout << "You can only enter a name.\n";
						cout << "You can only enter a name.\n";
						cin >> filename;
					}

					std::string myText;

					std::ifstream MyReadFile(filename + ".txt");

					if (MyReadFile.fail()) {
						cout << "Reciept does not exist" << endl;
						string choice;
						cout << "Press any button to continue" << endl;
						cin >> choice;
						continue;
					}
					system("CLS");
					while (getline(MyReadFile, myText)) {

						cout << myText << endl;
					}

					cout << " " << endl;

					string choice;
					cout << "Press any button to continue" << endl;
					cin >> choice;


					MyReadFile.close();
					
					EmployeeChecker = false;
				}
#pragma endregion

#pragma region Logout
				if (EmpChoiceCheck == 3)
				{
					 Employeeclearence = false;
					EmployeeChecker = true;
				}
#pragma endregion

#pragma region ReturnToMainMenu
				if (EmpChoiceCheck == 4)
				{
					EmployeeChecker = true;
				}
			}
#pragma endregion
							
		}


#pragma endregion

#pragma region Administrator
		if (choice == 3)
		{
			bool AdminCheck = false;

			while (AdminCheck == false)
			{
				system("CLS");
				cout << "Press 1 to sign in (Must be signed out)" << endl;
				cout << "Press 2 to create an Employee (Must be signed in)" << endl;
				cout << "Press 3 to logout" << endl;
				cout << "Press 4 to return to main menu" << endl;
				int AdminChoice = 0;

				cin >> AdminChoice;

				if (AdminChoice == 1)
				{
					if (AdminClearence == true || Employeeclearence == true)
					{
						system("CLS");
						cout << "An Admin or Employee is already logged in" << endl;
						cout << "Please log out first to log in as another user" << endl;
						string choice;
						cout << "Press any button to continue" << endl;
						cin >> choice;
						continue;
					}
					cout << "Please enter your Name" << endl;
					cin >> AdminName;

					cout << "Please enter your ID" << endl;

					cin >> AdminId;

					while (cin.fail()) //Checks to see if a bad input is entered
					{
						cin.clear(); // clear input buffer to restore cin to a usable state
						cin.ignore(INT_MAX, '\n'); // ignore last input
						cout << "You can only enter a number for your ID.\n";
						cout << "Enter your ID Please.\n";
						cin >> AdminId;
					}

					AdminClearence = A.LoginCheck2(AdminName, AdminId);

					if (AdminClearence == true)
					{
						cout << "Login Successful " << endl;
						cout << "Welcome back " << AdminName << endl;
						AdminCheck = true;

					}
					else
					{
						cout << "Login Unsuccessful. Admin does not exist" << endl;

						cout << "Press 1 to continue" << endl;

						int concat = 0;

						cin >> concat;

						while (cin.fail()) //Checks to see if a bad input is entered
						{
							cin.clear(); // clear input buffer to restore cin to a usable state
							cin.ignore(INT_MAX, '\n'); // ignore last input
							cout << "Please enter 1.\n";

							cin >> concat;
						}

						AdminCheck = false;
					}
				}

				if (AdminChoice == 2 && AdminClearence == true)
				{
					string newemp;
					int newempid;
					system("CLS");
					cout << "EmployeeCreation" << endl;
					cout << "-----------------" << endl;

					cout << "Please enter the New Employees name" << endl;
					cin >> newemp;

					cout << "Please enter the New Employees ID" << endl;
					cin >> newempid;

					while (cin.fail()) //Checks to see if a bad input is entered
					{
						cin.clear(); // clear input buffer to restore cin to a usable state
						cin.ignore(INT_MAX, '\n'); // ignore last input
						cout << "You can only enter a number for a new ID.\n";
						cout << "Please enter the New Employees ID\n";
						cin >> newempid;
					}

					string completion = A.EmployeeCreation(newemp, newempid);

					cout << "Account creation sucessful" << endl;
					cout << "Employee " << completion << "Has Been created" << endl;


				}
				
				if (AdminChoice == 3)
				{
					AdminClearence = false;
					AdminCheck = true;
				}

				if (AdminChoice == 4)
				{
					AdminCheck = true;
				}
			}

		}
#pragma endregion
#pragma region Exit
		if (choice == 4)
		{
			exit(0);
		}
#pragma endregion 
		



	}


}