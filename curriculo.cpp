#include <stdio.h>
#include <stdlib.h>

void folhaEstilo (FILE *curriculo) {  //CSS

	fputs("<style>",curriculo);
		fputs("h1{ color: red; } ",curriculo);
		fputs("#cabecalho{ color: black; height: 200px; } ",curriculo);
	fputs("</style>",curriculo);

}

void htmlCurriculo (char *nome) {  //criação do arquivo e HTML
	
	FILE *curriculo;
	
	curriculo = fopen ("curriculo.html","w");
		
	fputs("<!DOCTYPE html>",curriculo);
	
	fputs("<html>",curriculo);
		fputs("<head>",curriculo);
			fputs("<meta charset='utf-8'>",curriculo);
			fputs("<title>Meu Curriculo</title>",curriculo);	
			folhaEstilo(curriculo);   //Funcao que chama o CSS
		fputs("</head>",curriculo);	
		fputs("<body>",curriculo);
			fputs("<div id='cabecalho'>",curriculo);
			fputs("</div>",curriculo);
			fputs("<h1>",curriculo);
				fputs (nome, curriculo);
			fputs("</h1>",curriculo);
		fputs("</body>",curriculo);
	fputs("</html>",curriculo);

	fclose(curriculo);
	
}

main(){
	
	char nome[20];
	
	printf("Digite seu nome:  ");
	gets(nome);
	
	htmlCurriculo(nome);
	system("curriculo.html");
	
	
}








