//CAD.CPP**************************************************************************************
#include "PCH.h"
#include "cad.h"


NS_Comp_Data::cad::cad(void)
{
	this->sCnx = "Data Source=LAPTOP-LS53501I;Initial Catalog=projetPOO;Integrated Security=True";

	this->sSql = "Rien";
	this->sSqlClients = "SELECT [num], [nom], [prenom] FROM [projetPOO].[dbo].[Client]";
	this->sSqlArticles = "SELECT [reference_produit], [produit], [prix_ht] FROM [projetPOO].[dbo].[Catalogue]";

	this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);
	this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->oCnx);
	this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSqlArticles, this->oCnx);
	this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSqlClients, this->oCnx);
	this->oDA = gcnew System::Data::SqlClient::SqlDataAdapter();
	this->oDs = gcnew System::Data::DataSet();
	this->dsArticles = gcnew System::Data::DataSet();
	this->dsClients = gcnew System::Data::DataSet();

	this->oCmd->CommandType = System::Data::CommandType::Text;
}


System::Data::DataSet^ NS_Comp_Data::cad::getRows(System::String^ sSql, System::String^ sDataTableName)
{
	this->oDs->Clear();
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oDA->Fill(this->oDs, sDataTableName);

	return this->oDs;
}

System::Data::DataSet^ NS_Comp_Data::cad::getRowsArticles(System::String^ sSql, System::String^ sDataTableName)
{
	this->dsArticles->Clear();
	this->sSqlClients = sSql;	
	this->oCmd->CommandText = this->sSqlArticles;
	this->oDA->SelectCommand = this->oCmd;
	this->oDA->Fill(this->dsArticles, sDataTableName);

	return this->dsArticles;
}


System::Data::DataSet^ NS_Comp_Data::cad::getRowsClients(System::String^ sSql, System::String^ sDataTableName)
{
	this->dsClients->Clear();
	this->sSqlClients = sSql;
	this->oCmd->CommandText = this->sSqlClients;
	this->oDA->SelectCommand = this->oCmd;
	this->oDA->Fill(this->dsClients, sDataTableName);

	return this->dsClients;
}


void NS_Comp_Data::cad::actionRows(System::String^ sSql)
{
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oCnx->Open();
	this->oCmd->ExecuteNonQuery();//erreur
	this->oCnx->Close();
}

System::String^ NS_Comp_Data::cad::getStats(System::String^ sSql)
{
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oCnx->Open();
	this->resultat = this->oCmd->ExecuteScalar()->ToString();
	this->oCnx->Close();

	return resultat;
}




System::String^ NS_Comp_Data::cad::getRequete(System::String^ sSql) {
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oCnx->Open();
	this->result = this->oCmd->ExecuteScalar()->ToString();
	this->oCnx->Close();

	return result;
	
}
