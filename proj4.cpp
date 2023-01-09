#include <iostream>
#include <string>

double getFreqFromTime()
{
 double time;
 std::cout << '\n' << "enter time interval in seconds" << '\n';
 std::cin >> time;
 double freq = 1 / time;
 std::cout << '\n' << freq << "hz\n";
 return freq;
};

double getLengthFromTime()
{
 double time;
 std::cout << '\n' << "enter time interval in seconds" << '\n';
 std::cin >> time;
 double freq = 1 / time;
 double speedofsound = 34400.00;
 double wavelength = (speedofsound / freq);
 std::cout << '\n' << wavelength << "cm\n";
 return wavelength;
}

double getOvertonesfromTime()
{
 double time;
 std::cout << '\n' << "enter time interval in seconds" << '\n';
 std::cin >> time;
 double root = 1 / time;
 double overtones;
 std::cout << '\n';

 for (double i = 1; i < 6; i++)
 {
  overtones = root * i;
  std::cout << i << ": " << overtones << "hz" << '\n';
 }
 std::cout << '\n';
 return overtones;
}

double getLengthFromFreq()
{
 double freq;
 std::cout << '\n' << "enter frequency in hertz" << '\n';
 std::cin >> freq;
 double speedofsound = 34400.00;
 double wavelength = (speedofsound / freq);
 std::cout << '\n' << wavelength << "cm\n";
 return wavelength;
};

double getOvertonesFromFreq()
{
 double root;
 double overtones;
 std::cout << "enter frequency in hz" << '\n';
 std::cin >> root;
 std::cout << '\n';

 for (double i = 1; i < 6; i++)
 {
  overtones = root * i;
  std::cout << i << ": " << overtones << "hz" << '\n';
 }
 std::cout << '\n';
 return overtones;
};

double getTimefromFreq()
{
 double freq;
 std::cout << "enter frequency in hertz" << '\n';
 std::cin >> freq;
 double time = 1 / freq;
 std::cout << time << "s\n";
 return time;
}

double getFreqFromLength()
{
 double length;
 std::cout << '\n' << "enter length in centimeters" << '\n';
 std::cin >> length;
 double speedofsound = 34400.00;
 double freq = (speedofsound / length);
 std::cout << '\n' << freq << "hz\n";
 return freq;
}

double getOvertonesFromLength()
{

 double length;
 std::cout << '\n' << "enter length in centimeters" << '\n';
 std::cin >> length;
 double speedofsound = 34400.00;
 double root = (speedofsound / length);
 double overtones;
 std::cout << '\n';

 for (double i = 1; i < 6; i++)
 {
  overtones = root * i;
  std::cout << i << ": " << overtones << "hz" << '\n';
 }
 std::cout << '\n';
 return overtones;
}

double getTimeFromLength()
{
 double length;
 std::cout << '\n' << "enter length in centimeters" << '\n';
 std::cin >> length;
 double speedofsound = 34400.00;
 double freq = (speedofsound / length);
 double time = 1 / freq;
 std::cout << '\n' << time << "s\n";
 return time;
}

void Selector()
{
 std::cout <<  '\n' << "Convert from: " << '\n'
           // << '\n' << "options : time (s), length (cm), or frequency (hz)" << '\n'
           << '\n';
 std::string from;
 std::cin >> from;

 std::cout <<  '\n' << "Convert to: " << '\n'
           // << '\n' << "options : time (s), length (cm), frequency (hz) or overtones (hz)" << '\n'
           << '\n';
 std::string to;
 std::cin >> to;

 if (from == "frequency" && to == "length")
 {
  getLengthFromFreq();
 }
 else if (from == "frequency" && to == "overtones")
 {
  getOvertonesFromFreq();
 }
 else if (from == "frequency" && to == "time")
 {
  getTimefromFreq();
 }
 else if (from == "time" && to == "frequency")
 {
  getFreqFromTime();
 }
 else if (from == "time" && to == "overtones")
 {
  getOvertonesfromTime();
 }
 else if (from =="time" && to == "length")
 {
  getLengthFromTime();
 }
 else if (from == "length" && to == "frequency")
 {
  getFreqFromLength();
 }
 else if (from == "length" && to == "overtones")
 {
  getOvertonesFromLength();
 }
 else if (from == "length" && to == "time")
 {
  getTimeFromLength();
 }
 else
 {
  std::cout << "hold on\n";
 }
}





int main()
{
 Selector();
 std::cin.get();
 return 0;
}