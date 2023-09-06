#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> tasks;

  while (true) {
    cout << "Enter a task (or 'q' to quit): ";

    string task;
    getline(cin, task);

    if (task == "q") {
      break;
    }
    tasks.push_back(task);
  }
  cout << "Your tasks are:" << endl;
  for (int i = 0; i < tasks.size(); i++) {
    cout << tasks[i] << endl;
  }

  return 0;
}
