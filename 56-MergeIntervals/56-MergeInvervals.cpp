#include <iostream>
#include <algorithm>
#include <vector> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	vector<vector<int> > intervals;
	intervals.push_back({1,4});
	intervals.push_back({0,2});
	intervals.push_back({3,5});
//	if(intervals.empty()) return intervals;
        sort(intervals.begin(),intervals.end());
        vector<vector<int> > res;
        res.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            if(res.back()[1]<intervals[i][0])
                res.push_back(intervals[i]);
            else
                res.back()[1]=res.back()[1]>intervals[i][1]?res.back()[1]:intervals[i][1];
        }
        
	return 0;
}
