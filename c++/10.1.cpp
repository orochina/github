// stock.h -- Stock class interface
// version 00
#ifndef STOCK00_H_
#indfine STOCK00_H_

#include <string>

class Stock // class declaration
{
private:
    std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot(){ total_val = shares * share_val; }	
public:
    void acquires(const std::string & co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};           // not semicolon at end


 
