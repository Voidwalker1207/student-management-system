#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<iomainp>
using namespace std;

strsuct Student{
  int id;
  string name;
  string course;
  double marks;
};
//Store student records
vector <Student> students;

//Calculate grade
char calculateGrade(double marks){
  if (marks > = 70) return 'A';
  else if (marks > = 60) return 'B';
  else if (marks > = 50) return 'C';
  else if (marks > = 40) return 'D';
  else return 'E';
}

//Save records to file
void saveStudents(){
  ofstream file ("students.txt);

  for (const Student&s:students){
     file << s.id << '\n'
       << s.name << '\n'
       << s.course << '\n'
       << s.marks << '\n'
  }
  file.close();
}

//Load recods from file
void loadStudents(){
  ifstream file ("students.txt");

  Student s;

  while (file >> s.id){
    file.ignore();
    getline (file, s.name);
    getline (file, s.course);
    file >> s.marks;
    file.ignore();

    students.push_back(s);
  }
  file.close();
}

//Register student
void registerStudent() {
  student s;

  cout << "\nEnter Student ID:";
  cin >> s.id;

  for (const Students& students:students){
     if (student.id == s.id) {
        cout << "Student ID already exists!\n";
        return;
     }
  }

  cin.ignore();

  cout << "Enter Student Name:";
  getline (cin, s.name);

  cout << "Enter Course:";
  getline (cin, s.course);

  cout << "Enter Marks (0-100):";
  cin >> s.marks;

  if (s.marks < 0 ||s.marks > 100) {
    cout << "Invalid marks!\n;
    return;
  }

  students.push_back(s);
  saveStudents();

  cout << "\nStudent registered successfully!\n";
}

//View students
void viewStudents(){
  if (students.empty()){
     cout << "\nNo student records found.\n";
     return;
  }
  cout << "\n=========STUENT RECORDS==========\n";

  cout << left
   << setw(10) << "ID"
   << setw(25) << "NAME"
   << setw(10) << "COURSE"
   << setw(10) << "MARKS"
   << "GRADE\n";
  cout << string(75, '_') << "\n";

  for(const Student&s : students){
     cout << left
      << setw(10) << s.id
      << setw(25) << s.name
      << setw(20) << s.course
      << setw(10) << s.marks
      << calculateGrade(s.marks) << "\n";
  }
}
//Search students
void searchStudents(){
  int id;

  cout << "\nEnterStudent ID to search:";
  cin >> id;

  for (const Students& s : students){
     if (s.id == id){
        cout << \mStudent Found!\n";
        cout << "ID:" << s.id << "\n";
        cout << "Name:" << s.name << "\n";
        cout << "Course:" << s.course << "\n";
        cout << "Marks:" << s.marks << "\n";
        cout << "Grade:" << calculateGrade (s.marks) << "\n";
        return;
      }
    }
    cout << "\n Studeny not found!\n";
}
//Update student
void updateStudent(){
  int id;

  cout << "\n Enter Student ID to update:";
  cin >> ikd;

  for (Studen& s : students){
      if (s.id == id){
         cin.ignore();

          cout << "Enter new name:";
          getline (cin, s.name);

          cout << "Enter new course:";
          getline (cin, s.course);

          cout << "Enter new marks:";
          cin >> s.marks;

          if (s.marks < 0 || s.marks > 100){
            cout << "Invalid marks!\n";
            return;
          }
          saveStudents();

          cout << "\nStudents updated successfully!\n";
          return;
        }
     }
     cout << "\nStudent not found!\n";
    return;
   }
 }

 cout << "\nStudent not found!\n";
}

//Delete student
void deleteStudent(){
  int id;

  cout << "\nEnter Student ID to complete:";
  cin >> id;

  for (int i = 0; i < students.size(); i++){
      if (students[i].id == id){
         students.erase(students.begin()+i);
        saveStudents();

        cout << "\nStudents deleted sccessfully!\n";
        return;
      }
 }
 cout << "\nStudent not found!\n";
}
//Main menu
int main(){
  loadStudents();

  int choice;

  do{
    cout << "\n=====================================\n";
    cout << "   STUDENT MANAGEMENT SYSTEM\n";
    cout << "\n====================================\n";

    cout << "1. Register Student\n";
    cout << "2. View All Students\n";
    cout << "3. Search Student\n";
    cout << "4. Update Student\n";
    cout << "5. Delete Student\n";
    cout << "6. Exit\n";

    cout << "======================================\n";
    cout << "Enter your choice:";

    cin >> choice;

    switch (choice){
      case 1:
        registerStudent();
        break;

      case 2:
        viewStudent();
        break;

      case 3:
        searchStudent();
        break;

      case 4;
        updateStudent();
        break;

      case 5:
        deleteStudent();
        break;

      case 6:
        cout << "\nThank you for using the system!\n";
        break;

      default:
        cout << "\nInvalid choice! try again.\n";
    }
  }while (choice ! = 6);

  return 0;
]

      case 5;

      


  
          

     
      

  

