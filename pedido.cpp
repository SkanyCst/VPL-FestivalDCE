// TODO implemente essa classe de acordo com o hpp correspondente
#include "pedido.hpp"
#include "acai.hpp"
#include "cachorro_quente.hpp"
#include "pizza.hpp"

#include <list>

void Pedido::adicionaProduto(Produto* p)
{
    _produtos.push_back(p);
}

float Pedido::calculaTotal()const
{
    float valor;
    std::list<Produto*>::const_iterator it;
    for(it = _produtos.begin(); it != _produtos.end(); it++)
    {
        valor = valor + it->Produto::calcPreco();
    }
    return valor;
}

std::string Pedido::resumo()const
{
    std::string pedido;

    std::list<Produto*>::const_iterator it;
    for(it = _produtos.begin(); it != _produtos.end(); it++)
    {
        pedido = pedido + it->Produto::descricao();
    }
    return pedido;
}

void Pedido::setEndereco(const std::string& endereco)
{
    std::getline(std::cin, _endereco);
}

Pedido::~Pedido()
{
    delete &_produtos;
}