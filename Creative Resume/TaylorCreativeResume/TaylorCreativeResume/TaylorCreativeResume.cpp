// TaylorCreativeResume.cpp : Uses a menu to creatively let potential employes find out what they want to know
//04/24/2016

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


class creativeResume{
public:
	string choice;
    bool isValid;
    creativeResume();
    void contactInfo();
    void menu();
    void skills();
    void projects();
    void education();
    void workExp();
    void centerString(string line);
};
creativeResume::creativeResume()
{
  isValid=true;
}

void creativeResume::menu(){//displays menu and allows user to make a selction on what they would like to see or to exit
	if(isValid==true){
		cout<<"Want to know more about me? Input one of the numbers for the options below or \npress 6 to exit: "<<endl;
		cout<<"1.Contact Info"<<endl;
		cout<<"2.Technical Skills"<<endl;
		cout<<"3.Education"<<endl;
		cout<<"4.Professional Experience"<<endl;
		cout<<"5.Other Team Projects"<<endl;
		cin>>choice;
	}
	else{
		cout<<"I'm sorry but your selection was invalid. Please try again."<<endl;
		cout<<"Would you like to know more about me? Input one of the numbers for the options below or press 6 to exit: "<<endl;
		cout<<"1.Contact Info"<<endl;
		cout<<"2.Technical Skills"<<endl;
		cout<<"3.Education"<<endl;
		cout<<"4.Professional Experience"<<endl;
		cout<<"5.Other Team Projects"<<endl;
		cin>>choice;

	}
}
void creativeResume::contactInfo(){//displays my contact info
	cout<<"\nAlison Taylor"<<endl;
	cout<<"540-419-6436"<<endl;
    cout<<"taylorakt1993@gmail.com"<<endl;
	cout << "1535 N 1st St, Apt D" << endl;
	cout << "San Jose, CA 95112" << endl;
	cout<<"\n";
    menu();



}
void creativeResume::skills(){//displays my list of skills
  string title="Technical/Relevant Skills:";
  centerString(title);
  cout<<"\nLanguages: "<<endl;
  cout<<"C#"<<endl;
  cout<<"C++"<<endl;
  cout << "Java" << endl;
  cout << "Python" << endl;
  cout << "SQL" << endl;
  cout << "MySQL" << endl;
  cout << "Access SQL" << endl;
  cout << "JavaScript" << endl;
  cout << "XML" << endl;
  cout<< "Lua" << endl;
  cout << "HTML/CSS" << endl;
  cout<<"Visual Basic"<<endl;
  cout<<"ActionScript"<<endl;
  cout<<"\n";
  cout<<"IDES: "<<endl;
  cout<<"Visual Studio"<<endl;
  cout<<"MonoDevelop"<<endl;
  cout << "Eclispe" << endl;
  cout << "IDLE" << endl;
  cout << "SciTE" << endl;
  cout<< "BlueJ" <<endl;
  cout<< "JCreator" <<endl;
  cout<<"\n";
  cout << "SoftWare: " << endl;
  cout << "Unity" << endl;
  cout << "Sourcetree & Git" << endl;
  cout << "Unity Mecanim" << endl;
  cout << "Unity Analytics" << endl;
  cout << "Unreal" << endl;
  cout << "Git Bash" << endl;
  cout << "Microsoft Access" << endl;
  cout << "PhpMyAdmin" << endl;
  cout << "Axosoft" << endl;
  cout << "Android Studio" <<  endl;
  cout << "PhotoShop" << endl;
  cout << "Flash" << endl;
  cout << "DreamWeaver" << endl;
  cout << "\n";
  cout << "Operating Systems: " << endl;
  cout << "Windows OS" << endl;
  cout << "Mac OS" << endl;
  cout << "\n";
  cout << "Methologies: " << endl;
  cout << "Scrum" << endl;
  cout << "Agile Development" << endl;
  cout << "JSON" << endl;
  cout << "\n";
  menu();


}
void creativeResume::projects() {//displays info on projects I have been a part of
	string title = "Personal Projects";
    centerString(title);

	string project = "\nVanarchy                     Position:  Programmer                May 2016";
	cout << project;
	cout << "\nVanarchy is a rock-paper-scissors space variant created for a game jam by a \nsmall 4 ";
	cout << "person team for a game jam hosted on itch.io. \nIt is a bit more complicated ";
	cout << "than rock-paper-scissors, as it has double the \noptions. If the defense  ";
	cout << "option is not the shield that counters the attack \nthen damage is dealt.";
	cout << "It currently is single player where the player plays \nagainst the AI. ";
	cout << "I developed the AI. I also created all of the menus. \nThis included doing";
	cout << " the progamming for the timer UI and creating the UI \nthat allows the player";
	cout << "to select their attack and defense. I also created \nscripts to determine game";
    cout << "over and victory, as well as scripts to display the \nplayer and AI's current hp.";
	cout << "\n" << endl;

    menu();

}
void creativeResume::workExp(){//displays info on my work exp
string title="Work Experience";
  centerString(title);
  cout << "\nImmersion                                 San Jose, CA    January 2017-Present" << endl;
  cout << "\n";
  cout << "Software Engineering Intern";
  cout << "\n";
  cout << "\nCollaborated on the TouchSense Force game tool that helped developers get" << endl;
  cout << "haptics into their VR, Mobile, Console, and PC games. It allows developers to" << endl;
  cout << "design effects and link them to animations with very minimal code using a UI" << endl;
  cout << "similar to that used in many audio design programs. Integrated the TouchSense" << endl;
  cout << "Force game tool into an Oculus Rift Demo Game Project." << endl;
  cout<<"\n(Under Contract To) The Crimson Nights Team, Tempe,AZ	October 2015-Present"<<endl;
  cout<<"\n";
  cout<<"Programmer"<<endl;
  cout<<"\n";
  cout << "\nCrimson Nights is a hack-and-slash dungeon crawler being made in Unity with the ";
  cout << "intent of selling it on Steam." << endl;
  cout<<"I developed an A* pathfinding system for the game, as well as a doors system."<<endl;
  cout<<"The doors system included the storage and passing of data between scenes."<<endl;
  cout<<"I also developed scripts for the floors mode, floors mode menu,pause"<<endl;
  cout<<"menu, and random decal/sprite generation system. I also worked on Steam"<<endl;
  cout << "achievements code and setting up Unity Analytics. I also animated multiple" << endl;
  cout << "unique enemies and lighting fixtures. I collaborated on AI scripts and" << endl;
  cout << "helped with debugging efforts." << endl;
  cout<<"\n";
  menu();
}
void creativeResume::education(){//display info on my education
  string title="Education";
  centerString(title);
  cout<<"\nUniversity Of Advancing Technology Remote Expected Graduation Date:November 2017 \nGPA: 3.90"<<endl;
  cout<<"Degree: B.S. In Game Programming"<<endl;
  cout << "Relevant Coursework: Advanced C/C++ Programming, C# Programming, Java" << endl;
  cout << "Programming, Gameplay Programming, Scripting Integration, Data Structures and \nAlgorithms, SQL" << endl;
  cout<<"\n";
  menu();
}
void creativeResume::centerString(string line)//used to center section titles
{
   int l=line.length();
   int pos=(int)((80-l)/2);
   cout<<"\n";
   for(int i=0;i<pos;i++){
     cout<<" ";
   }
   
   cout<<line;

}


int main(){
    creativeResume resume;
	cout<<"Hi! My name is Alison Taylor!"<<endl;
	cout<<"I would like to obtain a position as an entry-level programmer on a development team at your company."<<endl;
	resume.menu();
	while(true){//while program is running user can input option for what they want to see
	if(resume.choice=="1"){
		resume.contactInfo();
	}
	else if(resume.choice=="2"){
		resume.skills();
	}
	else if(resume.choice=="3"){
		resume.education();
	}
	else if(resume.choice=="4"){
		resume.workExp();
	}
	else if(resume.choice=="5"){
		resume.projects();
	}
	else if(resume.choice=="6"){
		cout<<"Thank you for your consideration. ";
		system("Pause");
		return 0;
		
	}
	else {
		resume.isValid=false;
		resume.menu();
	}
	
   }
	
}
