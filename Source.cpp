//Kelly Sekins
//12/1/2020
//Semester Project 
//Created in Visual Studios on a PC
//Purpose of the software is to have fun with language.
#include <iostream>
#include "Header1.h"

using namespace std;


int main() {

	//Objects
	Words noun;
	Words verb;
	Words propNoun;
	Words plurNoun;
	Words adj;
	Words plurNoun2;
	Words adj2;
	Words color;
	Words adj3;
	Words plurNoun3;
	Words adj4;
	Words plurNoun4;
	Words verbed;
	Words verb2;
	Words adj5;
	Words noun2;


	//Intro
	cout << "Hello!  Welcome to Insane Improve!" << endl;
	cout << "I am going to ask you a series of questions regarding the English language." << endl;
	cout << "You answer with one word answers. Then press Enter." << endl;

	//Ask Question to fill in the blank


	/// <summary>
	///Questions asked to make a paragraph.
	/// </summary>
	/// 
	propNoun.Fct1("Please give me a Proper Noun (the title of Book, Place or Name)");
	adj.Fct1("Please give me an Adjective (describes something)");
	plurNoun.Fct1("Please give me a Plural Noun (more than one thing)");
	plurNoun2.Fct1("Please give me a Plural Noun (more than one thing)");
	adj2.Fct1("Please give me an Adjective (describes something)");
	color.Fct1("Please give me a color (red, blue yellow, orange, green, purple, blue)");
	adj3.Fct1("Please give me an Adjective (describes something)");
	noun.Fct1("Give me a noun.(Person, Place or Thing)");
	plurNoun3.Fct1("Please give me a Plural Noun (more than one thing)");
	adj4.Fct1("Please give me an Adjective (describes something)");
	verb.Fct1("Please give me a Verb (an action like run)");
	plurNoun4.Fct1("Please give me a Plural Noun (more than one thing)");
	verbed.Fct1("Please give me a Verb ending ed (an action like rubbed)");
	verb2.Fct1("Please give me a Verb (an action like run)");
	noun2.Fct1("Give me a noun.(Person, Place or Thing)");

	//space To be seen clearly
	cout << "     " << endl;
	cout << "     " << endl;
	
	//Story with fill in the blank
	cout << "Unicorn aren't like other " << propNoun.first << endl;
	cout << "they're " << adj.first << "." << " They look like " << plurNoun.first << " with" << endl;
	cout << plurNoun2.first << " for feet and a " << adj2.first << " mane of hair. But " << endl;
	cout << "unicorns are " << color.first << " and have a " << adj3.first << " " << noun.first << endl;
	cout << "on their heads. Some " << plurNoun3.first << " don't believe unicorns are " << endl;
	cout << adj4.first << " but I believe in them. I would love to " << verb.first << " a unicorn " << endl;
	cout << "to faraway " << plurNoun4.first << "." << " One thing I've always " << verbed.first << endl;
	cout << "about is whether unicorns " << verb2.first << " rainbows, or is their " << noun2.first << endl;
	cout << adj5.first << " like any other animal's?" << endl;
	

	return 0;
}
