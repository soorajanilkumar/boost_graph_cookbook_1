#ifndef BOOST_GRAPH_COOKBOOK_1_NO_GRAPHVIZ
#include "save_text_edges_and_vertices_graph_to_dot.h"
//#include "save_text_edges_and_vertices_graph_to_dot_demo.impl"

#include <boost/test/unit_test.hpp>

#include <boost/test/unit_test.hpp>
#include <sstream>

#include "convert_dot_to_svg.h"
#include "copy_file.h"
#include "create_text_edges_and_vertices_k3_graph.h"
#include "create_text_vertices_k2_graph.h"
#include "file_to_vector.h"
#include "show_dot.h"

BOOST_AUTO_TEST_CASE(save_text_edges_and_vertices_graph_to_dot_thorough)
{
  // Show it stores the edges' names
  {
    const auto g = create_text_edges_and_vertices_k3_graph();
    const std::string base_filename{
      "save_text_edges_and_vertices_graph_to_dot_test_text_edges_and_vertices_"
      "k3_graph"
    };
    const std::string dot_filename{ base_filename + ".dot" };
    save_text_edges_and_vertices_graph_to_dot(g, dot_filename);
    const std::vector<std::string> text{ file_to_vector(dot_filename) };
    BOOST_CHECK(!text.empty());
    const std::vector<std::string> expected_text{ "graph G {", "0[label=top];",
      "1[label=right];", "2[label=left];", "0--1 [label=\"AB\"];",
      "1--2 [label=\"BC\"];", "2--0 [label=\"CA\"];", "}" };
    BOOST_CHECK(text == expected_text);
    std::remove(dot_filename.c_str());
  }
}

#endif // BOOST_GRAPH_COOKBOOK_1_NO_GRAPHVIZ
