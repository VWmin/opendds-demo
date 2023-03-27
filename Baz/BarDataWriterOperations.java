package Baz;
public interface BarDataWriterOperations extends DDS.DataWriterOperations {
  int register_instance(Baz.Bar instance);
  int register_instance_w_timestamp(Baz.Bar instance, DDS.Time_t timestamp);
  int unregister_instance(Baz.Bar instance, int handle);
  int unregister_instance_w_timestamp(Baz.Bar instance, int handle, DDS.Time_t timestamp);
  int write(Baz.Bar instance_data, int handle);
  int write_w_timestamp(Baz.Bar instance_data, int handle, DDS.Time_t source_timestamp);
  int dispose(Baz.Bar instance_data, int instance_handle);
  int dispose_w_timestamp(Baz.Bar instance_data, int instance_handle, DDS.Time_t source_timestamp);
  int get_key_value(Baz.BarHolder key_holder, int handle);
  int lookup_instance(Baz.Bar instance_data);
}
