/*
 * Copyright (c) 2015 ARM. All rights reserved.
 */
//CppUTest includes should be after your and system includes
#include "CppUTest/TestHarness.h"
#include "test_m2mnsdlinterface.h"

TEST_GROUP(M2MNsdlInterface)
{
  Test_M2MNsdlInterface* m2m_nsdl_interface;

  void setup()
  {
    m2m_nsdl_interface = new Test_M2MNsdlInterface();
  }
  void teardown()
  {
    delete m2m_nsdl_interface;
    m2m_nsdl_interface = NULL;
  }
};


TEST(M2MNsdlInterface, create)
{
    CHECK(m2m_nsdl_interface->nsdl != NULL);
}

TEST(M2MNsdlInterface, memory_free)
{
    m2m_nsdl_interface->test_memory_free();
}

TEST(M2MNsdlInterface, memory_alloc)
{
    m2m_nsdl_interface->test_memory_alloc();
}

TEST(M2MNsdlInterface, send_unregister_message)
{
    m2m_nsdl_interface->test_send_unregister_message();
}

TEST(M2MNsdlInterface, send_update_registration)
{
    m2m_nsdl_interface->test_send_update_registration();
}

TEST(M2MNsdlInterface, send_register_message)
{
    m2m_nsdl_interface->test_send_register_message();
}

TEST(M2MNsdlInterface, create_bootstrap_resource)
{
    m2m_nsdl_interface->test_create_bootstrap_resource();
}

TEST(M2MNsdlInterface, delete_nsdl_resource)
{
    m2m_nsdl_interface->test_delete_nsdl_resource();
}

TEST(M2MNsdlInterface, delete_endpoint)
{
    m2m_nsdl_interface->test_delete_endpoint();
}

TEST(M2MNsdlInterface, create_endpoint)
{
    m2m_nsdl_interface->test_create_endpoint();
}

TEST(M2MNsdlInterface, send_to_server_callback)
{
    m2m_nsdl_interface->test_send_to_server_callback();
}

TEST(M2MNsdlInterface, received_from_server_callback)
{
    m2m_nsdl_interface->test_received_from_server_callback();
}

TEST(M2MNsdlInterface, create_nsdl_list_structure)
{
    m2m_nsdl_interface->test_create_nsdl_list_structure();
}

TEST(M2MNsdlInterface, resource_callback_get)
{
    m2m_nsdl_interface->test_resource_callback_get();
}

TEST(M2MNsdlInterface, resource_callback_put)
{
    m2m_nsdl_interface->test_resource_callback_put();
}

TEST(M2MNsdlInterface, resource_callback_post)
{
    m2m_nsdl_interface->test_resource_callback_post();
}

TEST(M2MNsdlInterface, bootstrap_done_callback)
{
    m2m_nsdl_interface->test_bootstrap_done_callback();
}

TEST(M2MNsdlInterface, timer_expired)
{
    m2m_nsdl_interface->test_timer_expired();
}

TEST(M2MNsdlInterface, process_received_data)
{
    m2m_nsdl_interface->test_process_received_data();
}

TEST(M2MNsdlInterface, observation_to_be_sent)
{
    m2m_nsdl_interface->test_observation_to_be_sent();
}

TEST(M2MNsdlInterface, resource_to_be_deleted)
{
    m2m_nsdl_interface->test_resource_to_be_deleted();
}

TEST(M2MNsdlInterface, remove_object)
{
    m2m_nsdl_interface->test_remove_object();
}

TEST(M2MNsdlInterface, add_object_to_list)
{
    m2m_nsdl_interface->test_add_object_to_list();
}