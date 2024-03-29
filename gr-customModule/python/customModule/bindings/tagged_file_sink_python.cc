/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(tagged_file_sink.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(ff2e75f4b4a603085c8fc10a122c7dff)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/customModule/tagged_file_sink.h>
// pydoc.h is automatically generated in the build directory
#include <tagged_file_sink_pydoc.h>

void bind_tagged_file_sink(py::module& m)
{

    using tagged_file_sink    = gr::customModule::tagged_file_sink;


    py::class_<tagged_file_sink, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<tagged_file_sink>>(m, "tagged_file_sink", D(tagged_file_sink))

        .def(py::init(&tagged_file_sink::make),
           D(tagged_file_sink,make)
        )
        



        ;




}








