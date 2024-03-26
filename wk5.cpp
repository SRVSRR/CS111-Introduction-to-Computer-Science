#include <iostream>

using namespace std;

int main() {
    double hours_in;
    cout << "Enter hours worked:";
    cin >> hours_in;

    string cat = "F" "M";

    cout << "Which category do you belong to? 'M' for management and 'F' for flood worker\n";
    cin >> cat;

    const double time_lim = 40;
    const double ovtm_rate = 1.5;

    const double mg_rate = 10.60;
    const double mag_tax = .35;
    double mgstd_wage = hours_in * mg_rate;
    double mg_tax = mgstd_wage * mag_tax;
    double mg_netgross = mgstd_wage - (mgstd_wage * mg_tax);
    double mg_ot = hours_in - time_lim;
    double mgtm_wage = mg_ot * (mg_rate * ovtm_rate);;
    double mg_wagetotal = mgtm_wage + mgstd_wage;
    double mg_taxtotal = mg_wagetotal * mag_tax;


    const double work_rate = 8.30;
    const double work_tax = .20;
    double wkstd_wage = hours_in * work_rate;
    double wk_tax = wkstd_wage * work_tax;
    double wk_netgross = wkstd_wage - (wkstd_wage * work_tax);
    double wk_ot = hours_in - time_lim;
    double ovtm_wage = wk_ot * (work_rate *ovtm_rate);;
    double ov_wagetotal = ovtm_wage + wkstd_wage;
    double wk_taxtotal = ov_wagetotal * work_tax;

    if(cat == "F" ){
        if(hours_in <= time_lim){
            cout << "***Summary***" << endl;
            cout << "Gross Wage is " << wkstd_wage << endl;
            cout << "Your taxes are "<< wk_tax << endl;
            cout << "Net wage is " << wk_netgross;
        }else {
            cout << "***Summary***" << endl;
            cout << "Over-time pay is " << ovtm_wage << endl;;
            cout << "Total wage is" << ov_wagetotal << endl;
            cout << "Totat taxes are " << wk_taxtotal << endl;

            

        }
    } else if(cat == "M"){
        if(hours_in <= time_lim){
            cout << "Gross Wage is " << mgstd_wage << endl;
            cout << "Your taxes are "<< mg_tax << endl;
            cout << "Net wage is " << mg_netgross;
        } else {
        }
    } else{
        cout << "Please enter in a proper response" << endl;
    }

    cout << hours_in << endl;

    return 0;
}