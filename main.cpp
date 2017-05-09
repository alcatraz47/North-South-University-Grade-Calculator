#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    cout << "Hello! Welcome to North South University CGPA and TGPA Calculator" << endl;
    int n=0;
    int takenSubject=0;
    double completedCredits=0;
    double grade = 0, creditHour = 0, sum=0;
    printf("Which type of calculation do you want?\n 1. CGPA for present Semester\n 2. TGPA of all semesters");
    printf("\nPress any of these two option number and then press 'Enter': ");
    scanf("%d", &n);
    if(n==1){
        printf("How may credited subjects did you take in this semester including credited lab?: ");
        scanf("%d", &takenSubject);
        printf("Completed Credits for this semester?: ");
        scanf("%lf", &completedCredits);
        printf("Now press your grades and credit hours of %d subject(s) accordingly:\n", takenSubject);
        for(int i=0; i<takenSubject; i++){
            printf("\nGrade of Subject %d in number: ", i+1);
            scanf("%lf", &grade);
            printf("\nCredit hours of Subject %d: ", i+1);
            scanf("%lf", &creditHour);
            sum+=(creditHour*grade);

        }
        sum/=completedCredits;
    }
    else{
        printf("How may credited subjects did you take till present semester including credited lab?: ");
        scanf("%d", &takenSubject);
        printf("Completed total Credits till present semester?: ");
        scanf("%lf", &completedCredits);
        printf("Now press your grades and credit hours of %d subject(s) accordingly:\n", takenSubject);
        for(int i=0; i<takenSubject; i++){
            printf("\nGrade of Subject %d in number: ", i+1);
            scanf("%lf", &grade);
            printf("\nCredit hours of Subject %d: ", i+1);
            scanf("%lf", &creditHour);
            sum+=(creditHour*grade);

        }
        sum/=completedCredits;
    }
    printf("\n\nYour Grade is %.3lf\n\n", sum);
    return 0;
}
