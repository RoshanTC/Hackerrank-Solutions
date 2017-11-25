class Student :  public Person{
	private:
		vector<int> testScores;
	public:
        /*
        *   Class Constructor
        *
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
       Student(string fn, string ln, int id, vector<int> scores) :
        Person(fn,ln,id),
        testScores (scores) {}
        /*
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate(){
            int i,sum=0,avg,p=testScores.size();
            char grade;
            for(i=0;i<p;i++)
            sum+=testScores[i];
            avg=sum/testScores.size();
            if(avg>=90&&avg<=100){
                grade = 'O';
            }
            else if(avg<90&&avg>=80){
                grade = 'E';
            }
            else if(avg<80&&avg>=70){
                grade = 'A';
            }
            else if(avg<70&&avg>=55){
                grade = 'P';
            }
            else if(avg<55&&avg>=40){
                grade = 'D';
            }
            else if(avg<40){
                grade = 'T';
            }
            return grade;
        }
};
