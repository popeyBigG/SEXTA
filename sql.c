
#include <stdio.h>
#include <string.h>
#include <mysql/mysql.h>
#include <my_global.h>

int main()
{
    int menu;

    printf("Menu\n");
    printf("1-Introduzir dados tabela\n");
    printf("2-Mostrar dados tabela\n");
    printf("3-Sair\n");

    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        input();
        break;
    case 2:
        output();
    case 3:
        exit(0);
    default:
        printf("Isso não existe\n");
        main();
        break;
    }
}


// Funções
void input(void)
{
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

    char Nome[100];
    int Nota;

	// Input's / Output/s p/ o utilizador
    getchar();
	printf("Insira o nome: ");
    fgets(Nome, 100, stdin);

    Nome[strcspn(Nome, "\n")] = '\0';

	printf("Insira a nota: ");
    scanf(" %d", &Nota);
    

	// Enviar dados para a tabela Alunos1

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

// ===================================================================================================================================== //

// Função p/ mostrar os dados da tabela
void output(void)
{
    void finish_with_error(MYSQL *con)
{
  fprintf(stderr, "%s\n", mysql_error(con));
  mysql_close(con);
  exit(1);        
}

     
  MYSQL *con = mysql_init(NULL);
  
  if (con == NULL)
  {
      fprintf(stderr, "mysql_init() failed\n");
      exit(1);
  }  
  //login to database
  if (mysql_real_connect(con, "localhost", "root", "Enta2019$", 
          "enta", 0, NULL, 0) == NULL) 
  {
      finish_with_error(con);
  }    
  //select the table
  if (mysql_query(con, "SELECT * FROM Alunos")) 
  {
      finish_with_error(con);
  }
  
  MYSQL_RES *result = mysql_store_result(con);
  
  if (result == NULL) 
  {
      finish_with_error(con);
  }

  int num_fields = mysql_num_fields(result);

  MYSQL_ROW row;
  
  while ((row = mysql_fetch_row(result))) 
  { 
      for(int i = 0; i < num_fields; i++) 
      { 
          printf("%s ", row[i] ? row[i] : "NULL"); 
      } 
          printf("\n"); 
  }
  
  mysql_free_result(result);
  mysql_close(con);
  
}

