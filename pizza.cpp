// TODO implemente essa classe de acordo com o hpp correspondente
#include "pizza.hpp"

Pizza::Pizza(const std::string& sabor,
        int pedacos,
        bool borda_recheada,
        int qtd)
{
    _sabor = sabor;
    _pedacos = pedacos;
    _borda_recheada = borda_recheada;
    _qtd = qtd;
}

float Pizza::calcPreco()
{
    float valor;
    valor = (5*_pedacos);
    if(_borda_recheada)
        valor = valor+10;
    if(_sabor == "especial")
        valor = valor+8;

    return valor;
}

std::string Pizza::descricao()const
{
    std::string descricao;
    if(_borda_recheada)
        descricao = std::to_string(_qtd) + _sabor + std::to_string(_pedacos) + std::to_string(_borda_recheada);
    else
        descricao = std::to_string(_qtd) + _sabor + std::to_string(_pedacos);
        
    return descricao;
}

