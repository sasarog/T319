#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class BinaryFile
{
	string path;
	int position = 0;
public:
	BinaryFile();
	BinaryFile(const string& p);
	void setPath(const string& s);
	string getPath();
	template<typename T>
	void write(const T& elem);
	template<typename T>
	void writeApp(const T& elem);
	template<typename T>
	void read( T& elem);
	void sbrosPosition();

};

template<typename T>
inline void BinaryFile::write(const T& elem)
{
	fstream fs(this->path, ios::out | ios::binary);
	fs.write((char*)&elem, sizeof(elem));

	fs.close();
}
/// <summary>
/// Дозапись файла
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="elem"></param>
template<typename T>
inline void BinaryFile::writeApp(const T& elem)
{
	fstream fs(this->path, ios::out | ios::binary | ios::app);
	fs.write((char*)&elem, sizeof(elem));

	fs.close();
}

/// <summary>
/// Чтение файла
/// </summary>
/// <typeparam name="T">Тип данных определяется автоматически</typeparam>
/// <param name="elem">Структура, в которую считываем</param>
template<typename T>
inline void BinaryFile::read( T& elem)
{
	fstream fs(this->path, ios::in | ios::binary);
	fs.seekg(position);
	fs.read((char*)&elem, sizeof(elem));
	this->position += sizeof(elem);
	fs.close();
}
