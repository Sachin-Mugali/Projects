Project Carrier Fleet

class CarrierFleet { // CarrierFleet
    public String Name;
    public String Origin;
    public String Displacement;
    public String Info;
}

class Aircrafts { // Aircraft details Operating in the squadron
    public String Name;
    public String Type;
    public String Commissioning;
    public String Squadron;
    public String Commander;
    public String Info;
}

class Modification { // Modification Details of Aircrafts
    public String Avionics;
    public String Bombs;
    public String Communication;
    public String Engine;
    public String Guns;
    public String Radar;
    public String Warfare;
}

public class ProjectCareerFleet {
    public static void main(String[] args) {
        String username, password;
        String Name, pass;
        String chief, Secret;
        String info;
        int ch;
        int choice;
        String Avionics, Communication, Engine, Guns, Radar, Warfare;
        CarrierFleet myOtherObj1 = new CarrierFleet(), myOtherObj2 = new CarrierFleet();
        Aircrafts myObj1 = new Aircrafts(), myObj2 = new Aircrafts(), myObj3 = new Aircrafts(),
                myObj4 = new Aircrafts(), myObj5 = new Aircrafts(), myObj6 = new Aircrafts(), myObj7 = new Aircrafts();
        Modification myModObj1 = new Modification(), myModObj2 = new Modification(), myModObj3 = new Modification(),
                myModObj4 = new Modification(), myModObj5 = new Modification(), myModObj6 = new Modification(), myModObj7 = new Modification();

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter username: ");
        username = scanner.nextLine();
        System.out.print("Enter password: ");
        password = scanner.nextLine();

        if (username.equals("CarrierFleet@123") && password.equals("IndianNavy@123")) {
            System.out.println("Login successful!!\n");
            System.out.println("Welcome to Indian Navy Carrier fleet Management and Modification System");
            System.out.println("Select Carrier fleet:\n");
            System.out.println("1. INS Vikramaditya(R33)");
            System.out.println("2. INS Vikrant(R11)\n");
            System.out.print("Enter your choice: ");
            ch = scanner.nextInt();

            if (ch==1) {
                System.out.println("Name: INS Vikramaditya\nOrigin: Soviet Union Baku Russia\nDisplacement: 45,400 Tonnes\nInformation: INS Vikramaditya is India's Majestic Aircraft Carrier. Commissioned in 2013, It has a top-speed of 30 Knots");
                System.out.println("INS Vikramaditya is equipped with an array of advanced weaponry including MIG-29k/KUB fighters");
                System.out.println("Kamov ka-31, helicopters, Anti-aircraft guns, and Barak, anti-aircraft guns etc\n");
                
               
            } else if (ch == 2) {
                System.out.println("Name: INS Vikrant\nOrigin: India\nDisplacement: 40,000 Tonnes\nInformation: INS Vikrant is an Indigenously developed aircraft carrier. It was constructed by the Cochin Shipyard Limited(CSL) in Kochi, Kerala. The Name \"Vikrant\" is a tribute to India's First aircraft carrier, which also bore the same name\n");
                
                System.out.println();
                
            } else {
                System.out.println("Invalid Choice");
            }
        } else {
            System.out.println("Invalid Username Or Password");
            return;
        }

        System.out.print("Enter username to get the details of aircrafts operating in squadrons: ");
        Name = scanner.next();
        System.out.print("Enter Password: ");
        pass = scanner.next();

        if (Name.equals("IndianAirforce@123") && pass.equals("AircraftManagement@123")) {
            do {
                System.out.println("Login successful !!\n");
                System.out.println("Welcome to Indian Airforce Aircraft Management System:");
                System.out.println("Select Aircraft To get The Information:");
                System.out.println("1. MIG-29KUB");
                System.out.println("2. MIG-29K");
                System.out.println("3. HAL Chetak");
                System.out.println("4. HAL Dhruv");
                System.out.println("5. Sea King");
                System.out.println("6. Kamov Ka-31");
                System.out.println("7. MH-60R\n");
                System.out.print("Enter Your Choice: ");
                choice = scanner.nextInt();
                System.out.println();

                switch (choice) {
                    case 1:
                        myObj1.Name = "Name: MIG-29KUB";
                        myObj1.Type = "Type: Fighter";
                        myObj1.Commissioning = "Commissioning: 2010";
                        myObj1.Squadron = "Squadron: INAS 300 (White Tigers)";
                        myObj1.Info = "Information: Powerful fighter jets designed for carrier operations. Equipped with advanced weapons systems and radar. Provides air superiority and strike capabilities.";
                        System.out.println(myObj1.Name + "\n" + myObj1.Type + "\n" + myObj1.Commissioning + "\n" + myObj1.Squadron + "\n" + myObj1.Info);
                        break;
                    case 2:
                        myObj2.Name = "Name: MIG-29K";
                        myObj2.Type = "Type: Fighter";
                        myObj2.Commissioning = "Commissioning: 2010";
                        myObj2.Squadron = "Squadron: INAS 303 (Black Panthers)";
                        myObj2.Info = "Powerful fighter jets designed for carrier operations. Equipped with advanced weapons systems and radar. Provides air superiority and strike capabilities.";
                        System.out.println(myObj2.Name + "\n" + myObj2.Type + "\n" + myObj2.Commissioning + "\n" + myObj2.Squadron + "\n" + myObj2.Info);
                        break;
                    case 3:
                        myObj3.Name = "Name: HAL Chetak";
                        myObj3.Type = "Type: Utility Helicopter";
                        myObj3.Commissioning = "Commissioning: Various";
                        myObj3.Squadron = "Squadron: INAS 321";
                        myObj3.Info = "Information: Versatile utility helicopter for various roles. Used for transportation, search and rescue, and medical evacuation.";
                        System.out.println(myObj3.Name + "\n" + myObj3.Type + "\n" + myObj3.Commissioning + "\n" + myObj3.Squadron + "\n" + myObj3.Info);
                        break;
                    case 4:
                        myObj4.Name = "Name: HAL Dhruv";
                        myObj4.Type = "Type: Utility Helicopter";
                        myObj4.Commissioning = "Commissioning: Various";
                        myObj4.Squadron = "Squadron: INAS 322";
                        myObj4.Info = "Information: Used for various military and civilian applications, Capable of Operating in Diverse Conditions";
                        System.out.println(myObj4.Name + "\n" + myObj4.Type + "\n" + myObj4.Commissioning + "\n" + myObj4.Squadron + "\n" + myObj4.Info);
                        break;
                    case 5:
                        myObj5.Name = "Name: Sea King";
                        myObj5.Type = "Type: Anti-Submarine Warfare (ASW) and Search and Rescue (SAR)";
                        myObj5.Commissioning = "Commissioning: Various";
                        myObj5.Squadron = "Squadron: Multiple Squadrons";
                        myObj5.Info = "Information: Long-range, heavy lift helicopter for anti-submarine warfare and search and rescue. Equipped with advanced sensors and weapons systems. Provides crucial support to naval operations.";
                        System.out.println(myObj5.Name + "\n" + myObj5.Type + "\n" + myObj5.Commissioning + "\n" + myObj5.Squadron + "\n" + myObj5.Info);
                        break;
                    case 6:
                        myObj6.Name = "Name: Kamov KA-31";
                        myObj6.Type = "Type: Airborne Early Warning and Control (AEW&C)";
                        myObj6.Commissioning = "Commissioning: 2004";
                        myObj6.Squadron = "Squadron: INAS 339";
                        myObj6.Info = "Information: Airborne early warning and control helicopter. Equipped with powerful radar systems for detecting and tracking targets. Provides vital information to naval forces.";
                        System.out.println(myObj6.Name + "\n" + myObj6.Type + "\n" + myObj6.Commissioning + "\n" + myObj6.Squadron + "\n" + myObj6.Info);
                        break;
                    case 7:
                        myObj7.Name = "Name: MH-60R Seahawk";
                        myObj7.Type = "Type: Multi-mission helicopter (ASW, Anti-Surface Warfare (ASUW), SAR)";
                        myObj7.Commissioning = "Commissioning: 2021";
                        myObj7.Squadron = "Squadron: INAS 334";
                        myObj7.Info = "Information: Multi-mission helicopter for anti-submarine warfare and anti-surface warfare. Equipped with advanced sensors and weapons systems. Provides critical support to naval operations.";
                        System.out.println(myObj7.Name + "\n" + myObj7.Type + "\n" + myObj7.Commissioning + "\n" + myObj7.Squadron + "\n" + myObj7.Info);
                        break;
                    default:
                        System.out.println("Invalid choice!!");
                }
                System.out.println();
                System.out.print("Press 1 to Continue, 0 to exit: ");
                choice = scanner.nextInt();
            } while (choice == 1);
        } else {
            System.out.println("Login failed");
            return;
        }

        System.out.println();
        System.out.println("To Modify And Manage Aircrafts");
        System.out.print("Enter Airforce chief Username: ");
        chief = scanner.next();
        System.out.print("Enter Secret Password: ");
        Secret = scanner.next();

        if (chief.equals("AmarPreet2024") && Secret.equals("2024Marshal@123")) {
            do {
                System.out.print("Select Aircraft To Modify Details: ");
                if (choice == 1) {
                    System.out.println("Select Modification Part:\n");
                    System.out.println("1. Avionics");
                    System.out.println("2. Bombs");
                    System.out.println("3. Communication");
                    System.out.println("4. Engine");
                    System.out.println("5. Guns");
                    System.out.println("6. Radar");
                    System.out.println("7. Warfare");
                    System.out.println("8. Weapons");
                    System.out.print("Enter Your Choice: ");
                    choice = scanner.nextInt();
                    System.out.println("Current Details Of Modification Parts");

                    switch (choice) {
                        case 1:
                            System.out.println();
                            myModObj1.Avionics = "Avionics:";
                            System.out.println("Avionics Suite:");
                            System.out.println("1. N019 radar: This phased array radar provides air-to-air and air-to-ground capabilities. It has a range of 120 km and can track up to 10 targets simultaneously.");
                            System.out.println("2. KOLS-M head-up display (HUD): This HUD displays critical flight and weapon information to the pilot.");
                            System.out.println("3. Multi-function displays (MFDs): The MiG-29KUB has two MFDs that provide additional information to the pilot, such as navigation data, weapon status, and sensor information.");
                            System.out.println("4. Electronic (EW) suite: The MiG-29KUB is equipped with an EW suite that includes radar warning receivers, jammers, and missile approach warning systems.");
                            System.out.println("5. Phazotron Zhuk-M radar: Some MiG-29KUBs have been upgraded with the Phazotron Zhuk-M radar, which offers improved range and performance over the N019 radar.");
                            System.out.println("6. New glass cockpit: The Indian Navy's MiG-29KUBs are being upgraded with a new glass cockpit, which features larger and higher-resolution displays. This will provide pilots with improved situational awareness and information management.");
                            break;
                        case 2:
                            System.out.println();
                            myModObj1.Bombs = "Bombs:";
                            System.out.println("General Purpose Bombs:\n");
                            System.out.println("1. FAB 500 62 Bomb");
                            System.out.println("2. FAB-250M-54: A 250 kg high-explosive bomb");
                            System.out.println("3. RBK-500: A cluster bomb containing 500 smaller bomblets\n");
                            System.out.println("Precision-guided munitions:\n");
                            System.out.println("1. KAB-500Kr: A 500 kg laser-guided bomb");
                            System.out.println("2. KAB-250LG: A 250 kg laser-guided bomb");
                            System.out.println("3. KAB-500S: A 500 kg satellite-guided bomb");
                            break;
                        case 3:
                            System.out.println();
                            myModObj1.Communication = "Communications:";
                            System.out.println("1. Secure voice communication: The MiG-29KUB is equipped with secure voice communication systems that allow pilots to communicate with each other and with ground control. These systems use encryption to protect sensitive information.");
                            System.out.println("2. Data link: The MiG-29KUB is equipped with a data link that allows it to exchange information with other aircraft and ground stations. This data link can be used to share information such as target locations, threat warnings, and tactical information.");
                            System.out.println("3. IFF system: The MiG-29KUB is equipped with an Identification Friend or Foe (IFF) system that allows it to identify other aircraft. This is important for avoiding friendly fire incidents.");
                            System.out.println("4. Electronic warfare systems: The MiG-29KUB is equipped with electronic warfare systems that allow it to jam enemy communications and radar systems. This can help to protect the aircraft from enemy attacks.");
                            break;
                        case 4:
                            System.out.println();
                            myModObj1.Engine = "Engine:";
                            System.out.println("Key Specifications of the RD-33MK:");
                            System.out.println("Thrust:");
                            System.out.println("1. Dry: 52.9kn (11905 lbf) each");
                            System.out.println("2. With afterburner: 88.3 kN (19,840 lbf) each");
                            System.out.println("3. Length: 4.3 meters (14 ft 1 in)");
                            System.out.println("4. Diameter: 0.88 meters (2 ft 11 in)");
                            System.out.println("5. Weight: 1,100 kg (2,425 lb)\n");
                            System.out.println("Notable Features:");
                            System.out.println("Enhanced Fuel Capacity: The internal fuel capacity has been increased from 3340 to 4560 kg");
                            System.out.println("FADEC System: The engines are equipped with a Full Authority Digital Engine Control (FADEC) system, which provides precise control over engine parameters and optimizes performance.");
                            break;
                        case 5:
                            System.out.println();
                            myModObj1.Guns = "Guns:";
                            System.out.println("1. The MiG-29KUB, like its single-seat counterpart, is equipped with a single 30mm GSh-30-1 cannon mounted in the port wing root. This cannon has a capacity of 100 rounds and is capable of firing at a rate of 1,500 rounds per minute.");
                            System.out.println("2. The GSh-30-1 is a powerful weapon that can be used to engage both air and ground targets.");
                            System.out.println("3. It is effective against lightly armored vehicles, aircraft, and personnel.");
                            break;
                        case 6:
                            System.out.println();
                            myModObj1.Radar = "Radar:";
                            System.out.println("The MiG-29KUB is equipped with the Zhuk-ME radar, a powerful pulse-Doppler radar capable of tracking multiple targets simultaneously.");
                            System.out.println("Key Features of the Zhuk-ME radar:");
                            System.out.println("1. Multi mode Capabilities: It can operate in various modes including air-to-air and air-to-ground modes.");
                            System.out.println("2. Target Tracking: The radar can track up to 10 targets simultaneously and engage up to 4 targets.");
                            System.out.println("3. Long detection range: It has a long detection range, allowing early detection of threats.");
                            System.out.println("4. High resolution: The radar provides high-resolution images, improving target identification and tracking.");
                            break;
                        case 7:
                            System.out.println();
                            myModObj1.Warfare = "Warfare:";
                            System.out.println("1. Air-to-Air Combat:");
                            System.out.println("2. Air-to-Ground Attacks:");
                            System.out.println("Equipped with advanced air-to-air missiles like R-37 and R-27");
                            System.out.println("The MiG-29KUB can carry a variety of air-to-ground weapons, including precision-guided munitions like laser-guided bombs and anti-ship missiles.");
                            System.out.println("3. Anti-Ship Warfare:");
                            System.out.println("With its powerful anti-ship missiles like kh-31 and kh-35, the MiG-29KUB can pose significant threat to enemy naval vessels.");
                            System.out.println("4. Electronic Warfare:");
                            System.out.println("Its advanced electronic warfare systems allow it to disrupt enemy communications and radar.");
                            System.out.println("5. Reconnaissance:");
                            System.out.println("The MiG-29KUB can be equipped with reconnaissance pods to gather intelligence on enemy positions and activities.");
                            break;
                        default:
                            System.out.println("Invalid choice!!");
                    }
                    System.out.println();
                    System.out.print("Press 1 to Continue, 0 to exit: ");
                    choice = scanner.nextInt();
                }
            } while (choice == 1);
        } else {
            System.out.println("Login failed");
        }
    }

}
