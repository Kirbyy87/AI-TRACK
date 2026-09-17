#include <iostream>

using namespace std;

int main()
{
    cout << "===============================================" << endl;
    cout << "\tSTUDENT PERFORMANCE ANALYTICS" << endl;
    cout << "===============================================" << endl;

    string name;
    int yearlevel;
    double programmingscore, mathematicscore, statisticscore, dataanalyticscore;
    double attendancepercentage, attendanceactivities, totalactivities, completedActivities, totalActivities;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Year Level: ";
    cin >> yearlevel;

    cout << "\tENter Programming Score: ";
    cin >> programmingscore;

    cout << "Enter Mathematics Score: ";
    cin >> mathematicscore;

    cout << "Enter Statistics Score: ";
    cin >> statisticscore;

    cout << "Enter Data Analytics Score: ";
    cin >> dataanalyticscore;

    cout << "\tEnter Attendance Percentage: ";
    cin >> attendancepercentage;

    cout << "Enter Number of Completed Activities: ";
    cin >> attendanceactivities;

    cout << "Enter Number Total Activities: ";
    cin >> totalactivities;

    double academicAverage = (programmingscore + mathematicscore + statisticscore + dataanalyticscore) / 4.0;
         double activityCompletionRate =(completedActivities / (double) totalActivities) * 100;
         double overallscore = (academicAverage * 0.60) + (attendance * 0.20) + (activityCompletionRate * 0.20);

    string classification;
    if (overallscore .=90) {
        classification = "Outstanding";
    }
    else if (overallscore >=85) {
        classification = "Excellent";
    }
    else if (overallscore >=80){
        classification = "Very Good";
    }
    else if (overallscore >= 75){
        classification = "Satisfactory";
    }
    else {
        classification = "Needs Improvement";
    }

    cout << "========================================" << endl;
    cout <<       "ANALYTICS SPECIALIZATION" endl;
    cout << "========================================" << endl;

    cout << "1 - Data Analytics";
    cout << "2 - Artificial Intelligence";
    cout << "3 - Machine Learning";
    cout << "4 - Data Visualization";
    cout << "\tEnter your choice: ";

    int specializationchoice;
    cin >> specializationchoice;

    string specializationname;
    string specializationreccomendation;

    switch (specializationchoice) {
      case 1:
        specializationname = "Data Analytics";
        specializationreccomendation = "Focus on data interpretation, statistic, data visualization activities.";
        break;
      case 2:
        specializationname = "Artificial Intelligence";
        specializationreccomendation = "Strengthen programming, mathematics, problem solving skills."'
        break;
      case 3:
        specializationname = "Machine Learning";
        specializationreccomendation = "Develop programming, statistics, and mathematical foundation.";
        break;
      case 4:
        specializationname = "Data Visualization";
        specializationreccomendation = "Develop data presentation, and analytical communication skills.";
        break;
      default:
        specializationname = "undefined";
        specializationreccomendation = "No specific reccomendation available.";
        break;
    }

    const int Num_Subjects = 4;
    string subjectnames[Num_Subjects] = {"Programming", "Mathematics", "Statistics", "Data Analytics"};
    double subjectscore[Num_Subjects] = {programmingscore, mathematicscore, statisticscore, dataanalyticscore};

    double highestscore = subjectscore[0];
    double lowestscore = subjectscore[0];

    for (int i = 1; i < Num_Subjects; i++){
          if (subjectscore[i] > highestscore){

          }
      highestscore = subjectscore[i];
    }
    if (subjectscore[i] <lowestscore){
        lowestscore = subjectscore[i];
    }
    }
      string strongestSubjects = "";
    string weakestSubjects = "";
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        if (subjectScores[i] == highestScore) {
            if (!strongestSubjects.empty()) strongestSubjects += ", ";
            strongestSubjects += subjectNames[i];
        }
        if (subjectScores[i] == lowestScore) {
            if (!weakestSubjects.empty()) weakestSubjects += ", ";
            weakestSubjects += subjectNames[i];
        }
    }

    cout << "----------------------ANALYTICS----------------" << endl;

    string riskLevel;
    if (overallScore < 75 || academicAverage < 70 || attendancePercentage < 75) {
        riskLevel = "High Risk";
    } else if (overallScore >= 75 && overallScore <= 84.99 && attendancePercentage >= 75) {
        riskLevel = "Moderate Risk";
    } else if (overallScore >= 85 && attendancePercentage >= 85) {
        riskLevel = "Low Risk";
    } else {
        riskLevel = "Moderate Risk";
    }
      string riskAnalysisLabel;
    string riskAnalysisResult;

    if (riskLevel == "High Risk") {
        riskAnalysisLabel = "Primary Concern";
        if (programmingScore < 70) {
            riskAnalysisResult = "Programming Skills";
        } else {
            if (mathematicsScore < 70) {
                riskAnalysisResult = "Mathematics Skills";
            } else {
                riskAnalysisResult = "Attendance/Activity Performance";
            }
        }
    } else if (riskLevel == "Moderate Risk") {
        riskAnalysisLabel = "Recommendation";
        if (academicAverage < 80) {
            riskAnalysisResult = "Improve academic performance.";
        } else {
            if (attendancePercentage < 85) {
                riskAnalysisResult = "Improve attendance.";
            } else {
                riskAnalysisResult = "Maintain consistent performance.";
            }
        }
    } else {
        riskAnalysisLabel = "Recommendation";
        if (programmingScore >= 90) {
            riskAnalysisResult = "Consider advanced programming/AI activities.";
        } else {
            riskAnalysisResult = "Continue developing analytical skills.";
        }
    }








    return 0;
}
