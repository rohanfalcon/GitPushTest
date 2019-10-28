# 1 "u:\\turn class on_2\\\\combined_Turn class On_2.c"
# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"






















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 512 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 515 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 539 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 573 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 596 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 620 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 699 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 760 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 775 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 799 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 811 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 819 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 825 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 926 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 933 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 955 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1031 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1060 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"


# 1072 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "u:\\turn class on_2\\\\combined_Turn class On_2.c" 2

# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "u:\\turn class on_2\\\\combined_Turn class On_2.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 769 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"


# 782 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"



























# 820 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 888 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

 
 
 






# 9 "C:\\Program Files (x86)\\HP\\LoadRunner\\include/web_api.h" 2

















 







 














  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2






 
 






# 3 "u:\\turn class on_2\\\\combined_Turn class On_2.c" 2

# 1 "vuser_init.c" 1

Login()
{

  return 0;	
	
}




vuser_init()
{
	
	
	
	
	return 0;
}
# 4 "u:\\turn class on_2\\\\combined_Turn class On_2.c" 2

# 1 "Action.c" 1
 
 
Action()
{




	 



	web_url("Login.aspx", 
		"URL=https://es00vqweb15.qa.appdev/starsclassroom/Login.aspx?ReturnUrl=%2fstarsclassroom", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=WebResource.axd?d=pynGkmcFUV13He1Qd6_TZItUc7uOXVQ_JJSF3nqWHTssVf86I8T6DdUK_rt6gpBWQGLL6g2&t=636160664560000000", "Referer=https://es00vqweb15.qa.appdev/starsclassroom/Login.aspx?ReturnUrl=%2fstarsclassroom", "ENDITEM", 
		"Url=ScriptResource.axd?d=1HpV3OVB0CaEXoaafcqmhqJZa2bebF8z_FF0-EldwBH21IaxfGlAbaVjDF2unh6RE80xJSul3t-rb8c97YYqwPNFk2NeUGa5nusJgONIncVk7O-3fGq9Cs5R_JP4mzB8Vp9sSQ2&t=ffffffffbc20153d", "Referer=https://es00vqweb15.qa.appdev/starsclassroom/Login.aspx?ReturnUrl=%2fstarsclassroom", "ENDITEM", 
		"Url=Telerik.Web.UI.WebResource.axd?_TSM_HiddenField_=RadScriptManager1_TSM&compress=1&_TSM_CombinedScripts_=%3b%3bSystem.Web.Extensions%2c+Version%3d4.0.0.0%2c+Culture%3dneutral%2c+PublicKeyToken%3d31bf3856ad364e35%3aen-US%3a4bd8faf8-554d-46be-b2ff-c9d57adb612c%3aea597d4b%3ab25378d2", "Referer=https://es00vqweb15.qa.appdev/starsclassroom/Login.aspx?ReturnUrl=%2fstarsclassroom", "ENDITEM", 
		"LAST");

	

	web_url("iecompatviewlist.xml", 
		"URL=https://iecvlist.microsoft.com/IE11/1434748155000/iecompatviewlist.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://d2i2wahzwrm1n5.cloudfront.net/ajaxz/2017.2.621/Common/Core.js", "Referer=https://es00vqweb15.qa.appdev/starsclassroom/Login.aspx?ReturnUrl=%2fstarsclassroom", "ENDITEM", 
		"Url=https://d2i2wahzwrm1n5.cloudfront.net/ajaxz/2017.2.621/Ajax/Ajax.js", "Referer=https://es00vqweb15.qa.appdev/starsclassroom/Login.aspx?ReturnUrl=%2fstarsclassroom", "ENDITEM", 
		"Url=https://d2i2wahzwrm1n5.cloudfront.net/ajaxz/2017.2.621/Common/jQuery.js", "Referer=https://es00vqweb15.qa.appdev/starsclassroom/Login.aspx?ReturnUrl=%2fstarsclassroom", "ENDITEM", 
		"Url=https://es00vqweb15.qa.appdev/ui/apps/sites/stars_classroom/images/grid_bkg.gif", "Referer=https://es00vqweb15.qa.appdev/starsclassroom/Login.aspx?ReturnUrl=%2fstarsclassroom", "ENDITEM", 
		"Url=https://es00vqweb15.qa.appdev/ui/apps/sites/stars_classroom/images/loading.gif", "Referer=https://es00vqweb15.qa.appdev/starsclassroom/Login.aspx?ReturnUrl=%2fstarsclassroom", "ENDITEM", 
		"Url=https://d2i2wahzwrm1n5.cloudfront.net/ajaxz/2017.2.621/Common/Navigation/OverlayScript.js", "Referer=https://es00vqweb15.qa.appdev/starsclassroom/Login.aspx?ReturnUrl=%2fstarsclassroom", "ENDITEM", 
		"Url=https://es00vqweb15.qa.appdev/ui/apps/sites/stars_classroom/images/button_bg.png", "Referer=https://es00vqweb15.qa.appdev/starsclassroom/Login.aspx?ReturnUrl=%2fstarsclassroom", "ENDITEM", 
		"Url=https://es00vqweb15.qa.appdev/ui/apps/sites/stars_classroom/images/DOE_Logo.png", "Referer=https://es00vqweb15.qa.appdev/starsclassroom/Login.aspx?ReturnUrl=%2fstarsclassroom", "ENDITEM", 
		"Url=https://es00vqweb15.qa.appdev/ui/apps/sites/stars_classroom/images/home_img.jpg", "Referer=https://es00vqweb15.qa.appdev/starsclassroom/Login.aspx?ReturnUrl=%2fstarsclassroom", "ENDITEM", 
		"Url=https://es00vqweb15.qa.appdev/ui/apps/sites/stars_classroom/images/stars_classroom_logo.png", "Referer=https://es00vqweb15.qa.appdev/starsclassroom/Login.aspx?ReturnUrl=%2fstarsclassroom", "ENDITEM", 
		"Url=https://es00vqweb15.qa.appdev/ui/apps/sites/stars_classroom/images/toggle_btn_bg.png", "Referer=https://es00vqweb15.qa.appdev/starsclassroom/Login.aspx?ReturnUrl=%2fstarsclassroom", "ENDITEM", 
		"Url=https://fonts.gstatic.com/s/ptsans/v8/S1YQx4pVZa17uu0HWQd2fA.eot", "Referer=https://es00vqweb15.qa.appdev/starsclassroom/Login.aspx?ReturnUrl=%2fstarsclassroom", "ENDITEM", 
		"LAST");

	web_url("eMList.xml", 
		"URL=http://schools.nyc.gov/documents/ie11/eMList.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://www.google-analytics.com/analytics.js", "Referer=https://es00vqweb15.qa.appdev/starsclassroom/Login.aspx?ReturnUrl=%2fstarsclassroom", "ENDITEM", 
		"LAST");

	lr_think_time(16);

	lr_start_transaction("Login");

	web_submit_data("Login.aspx_2", 
		"Action=https://es00vqweb15.qa.appdev/starsclassroom/Login.aspx?ReturnUrl=%2fstarsclassroom", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://es00vqweb15.qa.appdev/starsclassroom/Login.aspx?ReturnUrl=%2fstarsclassroom", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=RadScriptManager1_TSM", "Value=;;System.Web.Extensions, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35:en-US:4bd8faf8-554d-46be-b2ff-c9d57adb612c:ea597d4b:b25378d2", "ENDITEM", 
		"Name=__EVENTTARGET", "Value=", "ENDITEM", 
		"Name=__EVENTARGUMENT", "Value=", "ENDITEM", 
		"Name=__VIEWSTATE", "Value=5rwBPWzE3GajYJmaNGpSl9/FXpdCM2su9RRfcpVEslLbcnd5ME5NZhxsk4WIBj2XtLRs2aglShyUO8qnlpyqbjwlGIC+xIIpjVIvzeLN4GdFBRreqLJhpq+N9EfGOxHeEV9t6uvn06WyROsTMlm8UujjY9HF9xR/hIW69zW3Q5Ar+mqXGr9vAT/thLgeDoZt3fiKPRu3ubtHEeaCba1xA1wLHnv5+U4dy0mdMY7hScnFgk51Yzi/oCbz/YEjDlRpdQp6NWK8zRPZNFDD67U73Y7YMfMQa26GpBMbBCOEHaXtct94d5smNSf2GREijPTcP3PLt78p9S6GSclD8UxwzqrRdseKeceAS6Yu/1AnDRVUccea7Wz6DBfFkYAPJti6cYcIE5UlG8HgZTEQCw+w0BBhdiqo7BJETA8AK7dL1YdtbWlZFmO1YfSvgjy7Mqs/OMEgEBwhhWiy6yKANOZyM1BL/"
		"62PH+XK9V/EiCvfya9N5utFU3wmM0V68bEAaDfcOqsLgOy84ASM3/33S0UM+53LKuLe3wTse8XHmX5NxjsZIvazinfiELf99u5QlpYul8ygreBQtVHAoA1BD5m9vZ8Z97GDQN+/8/pIZtZw84f6NXzTV81Q4HxZbVos1xN1TH/tsX38INNqKjlsqyBT2BeZ4ahCr0rC+caKnmCf9nG6b0nxNVce+KJlJXwq/YqVPC2KNSRpIijtQUEuwwBPeYz4/kDs7Lq3p9MyKQ8FYv31/OhJb1e/lfLZQy5Ga/JzvqGJYK8tQuZ3cLiUKFaSxCCckuP9rrwQJgoHyCw0Ienw+qva4PjFeA/+HsCtUV3SCOYBBYCrfkzBIItbQqu5TIyuIyw905hkQuvH3nmcZv1oI0NFtZYPvzr+xirGT8W4Vu0/bzQxAAfCDUw6Co4ryrOH2bY8AljEnseW8gn5fjTn5NjPFJBOAVwqVmsSZwc0CFz8/"
		"XRrV9914KGJUilOg+kC41qBkSL+xzqObDLLlx6TSkXW9+3nTjdYXLiz6Wev+99LytxAzWNdMzYNYCTgstrhl57UO0mGGJqukZvD6ll+7m/eFYQdSHWDR7Ynky0PRMddTkQUUgO6E0aOaok170aT+bg4Dc/hI0rRuOXKUJ4pJO0rDzPnyozM9VSb2ouHce93V2zsuonaZqO4DirUej4V7ClARvd15t+GthzWwioRFD90hwvXKQGBy1kl3kSw/fii2xqJsih4hzvP8/G3QevrUHkoufTanAUYoPbywHMis0MYju5cbsxzPh53d9FHVsYq1z9f/TfZCza3NX8k+5xowsIyHevoNI+VCfFLAuYS0KoDcW1d1Br+opfTSH+2JxUeAy1x7U8CclzoQfRRZ++O3yHdrzsz/gyBdJqGvTipQUi1WW4SCvhCreYfmfwc2B2BdZetrVXHO7qr5RGC0lZLG5Ox7lJ2p58Lt5m4g2+"
		"PxehFrT1zhsKPcMBxmjzDqsRBk78JM1p2DgwSHF+N/pxtG5wzWUO/hU4V06ZpAKSWJsgmOXeKhgGgW3/xlZfmAQdaqm8vgwvW1xAPOS42HUbUxZX1hM6XHOe39HzCsS/Ef1OQgC1Qy7GrKfcYbsHJeUNggypiN6apxE7PNf13RgJIj7Q8VYEpqXnImCQeSPmJgunl", "ENDITEM", 
		"Name=__VIEWSTATEGENERATOR", "Value=506DF0CD", "ENDITEM", 
		"Name=ctl00$MainContent$LoginControl1$UserNameTextBox", "Value=cmsuser1", "ENDITEM", 
		"Name=ctl00$MainContent$LoginControl1$PasswordTextBox", "Value=cmsuser1", "ENDITEM", 
		"Name=ctl00$MainContent$LoginControl1$LoginButton", "Value=Sign In", "ENDITEM", 
		"LAST");

	web_submit_data("Login.aspx_3", 
		"Action=https://es00vqweb15.qa.appdev/starsclassroom/Login.aspx?ReturnUrl=%2fstarsclassroom", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://es00vqweb15.qa.appdev/starsclassroom/Login.aspx?ReturnUrl=%2fstarsclassroom", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=RadScriptManager1_TSM", "Value=;;System.Web.Extensions, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35:en-US:4bd8faf8-554d-46be-b2ff-c9d57adb612c:ea597d4b:b25378d2", "ENDITEM", 
		"Name=__EVENTTARGET", "Value=", "ENDITEM", 
		"Name=__EVENTARGUMENT", "Value=", "ENDITEM", 
		"Name=__VIEWSTATE", "Value=Fwx+kYss0wjw8Vrszu3fP2lO0/gClblGGRK7fZAEzmwWPu8DV5iA92IqB5RcSPDc9+9Dp9SFH7w438WhSluVmemNY8n9QofoTCDiom/wNsWtlXTEvKGkw00Rco5Ned/qNsr4p250NDiK6Ltvn1B2wHnHP25221rs3KpE+8AsC+lbxbMkHahB2OFLKPoVmxSX6v/XSeLkeAesWo2ec4+2jM7UynPZ58xOAZdYBQJ8GHPhMj9VcRd+lqjDmYS9iTOMIZwP82J6JU6NV1PkOe6hYBoMaxwD0WXC5PA9n7fjdj1t7Bhgw50mlAeWyCWwE6Fuu+71DuWFZ6F44TamKgGdinBA9pziMWIAhCEkB6CWv/j10Lzjse/gCJ7IGP/yukYXacFYUMao9LdnqNXWnOjHphBLXQ7y0IJrpD5PMcwyDeiw2AGobHUub/22PpiwG2wotVQ6Gdxp5/Suxz8kFGP+"
		"dCgQXtxiSGr3yb3qBBEJ+J6eR3sc5uqIBzogZRoM6BOPrq3fMscjqx9Y6CFqV/i+87vcYKgOLTw2oMpHDTn0OJX01qhMjhCTr0RHPeERTk24tcY1LoOBOryVJ7BwWIjFKQ78GbR4fiFkyKcA/A/jIhQyZ62PwWZK7qgMwlBP4kDGrh4ENPE+aHjGTGhA8lobeaHyQ2wi3Iw/drFgjtohy+fAqKiPcMOELqvrUSsQnuveiOoxwDD6v0fJCsODXL/un+T3VIV385eFiFJj1uP8XMoTIOs0Fim8uPGk8qWkrL8JPIScn/sy4IdiZI7A2kKtkOnWZRCYHKLgW7pBT/G8323zSNoUMRGsdq6AjvBkdt9GgFr0hxafkyoUXRusgfWRSYNz+/1d+X9zZVFRlQm5cl/7hYLbljsfC/mgvwXr8/ChS08iBrvul3HKhqKUU8huv74OR8+IgKT4uHGKFdi8PBW9qTnAKSDBMVObb+59mGh1+IRJlZR0+"
		"a8kxu4dkRX9vQeQHjK+eip0z4oFPyCk/5hqPkTXGdji+1yj38+gogeA9swVcMF49EEJNcMIQmIxZXO6uRSQ0IvlEDMo98jKbPQFny0oo2UYfQxhXZi17Vb7YV5h587iQ+c+vvAhTsuiItUlRJISa9JrWf6ipZhRZbMRx9RG0rWT/eNEE/4eslDzQkBfY/2jBOULgviqyJzeQLrL7Q4/pkAfL4n5aA0LJIWI5bdZZls92I0nnHKfJd+5OUye5PDjzbaWkPNcjKkGL4VWhWoQrxolKWX4FiHcKOxMEJvr2XNAMMMQUBNlurfxuiSYtUoAXh7TDEalaOqgFlGjzCoacaRDoX3IL9USvbw+D4MhsTTDlTVaOouP2kDNJHAAJcM0OowVSUqCb3wvpaMQ4R5frdkENP0YnmpXHUIN/Bch5yNzZ1QagYh0+zz3LU9OPkrVSb1iQzMFqrHlCpZGVhsOevcZ/3C6nSRpPo8O0FISsRXOaVW9Xb5+"
		"Wr7P8jq2Km+Jy0No6FR9RS9N+67ar6ZbLeQoIKPHMHEJfzybtnE2njnK9d/4wa7LjYiAA3T4zdAIijOkL1j8LIznsmS124Brc3mN/jNwZ9vCnJvmE54uDq9uaIv+m9ow71ogxFYJCAc2yIR4BlEJ0UPxRXLsR6jaKtFLJNK0kPkOmAPWSr4w", "ENDITEM", 
		"Name=__VIEWSTATEGENERATOR", "Value=506DF0CD", "ENDITEM", 
		"Name=ctl00$MainContent$LoginControl1$UserNameTextBox", "Value=cmsuser1", "ENDITEM", 
		"Name=ctl00$MainContent$LoginControl1$PasswordTextBox", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$LoginControl1$AcceptButton", "Value=Accept", "ENDITEM", 
		"EXTRARES", 
		"Url=https://d2i2wahzwrm1n5.cloudfront.net/ajaxz/2017.2.621/Common/MaterialRipple/MaterialRippleScripts.js", "Referer=https://es00vqweb15.qa.appdev/starsclassroom/Default.aspx", "ENDITEM", 
		"Url=https://d2i2wahzwrm1n5.cloudfront.net/ajaxz/2017.2.621/Common/Navigation/NavigationScripts.js", "Referer=https://es00vqweb15.qa.appdev/starsclassroom/Default.aspx", "ENDITEM", 
		"Url=https://d2i2wahzwrm1n5.cloudfront.net/ajaxz/2017.2.621/Common/AnimationFramework/AnimationFramework.js", "Referer=https://es00vqweb15.qa.appdev/starsclassroom/Default.aspx", "ENDITEM", 
		"Url=https://d2i2wahzwrm1n5.cloudfront.net/ajaxz/2017.2.621/Common/jQueryPlugins.js", "Referer=https://es00vqweb15.qa.appdev/starsclassroom/Default.aspx", "ENDITEM", 
		"Url=https://d2i2wahzwrm1n5.cloudfront.net/ajaxz/2017.2.621/Common/Navigation/OData/OData.js", "Referer=https://es00vqweb15.qa.appdev/starsclassroom/Default.aspx", "ENDITEM", 
		"Url=https://d2i2wahzwrm1n5.cloudfront.net/ajaxz/2017.2.621/ComboBox/RadComboBoxScripts.js", "Referer=https://es00vqweb15.qa.appdev/starsclassroom/Default.aspx", "ENDITEM", 
		"Url=https://d2i2wahzwrm1n5.cloudfront.net/ajaxz/2017.2.621/ComboBox/Views/ClassicView.js", "Referer=https://es00vqweb15.qa.appdev/starsclassroom/Default.aspx", "ENDITEM", 
		"Url=https://d2i2wahzwrm1n5.cloudfront.net/ajaxz/2017.2.621/DropDownList/RadDropDownListScripts.js", "Referer=https://es00vqweb15.qa.appdev/starsclassroom/Default.aspx", "ENDITEM", 
		"Url=https://d2i2wahzwrm1n5.cloudfront.net/ajaxz/2017.2.621/Common/TouchScrollExtender.js", "Referer=https://es00vqweb15.qa.appdev/starsclassroom/Default.aspx", "ENDITEM", 
		"Url=../ui/apps/sites/stars_classroom/images/help_ico.png", "Referer=https://es00vqweb15.qa.appdev/starsclassroom/Default.aspx", "ENDITEM", 
		"Url=WebResource.axd?d=0XUhdENMh5wtLWEvr_GSVUHhPa4uApuswMtrrBgtj-UmfzSTfnOsg7wV-i58PrAr9TrC6xr2hMuUssoAPSZQXRMuwxY-xpb-7VyQeXalkcNnYE6PPmbwVDohHVKlz8DNi4Ttas3a--a_Q_26RbizS2eeOuQ1&t=636360589559077603", "Referer=https://es00vqweb15.qa.appdev/starsclassroom/Default.aspx", "ENDITEM", 
		"LAST");

	lr_end_transaction("Login",2);

	lr_think_time(8);

	web_link("School Administrator", 
		"Text=School Administrator", 
		"Snapshot=t56.inf", 
		"LAST");

	web_link("Elementary School Programming", 
		"Text=Elementary School Programming", 
		"Snapshot=t57.inf", 
		"LAST");

	lr_think_time(5);

	web_link("Step 1: Select Official Classes", 
		"Text=Step 1: Select Official Classes", 
		"Snapshot=t58.inf", 
		"LAST");

	web_submit_data("TermModelConfirmation.aspx", 
		"Action=https://es00vqweb15.qa.appdev/starsclassroom/SchoolAdmin/TermModelConfirmation.aspx", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://es00vqweb15.qa.appdev/starsclassroom/SchoolAdmin/TermModelConfirmation.aspx", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=RadScriptManager1_TSM", "Value=;;System.Web.Extensions, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35:en-US:4bd8faf8-554d-46be-b2ff-c9d57adb612c:ea597d4b:b25378d2", "ENDITEM", 
		"Name=__EVENTTARGET", "Value=", "ENDITEM", 
		"Name=__EVENTARGUMENT", "Value=", "ENDITEM", 
		"Name=__VIEWSTATE", "Value=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", "ENDITEM", 
		"Name=__VIEWSTATEGENERATOR", "Value=069BEC3D", "ENDITEM", 
		"Name=__PREVIOUSPAGE", "Value=0S2uP1gsgfyCKXNjxIP3wgUPNPC2hiPPg7JiPhiDAkL8tcwU0uvzuZbhiZMVq8PManxy3KUmP0mfLloMmNZXSZ3aEKvvVNJVRp0mZ7h8yIy4KWwpEGEZKXh-AgP6lveybkY98Q2", "ENDITEM", 
		"Name=ctl00$MainContent$SelectControl$SchoolDbnRadComboBox", "Value=-- Type a School --", "ENDITEM", 
		"Name=ctl00_MainContent_SelectControl_SchoolDbnRadComboBox_ClientState", "Value=", "ENDITEM", 
		"Name=ctl00_MainContent_SelectControl_SchoolYearRadDropDownList_ClientState", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$SchoolTermSetupControl$ContinueButton", "Value=Accept and Continue", "ENDITEM", 
		"EXTRARES", 
		"Url=https://d2i2wahzwrm1n5.cloudfront.net/ajaxz/2017.2.621/Grid/RadGridScripts.js", "Referer=https://es00vqweb15.qa.appdev/starsclassroom/SchoolAdmin/OfficialClassScheduleSelection.aspx", "ENDITEM", 
		"Url=../WebResource.axd?d=ifcjPV8aj2vMt9az-6wWm04E3ELGvkqBN_E_-uj6vwk3AguTrVulp8kFcbTARYgrOow8ujxmwI3fxTCNW3pIdp9YvtMSYj6Rse-R-vRNmzXyFDvRTXZRbRYMKxQG_RrCE1Mx5CMWHkwFtl8IZHHQrVsMXN01&t=636360589559077603", "Referer=https://es00vqweb15.qa.appdev/starsclassroom/SchoolAdmin/OfficialClassScheduleSelection.aspx", "ENDITEM", 
		"Url=/ui/apps/sites/stars_classroom/images/grid_top_bkg.gif", "Referer=https://es00vqweb15.qa.appdev/starsclassroom/SchoolAdmin/OfficialClassScheduleSelection.aspx", "ENDITEM", 
		"LAST");

	web_submit_data("OfficialClassScheduleSelection.aspx", 
		"Action=https://es00vqweb15.qa.appdev/starsclassroom/SchoolAdmin/OfficialClassScheduleSelection.aspx", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://es00vqweb15.qa.appdev/starsclassroom/SchoolAdmin/OfficialClassScheduleSelection.aspx", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=RadScriptManager1_TSM", "Value=;;System.Web.Extensions, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35:en-US:4bd8faf8-554d-46be-b2ff-c9d57adb612c:ea597d4b:b25378d2", "ENDITEM", 
		"Name=__EVENTTARGET", "Value=", "ENDITEM", 
		"Name=__EVENTARGUMENT", "Value=", "ENDITEM", 
		"Name=__VIEWSTATE", "Value=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", "ENDITEM", 
		"Name=__VIEWSTATEGENERATOR", "Value=F48C4785", "ENDITEM", 
		"Name=__PREVIOUSPAGE", "Value=91R06IjMzKl8IrjlIRSSgEiDiJBqlzQxDdk2_5ViV0fryOL5Q3jfWD7wm9WGbyAkXViRIKU5QO79IiWc1zDo7bNXhleu88v8wGoNzbUtcoCh4WBiWxXL03672WERdssliG1k3w2", "ENDITEM", 
		"Name=ctl00$MainContent$SelectControl$SchoolDbnRadComboBox", "Value=-- Type a School --", "ENDITEM", 
		"Name=ctl00_MainContent_SelectControl_SchoolDbnRadComboBox_ClientState", "Value=", "ENDITEM", 
		"Name=ctl00_MainContent_SelectControl_SchoolYearRadDropDownList_ClientState", "Value=", "ENDITEM", 
		"Name=ctl00_MainContent_SelectControl_SchoolTermRadDropDownList_ClientState", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassScheduleSelectionControl$GradeLevelComboBox", "Value=All", "ENDITEM", 
		"Name=ctl00_MainContent_OfficialClassScheduleSelectionControl_GradeLevelComboBox_ClientState", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassScheduleSelectionControl$StarsRadGrid$ctl00$ctl02$ctl00$PageSizeComboBox", "Value=10", "ENDITEM", 
		"Name=ctl00_MainContent_OfficialClassScheduleSelectionControl_StarsRadGrid_ctl00_ctl02_ctl00_PageSizeComboBox_ClientState", "Value={\"logEntries\":[],\"value\":\"10\",\"text\":\"10\",\"enabled\":true,\"checkedIndices\":[],\"checkedItemsTextOverflows\":false}", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassScheduleSelectionControl$StarsRadGrid$ctl00$ctl03$ctl01$PageSizeComboBox", "Value=10", "ENDITEM", 
		"Name=ctl00_MainContent_OfficialClassScheduleSelectionControl_StarsRadGrid_ctl00_ctl03_ctl01_PageSizeComboBox_ClientState", "Value={\"logEntries\":[],\"value\":\"10\",\"text\":\"10\",\"enabled\":true,\"checkedIndices\":[],\"checkedItemsTextOverflows\":false}", "ENDITEM", 
		"Name=ctl00_MainContent_OfficialClassScheduleSelectionControl_StarsRadGrid_ClientState", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassScheduleSelectionControl$ContinueButton", "Value=Accept and Continue", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassScheduleSelectionControl$pageSizeHidden", "Value=10", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassScheduleSelectionControl$pageNumberHidden", "Value=1", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassScheduleSelectionControl$modifiedNodesHidden", "Value=", "ENDITEM", 
		"LAST");

	web_custom_request("ElementaryOfficialClasses.aspx", 
		"URL=https://es00vqweb15.qa.appdev/starsclassroom/SchoolAdmin/ElementaryOfficialClasses.aspx", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://es00vqweb15.qa.appdev/starsclassroom/SchoolAdmin/ElementaryOfficialClasses.aspx", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=utf-8", 
		"Body=RadScriptManager1_TSM=&__EVENTTARGET=&__EVENTARGUMENT=&__VIEWSTATE="
		"5rGkIuXgFsG9c3vRCS9f2n1ULGapqOHMQEJMb9TB55rK2EsWRQu%2BWAcb55fTEPocL49xT1SzCwx%2F%2FeTGd9fY0cSaTMcDIkyue0jX5eBi6bBYw8i6qy2KJZpgMxQrHWCu8lRG7KLFEBPPYIk61NSj3uqjsbwhxRtTUvTOCtlsxK5J%2Bc015YaYPi945YqGxLVsT4u8rL7r47dJ8ocVANyCLZ6DTZrSYJRVJRi77SwMz7NS5xn91R2xRx%2F8cqwSBvI7UyBXyq%2Fxldf2EY4h%2Bt%2FDGJ6NuP1rJX0Oqbx8l77%2BD078KLF%2BQ%2FjfaO0rnRH1ijMOA24njYHnFbeKBiCeu07Ej67Jzl89KeifpgeaHEJC%2BtPzQdugMe%2FyGiRJ5iJTV65Ke4XMeFPIK6w3Wgw8LZEJFLwmqkRBacFPxihR5BvuREpohao%2FlWlPQR2mzmFjQNcDMTlEe6c6C%2BIJChuHwXN2%2B2"
		"fPwh7J07M0elAceT3T648HvbLlMj%2BsHFoLxxy5udqpW%2Frsknua3unsu6CazFkUwEFLWnUvywRij%2FURNcLVCqaCxGJw0YG%2FDRbiEjXrg60jvRVw3TtpJGY2rtvD3626Il10474QL4QzsegaPCrsgg5fiNN7wL9wo0mLTQQzw6d0ucOOqbOAFbaDKAbx8YlZiXQ%2Fwgx6S0alW5XjRVJTxii5KWbmnN7oFx%2FONQyPGu1tlWrbU%2FO9VbMAXvzer%2BMPhc1hQVQ%2FvjNTMRv5TJzkGp8qpx1PgXkNs3X3W5Fn4HJqRym2%2F5%2ByZnXuUIKL%2FQilHpSpvqly7x%2FcvTCcz4UErRMDQizQ%2BLD%2FqnoXp6NZbFsZHI1uiM9mE05Ut3RbIbEgBUrI%2FIbm7g%2BwC8fZK1kLSz%2FT0HSrNJbENZUW4ipSRv9r4QUCc3iRacbj1aC0LlzMPGe6PPNEJAOqqAgkH7Rq"
		"0JkmKPet2dXppNMg7vMAZ40MVSTy3zzcxq%2FJ%2Bstx64Xl6691WOlKIRtGp9SBU7XfrCPbp6ARoQYCIIz9EUDfg0klg7JQfJRDPMgeoq26GignTEPYTGpACLFoHen8bciaW7RTYqjP0sUlP3Vr7YKGraSIxpAik7lub31lqi2Ej98Nc4N20jxPU7od06sTmvyw5fr%2BnSRQQtiHy4Xhy%2FHYncHZmpiuM59dUTNsC9oW04exm1AUMhNdfIxiqg1c45Cz31WFsv4St%2FveW6nAVQrBsp2aK3q8ysEnHLBy%2B6IX9j5ng5lrcAnZ6Ry3HcKJj1A7sKrtDOmXNBX1ltlG1BnQsCYon8R855QjBPuBrILnQ4Js4R73K00q7tmOCw80PHgDZLqIUyWAHzx8tMloLHwb4K%2FkXnSfhPGRj3shdZTqkOvOv3LEr%2FOeshoRLDA6coDsDs1ItdnKBVp4HxHxU%2Fia63ToaERJBCaEoUa%"
		"2BRlIx7thmEoZYsJ3RuGwDOsbu%2FejgKlVJPX4drc05M3snaZkWQZ3ahSewZwKkZtyMXXmu%2FeN6gnsIPVZE0C2XxHB9LLhzzz6LrB1YfXXpuyLT6mY0S7o9Ks4sTaAAK2YOk6nVH1Jxu%2BZoicavrhWzC42duvazS1E5brK%2FnxjnoFiPs6lSGHw09vg%2F%2B5ZC84U06Yt4LlC9el9BiaKqHuaTVCIlEH9L80xO9xMsTBYc5sAA9U96XhIbxarkN5lhzKfCudej7JHHccYHDhOn6BTlZvuaaaj7ErVr%2BgKzaW8sGUboFPxopfNzNC7%2BSt4FX7vM0WSbHtge1v6fxnO8HZaQH1%2BOspYL%2Bs7d3mPuBTx6M%2Fkcqruog6LTCJMl7%2BrE4Q5q9Tu33iMK4twxkKQptn%2Fb87O7tVd%2BCamiATYOZdWr39p68LRuvQ6XgsIRR6IccrEdrLoU5M2HVWbqwDiXRecQP1n0"
		"02TEHKXRoUapru%2FbXqUSxPFDI8k7kSe7H6vw8DJ871gjIAd5DqQYrEUXSe5aw28jLizzcLl06sOZwF1yPqh33g4lmrPMRBfYJPzElMdRDkseRZ0TSjNER1WaImnVwfbG5d5j8sfJHQ9KpUV0Y04ZOjN7E3fF87ubV5mzBhxC1sMVitJgrCue73j25rEKpsiPGZKdfrn73lx2JVQeBh1VfiMnhuTY2jXFyTKWnQUejOh8PdEyQEeScTk2BkQAtGy1p21rJNdGCjw6ui56ElPEG7OjFrz8K9Loi9dNWuzLjuEyrN3c8Gxh0FURqNBN5NcWiKIwhNbcMl2ZZTjmfLhDty8c7%2FJw0pdUZxSozU%2F34h6aEyCp4upku4s%3D&__VIEWSTATEGENERATOR=7BB3473F&ctl00%24MainContent%24SelectControl%24SchoolDbnRadComboBox=--%20Type%20a%20School%20--&"
		"ctl00_MainContent_SelectControl_SchoolDbnRadComboBox_ClientState=&ctl00_MainContent_SelectControl_SchoolYearRadDropDownList_ClientState=&ctl00_MainContent_SelectControl_SchoolTermRadDropDownList_ClientState=&ctl00%24MainContent%24ElementaryOfficialClassesControl%24GradeLevelComboBox=&ctl00_MainContent_ElementaryOfficialClassesControl_GradeLevelComboBox_ClientState=&__CALLBACKID=ctl00%24MainContent%24SelectControl%24SchoolDbnRadComboBox&__CALLBACKPARAM="
		"%7B%22Command%22%3A%22LOD%22%2C%22Text%22%3A%22%22%2C%22ClientState%22%3A%7B%22value%22%3A%22%22%2C%22text%22%3A%22%22%2C%22enabled%22%3Atrue%2C%22logEntries%22%3A%5B%5D%2C%22checkedIndices%22%3A%5B%5D%2C%22checkedItemsTextOverflows%22%3Afalse%7D%2C%22Context%22%3A%7B%22Text%22%3A%22%22%2C%22NumberOfItems%22%3A0%7D%2C%22NumberOfItems%22%3A0%7D", 
		"LAST");

	lr_think_time(4);

	web_submit_data("ElementaryOfficialClasses.aspx_2", 
		"Action=https://es00vqweb15.qa.appdev/starsclassroom/SchoolAdmin/ElementaryOfficialClasses.aspx", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://es00vqweb15.qa.appdev/starsclassroom/SchoolAdmin/ElementaryOfficialClasses.aspx", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=RadScriptManager1_TSM", "Value=;;System.Web.Extensions, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35:en-US:4bd8faf8-554d-46be-b2ff-c9d57adb612c:ea597d4b:b25378d2", "ENDITEM", 
		"Name=__EVENTTARGET", "Value=ctl00$MainContent$SelectControl$SchoolDbnRadComboBox", "ENDITEM", 
		"Name=__EVENTARGUMENT", "Value={\"Command\":\"Select\",\"Index\":0}", "ENDITEM", 
		"Name=__VIEWSTATE", "Value=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", "ENDITEM", 
		"Name=__VIEWSTATEGENERATOR", "Value=7BB3473F", "ENDITEM", 
		"Name=ctl00$MainContent$SelectControl$SchoolDbnRadComboBox", "Value=01M015 - P.S. 015 ROBERTO CLEMENTE", "ENDITEM", 
		"Name=ctl00_MainContent_SelectControl_SchoolDbnRadComboBox_ClientState", "Value={\"logEntries\":[],\"value\":\"1010015\",\"text\":\"01M015 - P.S. 015 ROBERTO CLEMENTE\",\"enabled\":true,\"checkedIndices\":[],\"checkedItemsTextOverflows\":false}", "ENDITEM", 
		"Name=ctl00_MainContent_SelectControl_SchoolYearRadDropDownList_ClientState", "Value=", "ENDITEM", 
		"Name=ctl00_MainContent_SelectControl_SchoolTermRadDropDownList_ClientState", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$ElementaryOfficialClassesControl$GradeLevelComboBox", "Value=", "ENDITEM", 
		"Name=ctl00_MainContent_ElementaryOfficialClassesControl_GradeLevelComboBox_ClientState", "Value=", "ENDITEM", 
		"LAST");

	lr_think_time(6);

	 
# 302 "Action.c"

	lr_start_transaction("Turn Class On");

	web_custom_request("UpdateOfficialClassScheduling", 
		"URL=https://es00vqweb15.qa.appdev/starsclassroom/starsapi/OfficialClassScheduling/UpdateOfficialClassScheduling", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://es00vqweb15.qa.appdev/starsclassroom/SchoolAdmin/OfficialClassScheduling.aspx?OffClass=002", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"jsonData\":\"{\\\"numericSchoolDbn\\\":1010015,\\\"schoolYear\\\":2017,\\\"term\\\":1,\\\"officialClass\\\":\\\"002\\\",\\\"isEdit\\\":true,\\\"actions\\\":[{\\\"action\\\":\\\"ChangeSubjectStatus\\\",\\\"subjectId\\\":424,\\\"subjectName\\\":\\\"English Language Arts (Overall)   \\\",\\\"value\\\":true,\\\"officialClassSubjectId\\\":\\\"889345\\\",\\\"reqEffectiveDate\\\":true},{\\\"action\\\":\\\"AddTeacher\\\",\\\"subjectId\\\":424,\\\"subjectName\\\":\\\"English Language Arts (Overall)"
		"   \\\",\\\"teacherPid\\\":370053,\\\"officialClassSubjectId\\\":889345,\\\"reqEffectiveDate\\\":true}],\\\"effectiveDate\\\":\\\"2017/09/08\\\"}\"}", 
		"LAST");

	lr_end_transaction("Turn Class On",2);

	lr_start_transaction("Logout");

	web_submit_data("OfficialClassScheduling.aspx", 
		"Action=https://es00vqweb15.qa.appdev/starsclassroom/SchoolAdmin/OfficialClassScheduling.aspx?OffClass=002", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://es00vqweb15.qa.appdev/starsclassroom/SchoolAdmin/OfficialClassScheduling.aspx?OffClass=002", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$EffectiveDateWindow$C$EffectiveDateRadDatePicker", "Value=2017-09-08", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$EffectiveDateWindow$C$EffectiveDateRadDatePicker$dateInput", "Value=9/8/2017", "ENDITEM", 
		"Name=ctl00_MainContent_OfficialClassSchedulingControl_EffectiveDateWindow_C_EffectiveDateRadDatePicker_dateInput_ClientState", "Value={\"enabled\":true,\"emptyMessage\":\"\",\"validationText\":\"2017-09-08-00-00-00\",\"valueAsString\":\"2017-09-08-00-00-00\",\"minDateStr\":\"2017-09-08-00-00-00\",\"maxDateStr\":\"2018-06-28-00-00-00\",\"lastSetTextBoxValue\":\"9/8/2017\"}", "ENDITEM", 
		"Name=ctl00_MainContent_OfficialClassSchedulingControl_EffectiveDateWindow_C_EffectiveDateRadDatePicker_calendar_SD", "Value=[]", "ENDITEM", 
		"Name=ctl00_MainContent_OfficialClassSchedulingControl_EffectiveDateWindow_C_EffectiveDateRadDatePicker_calendar_AD", "Value=[[2017,9,8],[2018,6,28],[2017,9,8]]", "ENDITEM", 
		"Name=ctl00_MainContent_OfficialClassSchedulingControl_EffectiveDateWindow_C_EffectiveDateRadDatePicker_ClientState", "Value={\"minDateStr\":\"2017-09-08-00-00-00\",\"maxDateStr\":\"2018-06-28-00-00-00\"}", "ENDITEM", 
		"Name=RadScriptManager1_TSM", "Value=;;System.Web.Extensions, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35:en-US:4bd8faf8-554d-46be-b2ff-c9d57adb612c:ea597d4b:b25378d2", "ENDITEM", 
		"Name=__EVENTTARGET", "Value=ctl00$LogOffLinkButton", "ENDITEM", 
		"Name=__EVENTARGUMENT", "Value=", "ENDITEM", 
		"Name=__VIEWSTATE", "Value=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", "ENDITEM", 
		"Name=__VIEWSTATEGENERATOR", "Value=7E8313F9", "ENDITEM", 
		"Name=__PREVIOUSPAGE", "Value=-LHPUS3YDoUJeqdr98gpjy9Afm6SPWaSRShalmAjib-sH3VFpDXGJAtojiBF3E_wp6ISSg48gnSqc4LD75M2xUC5ukayXANp7hw8-kQQdvyEDbpx34VIXPr1gtBh8vaaGKHg-g2", "ENDITEM", 
		"Name=ctl00$MainContent$SchoolYearTermSelectionControl$SchoolDbnRadComboBox", "Value=01M015 - P.S. 015 ROBERTO CLEMENTE", "ENDITEM", 
		"Name=ctl00_MainContent_SchoolYearTermSelectionControl_SchoolDbnRadComboBox_ClientState", "Value=", "ENDITEM", 
		"Name=ctl00_MainContent_SchoolYearTermSelectionControl_SchoolYearRadDropDownList_ClientState", "Value=", "ENDITEM", 
		"Name=ctl00_MainContent_SchoolYearTermSelectionControl_SchoolTermRadDropDownList_ClientState", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl01$SubjectId", "Value=424", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl01$OfficialClassSubjectId", "Value=889345", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl01$ucCheckBoxSlider$SliderCheckBox", "Value=on", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl01$TeachersAutocomplete", "Value=370053", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl01$originalTeacherValues", "Value=370053", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl01$MinutesPerWeek", "Value=90", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl01$SubjectProperties$EslLanguagesDropDownList", "Value=1", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl01$SubjectProperties$SpecialEdDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl01$SubjectProperties$CSInstTimeDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl02$SubjectId", "Value=425", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl02$OfficialClassSubjectId", "Value=889346", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl02$originalTeacherValues", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl02$MinutesPerWeek", "Value=40", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl02$SubjectProperties$EslLanguagesDropDownList", "Value=1", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl02$SubjectProperties$SpecialEdDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl02$SubjectProperties$CSInstTimeDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl03$SubjectId", "Value=426", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl03$OfficialClassSubjectId", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl03$originalTeacherValues", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl03$MinutesPerWeek", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl03$SubjectProperties$EslLanguagesDropDownList", "Value=1", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl03$SubjectProperties$SpecialEdDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl03$SubjectProperties$CSInstTimeDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl04$SubjectId", "Value=427", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl04$OfficialClassSubjectId", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl04$originalTeacherValues", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl04$MinutesPerWeek", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl04$SubjectProperties$EslLanguagesDropDownList", "Value=1", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl04$SubjectProperties$SpecialEdDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl04$SubjectProperties$CSInstTimeDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl05$SubjectId", "Value=433", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl05$OfficialClassSubjectId", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl05$originalTeacherValues", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl05$MinutesPerWeek", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl05$SubjectProperties$EslLanguagesDropDownList", "Value=1", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl05$SubjectProperties$SpecialEdDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl05$SubjectProperties$CSInstTimeDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl06$SubjectId", "Value=435", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl06$OfficialClassSubjectId", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl06$originalTeacherValues", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl06$MinutesPerWeek", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl06$SubjectProperties$EslLanguagesDropDownList", "Value=1", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl06$SubjectProperties$SpecialEdDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl06$SubjectProperties$CSInstTimeDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl07$SubjectId", "Value=432", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl07$OfficialClassSubjectId", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl07$originalTeacherValues", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl07$MinutesPerWeek", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl07$SubjectProperties$EslLanguagesDropDownList", "Value=1", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl07$SubjectProperties$SpecialEdDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl07$SubjectProperties$CSInstTimeDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl08$SubjectId", "Value=429", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl08$OfficialClassSubjectId", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl08$originalTeacherValues", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl08$MinutesPerWeek", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl08$SubjectProperties$EslLanguagesDropDownList", "Value=1", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl08$SubjectProperties$SpecialEdDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl08$SubjectProperties$CSInstTimeDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl09$SubjectId", "Value=428", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl09$OfficialClassSubjectId", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl09$originalTeacherValues", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl09$MinutesPerWeek", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl09$SubjectProperties$EslLanguagesDropDownList", "Value=1", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl09$SubjectProperties$SpecialEdDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl09$SubjectProperties$CSInstTimeDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl10$SubjectId", "Value=442", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl10$OfficialClassSubjectId", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl10$originalTeacherValues", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl10$MinutesPerWeek", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl10$DaysPerWeekDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl10$SubjectProperties$EslLanguagesDropDownList", "Value=1", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl10$SubjectProperties$SpecialEdDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl10$SubjectProperties$CSInstTimeDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl11$SubjectId", "Value=446", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl11$OfficialClassSubjectId", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl11$originalTeacherValues", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl11$MinutesPerWeek", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl11$SubjectProperties$EslLanguagesDropDownList", "Value=1", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl11$SubjectProperties$SpecialEdDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl11$SubjectProperties$AidsTextBox", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl11$SubjectProperties$CSInstTimeDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl12$SubjectId", "Value=447", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl12$OfficialClassSubjectId", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl12$originalTeacherValues", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl12$MinutesPerWeek", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl12$SubjectProperties$EslLanguagesDropDownList", "Value=1", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl12$SubjectProperties$SpecialEdDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl12$SubjectProperties$CSInstTimeDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl13$SubjectId", "Value=438", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl13$OfficialClassSubjectId", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl13$originalTeacherValues", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl13$MinutesPerWeek", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl13$SubjectProperties$EslLanguagesDropDownList", "Value=1", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl13$SubjectProperties$SpecialEdDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl13$SubjectProperties$CSInstTimeDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl14$SubjectId", "Value=439", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl14$OfficialClassSubjectId", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl14$originalTeacherValues", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl14$MinutesPerWeek", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl14$SubjectProperties$EslLanguagesDropDownList", "Value=1", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl14$SubjectProperties$SpecialEdDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl14$SubjectProperties$CSInstTimeDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl15$SubjectId", "Value=440", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl15$OfficialClassSubjectId", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl15$originalTeacherValues", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl15$MinutesPerWeek", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl15$SubjectProperties$EslLanguagesDropDownList", "Value=1", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl15$SubjectProperties$SpecialEdDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl15$SubjectProperties$CSInstTimeDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl16$SubjectId", "Value=441", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl16$OfficialClassSubjectId", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl16$originalTeacherValues", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl16$MinutesPerWeek", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl16$SubjectProperties$EslLanguagesDropDownList", "Value=1", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl16$SubjectProperties$SpecialEdDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl16$SubjectProperties$CSInstTimeDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl17$SubjectId", "Value=437", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl17$OfficialClassSubjectId", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl17$originalTeacherValues", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl17$MinutesPerWeek", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl17$SubjectProperties$EslLanguagesDropDownList", "Value=1", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl17$SubjectProperties$SpecialEdDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl17$SubjectProperties$CSInstTimeDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl18$SubjectId", "Value=443", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl18$OfficialClassSubjectId", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl18$originalTeacherValues", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl18$MinutesPerWeek", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl18$SubjectProperties$EslLanguagesDropDownList", "Value=1", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl18$SubjectProperties$SpecialEdDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl18$SubjectProperties$CSInstTimeDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl19$SubjectId", "Value=452", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl19$OfficialClassSubjectId", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl19$originalTeacherValues", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl19$MinutesPerWeek", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl19$SubjectProperties$EslLanguagesDropDownList", "Value=1", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl19$SubjectProperties$SpecialEdDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl19$SubjectProperties$CSInstTimeDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl20$SubjectId", "Value=448", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl20$OfficialClassSubjectId", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl20$originalTeacherValues", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl20$MinutesPerWeek", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl20$SubjectProperties$EslLanguagesDropDownList", "Value=1", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl20$SubjectProperties$SpecialEdDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl20$SubjectProperties$CSInstTimeDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl21$SubjectId", "Value=451", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl21$OfficialClassSubjectId", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl21$originalTeacherValues", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl21$MinutesPerWeek", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl21$SubjectProperties$EslLanguagesDropDownList", "Value=1", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl21$SubjectProperties$SpecialEdDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl21$SubjectProperties$CSInstTimeDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl22$SubjectId", "Value=434", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl22$OfficialClassSubjectId", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl22$originalTeacherValues", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl22$MinutesPerWeek", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl22$SubjectProperties$EslLanguagesDropDownList", "Value=1", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl22$SubjectProperties$SpecialEdDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl22$SubjectProperties$CSInstTimeDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl23$SubjectId", "Value=436", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl23$OfficialClassSubjectId", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl23$originalTeacherValues", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl23$MinutesPerWeek", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl23$SubjectProperties$EslLanguagesDropDownList", "Value=1", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl23$SubjectProperties$SpecialEdDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl23$SubjectProperties$CSInstTimeDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl24$SubjectId", "Value=430", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl24$OfficialClassSubjectId", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl24$originalTeacherValues", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl24$MinutesPerWeek", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl24$SubjectProperties$EslLanguagesDropDownList", "Value=1", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl24$SubjectProperties$SpecialEdDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl24$SubjectProperties$CSInstTimeDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl25$SubjectId", "Value=431", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl25$OfficialClassSubjectId", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl25$originalTeacherValues", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl25$MinutesPerWeek", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl25$SubjectProperties$EslLanguagesDropDownList", "Value=1", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl25$SubjectProperties$SpecialEdDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl25$SubjectProperties$CSInstTimeDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl26$SubjectId", "Value=1", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl26$OfficialClassSubjectId", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl26$originalTeacherValues", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl26$MinutesPerWeek", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl26$SubjectProperties$EslLanguagesDropDownList", "Value=1", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl26$SubjectProperties$SpecialEdDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl27$SubjectId", "Value=2", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl27$OfficialClassSubjectId", "Value=0", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl27$originalTeacherValues", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl27$MinutesPerWeek", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl27$SubjectProperties$EslLanguagesDropDownList", "Value=1", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$SubjectsRepeater$ctl27$SubjectProperties$SpecialEdDropDownList", "Value=0", "ENDITEM", 
		"Name=ctl00_MainContent_OfficialClassSchedulingControl_EffectiveDateWindow_ClientState", "Value=", "ENDITEM", 
		"Name=ctl00_MainContent_OfficialClassSchedulingControl_RadWindowManager1_ClientState", "Value=", "ENDITEM", 
		"Name=ctl00$MainContent$OfficialClassSchedulingControl$ParamsHiddenField", "Value={ \"numericSchoolDbn\": 1010015, \"schoolYear\": 2017, \"termId\": 1, \"officialClass\": \"002\",\"isEdit\": \"True\" }", "ENDITEM", 
		"LAST");
	
	lr_end_transaction("Logout",2);
	
	 

	return 0;
}
# 5 "u:\\turn class on_2\\\\combined_Turn class On_2.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "u:\\turn class on_2\\\\combined_Turn class On_2.c" 2

