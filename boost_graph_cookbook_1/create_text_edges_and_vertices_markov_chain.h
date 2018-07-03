#ifndef CREATE_TEXT_EDGES_AND_VERTICES_MARKOV_CHAIN_GRAPH_H
#define CREATE_TEXT_EDGES_AND_VERTICES_MARKOV_CHAIN_GRAPH_H

#include "create_empty_directed_text_edges_and_vertices_graph.h"

boost::adjacency_list<boost::vecS, boost::vecS, boost::directedS, std::string,
  std::string>
create_text_edges_and_vertices_markov_chain() noexcept;

#endif // CREATE_TEXT_EDGES_AND_VERTICES_MARKOV_CHAIN_GRAPH_H
