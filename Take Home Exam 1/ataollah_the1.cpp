#include <iostream>
#include <string>

using namespace std;

int main() {
	string name, course, yes_no;
	cout << "Welcome to the Fall 2020-2021 Semester grading system. What is your name? ";
	cin >> name;
	cout << "Hello " << name << "! Please enter the name of the course to be processed: ";
	cin >> course;
	cout << "Hello " << name << "! If you take the " << course << " for the first time, enter YES otherwise NO: ";
	cin >> yes_no;
	if (yes_no == "YES" || yes_no == "NO") {
		if (yes_no == "YES") {
			string choice, grade, gradeS_U;
			cout << "What is your grade from (A,B,C,D,F)? ";
			cin >> grade;
			if (grade == "A" || grade == "B" || grade == "C" || grade == "D" || grade == "F") {
				if (grade == "F") {
					gradeS_U = "U";
				}
				else {
					gradeS_U = "S";
				}
				cout << "Do you want to switch your grade from " << grade << " to " << gradeS_U << " (YES or NO)? ";
				cin >> choice;
				if (choice == "YES" || choice == "NO") {
					if (choice == "YES") {
						cout << name << ", your final grade for " << course << " is " << gradeS_U << ". Goodbye..." << endl;
					}
					else {
						cout << name << ", your final grade for " << course << " is " << grade << ". Goodbye..." << endl;
					}
				}
				else {
					cout << "Invalid grade selection. Goodbye..." << endl;
				}
			}
			else {
				cout << "Invalid grade selection. Goodbye..." << endl;
			}
		}
		else {
			string grade1, grade2, grade_final, correct_grade;
			cout << "Please enter your previous grade from (A,B,C,D,F,S,U): ";
			cin >> grade1;
			if (grade1 == "A" || grade1 == "B" || grade1 == "C" || grade1 == "D" || grade1 == "F" || grade1 == "S" || grade1 == "U") {
				cout << "Please enter your current grade from (A,B,C,D,F): ";
				cin >> grade2;
				if (grade2 == "A" || grade2 == "B" || grade2 == "C" || grade2 == "D" || grade2 == "F") {
					cout << "Please enter the grade you want to choose from (A,B,C,D,F,S,U): ";
					cin >> grade_final;
					if (grade_final == "A" || grade_final == "B" || grade_final == "C" || grade_final == "D" || grade_final == "F" || grade_final == "S" || grade_final == "U") {
						if (grade1 == "S" || grade1 == "U") {
							if (grade1 == "S") {
								if (grade2 == "F") {
									if (grade_final != "F") {
										cout << "Invalid grade selection. If you received S before and fail this semester, you get F." << endl;
									}
									else {
										cout << name << ", your final grade for CS201 is " << grade_final << ". Goodbye..." << endl;
									}
								}
								else {
									if (grade_final == grade2 || grade_final == "S") {
										cout << name << ", your final grade for CS201 is " << grade_final << ". Goodbye..." << endl;
									}
									else {
										cout << "Invalid grade selection. You cannot choose a higher or lower grade than you deserve." << endl;
									}
								}
							}
							else {
								if (grade2 == "F") {
									if (grade_final == "U" || grade_final == "F") {
										cout << name << ", your final grade for CS201 is " << grade_final << ". Goodbye..." << endl;
									}
									else {
										cout << "Invalid grade selection. You cannot choose a higher or lower grade than you deserve." << endl;
									}
								}
								else {
									if (grade_final == grade2 || grade_final == "S") {
										cout << name << ", your final grade for CS201 is " << grade_final << ". Goodbye..." << endl;
									}
									else {
										cout << "Invalid grade selection. If you received U before, you may choose S or current letter grade." << endl;
									}
								}
							}
						}
						else {
							if (grade1 == "F") {
								if (grade2 == "F" && grade_final != "F") {
									cout << "Invalid grade selection. If you received F before, and fail this semester, you get F." << endl;
								}
								else if (grade2 == "F" && grade_final == "F") {
									cout << name << ", your final grade for " << course << " is F. Goodbye..." << endl;
								}
								else if (grade2 != grade_final && grade2 != "F" && grade_final != "S") {
									cout << "Invalid grade selection. You cannot choose a higher or lower grade than you deserve." << endl;
								}
								else {
									cout << name << ", your final grade for " << course << " is " << grade_final << ". Goodbye..." << endl;
								}
							}
							else {
								if (grade2 != grade_final) {
									if (grade2 != "F") {
										if (grade_final == "S") {
											cout << name << ", your final grade for " << course << " is " << grade_final << ". Goodbye..." << endl;
										}
										else {
											cout << "Invalid grade selection. You cannot choose a higher or lower grade than you deserve." << endl;
										}
									}
									else {
										if (grade_final == "U") {
											cout << name << ", your final grade for " << course << " is " << grade_final << ". Goodbye..." << endl;
										}
										else {
											cout << "Invalid grade selection. You cannot choose a higher or lower grade than you deserve." << endl;
										}
									}
								}
								else {
									cout << name << ", your final grade for " << course << " is " << grade_final << ". Goodbye..." << endl;
								}
							}
						}
					}
					else {
						cout << "Invalid grade selection. Goodbye..." << endl;
					}
				}
				else {
					cout << "Invalid grade selection. Goodbye..." << endl;
				}
			}
			else {
				cout << "Invalid grade selection. Goodbye..." << endl;
			}
		}

		return 0; //program ended
	}
}

//Ataollah Hosseinzadeh Fard
//ID: 28610
