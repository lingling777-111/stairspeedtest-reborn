#ifndef LOGGER_H_INCLUDED
#define LOGGER_H_INCLUDED

#include <string>

#include "misc.h"

#define LOG_TYPE_INFO 1
#define LOG_TYPE_ERROR 2
#define LOG_TYPE_RAW 3
#define LOG_TYPE_TCPING 4
#define LOG_TYPE_FILEDL 5
#define LOG_TYPE_GEOIP 6

using namespace std;

extern string resultPath, logPath;

int makeDir(const char *path);
string getTime(int type);
void resultInit(bool export_with_maxspeed);
void logInit(bool rpcmode);
void writeResult(nodeInfo *node, bool export_with_maxspeed);
void writeLog(int type, string content);
void resultEOF(string traffic, int worknodes, int totnodes);
void logEOF();
void exportResult(string outpath, string utiljspath, string stylepath, bool export_with_maxspeed);

#endif // LOGGER_H_INCLUDED