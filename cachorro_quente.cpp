// TODO implemente essa classe de acordo com o hpp correspondente
#include "cachorro_quente.hpp"

CachorroQuente::CachorroQuente(int num_salsichas,
        std::vector<std::string>& complementos,
        bool prensado,
        int qtd)
{
    _num_salsichas = num_salsichas;
    _complementos = complementos;
    _prensado = prensado;
    _qtd = qtd;
}

float CachorroQuente::calcPreco()
{
    float valor;
    valor = 5 + ((1.50*_num_salsichas)+(1*_complementos.size()));
    if(_prensado)
    {
        valor = valor+0.50;
        return valor;
    }
    else
        return valor;
}

std::string CachorroQuente::descricao()const
{
    std::string descricao;
    descricao = std::to_string(_qtd) + std::to_string(_num_salsichas);
    
    std::vector<std::string>::iterator it;
    for(it = _complementos.begin(); it != _complementos.end(); it++)
    {
        descricao = descricao + *it;
    }

    return descricao;
}