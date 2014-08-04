// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/map.hpp"
#include "generators/include/python_CEGUI.h"
#include "EventLinkDefinitionMap.pypp.hpp"

namespace bp = boost::python;

void register_EventLinkDefinitionMap_class(){

    bp::class_< std::map<CEGUI::String,CEGUI::EventLinkDefinition*,CEGUI::StringFastLessCompare,std::allocator<std::pair<const CEGUI::String, CEGUI::EventLinkDefinition*> > > >("EventLinkDefinitionMap")    
        .def( bp::indexing::map_suite< std::map<CEGUI::String,CEGUI::EventLinkDefinition*,CEGUI::StringFastLessCompare,std::allocator<std::pair<const CEGUI::String, CEGUI::EventLinkDefinition*> > > >() );

}
