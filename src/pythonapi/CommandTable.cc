// Geometry Commands
DS_FUNCTION_TABLE(get_device_list,    dsCommand::getDeviceListCmd)
DS_FUNCTION_TABLE(get_region_list,    dsCommand::getRegionListCmd)
DS_FUNCTION_TABLE(get_interface_list, dsCommand::getRegionListCmd)
DS_FUNCTION_TABLE(get_contact_list,   dsCommand::getRegionListCmd)
DS_FUNCTION_TABLE(get_element_node_list, dsCommand::getElementNodeListCmd)
// Material Commands
DS_FUNCTION_TABLE(set_parameter,      dsCommand::getParameterCmd)
DS_FUNCTION_TABLE(get_parameter,      dsCommand::getParameterCmd)
DS_FUNCTION_TABLE(get_parameter_list, dsCommand::getParameterCmd)
DS_FUNCTION_TABLE(set_material,       dsCommand::getParameterCmd)
DS_FUNCTION_TABLE(get_material,       dsCommand::getParameterCmd)
DS_FUNCTION_TABLE(create_db,          dsCommand::openDBCmd)
DS_FUNCTION_TABLE(open_db,            dsCommand::openDBCmd)
DS_FUNCTION_TABLE(close_db,           dsCommand::openDBCmd)
DS_FUNCTION_TABLE(save_db,            dsCommand::openDBCmd)
DS_FUNCTION_TABLE(add_db_entry,       dsCommand::addDBEntryCmd)
DS_FUNCTION_TABLE(get_db_entry,       dsCommand::getDBEntryCmd)
DS_FUNCTION_TABLE(get_dimension,      dsCommand::getParameterCmd)
// Model Commands
DS_FUNCTION_TABLE(contact_edge_model,         dsCommand::createContactNodeModelCmd)
DS_FUNCTION_TABLE(contact_node_model,         dsCommand::createContactNodeModelCmd)
DS_FUNCTION_TABLE(debug_triangle_models,      dsCommand::debugTriangleCmd)
DS_FUNCTION_TABLE(delete_edge_model,          dsCommand::printEdgeValuesCmd)
DS_FUNCTION_TABLE(delete_element_model,       dsCommand::printElementEdgeValuesCmd)
DS_FUNCTION_TABLE(delete_interface_model,     dsCommand::getInterfaceValuesCmd)
DS_FUNCTION_TABLE(delete_node_model,          dsCommand::printNodeValuesCmd)
DS_FUNCTION_TABLE(edge_from_node_model,       dsCommand::createEdgeFromNodeModelCmd)
DS_FUNCTION_TABLE(edge_average_model,         dsCommand::createEdgeAverageModelCmd)
DS_FUNCTION_TABLE(edge_model,                 dsCommand::createNodeModelCmd)
DS_FUNCTION_TABLE(element_from_edge_model,    dsCommand::createTriangleFromEdgeModelCmd)
DS_FUNCTION_TABLE(element_pair_from_edge_model,    dsCommand::createTriangleFromEdgeModelCmd)
DS_FUNCTION_TABLE(element_from_node_model,    dsCommand::createEdgeFromNodeModelCmd)
DS_FUNCTION_TABLE(vector_element_model,       dsCommand::createVectorElementModelCmd)
DS_FUNCTION_TABLE(element_model,              dsCommand::createNodeModelCmd)
DS_FUNCTION_TABLE(get_edge_model_list,        dsCommand::getNodeModelListCmd)
DS_FUNCTION_TABLE(get_edge_model_values,      dsCommand::printEdgeValuesCmd)
DS_FUNCTION_TABLE(get_element_model_list,     dsCommand::getNodeModelListCmd)
DS_FUNCTION_TABLE(get_element_model_values,   dsCommand::printElementEdgeValuesCmd)
DS_FUNCTION_TABLE(get_interface_model_list,   dsCommand::getInterfaceModelListCmd)
DS_FUNCTION_TABLE(get_interface_model_values, dsCommand::getInterfaceValuesCmd)
DS_FUNCTION_TABLE(get_node_model_list,        dsCommand::getNodeModelListCmd)
DS_FUNCTION_TABLE(get_node_model_values,      dsCommand::printNodeValuesCmd)
DS_FUNCTION_TABLE(interface_model,            dsCommand::createInterfaceNodeModelCmd)
DS_FUNCTION_TABLE(interface_normal_model,     dsCommand::createInterfaceNormalModelCmd)
DS_FUNCTION_TABLE(node_model,                 dsCommand::createNodeModelCmd)
DS_FUNCTION_TABLE(node_solution,              dsCommand::createNodeSolutionCmd)
DS_FUNCTION_TABLE(edge_solution,              dsCommand::createNodeSolutionCmd)
DS_FUNCTION_TABLE(element_solution,           dsCommand::createNodeSolutionCmd)
DS_FUNCTION_TABLE(print_edge_values,          dsCommand::printEdgeValuesCmd)
DS_FUNCTION_TABLE(print_element_values,       dsCommand::printElementEdgeValuesCmd)
DS_FUNCTION_TABLE(print_node_values,          dsCommand::printNodeValuesCmd)
DS_FUNCTION_TABLE(register_function,          dsCommand::registerFunctionCmd)
DS_FUNCTION_TABLE(set_node_values,            dsCommand::setNodeValuesCmd)
DS_FUNCTION_TABLE(set_node_value,             dsCommand::setNodeValueCmd)
DS_FUNCTION_TABLE(set_edge_values,            dsCommand::setNodeValuesCmd)
DS_FUNCTION_TABLE(set_element_values,         dsCommand::setNodeValuesCmd)
DS_FUNCTION_TABLE(symdiff,                    dsCommand::symdiffCmd)
DS_FUNCTION_TABLE(vector_gradient,            dsCommand::createEdgeFromNodeModelCmd)
DS_FUNCTION_TABLE(cylindrical_edge_couple,    dsCommand::createCylindricalCmd)
DS_FUNCTION_TABLE(cylindrical_node_volume,    dsCommand::createCylindricalCmd)
DS_FUNCTION_TABLE(cylindrical_surface_area,   dsCommand::createCylindricalCmd)
// Math Commands
DS_FUNCTION_TABLE(get_contact_current,        dsCommand::getContactCurrentCmd)
DS_FUNCTION_TABLE(get_contact_charge,         dsCommand::getContactCurrentCmd)
DS_FUNCTION_TABLE(solve,                      dsCommand::solveCmd)
DS_FUNCTION_TABLE(get_matrix_and_rhs,         dsCommand::getMatrixAndRHSCmd)
DS_FUNCTION_TABLE(set_initial_condition,      dsCommand::setInitialConditionCmd)
// Equation Commands
DS_FUNCTION_TABLE(equation,                       dsCommand::createEquationCmd)
DS_FUNCTION_TABLE(interface_equation,             dsCommand::createInterfaceEquationCmd)
DS_FUNCTION_TABLE(contact_equation,               dsCommand::createContactEquationCmd)
DS_FUNCTION_TABLE(custom_equation,                dsCommand::createCustomEquationCmd)
DS_FUNCTION_TABLE(get_equation_numbers,           dsCommand::getEquationNumbersCmd)
DS_FUNCTION_TABLE(get_equation_list,              dsCommand::getEquationListCmd)
DS_FUNCTION_TABLE(get_interface_equation_list,    dsCommand::getInterfaceEquationListCmd)
DS_FUNCTION_TABLE(get_contact_equation_list,      dsCommand::getContactEquationListCmd)
DS_FUNCTION_TABLE(delete_equation,                dsCommand::deleteEquationCmd)
DS_FUNCTION_TABLE(delete_interface_equation,      dsCommand::deleteInterfaceEquationCmd)
DS_FUNCTION_TABLE(delete_contact_equation,        dsCommand::deleteContactEquationCmd)
DS_FUNCTION_TABLE(get_equation_command,           dsCommand::deleteEquationCmd)
DS_FUNCTION_TABLE(get_contact_equation_command,   dsCommand::deleteContactEquationCmd)
DS_FUNCTION_TABLE(get_interface_equation_command, dsCommand::deleteInterfaceEquationCmd)
// Meshing Commands
DS_FUNCTION_TABLE(create_1d_mesh,                dsCommand::create1dMeshCmd)
DS_FUNCTION_TABLE(finalize_mesh,                 dsCommand::finalizeMeshCmd)
DS_FUNCTION_TABLE(add_1d_mesh_line,              dsCommand::add1dMeshLineCmd)
DS_FUNCTION_TABLE(add_1d_interface,              dsCommand::add1dInterfaceCmd)
DS_FUNCTION_TABLE(add_1d_contact,                dsCommand::add1dContactCmd)
DS_FUNCTION_TABLE(add_1d_region,                 dsCommand::add1dRegionCmd)
DS_FUNCTION_TABLE(create_2d_mesh,                dsCommand::create1dMeshCmd)
DS_FUNCTION_TABLE(add_2d_mesh_line,              dsCommand::add2dMeshLineCmd)
DS_FUNCTION_TABLE(add_2d_region,                 dsCommand::add2dRegionCmd)
DS_FUNCTION_TABLE(add_2d_interface,              dsCommand::add2dInterfaceCmd)
DS_FUNCTION_TABLE(add_2d_contact,                dsCommand::add2dContactCmd)
DS_FUNCTION_TABLE(create_device,                 dsCommand::createDeviceCmd)
DS_FUNCTION_TABLE(load_devices,                  dsCommand::loadDevicesCmd)
DS_FUNCTION_TABLE(write_devices,                 dsCommand::writeDevicesCmd)
DS_FUNCTION_TABLE(create_gmsh_mesh,              dsCommand::createGmshMeshCmd)
DS_FUNCTION_TABLE(add_gmsh_contact,              dsCommand::addGmshContactCmd)
DS_FUNCTION_TABLE(add_gmsh_interface,            dsCommand::addGmshInterfaceCmd)
DS_FUNCTION_TABLE(add_gmsh_region,               dsCommand::addGmshRegionCmd)
DS_FUNCTION_TABLE(create_contact_from_interface, dsCommand::createContactFromInterfaceCmd)
DS_FUNCTION_TABLE(create_interface_from_nodes,   dsCommand::createInterfaceFromNodesCmd)
// Circuit Commands
DS_FUNCTION_TABLE(add_circuit_node,            dsCommand::addCircuitNodeCmd)
DS_FUNCTION_TABLE(circuit_element,             dsCommand::circuitElementCmd)
DS_FUNCTION_TABLE(circuit_alter,               dsCommand::circuitAlterCmd)
DS_FUNCTION_TABLE(circuit_node_alias,          dsCommand::circuitNodeAliasCmd)
DS_FUNCTION_TABLE(get_circuit_node_list,       dsCommand::circuitGetCircuitNodeListCmd)
DS_FUNCTION_TABLE(get_circuit_solution_list,   dsCommand::circuitGetCircuitSolutionListCmd)
DS_FUNCTION_TABLE(get_circuit_node_value,      dsCommand::circuitGetCircuitNodeValueCmd)
DS_FUNCTION_TABLE(set_circuit_node_value,      dsCommand::circuitGetCircuitNodeValueCmd)
DS_FUNCTION_TABLE(get_circuit_equation_number, dsCommand::circuitGetCircuitEquationNumberCmd)
