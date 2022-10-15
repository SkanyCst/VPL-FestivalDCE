// TODO implemente essa classe de acordo com o hpp correspondente
#include <list>
#include <iomanip> 
#include "pedido.hpp"
#include "venda.hpp"

void Venda::adicionaPedido(Pedido* p)
{
    _pedidos.push_back(p);
}

void Venda::imprimeRelatorio()const
{
    std::list<Pedido*>::const_iterator it;
    for(it = _pedidos.begin(); it != _pedidos.end(); it++)
    {
        std::cout << it->Pedido::resumo();
    }
    std::cout << _pedidos.size();
}

Venda::~Venda()
{
    delete &_pedidos;
}