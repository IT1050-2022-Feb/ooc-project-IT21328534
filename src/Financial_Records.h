// IT21191824
//Dias D T M

class Financial_Records {
private:
	int TransactionID;

public:
	Financial_Records();
	Financial_Records(int pTransactionID);
	void Update();
	float calcTotal();
	int generatePayment();
	~Financial_Records();
};
