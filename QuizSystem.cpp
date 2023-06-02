#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;

//functions outside the main  are global variable
// we will discuss global variables later

void loadData(); //Don't bother about this code, you will learn it later.

const int qsize = 20; //Maximum number of questions
const int usize = 5;  //Maximum number of users
//variable area
bool qflag[qsize];    //use this array to check whether an element exist on an index or not.
string question[qsize];
string option1[qsize];
string option2[qsize];
string option3[qsize];
string option4[qsize];
string correctOption[qsize];

bool uflag[usize];     //use this array to check whether an element exist on an index or not.
string username[usize];
string passwords[usize];
int scores[usize];    //array will be used to save the score attempted.

int main()
{

    string user;
    string pwd;
    bool userSearchFlag = false;

    int input;

    int loggedInUserType = -10; //1 for administrator, 2 for user

    //TODO-- Initializtion of all arrays
    //assign an intial values to all arrays here.
    for(int i = 0; i < qsize; i++)
    {
        question[i]=" ";
        option1[i]=" ";
        option2[i]=" ";
        option3[i]=" ";
        option4[i]=" ";
        correctOption[i]=" ";
        qflag[i]=false;
    }
    for(int i = 0;i < usize; i++)
    {
        username[i]=" ";
        passwords[i]=" ";
        scores[i]=0;
        uflag[i]=false;
    }




    

    loadData();   //Don't bother about this code, you will learn it later.

    //program header
    cout << "***************************************************************\n";
    cout << "                     Quiz System                               \n";
    cout << "***************************************************************\n";
   

    do
    {
        cout << endl;
        cout << "Choose the desired option\n";
        cout << left << setw(10) << "\t"
             << setw(25) << "1. Administrator Login"
             << setw(25) << "2. User Login"
             << setw(25) << "0. Exit";
        cout << endl;

        cout.unsetf(ios::left);
        cout.unsetf(ios::right);

        cout << "\tChoose an option: ";
        cin >> input;
        cout << endl;

        switch (input)
        {

        case 1:
            cout << "Enter the username: ";
            cin >> user;

            cout << "Enter Password: ";
            cin >> pwd;

            if (user == "Administrator" && pwd == "PF2020")
                loggedInUserType = 1;
            else
                loggedInUserType = -1;
            break;
        case 2:
            cout << "Enter the username: ";
            cin >> user;

            cout << "Enter Password: ";
            cin >> pwd;
            //write code to search user from user list


            if (userSearchFlag == true)
            {
                loggedInUserType = 2;
            }
            else
            {
                loggedInUserType = -1;
            }
            break;
        case 0:
            loggedInUserType = -10;
            cout << "Thank you for using system;" << endl;
            break;

        default:
            cout << "Invalid choice!!!";
            break;
        }

        if (loggedInUserType == 1) //administrator
        {
            do
            {
                cout << endl;
                cout << "Choose the desired option\n";
                cout << left << setw(20) << "\tQuestions"
                     << setw(15) << "1. Add"
                     << setw(15) << "2. Delete"
                     << setw(15) << "3. Update"
                     << setw(15) << "4. List";
                cout << endl;

                cout << setw(20) << "\tUsers"
                     << setw(15) << "5. Register"
                     << setw(15) << "6. Edit"
                     << setw(15) << "7. Delete"
                     << setw(15) << "8. List"
                     << endl;

                cout << left << setw(20) << "\t"
                     << setw(15) << "9. View Scores"
                     << setw(15) << " "
                     << setw(15) << "0. Logout";
                cout << endl;

                cout.unsetf(ios::left);
                cout.unsetf(ios::right);

                cout << "\tChoose an option: ";
                cin >> input;

                switch (input)
                {
                case 1:
                    /* code */
                    for(int i=0;i < qsize;i++)
                    {
                        if(qflag[i]==false)
                    {
                    cout<<"enter the question: ";
                    cin.get();
                    getline(cin,question[i]);
                    cout<<"enter options: ";
                    cin>>option1[i];
                    cin>>option2[i];
                    cin>>option3[i];
                    cin>>option4[i];
                    cout<<"correctOption: ";
                    cin.get();
                    getline(cin,correctOption[i]);
                    }


                    
                    break;
                    }
                case 2:
                    /* code */
                
                    cout<< left << setw(5) <<" Q.I"
                        <<setw(44) << "question "
                        <<setw(17) << "option 1"
                        <<setw(19) << "option 2"
                        <<setw(14) << "option 3"
                        <<setw(16) << "option 4"
                        <<setw(16) <<" correct answer"<<endl;
                        cout<<"********************************************************************************************************************************************"<<endl;
                       for(int i=0;i < qsize;i++)
                       {
                        if(qflag[i]==true)
                        {
                        cout<< left << setw(5)<<" "<<i+1
                    
                            <<setw(44)<< question[i]<<" "
                            <<setw(17)<< option1[i]<<" "
                            <<setw(19)<< option2[i]<<" "
                            <<setw(14)<< option3[i]<<" "
                            <<setw(16)<< option4[i]<<" "
                            <<setw(16)<< correctOption[i]<<endl;
                        }
                    int j;
                    int num;
                    cout<<"Select the question ID( Q.I) to delete a question:2";
                    cin>>num;
                    for(int i=0;i < qsize;i++ )
                    {
                        cout<<j;
                        if(num == j)
                        {
                            qflag[i]==true;
                            cout<<"question delete successfully!"<<endl;
                            cout<< qflag[i];
                        }
                    }
                       }

                    
                        
                    

                    break;
                    
                case 3:
                    /* code */
                    
                    cout<< left << setw(5) <<" Q.I"
                        <<setw(44) << "question "
                        <<setw(17) << "option 1"
                        <<setw(19) << "option 2"
                        <<setw(14) << "option 3"
                        <<setw(16) << "option 4"
                        <<setw(16) <<" correct answer"<<endl;
                        cout<<"********************************************************************************************************************************************"<<endl;
                       for(int i=0;i < qsize;i++)
                       {
                        if(qflag[i]==true)
                        {
                        cout<< left << setw(5)<<" "<<i+1
                    
                            <<setw(44)<< question[i]<<" "
                            <<setw(17)<< option1[i]<<" "
                            <<setw(19)<< option2[i]<<" "
                            <<setw(14)<< option3[i]<<" "
                            <<setw(16)<< option4[i]<<" "
                            <<setw(16)<< correctOption[i]<<endl;
                        }
                        int m;
                        int num1;
                        cout<<"select the question ID(Q.I) to update question:1";
                        cin>>num1;
                        for(i=0;i < qsize;i++)
                        {
                            cout<<m;
                            if(num1=m)
                            {
                                qflag[i]=true;
                                cout<<"question update successfully"<<endl;
                                cout<<qflag[i];
                            }
                        }
                        }

                    break;
                case 4:
                    /* code */
                    cout<< left << setw(5) <<" Q.I"
                        <<setw(44) << "question "
                        <<setw(17) << "option 1"
                        <<setw(19) << "option 2"
                        <<setw(14) << "option 3"
                        <<setw(16) << "option 4"
                        <<setw(16) <<" correct answer"<<endl;
                        cout<<"********************************************************************************************************************************************"<<endl;
                       for(int i=0;i < qsize;i++)
                       {
                        if(qflag[i]==true)
                        {
                        cout<< left << setw(5)<<" "<<i+1
                    
                            <<setw(44)<< question[i]<<" "
                            <<setw(17)<< option1[i]<<" "
                            <<setw(19)<< option2[i]<<" "
                            <<setw(14)<< option3[i]<<" "
                            <<setw(16)<< option4[i]<<" "
                            <<setw(16)<< correctOption[i]<<endl;
                        }
                       }
                    break;
                case 5:
                    /* code */
                    
                    for(int i=0;i<5;i++)
                    {
                        cout<<"enter username"<<endl;
                        cin>>user[i];
                        cout<<"enter passwords"<<endl;
                        cin>>pwd[i];

                    
                }

                    
                    cout<<"user register successfully"<<endl;
                    
                    
                    break;

                case 6:
                    /* code */
                    int u;
                    cout<<"enter the username to update"<<endl;
                    cin>>u;
                    for(int u=0;u<20;u++)
                    {
                     cout<<"enter username"<<endl;
                     cin>>user[u];
                        cout<<"enter passwords"<<endl;
                        cin>>pwd[u];
						}
					
					cout<<"user updated successfully"<<endl;
                    
                    
                    break;
                case 7:
                    /* code */
                    
                    int d;
                    cout<<"enter the username to delete"<<endl;
                    cin>>d;
                    for(int d=0;d<20;d++)
                    {
                        
    
                            cout<<"username"<<endl;
                            cout<<"passwords"<<endl;

                        
                    }
                    cout<<"user deleted succesfully"<<endl;
                    
                    

                    break;
                case 8:
                    /* code */
                    cout<<left << setw(6) <<" U.I"
                        <<setw(28) << "Username"
                        <<setw(54) <<" Passwords"<<endl;
                        cout<<"*****************************************************************************************"<<endl;
                        for (int i=0;i<usize;i++)
                        {
                        	if(uflag[i]=true)
                        	{
                        		cout<<left<<setw(6)<<" "<<i+1
                        		    <<setw(28)<<user[i]<<" "
                        		    <<setw(54)<<pwd[i]<<" "<<endl;
							}
						}
                    break;
                case 9:
                    /* code */
                    int j;
                    int attainedmarks;
                    int obtainedmarks;
                    cout<<left<<setw(26)<<"Username"
                        <<setw(12)<<"Attained marks"
                        <<setw(25)<<"Total marks"<<endl;
                        cout<<"*****************************************************************"<<endl;
                    int username[j];
                    
                
                    int totalmarks[3];
                    for(int i=0;i<=3;i++)
                    {
					
                    cout<< question[i];
                    
                    
                    int e;
                    int choice[2];
                    cin>>choice[e];
                
                    for(e=0;e<=3;e++)
                    {
                    	if(choice[e]=choice[i])
                    	cout<<"correct answer"<<endl;
                    	
					}
					for(int j=0;j<=5;j++)
					{
					cout<<"obtainedmarks[j]";
				
				
				
					cout<<"total marks"<<endl;
					cout<<"************************************************************************"<<endl;
                    
					
				}
					break;
				
				
                case 0:
                    cout << "Administrator is logged out" << endl;
                    break;

                default:
                    cout << "Invalid choice!!!";
                    break;
                }
            } while (input != 0);
            input = -1; //this statment is to make sure that do not exit from outer loop
        }
        else if (loggedInUserType == 2) //user
        {
            cout << endl;
            cout << "Choose the desired option\n";
            cout << left << setw(10) << "\t"
                 << setw(25) << "1. Attempt Quiz"
                 << setw(25) << "2. View Score"
                 << setw(25) << "0. Logout";
            cout << endl;

            cout.unsetf(ios::left);
            cout.unsetf(ios::right);

            cout << "\tChoose an option: ";
            cin >> input;

            do
            {
                switch (input)
                {

                case 1:
                    /* code */
                    cout<<"********************************************************************"<<endl;
                    cout<<                      "QUIZ SYSTEM"                                   <<endl;
                    cout<<"********************************************************************"<<endl;
                    for(int i=0;i< usize;i++)
                    {
                    	if(uflag[i]==true)
                    	
					
					cout<<"enter a question: ";
					cin.get();
					getline(cin,question[i]);
					cout<<"enter options: ";
                    cin>>option1[i];
                    cin>>option2[i];
                    cin>>option3[i];
                    cin>>option4[i];
                    cout<<"correctOption: ";
                    cin.get();
                    getline(cin,correctOption[i]);
                    }
                    
                    break;
                case 2:
                    /* code */
					for(int i=0;i<5;i++)
                    {
                        cout<<"enter username"<<endl;
                        cin>>user[i];
                        cout<<"enter passwords"<<endl;
                        cin>>pwd[i];

                    
    

                    
                    cout<<"you have entered invalid credientials"<<endl;
                }
                    break;
                    int attainedmarks;
                 cout<<left<<setw(26)<<"Username"
                        <<setw(12)<<"Attained marks"
                        <<setw(25)<<"Total marks"<<endl;
                        cout<<"*****************************************************************"<<endl;
                    int username[i];
                    int attainedmarks[];
                    int totalmarks;
                    for(i=0;i<=3;i++)
                    cout<< question[i];
                    int e;
                    int choice[2];
                    cin>>choice[e];
                    for(e=0;e<=3;e++)
                    {
                    	if(choice[e]=choice[i])
                    	{
						
                    	cout<<"correct answer"<<endl;
                    	
					}
					int obtainedmarks;
					for(int j=0;j<=5;j++)
					cout<<"obtained marks[j]";
					
					cout<<"total marks"<<endl;
					cout<<"************************************************************************"<<endl;
                    break;
                }
                    
                    break;

                case 0:
                    cout << "You are logged out" << endl;
                    break;

                default:
                    cout << "Invalid choice!!!";
                    break;
                }

            } while (input != 0);
            input = -1; //this statment is to make sure that do not exit from outer loop
        }
        else if (loggedInUserType == -1)
        {
            cout << "You have entered invalid Credentials!!!" << endl;
        }
    } while (input != 0);

    return 0;
}

void loadData()
{
    ifstream inf1("UserList.csv");
    string line1, field1;
    vector<vector<string> > array1;
    vector<string> v1;
    string usr = "user";
    while (getline(inf1, line1))
    {
        v1.clear();
        stringstream ss(line1);
        while (getline(ss, field1, ','))
        {
            v1.push_back(field1);
        }
        array1.push_back(v1);
    }
    for (size_t i = 1; i < array1.size(); ++i)
    {
        uflag[i]=true;
        username[i] = array1[i][0];
        passwords[i] = array1[i][1];
    }
    inf1.close();

    ifstream in("QuesionsList.csv");
    string line, field;
    vector<vector<string> > array;
    vector<string> v;

    while (getline(in, line))
    {
        v.clear();
        stringstream ss(line);
        while (getline(ss, field, ','))
        {
            v.push_back(field);
        }
        array.push_back(v);
    }
    for (size_t i = 1; i < array.size(); ++i)
    {
        qflag[i] =true;
        question[i] = array[i][0];
        option1[i] = array[i][1];
        option2[i] = array[i][2];
        option3[i] = array[i][3];
        option4[i] = array[i][4];
        correctOption[i] = array[i][5];
    }
    in.close();




}
return 0;
}
