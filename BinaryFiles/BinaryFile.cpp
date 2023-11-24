#include "BinaryFile.h"

BinaryFile::BinaryFile()
{
}

BinaryFile::BinaryFile(const string& p)
{
	this->path = p;
}

void BinaryFile::setPath(const string& s)
{
	this->path = s;
}

string BinaryFile::getPath()
{
	return this->path;
}

void BinaryFile::sbrosPosition()
{
	this->position = 0;
}
