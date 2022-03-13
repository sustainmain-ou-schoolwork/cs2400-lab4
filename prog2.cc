/**
 *    @file: prog2.cc
 *  @author: Josh Marusek
 *    @date: 2021-09-17
 *   @brief: From lab 4; calculates the best of two wage plans
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
  const double RATE = 5.50, COM1 = 0.10, COM2 = 0.15;  // payment plan constants
  double sales;         // dollar value of weekly sales
  double plan1, plan2;  // value of each plan

  cout << "Enter the weekly sales amount: ";
  cin >> sales;
  plan1 = (RATE * 40) + sales * COM1;
  plan2 = sales * COM2;

  // display plan details
  cout << endl;
  cout << fixed << setprecision(2);
  cout << "Amount of sales $" << sales << endl;
  cout << "Plan 1 pays $" << plan1 << endl;
  cout << "Plan 2 pays $" << plan2 << endl;

  // display which plan is best
  if (plan1 > plan2)
  {
    cout << "Plan 1 is better" << endl;
  }
  else if (plan2 > plan1)
  {
    cout << "Plan 2 is better" << endl;
  }
  else
  {
    cout << "Both plans are equal." << endl;
  }

  return (EXIT_SUCCESS);
}
