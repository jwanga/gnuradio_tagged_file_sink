/* -*- c++ -*- */
/*
 * Copyright 2022 gr-customModule author.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_CUSTOMMODULE_TAGGED_FILE_SINK_H
#define INCLUDED_CUSTOMMODULE_TAGGED_FILE_SINK_H

#include <gnuradio/customModule/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace customModule {

    /*!
     * \brief <+description of block+>
     * \ingroup customModule
     *
     */
    class CUSTOMMODULE_API tagged_file_sink : virtual public gr::sync_block
    {
     public:
      typedef std::shared_ptr<tagged_file_sink> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of customModule::tagged_file_sink.
       *
       * To avoid accidental use of raw pointers, customModule::tagged_file_sink's
       * constructor is in a private implementation
       * class. customModule::tagged_file_sink::make is the public interface for
       * creating new instances.
       */
      static sptr make();
    };

  } // namespace customModule
} // namespace gr

#endif /* INCLUDED_CUSTOMMODULE_TAGGED_FILE_SINK_H */
