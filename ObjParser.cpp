#include <string>
#include <iostream>
#include <fstream>

// #include <bits/stdc++.h>

using namespace std;

class ObjParser
{
	public:
	
	ObjParser(){}

	string tmp;
	string objDef;
	string vPos;
	string vTex;
	string vNorm;

	void Parse(string fileName)
	{
		cout << "received file: " << fileName << endl;
		cout << " starting read" << endl;

		ifstream objFile(fileName);

		while (getline(objFile, tmp))
		{
			string type = tmp.substr(0, tmp.find(' '));
			string val = tmp.substr(tmp.find(' '));

			if (type == "v")
				vPos += val;
			if (type == "vt")
				vTex += val;
			if (type == "vn")
				vNorm += val;
		}

		objFile.close();

		cout << "v positions: " << vPos << endl;
		cout << "v textures: " << vTex << endl;
		cout << "v normals: " << vNorm << endl;
	}
};