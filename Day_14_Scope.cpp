	// Add your code here
Difference (vector <int> a) {
        elements = a;
    }
void computeDifference(){

int min = *min_element(elements.begin(), elements.end());
int max = *max_element(elements.begin(), elements.end());
//min_element & max_element returns iterator so i use dereference (*)
    
maximumDifference = max - min;
}
