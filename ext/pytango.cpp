/******************************************************************************
  This file is part of PyTango (http://pytango.rtfd.io)

  Copyright 2006-2012 CELLS / ALBA Synchrotron, Bellaterra, Spain
  Copyright 2013-2019 European Synchrotron Radiation Facility, Grenoble, France

  Distributed under the terms of the GNU Lesser General Public License,
  either version 3 of the License, or (at your option) any later version.
  See LICENSE.txt for more info.
******************************************************************************/

#include <tango.h>
#include <pybind11/pybind11.h>
#include <ApiUtil.h>
#include <thread>

namespace py = pybind11;

void export_api_util(py::module& m);
void export_archive_event_info(py::module& m);
void export_attr_conf_event_data(py::module &m);
void export_attribute_alarm_info(py::module& m);
void export_attribute_dimension(py::module& m);
void export_attribute_event_info(py::module& m);
void export_attribute_info_ex(py::module &m);
void export_attribute_info(py::module &m);
void export_attribute_proxy(py::module& m);
void export_base_types(py::module& m);
void export_callback(py::module& m);
void export_change_event_info(py::module& m);
void export_command_info(py::module& m);
void export_constants(py::module &m);
void export_data_ready_event_data(py::module &m);
void export_database(py::module &m);
void export_db(py::module& m);
void export_dev_command_info(py::module& m);
void export_dev_error(py::module& m);
void export_device_attribute_config(py::module& m);
void export_device_attribute_history(py::module& m);
void export_device_attribute(py::module &m);
void export_device_data_history(py::module &m);
void export_device_data(py::module& m);
void export_device_info(py::module& m);
void export_device_pipe(py::module& m);
void export_device_proxy(py::module &m);
void export_devintr_change_event_data(py::module &m);
void export_enums(py::module& m);
void export_event_data(py::module& m);
void export_exceptions(py::module& m);
void export_group(py::module& m);
void export_group_reply(py::module& m);
void export_group_reply_list(py::module& m);
void export_locker_info(py::module& m);
void export_locking_thread(py::module& m);
void export_periodic_event_info(py::module& m);
void export_pipe_info(py::module& m);
void export_pipe_event_data(py::module& m);
void export_poll_device(py::module& m);
void export_time_val(py::module& m);
void export_version(py::module& m);

void export_attr(py::module& m);
void export_attribute(py::module& m);
void export_auto_tango_monitor(py::module& m);
void export_device_class(py::module& m);
void export_device_impl(py::module& m);
void export_dserver(py::module& m);
void export_user_default_fwdattr_prop(py::module &m);
void export_fwdattr(py::module &m);
void export_log4tango(py::module &m);
void export_multi_attribute(py::module &m);
void export_multi_class_attribute(py::module &m);
void export_pipe(py::module &m);
void export_sub_dev_diag(py::module &m);
void export_util(py::module &m);
void export_user_default_attr_prop(py::module& m);
void export_user_default_pipe_prop(py::module &m);
void export_wattribute(py::module &m);

PYBIND11_MODULE(_tango, m) {
    m.doc() = "This module implements the Python Tango Device API pybind11 mapping.";
    std::cerr << "Initialising the Python Tango Device API pybind11 mapping v3." << std::endl;
    m.attr("__path__") = "PyTango";

    py::print("pytango.cpp: initialise threads");
    PyEval_InitThreads();

    export_api_util(m);
    export_archive_event_info(m);
    export_attr_conf_event_data(m);
    export_attribute_alarm_info(m);
    export_attribute_dimension(m);
    export_attribute_event_info(m);
    export_device_attribute_config(m);
    export_attribute_info(m);
    export_attribute_info_ex(m);
    export_attribute_proxy(m);
    export_base_types(m);
    export_callback(m);
    export_change_event_info(m);
    export_dev_command_info(m);
    export_command_info(m);
    export_constants(m);
    export_data_ready_event_data(m);
    export_db(m);
    export_dev_error(m);
    export_devintr_change_event_data(m);
    export_device_attribute(m);
    export_device_attribute_history(m);
    export_device_data(m);
    export_device_data_history(m);
    export_device_info(m);
    export_device_pipe(m);
    export_device_proxy(m);
    export_enums(m);
    export_event_data(m);
    export_exceptions(m);
    export_group(m);
    export_group_reply(m);
    export_group_reply_list(m);
    export_locker_info(m);
    export_locking_thread(m);
    export_periodic_event_info(m);
    export_pipe_event_data(m);
    export_pipe_info(m);
    export_poll_device(m);
    export_time_val(m);
    export_version(m);
    export_database(m);

    export_attr(m);
    export_attribute(m);
    export_auto_tango_monitor(m);
    export_device_class(m);
    export_device_impl(m);
    export_dserver(m);
    export_user_default_fwdattr_prop(m);
    export_fwdattr(m);
    export_log4tango(m);
    export_multi_attribute(m);
    export_multi_class_attribute(m);
    export_pipe(m);
    export_sub_dev_diag(m);
    export_util(m);
    export_user_default_attr_prop(m);
    export_user_default_pipe_prop(m);
    export_wattribute(m);
}

