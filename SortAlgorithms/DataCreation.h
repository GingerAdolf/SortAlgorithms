
class DataCreation
{
private:
	int* data = nullptr;
	int lenght = 0;
	int* randomMass(int lenght, int min, int max);

public:
	DataCreation(int lenght);								//binar mass
	DataCreation(int lenght, int min, int max);				//all type mass

	int getLenght() const;
	int* getData() const;
	void print();
};

