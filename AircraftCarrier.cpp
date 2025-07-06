#include<iostream>
#include<string>
using namespace std;
class CarrierFleet//CarrierFleet
{
	public:
		string Name;
		string Origin;
		string Displacement;
		string Info;
};
DailyActivities()
{ 
	int ch;
	do
	{
		cout<<"Select A Daily Activivty : "<<endl<<endl;
		cout<<"1. Initiate Mission Planning "<<endl;
		cout<<"2. Timings of Crew members  "<<endl;
		cout<<"3. Training Sessions  "<<endl;
		cout<<"4. Daily Inspection "<<endl;
		cout<<"5. Communication Drills "<<endl;
		cout<<"Enter Your Choice : ";
		cin>>ch;
		switch(ch)
		{		
			case 1:
				cout<<endl; 
				cout<<"Phase 1:Pre-Mission Planning(1200-1400 hours)"<<endl<<endl;
				cout<<"1. Intelligence Briefing : Review enemy disposition, target Locations, and weather forecast"<<endl;
				cout<<"2. Tasking :    Launch 4x MIG-29k fighters for combat air patrol(CAP)"<<endl;
				cout<<"\t\tDeploy 2x Kamov ka-31 AEW &C for airborne early warning"<<endl;
				cout<<"\t\tUtilize Kamov ka-28 ASW helicopters for submarine detection and engagement"<<endl;
				cout<<"\t\tProvide air support for convoy escort"<<endl;
				cout<<"\t\tReport To Base after Mission is Successful"<<endl;
			break;
			case 2:
				cout<<endl;
				cout<<"Training and exercise Schedule : "<<endl;
				cout<<"1. 6:00 to 9:00 AM - Exercise/Drills/Breakfast"<<endl;
				cout<<"2. 9:00 to 12:00 - Manuvaring aircrafts to tackle enenemies from entering : "<<endl;
				cout<<"3. 12:00 to 2:00 - Break/Lunch"<<endl;
				cout<<"4. 2:00 to 5:00 - Aircraft training"<<endl;
				cout<<"5. 5:00 to 6:00 - Tea Braeak"<<endl;
				cout<<"6. 6:00 to 9:00 - Performing checkup/Maintainance of Fleet/Servicing of aircrafts"<<endl;
			break;
			case 3:
				cout<<"Exercise: Carrier Air Wing (CAV) Integration Exercise"<<endl;
				cout<<"Ojectives:"<<endl;
				cout<<"Coordinate and synchronize flight operations between multiple aircraft types Practice emergency procedures and carrier landing techniques"<<endl<<endl;
				cout<<"Training Session:"<<endl<<endl;
				
				cout<<"0600 Hours:"<<endl;
				cout<<"Pre-Flight Briefing:"<<endl;
				cout<<"Pilots and aircrew gather in the carrier's hangar bay for a detailed briefing."<<endl;
				cout<<"The mission commander outlines the day's objectives, flight patterns, and emergency procedures."<<endl;
				cout<<"Aircraft technicians conduct final checks on the MiG-29K fighters and other aircraft."<<endl<<endl;
				
				cout<<"0700 Hours:"<<endl;
				
				cout<<"Aircraft Launch:"<<endl;
				cout<<"MiG-29Ks are armed with live ammunition and fueled up."<<endl;
				cout<<"Using steam catapults, the fighters are launched from the flight deck at regular intervals."<<endl;
				cout<<"Early warning aircraft like the MiG-29K (with EW pods) take off to establish an air defense screen."<<endl<<endl;
					
				cout<<"0800 Hours:"<<endl;
				cout<<"Air Combat Maneuvers (ACM):"<<endl;
				cout<<"MiG-29Ks engage in simulated air combat with each other and with simulated enemy aircraft."<<endl;
				cout<<"this tests the pilots' skills in close-quarters maneuvering and weapons delivery."<<endl<<endl;
					
				cout<<"1000 Hours:"<<endl;
				cout<<"Strike Mission:"<<endl;
				cout<<"A group of MiG-29Ks is tasked with a simulated strike mission against a distant target."<<endl;
				cout<<"They practice long-range flight, refueling in the air, and coordinated attacks."<<endl<<endl;
					
				cout<<"1200 Hours:"<<endl;
				cout<<"Landing Practice:"<<endl;
				cout<<"Aircraft return to the carrier for refueling and rearming."<<endl;
				cout<<"Pilots practice carrier landings using the optical landing system and the guidance of landing signal officers."<<endl;
				cout<<"Emergency procedures are simulated, such as engine failures or aborted landings."<<endl<<endl;
					
				cout<<"1400 Hours:"<<endl;
				cout<<"Search and Rescue (SAR) Exercise:"<<endl;
				cout<<"A helicopter is launched to simulate a rescue mission at sea."<<endl;
				cout<<"The crew practices locating and recovering personnel from the water."<<endl<<endl;
				
				cout<<"1600 Hours:"<<endl;
				cout<<"Debriefing:"<<endl;
				cout<<"Pilots and aircrew gather to discuss the day's operations."<<endl;
				cout<<"Lessons learned are identified, and areas for improvement are noted."<<endl<<endl;
			break;
			case 4:
				cout<<"Propulsion Systems:"<<endl<<endl;
	
				cout<<"Engines: Visual inspection for leaks, corrosion, and damage. Checking oil and coolant levels, and monitoring engine performance parameters."<<endl;
				cout<<"Boilers: Inspecting for water levels, pressure gauges, and safety valves. Checking for leaks and signs of corrosion."<<endl;
				cout<<"Shafts and Propellers: Visual inspection for damage, alignment, and corrosion. Checking for vibration and noise levels."<<endl<<endl;
				
				cout<<"Aviation Facilities:"<<endl;
				cout<<"Flight Deck: Inspecting the deck surface for damage, foreign object debris (FOD), and ensuring proper markings and lighting."<<endl;
				cout<<"Hangar Bay: Inspecting the hangar floor, tie-down points, and fire suppression systems. Checking for leaks and proper ventilation."<<endl;
				cout<<"Aircraft: Daily pre-flight inspections of all aircraft, including visual checks for damage, fuel levels, and hydraulic fluid levels."<<endl<<endl;
			
				cout<<"Electrical Systems:"<<endl;
				cout<<"Power Generation: Inspecting generators, transformers, and switchboards. Checking for voltage and current levels, and ensuring proper cooling."<<endl;
				cout<<"Distribution Systems: Inspecting cables, conduits, and junction boxes. Checking for damage, loose connections, and overheating."<<endl;
				cout<<"Lighting Systems: Inspecting all lighting fixtures, including deck lighting, hangar bay lighting, and emergency lighting. Ensuring proper operation and brightness."<<endl<<endl;
				
				cout<<"Other Systems:"<<endl;
				cout<<"Hull and Superstructure: Visual inspection for damage, corrosion, and biofouling. Checking for leaks and water ingress."<<endl;
				cout<<"Weapon Systems: Inspecting missiles, guns, and radar systems. Ensuring proper alignment, power supply, and readiness for operation."<<endl;
				cout<<"Communication Systems: Inspecting radios, satellite communications, and internal communication systems. Ensuring proper operation and signal strength."<<endl;
			break;
			case 5:
				cout<<endl;
				cout<<"Internal Communications:"<<endl;
				cout<<"Voice Communication: Regular voice communication drills are conducted to ensure clarity, accuracy, and efficiency in voice transmissions between bridge, operations room"<<endl;
				cout<<"Data Link Communications: Drills are conducted to ensure seamless data exchange between various systems, such as the combat management system, radar systems, and weapon systems."<<endl;
				cout<<"Internal Telephone Systems: Regular testing of internal telephone systems to ensure reliable communication between different departments and personnel."<<endl<<endl;
				
				cout<<"External Communications:"<<endl;
				cout<<"Radio Communications: Drills to practice communication with other ships, submarines, and aircraft using various radio frequencies."<<endl;
				cout<<"Satellite Communications: Drills to ensure reliable communication with shore-based facilities and other naval assets using satellite communication systems."<<endl;
				cout<<"Tactical Data Link (TDL) Communications: Drills to practice data exchange with other naval units using TDL systems."<<endl<<endl;
				
				cout<<"Emergency Communications:"<<endl;
				cout<<"Emergency Broadcast System (EBS): Regular testing of the EBS to ensure it can be used to disseminate emergency information to all personnel on the ship."<<endl<<endl;
			break;
			default:
				cout<<"Invalid Choice.Please try again"<<endl;
		}
		cout<<endl;
		cout<<"Press 1 to Repeat, 0 to exit : ";
		cin>>ch;
	}
	while (ch==1);
	return 0;
}
void Squadron()  //squadron details of ins vikramaditya
{
	cout<<endl;
	cout<<"Squadron details Of INS Vikramaditya : "<<endl<<endl;
	cout<<"Squadron\t	 Name\t\t\t Aircraft"<<endl;
	cout<<"INAS 300\t\t White Tigers\t	 MiG 29KUB"<<endl;	
	cout<<"INAS 303\t\t The Black Panthers\t MiG 29K"<<endl;	
	cout<<"INAS 321\t\t The Angels\t\t HAL Chetak"<<endl;	
	cout<<"INAS 322\t\t The Guardians\t\t HAL Dhruv"<<endl;
	cout<<"INAS 330\t\t The Harpoons\t\t Sea King"<<endl;	
	cout<<"INAS 339\t\t The Falcons\t\t Kamov Ka-31"<<endl<<endl;
};
void Squadronv()  //squadron details of ins vikrant
{
	cout<<"Squadron details of INS Vikrant : "<<endl;
	cout<<"Squadron\t	 Name\t\t\t Aircraft"<<endl;
	cout<<"INAS 300\t\t White Tigers\t	 MiG 29KUB"<<endl;	
	cout<<"INAS 303\t\t The Black Panthers\t MiG 29K"<<endl;	
	cout<<"INAS 321\t\t The Angels\t\t HAL Chetak"<<endl;	
	cout<<"INAS 322\t\t The Guardians\t\t HAL Dhruv"<<endl;
	cout<<"INAS 334\t\t The SeaHawks\t\t MH-60 R"<<endl;	
	cout<<"INAS 339\t\t The Falcons\t\t Kamov Ka-31"<<endl<<endl;
};
class Aircrafts //Aircraft details Operating in the squadron
{
	public:
		string Name;
		string Type;
		string Commissioning;
		string Squadron;
		string Commander;
		string Info;
};
class Modification  //Modification Details of Aircarfts
{
	public:
		string Avionics;
		string Bombs;
		string Communication;
		string Engine;
		string Guns;
		string Radar;
		string Warfare;
};
int main()
{
	string username,password;
	string Name,pass;
	string chief,Secret;
	string info;
	int ch;
	int choice;
	string Avionics,Communication,Engine,Guns,Radar,Warfare;
	CarrierFleet myOtherObj1,myOtherObj2;
	Aircrafts myObj1,myObj2,myObj3,myObj4,myObj5,myObj6,myObj7;
	Modification myModObj1,myModObj2,myModObj3,myModObj4,myModObj5,myModObj6,myModObj7;
	cout<<"Enter username : ";
	cin>>username;
	cout<<"Enter password : ";
	cin>>password;
	if(username=="CarrierFleet@123" && password=="IndianNavy@123")
	{
		cout<<"Login successful!!"<<endl<<endl;
		cout<<"Welcome to Indian Navy Carrier fleet Management and Modification System"<<endl;
		cout<<"Select Carrier fleet : "<<endl<<endl;
		cout<<"1. INS Vikramaditya(R33)"<<endl;
		cout<<"2. INS Vikrant(R11)"<<endl<<endl;
		cout<<"Enter your choice : ";
		cin>>ch;
		if(ch==1)
		{
			cout<<"Name : INS Vikramaditya"<<endl<<"Origin : soviet union Baku Russia"<<endl<<"Displacement : 45,400 Tonnes"<<endl<<"Information : INS vikramaditya is India's Majestic Aircraft Carrier. Commissioned in 2013,It has a top-speed of 30Knots"<<endl;
			cout<<"INS Vikramaditya is equipped with an array of advanced weaponary including MIG-29k/KUB fighters"<<endl;
			cout<<"Kamov ka-31,helicopters,Anti aircraft guns,and Barak,anti-aircarft guns etc"<<endl<<endl;
			DailyActivities();
			Squadron();
		}
		else if(ch==2)
		{
			cout<<"Name : INS VIkrant"<<endl<<"Origin : India"<<endl<<"Displacement : 40,000 Tonnes"<<"Information : INS Vikrant is an Indigeneously developed aircraft carrier.It was constructed by the Cochin Shipyard Limited(CSL)in Kochi,Kerala.The Name \"vikrant\"is a tribute to India's First aircraft carrier,which also bore the same name"<<endl<<endl;
			DailyActivities();
			cout<<endl;
			Squadronv();
		}
		else
		{
			cout<<"Invalid Choice"<<endl;
		}
	}
	else
	{
		cout<<"Invalid Username Or Password"<<endl;
		return 0;
	}
	cout<<"Enter username to get the details of aircrfats operating in squadrons : ";
	cin>>Name;
	cout<<"Enter Password : ";
	cin>>pass;
	if(Name=="IndianAirforce@123" && pass=="AircraftManagement@123")
	{
		do
		{
			cout<<"Login successful !!"<<endl<<endl;
			cout<<"Welcome to Indian Airforce Aircraft Managemet System: "<<endl;
			cout<<"Select Aircraft To get The Information : "<<endl;
			cout<<"1. MIG-29KUB "<<endl;
			cout<<"2. MIG-29K"<<endl;
			cout<<"3. HAL Chetak"<<endl;
			cout<<"4. HAL Dhruv"<<endl;
			cout<<"5. Sea King"<<endl;
			cout<<"6. Kamov Ka-31"<<endl;
			cout<<"7. MH-60R"<<endl<<endl;
			cout<<"Enter Your Choice : ";
			cin>>choice;
			cout<<endl;
			switch(choice)
			{
				cout<<endl;
				case 1:	myObj1.Name="Name : MIG-29KUB";
						myObj1.Type="Type : Fighter";
						myObj1.Commissioning= "Commissioning : 2010";
						myObj1.Squadron="Squadron : INAS 300 (White Tigers)";
						myObj1.Info="Information : Powerful fighter jets designed for carrier operations. Equipped with advanced weapons systems and radar Provides air superiority and strike capabilities.";
						cout<<myObj1.Name<<""<<endl<<myObj1.Type<<""<<endl<<myObj1.Commissioning<<""<<endl<<myObj1.Squadron<<""<<endl<<myObj1.Info<<""<<endl;	
						break;
				case 2:	myObj2.Name="Name : MIG-29K";
						myObj2.Type="Type : Fighter";
						myObj2.Commissioning="Commissioning : 2010";
						myObj2.Squadron="Squadron : INAS 303 (Black Panthers)";
						myObj2.Info="Powerful fighter jets designed for carrier operations. Equipped with advanced weapons systems and radar.Provides air superiority and strike capabilities.";
						cout<<myObj2.Name<<""<<endl<<myObj2.Type<<""<<endl<<myObj2.Commissioning<<""<<endl<<myObj2.Squadron<<""<<endl<<myObj2.Info<<""<<endl;
						break;	
				case 3: myObj3.Name="Name : HAL Chetak";
						myObj3.Type="Type : Utility Heicopter";
						myObj3.Commissioning="Commissioning : Various";
						myObj3.Squadron="Squadron : INAS 321";
						myObj3.Info="Information : Versatile utility helicopter for various roles.Used for transportation, search and rescue, and medical evacuation."; 
						cout<<myObj3.Name<<""<<endl<<myObj3.Type<<""<<endl<<myObj3.Commissioning<<""<<endl<<myObj3.Squadron<<""<<endl<<myObj3.Info<<""<<endl;
						break;	
				case 4: myObj4.Name="Name : HAL Dhruv";
						myObj4.Type="Type : Utility Helicopter";
						myObj4.Commissioning="Commissioning : Various ";
						myObj4.Squadron="Squadron : INAS 322";
						myObj4.Info="Information : used for various military and civilian applications, Capable of Operating in Diverse Conditions";
						cout<<myObj4.Name<<""<<endl<<myObj4.Type<<""<<endl<<myObj4.Commissioning<<""<<endl<<myObj4.Squadron<<""<<endl<<myObj4.Info<<""<<endl;
						break;	
				case 5: myObj5.Name="Name : Sea King";
						myObj5.Type="Type : Anti-Submarine Warfare (ASW) and Search and Rescue (SAR)";
						myObj5.Commissioning="Commissioning : Various";
						myObj5.Squadron="Squadron : Multiple Squadrons";
						myObj5.Info="Information : Long-range, heavy lift helicopter for anti-submarine warfare and search and rescue.Equipped with advanced sensors and weapons systems.Provides crucial support to naval operations";
						cout<<myObj5.Name<<""<<endl<<myObj5.Type<<""<<endl<<myObj5.Commissioning<<""<<endl<<myObj5.Squadron<<""<<endl<<myObj5.Info<<""<<endl;
						break;	
				case 6:	myObj6.Name="Name : Kamov KA-31";
						myObj6.Type="Type : Airborne Early Warning and Control (AEW&C)";
						myObj6.Commissioning="Commissioning : 2004";
						myObj6.Squadron="Squadron : INAS 339";
						myObj6.Info="Information : Airborne early warning and control helicopter.Equipped with powerful radar systems for detecting and tracking targets.Provides vital information to naval forces";
						cout<<myObj6.Name<<""<<endl<<myObj6.Type<<""<<endl<<myObj6.Commissioning<<""<<endl<<myObj6.Squadron<<""<<endl<<myObj6.Info<<""<<endl;
						break;
				case 7:	myObj7.Name="Name : MH-60R Seahawk";
						myObj7.Type="Type : Multi-mission helicopter (ASW, Anti-Surface Warfare (ASUW), SAR)";
						myObj7.Commissioning="Commissioning : 2021";
						myObj7.Squadron="Squadron : INAS 334";
						myObj7.Info="Information : Multi-mission helicopter for anti-submarine warfare and anti-surface warfare.Equipped with advanced sensors and weapons systems.Provides critical support to naval operations.";
						cout<<myObj7.Name<<""<<endl<<myObj7.Type<<""<<endl<<myObj7.Commissioning<<""<<endl<<myObj7.Squadron<<""<<endl<<myObj7.Info<<""<<endl;
						break;
				default: 
				cout<<"Invalid choice!!"<<endl;
			}
			cout<<endl;
			cout<<"Press 1 to Continue,0 to exit";
			cin>>choice;
		}
		while(choice==1);
	}
	else
	{
		cout<<"Login failed";
		return 0;
	}
	cout<<endl;
	cout<<"To Modify And Manage Aircrafts"<<endl;
	cout<<"Enter Airforce chief Username : ";
	cin>>chief;
	cout<<"Enter Secret Password : ";
	cin>>Secret;
	if(chief=="AmarPreet2024" && Secret=="2024Marshal@123")
	{
		int ch;
		do
		{
			cout<<"Select Aircraft To Modify Details";
			if(ch==1)
			{
			
			cout<<"Select Modification Part : "<<endl<<endl;
			cout<<"1. Avionics."<<endl;
			cout<<"2. Bombs."<<endl;
			cout<<"3. Communication."<<endl;
			cout<<"4. Engine."<<endl;
			cout<<"5. Guns."<<endl;
			cout<<"6. Radar."<<endl;
			cout<<"7. Warfare."<<endl;
			cout<<"8. weapons."<<endl;
			cout<<"Enter Your Choice : ";
			cin>>ch;
			cout<<"Current Details Of Modification Parts";
			switch(ch)
			{
				case 1:
					cout<<endl;
					myModObj1.Avionics="Avionics :";
					cout<<"Avionics Suite: ";
					cout<<"1. N019 radar: This phased array radar provides air-to-air and air-to-ground capabilities. It has a range of 120 km and can track up to 10 targets simultaneously."<<endl;
					cout<<"2. KOLS-M head-up display (HUD): This HUD displays critical flight and weapon information to the pilot."<<endl;
					cout<<"3. Multi-function displays (MFDs): The MiG-29KUB has two MFDs that provide additional information to the pilot, such as navigation data, weapon status, and sensor information."<<endl;
					cout<<"4. Electronic  (EwarfareW) suite: The MiG-29KUB is equipped with an EW suite that includes radar warning receivers, jammers, and missile approach warning systems."<<endl;
					cout<<"5. Phazotron Zhuk-M radar: Some MiG-29KUBs have been upgraded with the Phazotron Zhuk-M radar, which offers improved range and performance over the N019 radar."<<endl;
					cout<<"6. New glass cockpit: The Indian Navy's MiG-29KUBs are being upgraded with a new glass cockpit, which features larger and higher-resolution displays. This will provide pilots with improved situational awareness and information management."<<endl;
					break;
				case 2:
					cout<<endl;
					myModObj1.Bombs="Bombs";
					cout<<"General Purpose Bombs : "<<endl<<endl;
					cout<<"1.FAB 500 62 Bomb";
					cout<<"2. FAB-250M-54: A 250 kg high-explosive bomb"<<endl;
					cout<<"3. RBK-500: A cluster bomb containing 500 smaller bomblets"<<endl<<endl;
					cout<<"Precision-guided munitions:"<<endl<<endl;
					cout<<"1. KAB-500Kr: A 500 kg laser-guided bomb"<<endl;
					cout<<"2. KAB-250LG: A 250 kg laser-guided bomb"<<endl;
					cout<<"3. KAB-500S: A 500 kg satellite-guided bomb"<<endl;
					break;
				case 3:
					cout<<endl;
					myModObj1.Communication="Communincations :";
					cout<<"1. Secure voice communication: The MiG-29KUB is equipped with secure voice communication systems that allow pilots to communicate with each other and with ground control. These systems use encryption to protect sensitive information."<<endl;
					cout<<"2. Data link: The MiG-29KUB is equipped with a data link that allows it to exchange information with other aircraft and ground stations. This data link can be used to share information such as target locations, threat warnings, and tactical information."<<endl;
					cout<<"3. IFF system: The MiG-29KUB is equipped with an Identification Friend or Foe (IFF) system that allows it to identify other aircraft. This is important for avoiding friendly fire incidents."<<endl;
					cout<<"4. Electronic warfare systems: The MiG-29KUB is equipped with electronic warfare systems that allow it to jam enemy communications and radar systems. This can help to protect the aircraft from enemy attacks."<<endl;
					break;
				case 4:
					cout<<endl;
					myModObj1.Engine="Engine :";
					cout<<"Key Specifications of the RD-33MK : "<<endl;
					cout<<"Thrust:"<<endl;
					cout<<"1. Dry: 52.9kn (11905 lbf) each"<<endl;
					cout<<"2. With afterburner: 88.3 kN (19,840 lbf) each"<<endl; 
					cout<<"3. Length: 4.3 meters (14 ft 1 in)"<<endl;
					cout<<"4. Diameter: 0.88 meters (2 ft 11 in)"<<endl;
					cout<<"5. Weight: 1,100 kg (2,425 lb)"<<endl<<endl;
					cout<<"Notable Features:"<<endl;
					cout<<"Enhanced Fuel Capacity : the internal fuel capacity has been increased from 3340 to 4560 kg"<<endl;
					cout<<"FADEC System: The engines are equipped with a Full Authority Digital Engine Control (FADEC) system, which provides precise control over engine parameters and optimizes performance."<<endl;
					break;
				case 5:
					cout<<endl;
					myModObj1.Guns="Guns : ";
					cout<<"1. The MiG-29KUB, like its single-seat counterpart, is equipped with a single 30mm GSh-30-1 cannon mounted in the port wing root. This cannon has a capacity of 100 rounds and is capable of firing at a rate of 1,500 rounds per minute."<<endl;
					cout<<"2. The GSh-30-1 is a powerful weapon that can be used to engage both air and ground targets."<<endl;
					cout<<"3.  It is effective against lightly armored vehicles, aircraft, and personnel."<<endl;
					break;
				case 6:
					cout<<endl;
					myModObj1.Radar="Radar : ";
					cout<<"The MiG-29KUB is equipped with the Zhuk-ME radar, a powerful pulse-Doppler radar capable of tracking multiple targets simultaneously."<<endl;
					cout<<"Key Features of the Zhuk-ME radar:"<<endl;
					cout<<"1. Multi mode Capabilities : It can operate in various modes including air-to-air and ait-to-ground modes"<<endl;
					cout<<"2. Target Tracking : the radar can track up to 10 targets simultaneously and engage up to 4 targets."<<endl; 
					cout<<"3. Long detection range: It has a long detection range, allowing early detection of threats."<<endl;
					cout<<"4. High resolution: The radar provides high-resolution images, improving target identification and tracking."<<endl;
					break;
				case 7:
					cout<<endl;
					myModObj1.Warfare="Warfare :";
					cout<<"1. Air-to-Air Combat:"<<endl;
					cout<<"2. Air-to-Ground Attacks:"<<endl;	
					cout<<"Equipped with advanced air-to-air missiles like R-37 and R-27"<<endl;
					cout<<"The MiG-29KUB can carry a variety of air-to-ground weapons, including precision-guided munitions like laser-guided bombs and anti-ship missiles."<<endl; 
					cout<<"3. Anti-Ship Warfare:"<<endl;
					cout<<"With its powerful anti-ship missiles like kh-31 and kh-35,the mig-29kub can pose significant threat to enemy naval vessel"<<endl;				
					cout<<"4. Electronic Warfare:"<<endl;	
					cout<<"Its advanced electronis warfare electronic system allow it to disrupt enemy communications and radar"<<endl;			
					cout<<"5. Reconnaissance:"<<endl;					
					cout<<"The MiG-29KUB can be equipped with reconnaissance pods to gather intelligence on enemy positions and activities."<<endl;
					break;
				default: 
					cout<<"Invalid choice!!"<<endl;
			}
			cout<<endl;
			cout<<"Press 1 to Continue,0 to exit";
			cin>>choice;
		}
		while(choice==1);
		return 0;
	}
}
	else

	{
		cout<<"login failed";
	}
	return 0;
}
