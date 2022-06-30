# Hospital-Management---Mini-Project
Harshini(RA2111003010147) Rishabh(RA2111003010131)

Hospital-management
This project is to implement a simple hospital management system where patient details can be entered, printed and can be obtained using a patient’s mobile number. Text files and Structure are used in the project.

The following details of a patient are entered :-

Patient Name
Patient Age
Patient Mobile Number
Diagnosis
Appointment Date
Appointment Time
Patient details are stored as a structure variable. Patient details are then stored in a text file. The text file is then used to display the contents and also search for a patient record. The working of the project is explained below.

Working :-

​A structure is defined with data types required to store a patient’s details. The program is a menu driven program wherein the admin has three choices – Add patient(s), Display the contents of the text file, and to search for a record in the file.

The admin can choose the number of patients whose details are to be entered and this can range from 1 to ‘n’. The text file is opened in ‘append’ mode in order to keep adding records to the file.

Displaying and searching has the same working except a patient detail is printed only if it is present when searching for it. The text files are opened in ‘read’ mode. Searching is done using the patient’s mobile number as every patient will have a distinct number.

Since there are three choices present in the menu, the program works if the choice input is either ‘1’, ‘2’ or ‘3’. Any other inputted value will simply result in the menu being displayed again. If ‘0’ is entered, the program quits.
