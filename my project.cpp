//This is a Quiz Management System, It contains quizes for various subjects...!!!
#include<iostream>
#include<conio.h>
using namespace std;
void main_page(),pakgk(),computer(),english(),islamic(),worldgk();
main()
{
 	system("COLOR F0");
	 int id;
	 string pwd;
	 cout<<"\n\n\n";
	 cout<<"\t\t\t\t\t:: Enter Your ID and Password::\n\n\n";
	cout<<"\t\t\t\t\t\t ID: ";
	cin>>id;
	cout<<"\n\n\t\t\t\t\t\t PASSWORD: ";
	cin>>pwd;
	if(id==1122 && pwd=="salam"||pwd=="SALAM")
	{
		system("cls");
		cout<<"\t\t\t\t\t\tWELCOME TO MY PROJECT \n  "<<endl;
		main_page();
	}
	else if(id==1111&&pwd=="ihsan"||pwd=="IHSAN")
	{
		system("cls");
		cout<<"\t\t\t\t\t\tWELCOME TO MY PROJECT \n  "<<endl;
	main_page();
	}
	
	else
	{
		system("cls");
		system("COLOR C9");
		cout<<"\n\n\t\t\tplease! enter correct id and password ???\n";
	}
}
void main_page()

{
	cout<<"\t\t\t\t\t\t THIS IS MAIN PAGE \n";
	cout<<"\t\t\t\t__________________________________________________________\n\n";
	cout<<"\t\t\t\tNAME: ABDUL SALAM\tHAMZA ARSHID\tIHSAN ULLAH"<<endl;
	cout<<"\t\t\t\t__________________________________________________________\n"<<endl;
	cout<<"\t\t\t\tInstitute: abbottabad university of science and technology"<<endl;
	cout<<"\t\t\t\t__________________________________________________________\n\n";
	string a;
	cout<<"\t\t\t\t Select Page number to start desired subject's quiz \n"<<endl;
	cout<<"\t\t\t\t__________________________________________________________\n\n"<<endl;
	cout<<"\t\t\t\t\t\t ======================\n";
	cout<<"\t\t\t\t\t\t (1) for  pak GK\n";
	cout<<"\t\t\t\t\t\t ======================\n";
	cout<<"\t\t\t\t\t\t (2) for computer\n";
	cout<<"\t\t\t\t\t\t ======================\n";
	cout<<"\t\t\t\t\t\t (3) for english\n";
	cout<<"\t\t\t\t\t\t ======================\n";
	cout<<"\t\t\t\t\t\t (4) for islamic\n";
	cout<<"\t\t\t\t\t\t ======================\n";
	cout<<"\t\t\t\t\t\t (5) world GK \n";
	cout<<"\t\t\t\t\t\t ======================\n";
	cout<<"\t\t\t\t\t\t (6) exit program\n";
	cout<<"\t\t\t\t\t\t =======================\n\n";
	cout<<"\t\t\t\t\t\tenter your favorite quize no :";
	cin>>a;
	 if(a=="1")
	{
		system("cls");
		system("COLOR F0");
		pakgk();

	}
		else if(a=="2")
	{
		system("cls");
				system("COLOR F0");
		computer();
	}
		else if(a=="3")
	{
		system("cls");
				system("COLOR F0");
		english();
	}
		else if(a=="4")
	{
		system("cls");
				system("COLOR F0");
		islamic();
	}
		else if(a=="5")
	{
		system("cls");
				system("COLOR F0");
		worldgk();
	}
	else if(a=="6")
	{
		system("cls");
		system("COLOR F0");
		system ("exit");
	}

	else
	{
		system("cls");
		system("COLOR C9");
		cout<<" \t\t\t\t\t\t  Wrong Page Number\n\n";
	main_page();
	}

}
void pakgk()
{
	cout<<"you have selected the pak GK mcqs quiz\n\n";
	int marks;
	char option;
	string a;
	cout<<"\t\tQuiz Started\n\n";
	cout<<"\t\tQuestion 1\n";
	cout<<"WHO IS THE CURRENT PRIME MINISTER\n";
	cout<<" A. IMRAN KHAN \n B. NAWAZ SHARIF  \n C. BILAWAL BUTTO  \n D. ASIF ZARDARI \n";
	cin>>option;
	if(option=='a'||option=='A')
	{
		cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	cout<<"\t\tQuestion 2\n";
		cout<<"WHO IS THE CURRENT PROVINCIAL MINISTER FOR ENVIRONMENT PROTECTION IN PUNJAB"<<endl;
		cout<<" A.MUHAMMAD RIZWAN \n B.IJAZ MASIG \n C.ASLAM IQBAL \n D.MALIK MUHAMMAD ANWER"<<endl;
	cin>>option;
		if(option=='a'||option=='A')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
		
	}
	cout<<"\t\tQuestion 3\n";
		cout<<"WHO IS THE CURRENT CHAIRMAN OF THE CHINA _PAKISTAN ECONOMIC CORRIDOR AUTHORITY \n";
		cout<<" A.  Nadeem Raza \n B. Imran Khan \n C. Asim Bajwa \n D. none of these\n";
	cin>>option;
		if(option=='c'||option=='C')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	cout<<"\t\tQuestion 4\n";
		cout<<"who is our national poet\n";
		cout<<" A. quaid e azam  \n B. allama iqbal \n C. hafeez jalandri \n D.fatima ali jinnah  \n";
		cin>>option;
		if(option=='b'||option=='B')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	
	{
		cout<<"\t\tQuestion 5\n";
		cout<<"who is the founder of  pakistan "<<endl;
		cout<<" A.quaid e azam  \n B.allama iqbal  \n C.mirza saleem baig \n D.hafiz jalandri"<<endl;
	cin>>option;
		if(option=='a'||option=='A')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}	
	}
		{
		cout<<"\t\tQuestion 6\n";
		cout<<"our national animal is  "<<endl;
		cout<<" A.cow   \n B.cat  \n C.markhor \n D.dog"<<endl;
	cin>>option;
		if(option=='c'||option=='C')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option!='c'&&option!='d')
	{
		cout<<"invaid input"<<endl;
		}
	else 
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}	
}
		{
		cout<<"\t\tQuestion 7\n";
		cout<<"the national anthem is written by   "<<endl;
		cout<<" A.hafiz jalandri \n B.quaid e azam  \n C.mirza asad \n bahader shah zafar"<<endl;
	cin>>option;
		if(option=='a'||option=='A')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}	
	}
		{
		cout<<"\t\tQuestion 8\n";
		cout<<"pakistan came into being on "<<endl;
		cout<<" A.14 agust 1947 \n B.27 agust 1948  \n C.2 september 1946 \n 8 november 1954"<<endl;
	cin>>option;
		if(option=='a'||option=='A')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}	
	}
		{
		cout<<"\t\tQuestion 9\n";
		cout<<"the color of pakistan flag is  "<<endl;
		cout<<" A.red and green \n B.green and white  \n C.white and  blue \n blue and black"<<endl;
	cin>>option;
		if(option=='b'||option=='B')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}	
	}
	
		{
		cout<<"\t\tQuestion 10\n";
		cout<<"the first name of kpk was  "<<endl;
		cout<<" A.sarhad \n B.punjab  \n C.nwfp \n sindh"<<endl;
	cin>>option;
		if(option=='a'||option=='A')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}	
	}
	system("cls");
	cout<<"\t\tMarks are: "<<marks;
	cout<<"\n\n";
	float percentage;
	percentage=marks*100/100;
	cout<<"\t\tPercentage is: "<<percentage<<"%";
	if(percentage>=50)
	{
		system("COLOR 2F");
		cout<<"\n\n\t\tYou have Passed the quiz\n";
	}
	else if(percentage<50)
	{
		system("COLOR C9");
		cout<<"\n\n\t\tYou have Failed the quiz\n";
	}
	cout<<"\n\n";
	cout<<"\t\t\t\t\t Enter m for Main Page \n\n";
	cout<<"\t\t\t\t\t Enter \"E\" or \"e\" for System Exit \n\n";
	cin>>a;
	if(a=="m"|| a=="M")
	{
	system("cls");
	system("COLOR F0");
	main_page();
	}
	else if(a=="e" || a=="E")
	{
		system("cls");
		cout<<"Exit Success...!!!";
		system("COLOR C");
		system(0);
	}
	else
	{
		
		system("cls");
		cout<<"\n\t\tYou have entered a wrong option \n\n";
		system("COLOR F0");
	main_page();
	}
	
	
}

void computer()
{
cout<<"you have selected the computer mcqs quiz\n\n";
	int marks;
	char option;
	string a;
	cout<<"\t\tQuiz Started\n\n";
	cout<<"\t\tQuestion 1\n";
	cout<<"The term 'Computer' is derived from\n";
	cout<<" A.Latin  \n B. greek \n C. english \n D. urdu \n";
	cin>>option;
	if(option=='a'||option=='A')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	cout<<"\t\tQuestion 2\n";
		cout<<"Who is the father of Computer\n";
		cout<<" A.Allen Turing  \n B. charles babbage \n C. Simur Cray  \n D.none \n";
	cin>>option;
		if(option=='b'||option=='B')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	cout<<"\t\tQuestion 3\n";
		cout<<"CD-ROM stands for \n";
		cout<<" A.Compactable Read Only Memory \n B. Compact Data Read Only Memory  \n C. Compactable Disk Read Only Memory  \n D. none \n";
	cin>>option;
		if(option=='a'||option=='A')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	cout<<"\t\tQuestion 4\n";
		cout<<"ALU stands for\n";
		cout<<" A. 	Arithmetic Logic Unit  \n B. Array Logic Unit  \n C.Application Logic Unit  \n D. none \n";
		cin>>option;
		if(option=='a'||option=='A')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
		cout<<"\t\tQuestion 5\n";
		cout<<"cu stands for\n";
		cout<<" A. 	count system \n B.counter loop  \n C.control unit  \n D. none \n";
		cin>>option;
		if(option=='c'||option=='C')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
		cout<<"\t\tQuestion 6\n";
		cout<<"VGA stands for\n";
		cout<<" A. video graphic array  \n B. Array Logic Unit  \n C.Application Logic Unit  \n D. none \n";
		cin>>option;
		if(option=='a'||option=='A')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	cout<<"\t\tQuestion 7\n";
		cout<<"WAN stands for \n";
		cout<<" A. 	Wap Area Network   \n B. Wide Area Network  \n C.	Wide Array Net   \n D. none \n";
		cin>>option;
		if(option=='b'||option=='B')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	cout<<"\t\tQuestion 8\n";
		cout<<"A computer cannot 'boot' if it does not have the  \n";
		cout<<" A. 	Compiler  \n B.	Operating System   \n C.Assembler  \n D. none \n";
		cin>>option;
		if(option=='b'||option=='B')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
		cout<<"\t\tQuestion 9\n";
		cout<<"Which of the following is a storage device \n";
		cout<<" A. 	Tape  \n B.	Hard Disk  \n C.Floppy Disk   \n D. All of the above  \n";
		cin>>option;
		if(option=='d'||option=='D')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	cout<<"\t\tQuestion 10\n";
		cout<<"a one gb is equal to  \n";
		cout<<" A. 	1024 mb  \n B.	1024 kb  \n C.1000 mb  \n D. All of the above  \n";
		cin>>option;
		if(option=='a'||option=='A')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	
	system("cls");
	cout<<"\t\tMarks are: "<<marks;
	cout<<"\n\n";
	float percentage;
	percentage=marks*100/100;
	cout<<"\t\tPercentage is: "<<percentage;
	if(percentage>=50)
	{
		system("COLOR 2F");
		cout<<"\n\n\t\tYou have Passed the quiz\n";
	}
	else if(percentage<50)
	{
		system("COLOR C7");
		cout<<"\n\n\t\tYou have Failed the quiz\n";
	}
	cout<<"\n\n";
	cout<<"\t\t\t\t\t Enter m for Main Page \n\n";
	cout<<"\t\t\t\t\t Enter \"E\" or \"e\" for System Exit \n\n";
	cin>>a;
	if(a=="m"|| a=="M")
	{
	system("cls");
	system("COLOR F0");
	main_page();
	}
	else if(a=="e" || a=="E")
	{
		system("cls");
		cout<<"Exit Success...!!!";
		system("COLOR C");
		system(0);
	}
	else
	{
		
		system("cls");
		cout<<"\n\t\tYou have entered a wrong option \n\n";
		system("COLOR F0");
		main_page();
	}
	
	
}

void english()
{

	cout<<"you have selected the english mcqs quiz\n\n";
	int marks;
	char option;
	string a;
	cout<<"\t\tQuiz Started\n\n";
	cout<<"\t\tQuestion 1\n";
	cout<<"The food is very good_______that restaurant.\n";
	cout<<" A. in \n B. at  \n C. with \n D. of \n";
	cin>>option;
	if(option=='a'||option=='A')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	cout<<"\t\tQuestion 2\n";
		cout<<"The words in these books will be of value_________ you.\n";
		cout<<" A. for  \n B. to \n C. on \n D. none \n";
	cin>>option;
		if(option=='b'||option=='B')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	cout<<"\t\tQuestion 3\n";
		cout<<"Synonym of Intrepid is _______?\n";
		cout<<" A.timid \n B. bold\n C. lazy \n D. affable \n";
	cin>>option;
		if(option=='a'||option=='A')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	cout<<"\t\tQuestion 4\n";
		cout<<"Synonym of Dearth is _____________?\n";
		cout<<" A. necessity \n B. abundance \n C. lack \n D. luck \n";
		cin>>option;
		if(option=='c'||option=='C')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	cout<<"\t\tQuestion 5\n";
		cout<<"Synonym of Doleful is_______?\n";
		cout<<" A. sad \n B. famous \n C. nice \n D. luck \n";
		cin>>option;
		if(option=='a'||option=='A')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	cout<<"\t\tQuestion 6\n";
		cout<<"He belongs________ a noble family.\n";
		cout<<" A. to \n B. in \n C.the \n D. on \n";
		cin>>option;
		if(option=='a'||option=='A')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	cout<<"\t\tQuestion 7\n";
		cout<<"When I was sleeping, she ________ playing the sitar .\n";
		cout<<" A. must be \n B. must  \n C.was\n D. on \n";
		cin>>option;
		if(option=='c'||option=='C')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
		cout<<"\t\tQuestion 8\n";
		cout<<"Clique” means____________?\n";
		cout<<" A. a group of animal B. a group of people \n C.a group of birds\n D. none \n";
		cin>>option;
		if(option=='b'||option=='B')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
		cout<<"\t\tQuestion 9\n";
		cout<<"synonam of rowdy is\n";
		cout<<" A. bad man B. a crowd \n C.noise and disorderly\n D. none \n";
		cin>>option;
		if(option=='c'||option=='C')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
		cout<<"\t\tQuestion 10\n";
		cout<<"what is the meaning of jargon\n";
		cout<<" A. terminology B. a crowd \n C.spirit\n D. none \n";
		cin>>option;
		if(option=='a'||option=='A')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	system("cls");
	cout<<"\t\tMarks are: "<<marks;
	cout<<"\n\n";
	float percentage;
	percentage=marks*100/100;
	cout<<"\t\tPercentage is: "<<percentage;
	if(percentage>=50)
	{
		system("COLOR 2F");
		cout<<"\n\n\t\tYou have Passed the quiz\n";
	}
	else if(percentage<50)
	{
		system("COLOR C7");
		cout<<"\n\n\t\tYou have Failed the quiz\n";
	}
	cout<<"\n\n";
	cout<<"\t\t\t\t\t Enter m for Main Page \n\n";
	cout<<"\t\t\t\t\t Enter \"E\" or \"e\" for System Exit \n\n";
	cin>>a;
	if(a=="m"|| a=="M")
	{
	system("cls");
	system("COLOR F0");
main_page();
	}
	else if(a=="e" || a=="E")
	{
		system("cls");
		cout<<"Exit Success...!!!";
		system("COLOR C");
		system(0);
	}
	else
	{
		
		system("cls");
		cout<<"\n\t\tYou have entered a wrong option \n\n";
		system("COLOR F0");
	main_page();
	}
}

void islamic()
{
	cout<<"you have selected the islamic mcqs quiz\n\n";
	int marks;
	char option;
	string a;
	cout<<"\t\tQuiz Started\n\n";
	cout<<"\t\tQuestion 1\n";
	cout<<" the total numbers of Surah in Holy Quran:\n";
	cout<<" A. 113 \n B. 115 \n C. 216 \n D.114 \n";
	cin>>option;
	if(option=='d'||option=='D')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	cout<<"\t\tQuestion 2\n";
		cout<<"There are ____ Makki Surahs in Holy Quran\n";
		cout<<" A. 86 \n B. 87 \n C. 80 \n D. 76 \n";
	cin>>option;
		if(option=='a'||option=='A')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	cout<<"\t\tQuestion 3\n";
		cout<<"There are ____ Madni Surahs in Holy Quran\n";
		cout<<" A. 38 \n B. 28 \n C. 30 \n D. 34 \n";
	cin>>option;
		if(option=='b'||option=='B')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<endl
		marks=marks;
	}
	cout<<"\t\tQuestion 4\n";
		cout<<"The longest Surah in Holy Quran is\n";
		cout<<" A.Surah-e-Al Imran \n B.  Surah-e-Al Baqarah \n C.  Surah-e-Yousuf \n D. Surah-e- Maryam\n";
		cin>>option;
		if(option=='b'||option=='B')
	{
			cout<<"correct answer"<<endl
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
		cout<<"\t\tQuestion 5\n";
		cout<<"verses were reveled in the first wahi\n";
		cout<<" A.5 \n B. 7 \n C. 8 \n D. 3\n";
		cin>>option;
		if(option=='a'||option=='A')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	cout<<"\t\tQuestion 6\n";
		cout<<"The number of Ayats in Holy Quran are\n";
		cout<<" A.7777 \n B. 8888 \n C. 6666 \n D. 9999\n";
		cin>>option;
		if(option=='c'||option=='C')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	cout<<"\t\tQuestion 7\n";
		cout<<"Who was the first Hafiz Quran among Sahaba\n";
		cout<<" A.Hazrat Abu Bakar (R.A) \n B. Hazrat Umer (R.A) \n C. Hazrat Zaid (R.A) \n D.Hazrat Usman Ghani (R.A)\n";
		cin>>option;
		if(option=='d'||option=='D')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	cout<<"\t\tQuestion 8\n";
		cout<<"Gap between first wahy and second wahy was _____ months\n";
		cout<<" A.4\n B. 6 \n C. 8 \n D.7\n";
		cin>>option;
		if(option=='b'||option=='B')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	cout<<"\t\tQuestion 9\n";
		cout<<" Ghazawahs described in Holy Quran\n";
		cout<<" A.14\n B. 16 \n C. 12 \n D.17\n";
		cin>>option;
		if(option=='c'||option=='C')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
		cout<<"\t\tQuestion 10\n";
		cout<<" How many Surah in Holy Quran started with the word Qul\n";
		cout<<" A.14\n B. 16 \n C. 5 \n D.17\n";
		cin>>option;
		if(option=='c'||option=='C')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	system("cls");
	cout<<"\t\tMarks are: "<<marks;
	cout<<"\n\n";
	float percentage;
	percentage=marks*100/100;
	cout<<"\t\tPercentage is: "<<percentage;
	if(percentage>=50)
	{
		system("COLOR 2F");
		cout<<"\n\n\t\tYou have Passed the quiz\n";
	}
	else if(percentage<50)
	{
		system("COLOR C7");
		cout<<"\n\n\t\tYou have Failed the quiz\n";
	}
	cout<<"\n\n";
	cout<<"\t\t\t\t\t Enter m for Main Page \n\n";
	cout<<"\t\t\t\t\t Enter \"E\" or \"e\" for System Exit \n\n";
	cin>>a;
	if(a=="m"|| a=="M")
	{
	system("cls");
	system("COLOR F0");
main_page();
	}
	else if(a=="e" || a=="E")
	{
		system("cls");
		cout<<"Exit Success...!!!";
		system("COLOR C");
		system(0);
	}
	else
	{
		
		system("cls");
		cout<<"\n\t\tYou have entered a wrong option \n\n";
		system("COLOR F0");
main_page();
	}

}

void worldgk()
{
	cout<<"you have selected the world general knowledge  mcqs quiz\n\n";
	int marks;
	char option;
	string a;
	cout<<"\t\tQuiz Started\n\n";
	cout<<"\t\tQuestion 1\n";
	cout<<"The United Nations was founded on \n";
	cout<<" A.March 24, 1945 \n B.October 24, 1945 \n C.March 24, 1949 \n D.October 24, 1950 \n";
	cin>>option;
	if(option=='b'||option=='B')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	cout<<"\t\tQuestion 2\n";
		cout<<"	Which country from the following is NOT the member of UNO?\n";
		cout<<" A. Vatican City \n B. Afghanistan\n C. North Korea \n D. Vaitnam \n";
	cin>>option;
		if(option=='a'||option=='A')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	cout<<"\t\tQuestion 3\n";
		cout<<"	The International Court of Justice is located in\n";
		cout<<" A.New York \n B. Washigton \n C. Geneva \n D. The Hague \n";
	cin>>option;
		if(option=='d'||option=='D')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	cout<<"\t\tQuestion 4\n";
		cout<<"There are __________ members of SAARC.\n";
		cout<<" A.5 \n B.6 \n C.7\n D.9 \n";
		cin>>option;
		if(option=='c'||option=='C')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	cout<<"\t\tQuestion 5\n";
		cout<<"There are _________ non-permanent members of the security council\n";
		cout<<" A.5 \n B.10 \n C.7\n D.9 \n";
		cin>>option;
		if(option=='b'||option=='B')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	cout<<"\t\tQuestion 6\n";
		cout<<"	The currency of Indonesia is \n";
		cout<<" A.rupiah \n B.dinar \n C.dollar\n D.pond \n";
		cin>>option;
		if(option=='a'||option=='A')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	cout<<"\t\tQuestion 7\n";
		cout<<"	The motto of UNO is \n";
		cout<<" A.It's your world! \n B.Life for All!\n C.Peace!\n D.Love and Peace!\n";
		cin>>option;
		if(option=='a'||option=='A')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	cout<<"\t\tQuestion 8\n";
		cout<<"	The world's highest mountain is in  \n";
		cout<<" A.China \n B.Pakistan\n C.Nepal\n D.India\n";
		cin>>option;
		if(option=='c'||option=='C')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	cout<<"\t\tQuestion 9\n";
		cout<<"	Which from the following countries is NOT a member of D-8? \n";
		cout<<" A.China \n B.Pakistan\n C.Nepal\n D.India\n";
		cin>>option;
		if(option=='d'||option=='D')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
		cout<<"\t\tQuestion 10\n";
		cout<<"	The largest ocean of the world is \n";
		cout<<" A.atlantic \n B.pacific\n C.dark ocean\n D.India\n";
		cin>>option;
		if(option=='b'||option=='B')
	{
			cout<<"correct answer"<<endl;
		marks=marks+10;
	}
	else if(option!='a'&&option!='b'||option=='c'&&option!='d')
	{
		cout<<"invalid input"<<endl;
	}
	else
	{
		cout<<"wrong answer"<<endl;
		marks=marks;
	}
	system("cls");
	cout<<"\t\tMarks are: "<<marks;
	cout<<"\n\n";
	float percentage;
	percentage=marks*100/100;
	cout<<"\t\tPercentage is: "<<percentage;
	if(percentage>=50)
	{
		system("COLOR 2F");
		cout<<"\n\n\t\tYou have Passed the quiz\n";
	}
	else if(percentage<50)
	{
		system("COLOR C7");
		cout<<"\n\n\t\tYou have Failed the quiz\n";
	}
	cout<<"\n\n";
	cout<<"\t\t\t\t\t Enter m for Main Page \n\n";
	cout<<"\t\t\t\t\t Enter \"E\" or \"e\" for System Exit \n\n";
	cin>>a;
	if(a=="m"|| a=="M")
	{
	system("cls");
	system("COLOR F0");
	main_page();
	}
	else if(a=="e" || a=="E")
	{
		system("cls");
		cout<<"Exit Success...!!!";
		system("COLOR C");
		system(0);
	}
	else
	{
		
		system("cls");
		cout<<"\n\t\tYou have entered a wrong option \n\n";
		system("COLOR C9");
	main_page();
	}

}
