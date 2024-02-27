NAME OF PROJECT:
================
Operating Systems Project 1
C Programming and Makefile

MEMBERS:
========
Ivan Sarmiento
Nicholas Dalton

STATEMENT:
==========
We have neither given nor received unauthorized assistance on this work.


VIRTUAL MACHINE (VM) INFORMATION:
=================================
NAME OF VIRTUAL MACHINE (VM): Dues_Ex_Machina
USENAME: ivans
PASSWORD: 1qazxsw2!QAZXSW@

Describe where the files can be found.

Describe each file and the purpose it serves. 

Provide any special instructions to access or run your program.


ROOT PASSWORD: 
==============
1qazxsw2!QAZXSW@

	

PART 0: SET UP
==============

To start the program run

a. Navigate to OSProj1 file
b. type 'make' and then press enter
c. run ./list_test
	
	
	
PART 1: LINKED LIST
===================

Create_list: For create list it just had to initialize the first node, with the size of List*. 

add_to_list: Memory had to be allocated for the new node, the string entered had to be copied into the next node, and the next node was intialized to null. Next a while loop was intitialized to traverse the linked list, until a null the "next" value was null, then the value that was input is initialized to the end of the linked list. 

Remove: Looks at the head of the linked list, goes to the next linked list element, initializes that as the new head and then free the memory of the old head pointer. 

flush_list: Flush has a while loop and traverses the linked list freeing the value for each node, but keeps the pointer for the next node maintaing the structure of the linked list. So it frees all nodes from memory except the head pointer.

free_list: Frees and deallocates the entire linked list. Uses the flush list function to completely remove the linked list from memory.

Challenges: The initial challenge was getting a the headpointer, and the add node function working. Once the general structure was defined, and add to list and create list where intialized, the syntax for reassigning, freeing, and traversing nodes was already written.


	 


PART 2: WRITING A MAKEFILE
===========================

The make file was very simple. Following the tutorial variables CC and Cflags were defined at the top. CC=gcc to specifify the compiler used, and CFLAGS=-I. -WALL so it will look for the header file in the current directory, and -Wall to print out any errors or warnings for the compilation of the program. list.o and list-test.o were listed so they would recompiled if any changes were made. After that just write the normal gcc commands with the variables in place of the regular commands.

Challenges: There werent really any challenges for this part. Starting at the simplest makefile, then adding the small variables up top were very understandable.

 Resources
 ======================
https://www.learn-c.org/en/Linked_lists
https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/
