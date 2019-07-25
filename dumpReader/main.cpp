#include "dumpRecordsHandler.h"
#include <string>

int main() {
    std::string path = "C:\\Users\\emyrmak\\Desktop\\git\\C-training\\dumpReader\\records.txt";
    dumpRecordsHandler dumpRecordsHandlerObj;
    dumpRecordsHandlerObj.readDataFromDumpFile(path);
    dumpRecordsHandlerObj.storeRecords();
}