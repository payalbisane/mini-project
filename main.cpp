#include <iostream>
using namespace std;
void showmenu()
{
    cout<<"******************************************************"<<endl;
    cout<<"*************** Quiz App ****************************"<<endl;
    cout<<"******************************************************"<<endl;
    cout<<"\n\n\n\n\n";
    cout<<"1) New Quiz"<<endl;
    cout<<"2)Highest score"<<endl;
    cout<<"3)Exit"<<endl;
}


int main()
{
    string questions[5] = 
    {
    "1) Which operator is having the right to left associativity in the following?",
    "2) Which operator is having the highest precedence?",    
    "3) What is this operator called ?",
    "4) Which function is used to read a single character from the console in C++?",
    "5) Which of the following is a correct identifier in C++?",
    };
      
    string options[5] = 
    {
          
    " 1)Array subscripting   2)Function call   3)Addition and subtraction   4)Type cast",
    " 1)postfix   2)unary  3)shift  4)equality",    
    " 1)conditional   2)relational   3)casting operator   4)unrelational",
    " 1) cin.get(ch)  2)getline(ch)   3)read(ch)   4)scanf(ch)",
    " 1)7var_name   2)7VARNAME    3)VAR_1234    4)$var_name",
    };
    
    int ans[5]={4,1,1,1,3};

    string playername="ARDN";
	int highestscore=0;
	
	char ch='y';
	
	while(ch=='y')
	{
		
		int currentresult=0;
		string currentplayer;
	
		showmenu();
		int menu;
		cin>>menu;
		
		switch(menu)
		{
			case 1:
				
				cout<<"*************************************************"<<endl;
				cout<<"***************** Playing Quiz ********************"<<endl;
				cout<<"*************************************************\n\n"<<endl;
				cout<<"Enter your name: ";
				cin>>currentplayer;
				
				cout<<"\n\n";
				
				for(int i=0;i<5;i++)
				{   
				    int op;
					cout<<"\n\n"<<questions[i]<<endl;
					cout<<options[i]<<endl<<endl;
					cout<<"Enter Option: ";
					cin>>op;
					if(op==ans[i])
					{
						currentresult++;
						if(currentresult>highestscore)
						{
							highestscore=currentresult;
							playername=currentplayer;
						}
					}
				}
				cout<<"\n\n your score: "<<currentresult<<endl;
				
			break;
			
			case 2:
				cout<<" Highest score is "<<highestscore<<" By "<<playername<<endl;
			break;
			case 3:
				cout<<"Thank you for using Quiz App !..";
				exit(0);
			break;
			
			default:
				cout<<"wrong selection";
		}
		
		cout<<"\n\n Do you want to continue y/n ?";
		cin>>ch;
	}	
}













