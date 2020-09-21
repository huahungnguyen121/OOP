#include "Header.h"

int main()
{
	vector<Client> clients;
	clients.push_back(Client("001", "Tran Duc Thuan", 10000000));
	clients.push_back(Client("002", "Nguyen Thi Ly", 20000000));
	clients.push_back(Client("003", "Le My Linh", 30000000));
	clients.push_back(Client("004", "Tran Hoang Long", 40000000));
	clients.push_back(Client("005", "Luu Thuy Lan", 50000000));

	ofstream writer("clients.txt");
	writer << clients.size();

	for (auto& client : clients)
	{
		writer << endl << client.toString();
	}

	writer.close();

	ifstream reader("clients.txt");

	string line;
	getline(reader, line);
	int count = stoi(line);

	clients.clear();

	for (int i = 0; i < count; i++)
	{
		string buffer;
		getline(reader, buffer);
		clients.push_back(Client::parse(buffer));
	}

	reader.close();

	cout << "Thong tin cac client" << endl;
	for (auto& client : clients)
	{
		cout << client.toString() << endl;
	}

	return 0;
}