/*Create a C++ class Date which contains:
private member:
   - Day
   - Month
   - Year
public:
  set_today_date()
  display_date()
  Birth_day_reminder()--> user enter a DOB, function calculate after how many days yours birthday will come,
                          if user give false input(eg: past birthdate) error message will occur.
*/
  #include<iostream>
  using namespace std;

  int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};

  class Date {
  private:
  int day,month,year;
  static int tday,tmonth,tyear;

  public:
  Date(int d ,int m,int y){
    day=d;
    month=m;
    year=y;
  }
 void Reminder() {
        int daysLeft = 0;
        if (month>tmonth || (month==tmonth && day>tday)) {

            for (int i=tmonth;i<month-1;i++) {
                daysLeft+=days[i];
            }
            daysLeft+=days[month-1]-tday+day;
        }
        if(month<tmonth||(month==tmonth && tday>day)){

            for(int i=tmonth-1;i<12;i++){
            daysLeft+=days[i];
            }

           for(int i=0;i<month-1;i++){
           daysLeft+=days[i];}
           daysLeft+=day-tday;
        }

        cout<<"Days till your birthday: "<< daysLeft<<endl;
    }

  void display(){
    cout<<"My dob is "<<day<<"-"<<month<<"-"<<year<<endl;
  }
  void todaydate(){
    cout<<"Today date is "<<tday<<"-"<<tmonth<<"-"<<tyear<<endl;
  }
  };
int Date::tday = 3;
int Date::tmonth = 9;
int Date::tyear = 2024;

int main(){
    int day,month,year;
    cout<<"Enter your date of birth ";
    cin>>day>>month>>year;
    Date obj(day,month,year);
    obj.display();
    obj.todaydate();
    obj.Reminder();
}
