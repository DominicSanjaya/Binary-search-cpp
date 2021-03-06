/** INCLUDES **/
/**   Copyright 2021 Dominic Sanjaya
Licensed under the Apache License, Version 2.0 (the "License");
You may not use this file except in compliance with the License.
You may obtain a copy of the License at
http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
**/
//I as an owner of this program do not own any copyright of the used dependency and your usage of dependency are restricted by it's respective lisence.
//I as an owner of this program do not provide any dependency required to run this console application. Please add the dependency yourself if it not yet included with your complier
#include <vector>
#include <iostream>
#include<algorithm>
using namespace std;
typedef std::vector<int>::iterator iter;

int main()
{
	cout << "type 1 to use sample data, type 2 to use your own data" << endl;
	int insertsample;
	cin >> insertsample;
	if (insertsample == 1) {
		std::vector<int> vec = { 10, 20, 30, 30, 20, 10, 10, 20, 22, 44, 100, 99 ,23, 29, 15, 22, 10, 85, 84 };
		std::sort(vec.begin(), vec.end());
		iter low = std::lower_bound(vec.begin(), vec.end(), 20);
		iter high = std::upper_bound(vec.begin(), vec.end(), 20);
		std::cout << "index of first element, less than or equal to 20 is: " << (low - vec.begin()) << '\n';
		std::cout << "index of first element, greater than to 20 is: " << (high - vec.begin()) << '\n';
		int inputtobesearched;
		std::cout << "enter the number you want to find in the index  "; std::cin >> inputtobesearched;
		if (std::binary_search(vec.begin(), vec.end(), inputtobesearched)) {
			std::cout << "Found number "; std::cout << inputtobesearched; std::cout << " in the index";
		}
		else {
			std::cout << "Not found the number that you are looking in the index ";
		}
		return 0;
	}
	else if (insertsample == 2) {
		cout << "type the amount of number that you will add" << endl;
		int sizeofuservector;
		cin >> sizeofuservector;
		if (sizeofuservector < 2) { cout << "Sorry the number for the vector size is too small."; }
		else if (sizeofuservector <= 100 && sizeofuservector >= 2) {
			cout << "Do you want to use  default or custom or skip index point?" << endl;
			int indexpointuser;
			cout << "1 for default, 2 for custom, 3 for skip index point? [1/2/3] "; cin >> indexpointuser;
			if (indexpointuser == 1) {
				cout << "type the number for the index. Only number no character, symbol, unicode character, etc" << endl;
				int amountofnumberinput = 0;
				vector <int> uservector;
				int numberinput;
				while (amountofnumberinput < sizeofuservector) {
					cin >> numberinput;
					uservector.push_back(numberinput);
					amountofnumberinput++;
				}
				std::sort(uservector.begin(), uservector.end());
				iter low = std::lower_bound(uservector.begin(), uservector.end(), 20);
				iter high = std::upper_bound(uservector.begin(), uservector.end(), 20);
				std::cout << "index of first element, less than or equal to 20 is: " << (low - uservector.begin()) << '\n';
				std::cout << "index of first element, greater than to 20 is: " << (high - uservector.begin()) << '\n';
				int inputtobesearched;
				std::cout << "enter the number you want to find in the index  "; std::cin >> inputtobesearched;
				if (std::binary_search(uservector.begin(), uservector.end(), inputtobesearched)) {
					std::cout << "Found number "; std::cout << inputtobesearched; std::cout << " in the index";
				}
				else {
					std::cout << "Not found the number that you are looking in the index ";
				}
				return 0;
			}
			else if (indexpointuser == 2) {
				cout << "type the number for the index. Only number no character, symbol, unicode character, etc" << endl;
				int amountofnumberinput = 0;
				vector <int> uservector;
				int numberinput;
				while (amountofnumberinput < sizeofuservector) {
					cin >> numberinput;
					uservector.push_back(numberinput);
					amountofnumberinput++;
				}
				std::sort(uservector.begin(), uservector.end());
				cout << "type the number for index middle point" << endl;
				int indexmiddlepoint;
				cin >> indexmiddlepoint;
				iter low = std::lower_bound(uservector.begin(), uservector.end(), indexmiddlepoint);
				iter high = std::upper_bound(uservector.begin(), uservector.end(), indexmiddlepoint);
				std::cout << "index of first element, less than or equal to " << indexmiddlepoint << " is " << (low - uservector.begin()) << '\n';
				std::cout << "index of first element, greater than to " << indexmiddlepoint << " is "<< (high - uservector.begin()) << '\n';
				int inputtobesearched;
				std::cout << "enter the number you want to find in the index  "; std::cin >> inputtobesearched;
				if (std::binary_search(uservector.begin(), uservector.end(), inputtobesearched)) {
					std::cout << "Found number "; std::cout << inputtobesearched; std::cout << " in the index"; return 0;
				}
				else {
					std::cout << "Not found the number that you are looking in the index "; return 0;
				}
				return 0;
			}
			else {
				cout << "type the number for the index. Only number no character, symbol, unicode character, etc" << endl;
				int amountofnumberinput = 0;
				vector <int> uservector;
				int numberinput;
				while (amountofnumberinput < sizeofuservector) {
					cin >> numberinput;
					uservector.push_back(numberinput);
					amountofnumberinput++;
				}
				std::sort(uservector.begin(), uservector.end());
				int inputtobesearched;
				std::cout << "enter the number you want to find in the index  "; std::cin >> inputtobesearched;
				if (std::binary_search(uservector.begin(), uservector.end(), inputtobesearched)) {
					std::cout << "Found number "; std::cout << inputtobesearched; std::cout << " in the index"; return 0;
				}
				else {
					std::cout << "Not found the number that you are looking in the index "; return 0;
				}
				return 0;
			}

		}
		else {
			cout << "Are you sure want to add large amount of data it will take large amount of time to input the number by yourself?" << endl;
			int yesorno;
			cout << "1 to continue, 2 to abort [1/2] "; cin >> yesorno;
			if (yesorno == 1) {
				cout << "Do you want to use  default or custom or skip index point?" << endl;
				int indexpointuser;
				cout << "1 for default, 2 for custom, 3 for skip index point? [1/2/3] "; cin >> indexpointuser;
				if (indexpointuser == 1) {
					cout << "type the number for the index. Only number no character, symbol, unicode character, etc" << endl;
					int amountofnumberinput = 0;
					vector <int> uservector;
					int numberinput;
					while (amountofnumberinput < sizeofuservector) {
						cin >> numberinput;
						uservector.push_back(numberinput);
						amountofnumberinput++;
					}
					std::sort(uservector.begin(), uservector.end());
					iter low = std::lower_bound(uservector.begin(), uservector.end(), 20);
					iter high = std::upper_bound(uservector.begin(), uservector.end(), 20);
					std::cout << "index of first element, less than or equal to 20 is: " << (low - uservector.begin()) << '\n';
					std::cout << "index of first element, greater than to 20 is: " << (high - uservector.begin()) << '\n';
					int inputtobesearched;
					std::cout << "enter the number you want to find in the index  "; std::cin >> inputtobesearched;
					if (std::binary_search(uservector.begin(), uservector.end(), inputtobesearched)) {
						std::cout << "Found number "; std::cout << inputtobesearched; std::cout << " in the index"; return 0;
					}
					else {
						std::cout << "Not found the number that you are looking in the index "; return 0;
					}
					return 0;
				}
				else if (indexpointuser == 2) {
					cout << "type the number for the index. Only number no character, symbol, unicode character, etc" << endl;
					int amountofnumberinput = 0;
					vector <int> uservector;
					int numberinput;
					while (amountofnumberinput < sizeofuservector) {
						cin >> numberinput;
						uservector.push_back(numberinput);
						amountofnumberinput++;
					}
					std::sort(uservector.begin(), uservector.end());
					cout << "type the number for index middle point" << endl;
					int indexmiddlepoint;
					cin >> indexmiddlepoint;
					iter low = std::lower_bound(uservector.begin(), uservector.end(), indexmiddlepoint);
					iter high = std::upper_bound(uservector.begin(), uservector.end(), indexmiddlepoint);
					std::cout << "index of first element, less than or equal to  " << indexmiddlepoint << " is " << (low - uservector.begin()) << '\n';
					std::cout << "index of first element, greater than to " << indexmiddlepoint << " is " << (high - uservector.begin()) << '\n';
					int inputtobesearched;
					std::cout << "enter the number you want to find in the index  "; std::cin >> inputtobesearched;
					if (std::binary_search(uservector.begin(), uservector.end(), inputtobesearched)) {
						std::cout << "Found number "; std::cout << inputtobesearched; std::cout << " in the index"; return 0;
					}
					else {
						std::cout << "Not found the number that you are looking in the index "; return 0;
					}
					return 0;
				}
				else {
					cout << "type the number for the index. Only number no character, symbol, unicode character, etc" << endl;
					int amountofnumberinput = 0;
					vector <int> uservector;
					int numberinput;
					while (amountofnumberinput < sizeofuservector) {
						cin >> numberinput;
						uservector.push_back(numberinput);
						amountofnumberinput++;
					}
					std::sort(uservector.begin(), uservector.end());
					int inputtobesearched;
					std::cout << "enter the number you want to find in the index  "; std::cin >> inputtobesearched;
					if (std::binary_search(uservector.begin(), uservector.end(), inputtobesearched)) {
						std::cout << "Found number "; std::cout << inputtobesearched; std::cout << " in the index"; return 0;
					}
					else {
						std::cout << "Not found the number that you are looking in the index "; return 0;
					}
					return 0;
				}
			}
			else if (yesorno == 2) { cout << "This operation is aborted"; return 0; }
			else { cout << "Invalid number. This operation will be aborted"; return 0; }
		}
	}
	else { cout << "sorry you are not entering right number"; return 0; }
}
