#ifndef LOAD_DIRECTED_BUNDLED_VERTICES_GRAPH_FROM_DOT_H
#define LOAD_DIRECTED_BUNDLED_VERTICES_GRAPH_FROM_DOT_H

#include <boost/graph/adjacency_list.hpp>
#include "my_vertex.h"

boost::adjacency_list<
  boost::vecS,
  boost::vecS,
  boost::directedS,
  my_vertex
>
load_directed_bundled_vertices_graph_from_dot(
  const std::string& dot_filename
);

void load_directed_bundled_vertices_graph_from_dot_test() noexcept;


#endif // LOAD_DIRECTED_BUNDLED_VERTICES_GRAPH_FROM_DOT_H