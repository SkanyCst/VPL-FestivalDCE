// TODO implemente essa classe de acordo com o hpp correspondente
#include "acai.hpp"

Acai::Acai(int tamanho,
        std::vector<std::string>& complementos,
        int qtd)
{
    _tamanho = tamanho;
    _complementos = complementos;
    _qtd = qtd;
}

float Acai::calcPreco()
{
    return ((0.02*_tamanho)+(2*_complementos.size()))*_qtd;
}

std::string Acai::descricao()const
{
    std::string descricao;
    descricao = std::to_string(_qtd) + std::to_string(_tamanho);

    std::vector<std::string>::iterator it;
    for(it = _complementos.begin(); it != _complementos.end(); it++)
    {
        descricao = descricao + *it;
    }
    return descricao;
}


