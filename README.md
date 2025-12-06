<h1>library_management_system</h1>

<h2>Introduction:</h2>
A library contains a large number of books that must be organized properly.
Managing these records manually becomes difficult, slow, and error-prone.
To solve this, our project implements a simple Library Management System using C++, allowing the librarian to easily:
•	Add books
•	Search books
•	Issue books
•	Return books
<h2>Problem Statement:</h2>

Libraries that use manual registers face problems such as:
•	Difficulty finding a book
•	No proper record of issued/returned books
•	Errors due to handwriting
•	Time wasted searching or updating data
There is a need for a simple computerized system that keeps all records in an organized way.

<h2>System Features:</h2>

<h3>Add Books</h3>
1.	Start <br>
2.	Check if the library is full<br>
3.	Input the title, author, and ISBN <br>
4.	Set status = available<br>
5.	Store the book in the system<br>
6.	End<br>

<h3>Search Books</h3>
1.	Start<br>
2.	Input the search key<br>
3.	Loop through all stored books<br>
4.	If a match is found<br>
	Display details<br>
5.	Else <br>
	Display “Book not found”<br>
6.	End

<h3>Issue Books</h3>
1.	Start<br>
2.	Input ISBN<br>
3.	Search book<br>
4.	If not found → show “Invalid ISBN”<br>
5.	If found but issued → show “Already issued”<br>
6.	If found and available → mark as issued<br>
7.	End

<h3>Return Books</h3>
1.	Start<br>
2.	Input ISBN<br>
3.	Search book<br>
4.	If found<br>
	Change status to available<br>
5.	Else<br>
	Print “Invalid ISBN”<br>
6.	End
