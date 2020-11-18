
#include"Vector2.h"
#include"List.h"
#include"time.h"
#include<string>
using namespace std;


double elapsed_time( clock_t start, clock_t finish){
   // returns elapsed time in milliseconds
   return (finish - start)/(double)(CLOCKS_PER_SEC/1000);
}

int main(){

	clock_t start, finish ;// used for getting the time.
	Vector <int> v;
	start = clock();
	for (int i=0;i<100000;i++){	
		v.push_front(i);
	}
	finish = clock();
	double time_taken = elapsed_time(start,finish);
//	cout<<time_taken<<endl;
	
//	cout<<"Vector of size: "<<v.size()<<endl;
	start = clock();
	v.visitAll();
	finish = clock();
	double vector_visit = elapsed_time(start,finish);

	List <int> l;
	start = clock();
	
	for (int i=0;i<100000;i++){	
		l.push_front(i);
	}
	
	finish = clock();
	double time_takenn = elapsed_time(start,finish);
	//cout<<time_takenn<<endl;
	
//	cout<<"List of size: "<<l.size()<<endl;
	start = clock();
	l.visitAll();
	finish = clock();
	double list_visit = elapsed_time(start,finish);

	cout<<"Program: [part2]"<<endl;
	cout<<"Type of Elements: [int]"<<endl;
	cout<<"Number of Elements: ["<<v.size()<<"]"<<endl;
	cout<<"Time units: [milliseconds]"<<endl;
	cout<<"Time for Vector Insertion: ["<<time_taken<<"]"<<endl;
	cout<<"Time for List Insertion: ["<<time_takenn<<"]"<<endl;
	cout<<"Time for Vector Visiting: "<<vector_visit<<endl;
	cout<<"Time for List Visiting: "<<list_visit<<endl;

	//cout<<"checkpoint2"<<endl;
	//v.pop_back();
	//v.pop_back();
	//cout<<"checkpoint3"<<endl;
	//v.visitAll();
	//cout<<"checkpoint4"<<endl;
	return 0;    

};
