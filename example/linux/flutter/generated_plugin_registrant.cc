//
//  Generated file. Do not edit.
//

#include "generated_plugin_registrant.h"

#include <os_ip_address/os_ip_address.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) os_ip_address_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "OsIpAddress");
  os_ip_address_register_with_registrar(os_ip_address_registrar);
}
