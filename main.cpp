#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

typedef struct {
  string name;
  float length;
  float diameter;
  bool inRepair;
} Pipeline;

typedef struct {
  string name;
  int totalWorkshops;
  int activeWorkshops;
  float efficiency;
} CompressorStation;

ostream &operator<<(std::ostream &os, const Pipeline &pipe) {
  return os << "name: " << pipe.name << "\nlength: " << pipe.length
            << "\ndiametr: " << pipe.diameter << "\ninRepair: " << pipe.inRepair
            << endl
            << endl;
}

ostream &operator<<(std::ostream &os, const CompressorStation &cs) {
  return os << "name: " << cs.name << "\ntotalWorkshops " << cs.totalWorkshops
            << "\nactiveWorkshops: " << cs.activeWorkshops
            << "\nefficiency: " << cs.efficiency << endl
            << endl;
}

void Add_pipeline(Pipeline *pipe) {
  cout << "Enter pipe name: ";
  cin >> pipe->name;
  cout << "Enter pipe length: ";
  cin >> pipe->length;
  cout << "Enter pipe diameter: ";
  cin >> pipe->diameter;
  pipe->inRepair = false;  // By default, the pipe is not in repair
  cout << endl;
}

void Add_CompressorStation(CompressorStation *cs) {
  cout << "Enter station name: ";
  cin >> cs->name;
  cout << "Enter total number of workshops: ";
  cin >> cs->totalWorkshops;
  cs->activeWorkshops = 0;  // By default, no workshops are active
  cout << "Enter efficiency (0-1): ";
  cin >> cs->efficiency;
  cout << endl;
}

// void Dell_pipeline(*pipeline) {
// }

// int Edit_pipeline(*pipeline) {
//     return 1;
// }

// CompressorStation Add_CompressorStation() {
//     return 1;
// }

int Dell_CompressorStation() { return 1; }

int Edit_CompressorStation() { return 1; }

int main() {
  char key;
  Pipeline pipeline;
  CompressorStation compressorstation;

  while (key != '0') {
    cout << "1. Add Pipe" << endl;
    cout << "2. Add Compressor Station" << endl;
    cout << "3. View All Objects" << endl;
    cout << "4. Edit Pipe (Toggle Repair Status)" << endl;
    cout << "5. Edit Compressor Station (Start/Stop WorCompressorStationhop)"
         << endl;
    cout << "6. Save Data" << endl;
    cout << "7. Load Data" << endl;
    cout << "0. Exit" << endl;
    cout << "Choose an option: ";

    cin >> key;

    switch (key) {
      case '1': {
        Add_pipeline(&pipeline);
        break;
      }
      case '2': {
        Add_CompressorStation(&compressorstation);
        break;
      }
      case '3': {
        cout << endl << pipeline;
        cout << compressorstation;
        break;
      }
      case '4': {
        break;
      }
      case '5': {
        break;
      }
      case '6': {
        break;
      }
      case '7': {
        break;
      }
      default:
        cout << "Invalid option! Try again." << endl;
    }
  }
  return 0;
}