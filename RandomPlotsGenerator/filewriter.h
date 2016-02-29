#ifndef FILEWRITER_H
#define FILEWRITER_H

#include "plot.h"

#include <QList>
#include <QFile>

class FileWriter
{

private:
    QFile m_file;

    virtual void createAndOpenFile();
    virtual void closeFile();
    virtual void writeLineInFile(const QString& lineToWrite);

public:
    FileWriter();
    virtual ~FileWriter();

    virtual void writePlots(const QList<Plot> &plots);
};

#endif // FILEWRITER_H
