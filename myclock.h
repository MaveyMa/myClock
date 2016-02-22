#ifndef MYCLOCK_H
#define MYCLOCK_H

/*
Class Name: MyClock
Description: Creates a clock, down to the hrs, min, sec, am/pm, and optional military time.
*/

class MyClock
{
	private:
		unsigned int hours, 
					 minutes, 
					 seconds;
		char amPm;
		//Are we displaying in military time?
		bool isMilitaryTime;

	public:
		//****************************************
		MyClock();
		// Sets the time to 12:00 AM 
		// (12 for hours, 0 for minutes, 
		// 0 for seconds and A for amPm). 
		// Assigns isMilitaryTime to false.
		//****************************************
		//
		//****************************************
		MyClock(unsigned int h, unsigned int m, 
				unsigned int s, char aOrP, bool isMTime);
		// Assign h if it's [1, 12] range. Else hours is 1.
		// Assign m if it's [0, 59] range. Else minutes is 0.
		// Assign s if it's [0, 59] range. Else seconds is 0.
		// Assign aOrP A/a or P/p. Else amPm is A.
		//****************************************
		//
		//****************************************
		void setHours(unsigned int h);
		// Assign h if it's [1, 12] range. Else hours is 1.
		// Display message: Assigned h to default value of 1. 
		//****************************************
		//
		//****************************************
		void setMinutes(unsigned int m);
		// Assign m if it's [0, 59] range. Else minutes is 0.
		// Display message: Assigned m to default value of 0. 
		//****************************************
		//
		//****************************************
		void setSeconds(unsigned int s);
		// Assign s if it's [0, 59] range. Else seconds is 0.
		// Display message: Assigned s to default value of 0. 
		//****************************************
		//
		//****************************************
		void setAMPM(char aOrP);
		// Assign aOrP A/a or P/p. Else amPm is A.
		// Display message: Assigned amPm default value of A. 
		//****************************************
		//
		//****************************************
		void setMilitaryTime(bool isMTime);
		// Assigns true or false to isMilitaryTime.
		//****************************************
		//
		//****************************************
		// Getters will all return values they refer to.
		unsigned int getHours();
		unsigned int getMinutes();
		unsigned int getSeconds();
		char getAMPM();
		bool getMilitaryTime();
		//****************************************
		//
		//****************************************
		void tick();
		// Increase seconds of the clock by 1. 
		// If seconds is 60, 
		// 		set seconds to 0 and increase minutes by 1. 
		// If minutes is 60, 
		// 		set minutes to 0 and increase hours by 1. 
		// If hours is 13 AM, 
		// 		set hours to 1 AM.
		// If hours is 13 PM,
		// 		set hours to 1 PM.
		//****************************************
		//
		//****************************************
		void displayMilitaryTime();
		// Helper function for displayTime().
		// Display military time 1:00 hours to 24:00 hours. 
		//****************************************
		//
		//****************************************
		void displayTime();
		// If isMilitaryTime is false,
		// 		display standard time 12:00 A.
		// If isMilitaryTime is true,
		// 		display military time 1:00 hrs to 24:00 hrs. 
		//****************************************
};

#endif //MYCLOCK_H
