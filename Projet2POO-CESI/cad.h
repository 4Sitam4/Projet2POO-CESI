#ifndef CAD_H
#define CAD_H

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System;

namespace NS_Comp_Data
{
	ref class cad
	{
	private:
		System::String^ sSql;
		System::String^ sCnx;
		System::Data::SqlClient::SqlConnection^ oCnx;
		System::Data::SqlClient::SqlCommand^ oCmd;
		System::Data::SqlClient::SqlDataAdapter^ oDA;
		System::Data::DataSet^ oDs;
		System::String^ resultat;
	public:
		cad(void);
		System::Data::DataSet^ getRows(System::String^, System::String^);
		void actionRows(System::String^);
		System::String^ getStats(System::String^);

		System::Data::SqlClient::SqlCommand^ getSqlCommand() {
			return oCmd;
		}
	};
}

#endif CAD_H