#ifndef TRANSLATEINTERFACE_H
#define TRANSLATEINTERFACE_H

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip>
#include <codecvt>
#include <unordered_map>
#include <unordered_set>
#include <windows.h>
#include <msclr/marshal_cppstd.h>
#include <algorithm>

using namespace std;

const wstring OPENBRACKET[] = { L"<IMAGEPICTURE", L"<EDIT", L"<LABEL", L"<STILLIMAGEBUTTON", L"<LIST", L"<RADIO", L"<CHECK", L"<TEXT", L"<COMBO", L"<CTRLFOLDER", L"<SUBDIALOG", L"<PROGRESS", L"<SCROLL", L"<TREE", L"<WINDOWPICTURE", L"<SLIDER"};
const wstring CLOSEBRACKET[] = { L"</IMAGEPICTURE>", L"</EDIT>", L"</LABEL>", L"</STILLIMAGEBUTTON>", L"</LIST>", L"</RADIO>", L"</CHECK>" , L"</TEXT>", L"</COMBO>", L"</CTRLFOLDER>", L"</SUBDIALOG>", L"</PROGRESS>", L"</SCROLL>", L"</TREE>", L"</WINDOWPICTURE>", L"</SLIDER>"};

class TranslateInterface
{

private:
    struct STFData
    {
        wstring space;
        wstring str;
    };

    vector<wstring> chinesLinesXML;
    vector<wstring> russianLinesXML;
    vector<wstring> outputLinesXML;
    wstring firstRussianLine;
    unordered_map<wstring, wstring> russianDataXML;
    unordered_set<wstring> chinesDataXML;

    vector<wstring> chinesLinesSTF;
    vector<wstring> russianLinesSTF;
    vector<wstring> outputLinesSTF;
    unordered_map<wstring, wstring> russianDatasSTF;
    unordered_map<wstring, STFData> chineDatasSTF;
    wstring_convert<codecvt_utf8<wchar_t>, wchar_t> convert;
    vector<wstring> files;
    vector<wstring> filesSTF;
    wstring path1;
    wstring path2;
    wstring out;

    void initFiles(wstring firstPath, wstring dir);
    void initSTF(wstring firstPath);
    void initFolders(wstring path2);
    void clear();
    void clearSTF();

public:

    TranslateInterface(System::String^ firstPath, System::String^ secondPath, System::String^ outputPath);
    virtual ~TranslateInterface();
  
    int openBracket(wstring line);
    bool closeBracket(wstring line, int numberOpen);
    bool endLine(int start, int numLine, wstring line);
    void initRussianDataXML();
    void toNormalRussia();
    void toNormalChine();
    void toOutput();
    void translateFile(wstring fileName);
    vector<wstring> getAllFiles();
    vector<wstring> getAllFilesSTF();

    void toNormalRussiaSTF();
    void toNormalChineSTF();
    bool isComment(int index, wstring currentLine);
    void initRussianDataSTF();
    void initChineDataSTF();
    void toOutputSTF();
    void translateFileSTF(wstring fileName);
};

#endif