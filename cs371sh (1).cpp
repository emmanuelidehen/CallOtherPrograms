/*
Name: Emmanue Idehen
Class: CS 371
Instructor: Dr. Qiang He
Date: 02/7/2018

Program Specification: This shell program calls up other programs (it acts like a Linux system)
*/
#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdlib.h>
using namespace std;
int main()
{   // arrsy of characters 
	char* argv[2];
	string cmd="";
	cout<<">";
    getline(cin,cmd); //get the line
	//while loop
    while(cmd!="quit")
	{
            argv[0]=(char*)cmd.c_str();
            argv[1]=NULL; //set to Null value
			system(*argv);
			cout<<">";   
	       	getline(cin,cmd); // pass
    }
	
	return 0;
}


