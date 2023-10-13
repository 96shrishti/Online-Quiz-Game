#include<iostream>
using namespace std;
int main(){
	   int finalResult =0;
	   int playQuiz(void);//this is a prototype of function
	   char playAgain;
	   play:
	   finalResult = playQuiz();
	   cout<<"Your Score is"<<finalResult<<endl;
	   if(finalResult >=6){
	   	 cout<<"You Are Pass"<<endl;
	   	 cout<<"Do you Want to Play  Quiz again Y or N?"<<endl;
		 cin>>playAgain;
			if(playAgain=='y'|| playAgain=='Y'){
			goto play;
			}
			else{
				cout<<"Thank you to play Quiz"<<endl;
			}
	   }
	   else{
	   	cout<<"You are Fail"<<endl;
	   	cout<<"Do you Want to Play  Quiz again Y or N?"<<endl;
			cin>>playAgain;
			if(playAgain=='y'|| playAgain=='Y'){
			playQuiz();
			}
			else{
				cout<<"Thank you to play Quiz"<<endl;
			}
	   }

}
int playQuiz(){
	char user;
	char option;
	int score =0;
	playInsideFunction:
	cout<<"---------Welcome to quiz game--------"<<endl;
	cout<<"---------Please follow these instructions--------"<<endl;
	cout<<"step-1- quiz contains total 10 questions"<<endl;
	cout<<"step -2 you will given 1 marks for each right answer"<<endl;
	cout<<"step-3 There will be no negative marking"<<endl;
	cout<<"Please press s button for start the Quiz"<<endl;
	cin>>user;
	if(user=='s'||user=='S'){
	    cout<<"Q 1. What is the Capital of India ?"<<endl;
		cout<<" (a) Delhi (b) Lucknow (c) Mumbai (d) Bangladesh"<<endl;
		cin>>option;
		if(option=='a'||option=='A'){
		 score = score+1;	
		}
		else{
		
		score = score +0;
	}
	    cout<<"Q 2. Who is the Prime Minister of India ?"<<endl;
		cout<<" (a) Narendra Modi (b) Kejrival (c) Nitin (d) Aditya nath"<<endl;
		cin>>option;
		if(option=='a'||option=='A'){
		 score = score+1;	
		}
		else{
		
		score = score +0;
	}
	 cout<<"Q 3. What is the National Bird of India ?"<<endl;
		cout<<" (a) Peacock (b) Pegion (c) Sparrow (d) Parrot"<<endl;
		cin>>option;
		if(option=='a'||option=='A'){
		 score = score+1;	
		}
		else{
		score = score +0;
	}
	 cout<<"Q 4. What is the National sweet of India ?"<<endl;
		cout<<" (a) jalebi (b) kaju katri (c)gulab jamun  (d)waterballoon"<<endl;
		cin>>option;
		if(option=='a'||option=='A'){
		 score = score+1;	
		}
		else{
		score = score +0;
	}
	 cout<<"Q 5. What is the National Animal of India ?"<<endl;
		cout<<" (a) Tiger (b) Lion (c) Fox (d) Cat"<<endl;
		cin>>option;
		if(option=='a'||option=='A'){
		 score = score+1;	
		}
		else{
		score = score +0;
	}
	 cout<<"Q 6. Who is the Chief Minister of India ?"<<endl;
		cout<<" (a) Aditya Nath (b) Kejrival (c) Nitin (d) Raghunath"<<endl;
		cin>>option;
		if(option=='a'||option=='A'){
		 score = score+1;	
		}
		else{
	     score = score +0;
	}
	cout<<"Q 7. Who is the Leader of Congress ?"<<endl;
		cout<<" (a) Rahul (b) Sonia (c) Nitin (d) Raghunath"<<endl;
		cin>>option;
		if(option=='a'||option=='A'){
		 score = score+1;	
		}
		else{
	     score = score +0;
	}
	cout<<"Q 8. What is Capital of UP ?"<<endl;
		cout<<" (a) Lucknow (b) Mumbai (c) Delhi (d) Noida"<<endl;
		cin>>option;
		if(option=='a'||option=='A'){
		 score = score+1;	
		}
		else{
	     score = score +0;
	}
	cout<<"Q 9. What is Capital of Jharkhand ?"<<endl;
		cout<<" (a) Ranchi (b) Ramgadh (c) Ayodhya (d) Mumbai"<<endl;
		cin>>option;
		if(option=='a'||option=='A'){
		 score = score+1;	
		}
		else{
	     score = score +0;
	}
	cout<<"Q 10. What is National Flower of India ?"<<endl;
		cout<<" (a)Lotus  (b) lily (c) Nitin (d) Raghunath"<<endl;
		cin>>option;
		if(option=='a'||option=='A'){
		 score = score+1;	
		}
		else{
	     score = score +0;
	}
	
	}
	
	else{
		cout<<" you have entered wrong value Please enter s"<<endl;
		goto playInsideFunction;
	}
	return score;
}
