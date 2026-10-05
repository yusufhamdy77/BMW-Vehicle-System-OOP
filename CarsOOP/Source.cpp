#include<iostream>
using namespace std;

class BMW
{
private:
	void exterior(){
		cout << "Exterior: 18 V - Spoke Bicolor 866 Wheels with All Season Tires " << endl;

	}
	void connectivity()
	{
		cout << "Connectivity: Remote Software Upgrade Capable" << endl;

	}
	void WARRENTY  ()
	{
		cout << "Warranty: 12-year Unlimited Mileage Rust Perforation Limited Warranty" << endl
			<< "4-year Unlimited Mileage Roadside Assistance Program" << endl;
	}
	void AudioSystem()
	{
		cout << "Audio System: HiFi Sound System" << endl
			<< "SiriusXM® with 360L + 1 year Platinum Plan Subscription" << endl;
	}

	void controls()
	{
		cout << "Controls: 3-spoke leather-wrapped sport steering wheel" << endl;
	}
protected:
	virtual float price() = 0;
	virtual const char* modelname() = 0;
	virtual void security() = 0;
	virtual void efficiency()= 0;
	virtual void comfort() = 0;
	virtual void handling() = 0;


public:
	void showing()
	{


	
		
			 cout << endl;
			 cout << " Model Name is : " << modelname() << endl;
			 cout << "======================================================" << endl;
			 security();
			 cout << "======================================================" << endl;
			 efficiency();
			 comfort();
			 handling();
			 cout << "======================================================" << endl;
			 cout << " Price: " << price() << endl;
		 }





};
// suv section
class Suv : public BMW
{
protected :
	void security()
	{
		cout << "Security: 360-degree cameras, and advanced airbag systems. Sturdy build for enhanced protection" << endl;
	}
	void Seatupholstery()
	{

		cout << " seat Matrials : primeum matrials like vernasa leather " << endl
		<< "wood and aluminum accents, emphasizing luxury and utility. ." << endl;

	}


};

// x1 in suv
class x1suv :public Suv
{
protected:

	void efficiency()
	{
				cout << "Motor: 2.0-liter BMW TwinPower Turbo inline 4-cylinder, xDrive, intelligent all-wheel drive" << endl;

	}

	void comfort()
	{
		cout << "Comfort: Engine Start/Stop button" << endl;

	}

	void handling()
	{
			cout << "Handling: Servotronic vehicle-speed-sensitive power steering" << endl;

	}

};
//class for each car  model in suv 
class x128i :public x1suv
{

protected:

	const char* modelname()
	{
		return "X1 xDrive28i";  
	}

	float price()
	{
		return 44000;

	}
};
//class for each  car model in suv 
class x2M35i :public x1suv
{
protected:
	const char* modelname()
	{
		return "X2 M35i";  
	}
	float price()
	{
		return 55000;
	}


};
//x4
class x4suv : public Suv
{
protected:
	void comfort()
	{
		cout << "Comfort: Advanced Vehicle & Key Memory includes most recently used climate-control temperature and air-distribution settings." << endl;
	}

	void handling()
	{
		cout << "Handling: Servotronic vehicle-speed-sensitive power steering" << endl;

	}

};
//class for each  car model in suv 
class X4xDrive30i :public x4suv 
{

protected:

	void efficiency()
	{
		cout << " 30i : motor 2.0-liter BMW TwinPower Turbo inline 4-cylinder" << endl;
	}
	const char*modelname()
	{
		return"X4xDrive30i";
	}
	float price()
	{
		return 25000;
	}

};
//class for each  car model in suv 
class X4M40i :public x4suv
{

protected:

	void efficiency()
	{
		cout << " 40i : motor 3.0-liter BMW TwinPower Turbo inline 6-cylinder" << endl;
	}
	const char* modelname()
	{
		return "X4 M40i";  
	}
	float price()
	{
		return 55000;
	}

};
class X4M :public Suv
{
protected:

	void efficiency()
	{
		cout << "Motor: 3.0-liter BMW M TwinPower Turbo technology 473-hp inline 6-cylinder engine." << endl;
	}
	void handling()
	{
		cout << "Handling: M Sport Differential" << endl;
	}
	const char* modelname()
	{
		return "X4M";
	}
	void comfort()
	{
		cout << "Comfort: Driver's and passenger's front airbag supplemental restraint system (SRS) with advanced technology" << endl;
	}
	float price()
	{
		return 79100;
	}
};
//x5
class x5suv :public Suv
{
	protected :
		void handling()
		{
			cout << "Handling: Dynamic Stability Control(DSC), including Brake Fade Compensation." << endl;
		}
		void comfort()
		{
			cout << "Comfort: Advanced Vehicle & Key Memory includes most recently used climate-control temperature and air-distribution settings." << endl;



		}
		};
//class for each   x5 car model in suv 

class X5xDrive40i : public x5suv
{
protected:
	void efficiency()
	{
		cout << "Motor: 3.0 - liter BMW TwinPower Turbo inline 6 - cylinder, 24 - valve 375 - hp engine with eBoost 48V mild hybrid technology." << endl;
	}
	const char* modelname()

		{
		return "X5 xDrive40i"; 
	}
	
	float price()
	{
		return 75000;
	}
};
//class for each x5  car model in suv 

class X5M60i: public x5suv
{
protected:
	void efficiency()
	{
		cout << "Motor: 4.4-liter BMW TwinPower Turbo V-8 engine." << endl;
	}
	const char* modelname()

	{
		return "X5 M60i";  
	}

	float price()
	{
		return 56000;
	}

};
//class for each x5 car model in suv 

class X5xDrive50e : public x5suv{
protected:
	void efficiency()
	{
		cout << "Motor: 3.0-liter BMW TwinPower Turbo inline 6-cylinder, 24-valve engine." << endl;
	}
	const char* modelname()
	{
		return "X5 xDrive50e";
	}
	float price()
	{
		return 73800;
	}
};

//===============sedans==========
class Sedan : public BMW
{
protected:
	void security()
	{
		cout << "Security: 360-degree cameras, and advanced airbag systems. Sturdy build for enhanced protection" << endl;
	}
	void Seatupholstery()
	{

		cout << " Matrial : High-end finishes like Sensatec and genuine leather with sleek wood and aluminum trims." << endl
			<< "Attention to detail for a refined, luxurious ambiance." << endl;
	}

};

//i5 sedans 
//i5 from sedans
class i5Sedan : public Sedan
{
protected:
	void handling()
	{
		cout << "Handling: Variable Sport Steering. " << endl;
	}
	void comfort()
	{
		cout << "Comfort: Universal garage-door opener. " << endl;
	}


};
class i5M60 : public i5Sedan
{protected:
	void efficiency()
	{
		cout << "Motor: Dual all-electric motors with a total power output of 593 hp and 586 lb ft of torque." << endl;

	}
	const char* modelname()
	{

		return "i5 M60 ";
	}
	float price()
	{
		return 42000;

	}

	
};
class i5xDrive40 : public i5Sedan
{
protected:
	void efficiency()
	{
		cout << "Motor: Dual all-electric motors with a total power output of 389-hp and 435 lb-ft of torque. " << endl;

	}
	const char* modelname()
	{
		return"i5 xDrive40";
	}
	float price()
	{
		return 82016;
	}
};
//i7
class i7sedan : public Sedan
{
protected:
	void handling()
	{
		cout << "Handling: 4-wheel ventilated disc brakes with Anti-lock Braking System (ABS). " << endl;
	}
	void comfort()
	{
		cout << "Comfort: Advanced Vehicle & Key Memory includes most recently used climate-control temperature and air-distribution settings. " << endl;
	}

};
class I7xDrive60 :public i7sedan
{
protected:

	void efficiency()
	{
		cout << "Motor: Dual all-electric motors with a total power output of 536-hp and 549lb-ft of torque. " << endl;

	}
	const char* modelname()
	{
		return "i7 xDrive60"; 
	}
	float price()
	{
		return 124200;
	}
};
class I7M70 :public i7sedan
{
protected:
	void efficiency()
	{
		cout << "Motor: Dual all-electric motors with a total power output of 650hp and 749 lb-ft of torque motor. " << endl;

	}

	const char* modelname()
	{
		return "I7 M70";
	}
	float price()
	{
		return 168500;
	}



};

//M8
class m8sedan :public Sedan
{
protected:
	void efficiency()
	{
		cout << "Motor: 4.4-liter BMW M TwinPower Turbo V-8, 32-valve 617-hp engine. " << endl;

	}
	void handling() {
		cout << "Handling: M-developed electric power steering with Servotronic" << endl;

	}

	void comfort ()
	{
		cout << "Comfort: Advanced Vehicle & Key Memory includes most recently used climate-control temperature and air-distribution settings. " << endl;

	}

	const char* modelname()
	{
		return "M8 Competition Gran Coupe";

	}
	float price()
	{
		return 140000;
	}
};

//coupes
class coupes :public BMW
{
protected:

	void security()
	{
		cout << "Security: Sport-inspired interiors featuring Alcantara, carbon fiber accents," << endl
			<< "and contoured sport seats for the driver and front passenger." << endl;
	}
	void Seatupholstery()
	{
		cout << "Interior Trim: Sport-inspired interiors featuring Alcantara, carbon fiber accents," << endl
			<< "and contoured sport seats for the driver and front passenger.." << endl;

	}


};
class coupe2: public coupes
{ protected: 

	void handling()
	{
		cout << "Handling: Servotronic power-steering assist. " << endl;
	}
	void comfort()
	{
		cout << "Comfort: Storage compartment package. " << endl;
	}

};

class Coupe230ixDrive : public coupe2 
{
protected:

	void efficiency()
	{
		cout << "Motor: 2.0-liter BMW TwinPower Turbo inline 4-cylinder, xDrive all-wheel drive. " << endl;

	
	
	}

	const char* modelname()
	{
		return "230i xDrive Coupe"; 
	}

	float price()
	{
		return 41500;

	}
};
class CoupeM240ixDrive :public coupe2
{
protected:
	void efficiency()
	{
		cout << "Motor: 2.0-liter BMW TwinPower Turbo inline 4-cylinder, xDrive all-wheel drive. " << endl;

	}
	const char* modelname()
	{
		return "M240i xDrive Coupe";
	}
	float price()
	{
		return 41600;
	}
};

class coupem2 :public coupe2
{
protected :
	void efficiency()
	{
		cout << "Motor: 3.0-liter BMW TwinPower Turbo inline 6-cylinder, xDrive all-wheel drive. " << endl;

	}
	const char* modelname()
	{
	return " M240I xDrive";
	}
	float price()
	{
		return 52600;
	}
};
// m2 coupe
class M2Coupe :public coupes
{protected:
	void efficiency()
	{
		cout << "Motor: 3.0-liter BMW M TwinPower Turbo technology 473-hp inline 6-cylinder engine. " << endl;
	}
	void handling()
	{
		cout << "Handling: M-developed electric power steering with Servotronic. " << endl;
	}
	const char* modelname()
	{
		return "M2 Coupe";
	}
	void comfort()
	{
		cout << "Comfort: Advanced Vehicle & Key Memory includes most recently used climate-control temperature and air-distribution settings. " << endl;
	}
	float price()
	{
		return 65500;
	}



};

// convertible
class Convertible :public BMW
{
protected:

	void security()
	{
		cout << "Security: Sport-inspired interiors featuring Alcantara, carbon fiber accents," << endl
			<< "and contoured sport seats for the driver and front passenger." << endl;
	}
	void Seatupholstery()
	{
		cout << "Interior Trim: Luxury materials similar to coupes but with added weather-resistant finishes." << endl;


	}



};
//convertiable8
class Convertible8 : public Convertible {
protected:
	void handling()
	{
		cout << "Handling: Dynamic Stability Control (DSC), including Brake Fade Compensation," << endl
			<< "Start - off Assistant, Brake Drying, and Brake Stand - by features. " << endl;
	}
	void comfort()
	{
		cout << "Comfort: Advanced Vehicle & Key Memory includes most recently used climate-control temperature and air-distribution settings. " << endl;
	}
};
//Convertible840ixDrive
class Convertible840ixDrive :public Convertible8
{
protected:
	void efficiency()
	{
		cout << "Motor: 3.0-liter BMW TwinPower Turbo inline 6-cylinder, xDrive; intelligent all-wheel drive. " << endl;

	}

	const char* modelname()
	{
		return "840i xDrive Convertible"; 
	}

	float price()
	{
		return 104400;
	}


};

class ConvertibleM850ixDrive : public Convertible8 {
protected:
	void efficiency()
	{
		cout << "Motor: 4.4-liter BMW M TwinPower Turbo V-8 engine, xDrive; intelligent all-wheel drive. " << endl;
	}
	const char* modelname()
	{
		return "M850i xDrive Convertible"; 
	}
	float price()
	{
		return 117000;
	}
};


void BMWCars ()
{
	int typechoise;
	cout << "Choose a type: " << endl
		<< "1> SUV " << endl
		<< "2> Sedan " << endl
		<< "3> Coupes " << endl
		<< "4> Convertibles " << endl;

	cout << "Which one: ";
	cin >> typechoise;

	if (typechoise == 1) {
		cout << "Choose an SUV car:" << endl;
		cout << "\t1: X1 xDrive28i" << endl;
		cout << "\t2: X2 M35i" << endl;
		cout << "\t3: X4 xDrive30i" << endl;
		cout << "\t4: X4 M40i" << endl;
		cout << "\t5: X4M" << endl;
		cout << "\t6: X5 xDrive40i" << endl;
		cout << "\t7: X5 M60i" << endl;
		cout << "\t8: X5 xDrive50e" << endl;
		cout << "Which One: ";
		cin >> typechoise;
		
	}
	else if (typechoise == 2) {
		cout << "Choose a Sedan:" << endl;
		cout << "\t9: i5 M60" << endl;
		cout << "\t10: i5 xDrive40" << endl;
		cout << "\t11: i7 xDrive60" << endl;
		cout << "\t12: i7 M70" << endl;
		cout << "\t13: M8 Competition Gran Coupe" << endl;
		cout << "Which One: ";
		cin >> typechoise;
	}
	else if (typechoise == 3) {
		cout << "Choose a Coupe:" << endl;
		cout << "\t14: 230i xDrive Coupe" << endl;
		cout << "\t15: M240i xDrive Coupe" << endl;
		cout << "\t16: M2 Coupe" << endl;
		cout << "Which One: ";
		cin >> typechoise;
	}
	else if (typechoise == 4) {
		cout << "Choose a Convertible:" << endl;
		cout << "\t17: 840i xDrive Convertible" << endl;
		cout << "\t18: M850i xDrive Convertible" << endl;
		cout << "Which One: ";
		cin >> typechoise;
	}

	BMW* BmwCar = nullptr;

	switch (typechoise)
	{
	case 1:
		BmwCar = new x128i;
		break;
	case 2:
		BmwCar = new x2M35i;
		break;
	case 3:
		BmwCar = new X4xDrive30i;
		break;
	case 4:
		BmwCar = new X4M40i;
		break;
	case 5:
		BmwCar = new X4M;
		break;
	case 6:
		BmwCar = new X5xDrive40i;
		break;
	case 7:
		BmwCar = new X5M60i;
		break;
	case 8:
		BmwCar = new X5xDrive50e;
		break;
	case 9:
		BmwCar = new i5M60;
		break;
	case 10:
		BmwCar = new i5xDrive40;
		break;
	case 11:
		BmwCar = new I7xDrive60;
		break;
	case 12:
		BmwCar = new I7M70;
		break;
	case 13:
		BmwCar = new m8sedan;
		break;
	case 14:
		BmwCar = new Coupe230ixDrive;
		break;
	case 15:
		BmwCar = new CoupeM240ixDrive;
		break;
	case 16:
		BmwCar = new M2Coupe;
		break;
	case 17:
		BmwCar = new Convertible840ixDrive;
		break;
	case 18:
		BmwCar = new ConvertibleM850ixDrive;
		break;
	default:
		cout << "Invalid Choice!" << endl;
		return;

	}
	if (BmwCar)
	{
		BmwCar->showing();
		delete BmwCar;
	}
}

int main()
{


	char again = 'y';
	while (again == 'Y' || again == 'y')
	{
		BMWCars();
		cout << "Do you want to run again(Y/n): ";
		cin >> again;
	}
	return 0;
}