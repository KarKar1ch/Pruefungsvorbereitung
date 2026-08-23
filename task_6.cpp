//Die Datei enthält Daten zu den auf dem Server laufenden Prozessen.
//Für jeden Prozess wurde eine Struktur angelegt,
//die dessen Priorität (eine Ganzzahl von 1 bis 10)
//und die Laufzeit in Millisekunden (eine Ganzzahl) speichert.


#include <iostream>
#include <algorithm>
#include <vector>

struct Process {
    int priority;
    int runtime;
};

bool compareProcesses(const Process& a, const Process& b ) {
    if (a.priority != b.priority) {
       return  a.priority >  b.priority;
    } else {
        return  a.runtime < b.runtime;
    }
}

int main() {
    std::vector<Process> queue;
    std::sort(queue.begin(), queue.end(), compareProcesses);


    return 0;
}

