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
#include "baseEngine.h"
class BASE;



class USER {
	friend BASE;
protected:
	std::string login;
	std::string password;
	bool isUser;
	std::string FName;
	std::string Family;
	std::string SNAme;
	std::string phone;

	USER() {
		login = "";
		password = "";
		isUser = true;
		FName = "";
		Family = "";
		SNAme = "";
		phone = "";
	}
};
