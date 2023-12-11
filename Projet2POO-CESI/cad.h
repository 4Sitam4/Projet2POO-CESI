#ifndef CAD_H
#define CAD_H



namespace NS_Comp_Data
{
	ref class cad
	{
	private:
		System::String^ sSql = "";
		System::String^ sSqlArticles = "";
		System::String^ sSqlClients = "";
		System::String^ sCnx;
		System::Data::SqlClient::SqlConnection^ oCnx;
		System::Data::SqlClient::SqlCommand^ oCmd;
		System::Data::SqlClient::SqlDataAdapter^ oDA;
		System::Data::DataSet^ oDs;
		System::Data::DataSet^ dsArticles;
		System::Data::DataSet^ dsClients;
		System::String^ result;


	public:
		cad(void);
		System::Data::DataSet^ getRows(System::String^, System::String^);
		System::Data::DataSet^ getRowsArticles(System::String^, System::String^);
		System::Data::DataSet^ getRowsClients(System::String^, System::String^);
		System::String^ getRequete(System::String^);

		void actionRows(System::String^);

	};
}

#endif CAD_H