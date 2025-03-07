// Author:   Tong Qin               qintonguav@gmail.com
// 	         Shaozu Cao 		    saozu.cao@connect.ust.hk

#pragma once

#include <ctime>
#include <cstdlib>
#include <chrono>

class TicToc
{
public:
	TicToc()
	{
		tic();
	}

	void tic()
	{
		// record start time
		start = std::chrono::system_clock::now();
	}

	double toc()
	{
		end = std::chrono::system_clock::now();
		std::chrono::duration<double> elapsed_seconds = end - start;
		return elapsed_seconds.count() * 1000;
	}

private:
	std::chrono::time_point<std::chrono::system_clock> start, end;
};
