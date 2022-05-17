// / ============================= \
// | -------  esthete014  -------- |
// | ============================= |
// |     || copyright 2022 ||      |
// |     || Nikolay        ||      |
// |     || Kochetov       ||      |
// | _____________________________ |
// | https://github.com/esthete014 |
// \ ============================= /



#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "User.h"
class USER;


class BASE {
 public:
	std::vector<USER> users;
 
	void readFile() {
		std::string line;
		std::fstream ifile("base.txt", std::ios_base::in);
		ifile.open("base.txt");
		if (!ifile.is_open()) {
			std::fstream ifile("base.txt", std::ios_base::out);
		}
		ifile.close();
		ifile.open("users.txt");
		if (ifile.is_open()) {
			while (getline(ifile, line)) {
				readFromFile(line);
			}
		}
		ifile.close();
	}

	void readFromFile(std::string line) {
		USER user = USER();
		int i = 0;
		user.login = readLineFromFile(line, i);
		user.password = readLineFromFile(line, i);
		if (line[i] == 't') {
			user.isUser = true;
		}
		i += 2;
		user.FName = readLineFromFile(line, i);
		user.Family = readLineFromFile(line, i);
		user.SNAme = readLineFromFile(line, i);
		user.phone = readLineFromFile(line, i);
		users.push_back(user);
	}

	std::string readLineFromFile(std::string line, int &i) {
		std::string resLine;
		while (line[i] != char(47)) {
			resLine += line[i];
			i++;
		}
		i++;
		return resLine;
	}

	bool sendMessageLogin(std::string login, std::string password, bool isUser) {
		int vectorUserSize = users.size();
		for (int i = 0; i < vectorUserSize; i++) {
			if (login == users[i].login && password == users[i].password) {
				return true;
			}
		}
		return false;
	}

	bool sendMessageRegister(std::string name, std::string surname, std::string patronymic, std::string login, std::string password, std::string phone) {
		for (int i = 0; i < users.size(); i++) {
			if (login == users[i].login) {
				return false;
			}
		}
		USER user = USER();
		user.login = login;
		user.password = password;
		user.isUser = true;
		user.FName = name;
		user.Family = surname;
		user.SNAme = patronymic;
		user.phone = phone;
		users.push_back(user);
		return true;
	}
};