#include "filewriter.h"

#include <QFile>
#include <QTextStream>

FileWriter::FileWriter() : m_file(FILENAME)
{

}

FileWriter::~FileWriter() {

}

void FileWriter::createAndOpenFile() {
    if (!m_file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        return;
    }
}

void FileWriter::closeFile() {
    m_file.close();
}

void FileWriter::writeLineInFile(const QString& lineToWrite) {
    QTextStream flux(&m_file);

    flux << lineToWrite << endl;
}

void FileWriter::writePlots(const QList<Plot>& plots) {
    createAndOpenFile();

    for (auto plot : plots) {
        writeLineInFile(plot.toString());
    }

    closeFile();
}
