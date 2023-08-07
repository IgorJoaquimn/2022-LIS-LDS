#include "loja.hpp"


vector<int> lis(vector<int> &v)
// Descrição: função que calcula o vetor de LIS da entrada
// Entrada: vetor(invertido) com os rolos na sequencia dada
// saida: vetor com as LIS
{
	int n = v.size();
    vector<int> arr(n, 1);
    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < i; j++) 
		{
            if (v[j] < v[i])
                arr[i] = max(arr[i], arr[j] + 1);
        }
    }
	return arr;
}

vector<int> lds(vector<int> &v)
// Descrição: função que calcula o vetor de LDS da entrada
// Entrada: vetor(invertido) com os rolos na sequencia dada
// saida: vetor com as LDS
{
	int n = v.size();
    vector<int> arr(n, 1);
    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < i; j++) 
		{
            if (v[j] > v[i])
                arr[i] = max(arr[i], arr[j] + 1);
        }
    }
	return arr;
}


int resolve(vector<int> &v)
// Descrição: função principal do algoritmo, responsavel por dar a solução
// Entrada: vetor com os rolos na sequencia dada
// saida: tamanho da maior sequencia possivel de ser criada 
{
	reverse(v.begin(), v.end());
	vector<int> increasing = lis(v); 
	vector<int> decreasing = lds(v);

	int resp = -1;
	for(unsigned i = 0; i < v.size(); i++)
		resp = max(resp,increasing[i] + decreasing[i] -1);
	return resp;
}