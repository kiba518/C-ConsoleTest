#include "pch.h" 
#include "test.h" 
#include "classtest.h" 
#define ERROR 518
struct kiba_Org {
	int id;
};
typedef struct kiba_new {
	int id;
} kiba;
typedef struct kibaSelf *kibaSelfCopy;
struct kibaSelf
{
	int id;
	kibaSelfCopy myself;
};
int usage(int &i) {
	i = 518;
	return i;
}
void usagePointer(kiba *&k, kiba &kiunew) {
	cout << "k->id" << k->id << "===k" << k << endl;
	k = &kiunew;
	k->id = 518;
}
int constusage(const int i) { 
	return i;
}

int main()
{
	classtest ct;
	ct.excute(518);
	classtest *ctPointer = new classtest;
	ctPointer->excute(520);
	cout << "ct.id" << ct.id << "===ctPointer" << ctPointer->id << endl;

	/*kiba kiunew;
	kiba kiu;
	kiba *kiupointer;
	kiupointer = &kiu; 
	kiupointer->id = 100;
	kiunew.id = 101;
	cout << "kiupointer->id" << kiupointer->id << "===kiupointer" << kiupointer << endl;
	usagePointer(kiupointer, kiunew);
	cout << "kiupointer->id" << kiupointer->id << "===kiupointer" << kiupointer << endl;*/

	//int u = 100;
	//usage(u);
	//cout << "u" << u << endl; 

	//kiba kinstance;
	//kiba *kpointer;
	//kpointer = &kinstance;
	//(*kpointer).id = 518;
	//kpointer->id = 518;
	////*kpointer->id = 518;

	//int i = 518;
	//int *ipointer = &i;
	//int* ipointer2 = &i; 
	//cout << "*ipointer" << *ipointer << "===ipointer" << ipointer << endl;

	//int i = 518;
	//int *ipointer;
	//int* ipointer2;
	//ipointer = &i;
	//ipointer2 = &i;
	//cout << "*ipointer" << *ipointer << "===ipointer" << ipointer << endl;

	//kibaSelf ks;
	//ks.id = 518;
	//kibaSelf myself;
	//myself.id = 520;
	//ks.myself = &myself;
	//cout << ks.id << endl;
	//cout << ks.myself->id << endl;


	//struct kiba_Org korg;
	//korg.id = 518;
	//kiba knew;
	//knew.id = 520;
	//cout << korg.id << endl;
	//cout << knew.id << endl;
} 

#pragma region 调用时，需要放到main上面

string stringTest()
{
	string str = "Hello World!\n";
	return str;
}

int defineTest()
{
	return ERROR;
} 
#pragma endregion
