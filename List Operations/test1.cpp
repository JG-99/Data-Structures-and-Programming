#include"Vector.h"
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

	List <int> l;
	start = clock();
	for (int i=0;i<100000;i++){
		l.push_back(i);
	}
	finish = clock();
	double time_list = elapsed_time(start,finish);
	//cout<<"checkpoint1\n";
	start = clock();
	l.visitAll();
	finish = clock();
	double list_visit = elapsed_time(start,finish);

	//cout<<l.size()<<endl;


	Vector <int> v;
	start = clock();
	for (int i=0;i<100000;i++){
		v.push_back(i);
	}
	finish = clock();
	double time_vector = elapsed_time(start,finish);

	//cout<<v.size()<<endl;
	start = clock();
	v.visitAll();
	finish = clock();
	double vector_visit = elapsed_time(start,finish);



	cout<<"Program: [part1]"<<endl;
	cout<<"Type of Elements: [int]"<<endl;
	cout<<"Number of Elements: ["<<v.size()<<"]"<<endl;
	cout<<"Time units: [milliseconds]"<<endl;
	cout<<"Time for Vector Insertion: ["<<time_vector<<"]"<<endl;
	cout<<"Time for List Insertion: ["<<time_list<<"]"<<endl;
	cout<<"Time for Vector Visiting: "<<vector_visit<<endl;
	cout<<"Time for List Visiting: "<<list_visit<<endl;


/*
	cout<<"checkpoint2"<<endl;
	v.pop_back();
	v.pop_back();
	cout<<"checkpoint3"<<endl;
	v.visitAll();
	cout<<"checkpoint4"<<endl;
	
*/
	



	return 0;    

};
