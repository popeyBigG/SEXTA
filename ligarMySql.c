#include <stdio.h>
#include <mysql/mysql.h>

int main() {

    MYSQL *conn;
	MYSQL_RES *res;
	MYSQL_ROW row;
	
	char *server = "localhost";
	char *user = "root";
	char *password = "Enta2019$"; /* set me first */
	char *database = "enta";
	
	conn = mysql_init(NULL);
	
	/* Connect to database */
	if (!mysql_real_connect(conn, server, user, password, 
                                      database, 0, NULL, 0)) {
		fprintf(stderr, "%s\n", mysql_error(conn));
		exit(1);
	}
	
	/* send SQL query */
	if (mysql_query(conn, "show tables")) {
		fprintf(stderr, "%s\n", mysql_error(conn));
		exit(1);
	}
   
	res = mysql_use_result(conn);
	
	/* output table name */
   
	while ((row = mysql_fetch_row(res)) != NULL);
   
	/* ================================================================================================================== */
	
    // Programa //

    char Nome[100] = "Desconhecido";
    int Nota;

	// Input's / Output/s p/ o utilizador

	printf("Insira o nome: ");
    scanf("%s", Nome);

	printf("Insira a nota: ");
    scanf("%d", &Nota);


	// Enviar dados para a tabela Alunos

	char buf[1024] = {}; // Uma variavel para inserir um conjunto de paramaetros dentro
	char query_string[] = { 
    "INSERT INTO Alunos( Nome, Nota) VALUES(\"%s\", %d)"};

	sprintf(buf, query_string, Nome, Nota);  // Define os parametros [query_string, Nome, Nota] dentro de [buf]

	if (mysql_query(conn,buf)); {
		printf("\nInserido com sucesso\n");	// Insere os dados na tabela Alunos
	}
	

	/* close connection */
	mysql_free_result(res);
	mysql_close(conn);

}