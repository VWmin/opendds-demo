package Baz;
public interface BarDataReaderOperations extends OpenDDS.DCPS.DataReaderExOperations {
  int read(Baz.BarSeqHolder received_data, DDS.SampleInfoSeqHolder info_seq, int max_samples, int sample_states, int view_states, int instance_states);
  int take(Baz.BarSeqHolder received_data, DDS.SampleInfoSeqHolder info_seq, int max_samples, int sample_states, int view_states, int instance_states);
  int read_w_condition(Baz.BarSeqHolder data_values, DDS.SampleInfoSeqHolder sample_infos, int max_samples, DDS.ReadCondition a_condition);
  int take_w_condition(Baz.BarSeqHolder data_values, DDS.SampleInfoSeqHolder sample_infos, int max_samples, DDS.ReadCondition a_condition);
  int read_next_sample(Baz.BarHolder received_data, DDS.SampleInfoHolder sample_info);
  int take_next_sample(Baz.BarHolder received_data, DDS.SampleInfoHolder sample_info);
  int read_instance(Baz.BarSeqHolder received_data, DDS.SampleInfoSeqHolder info_seq, int max_samples, int a_handle, int sample_states, int view_states, int instance_states);
  int take_instance(Baz.BarSeqHolder received_data, DDS.SampleInfoSeqHolder info_seq, int max_samples, int a_handle, int sample_states, int view_states, int instance_states);
  int read_instance_w_condition(Baz.BarSeqHolder received_data, DDS.SampleInfoSeqHolder sample_infos, int max_samples, int a_handle, DDS.ReadCondition a_condition);
  int take_instance_w_condition(Baz.BarSeqHolder received_data, DDS.SampleInfoSeqHolder sample_infos, int max_samples, int a_handle, DDS.ReadCondition a_condition);
  int read_next_instance(Baz.BarSeqHolder received_data, DDS.SampleInfoSeqHolder info_seq, int max_samples, int a_handle, int sample_states, int view_states, int instance_states);
  int take_next_instance(Baz.BarSeqHolder received_data, DDS.SampleInfoSeqHolder info_seq, int max_samples, int a_handle, int sample_states, int view_states, int instance_states);
  int read_next_instance_w_condition(Baz.BarSeqHolder data_values, DDS.SampleInfoSeqHolder sample_infos, int max_samples, int previous_handle, DDS.ReadCondition a_condition);
  int take_next_instance_w_condition(Baz.BarSeqHolder data_values, DDS.SampleInfoSeqHolder sample_infos, int max_samples, int previous_handle, DDS.ReadCondition a_condition);
  int return_loan(Baz.BarSeqHolder received_data, DDS.SampleInfoSeqHolder info_seq);
  int get_key_value(Baz.BarHolder key_holder, int handle);
  int lookup_instance(Baz.Bar instance_data);
}
