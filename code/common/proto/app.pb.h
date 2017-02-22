/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.8-dev at Wed Feb 22 21:00:01 2017. */

#ifndef PB_APP_PB_H_INCLUDED
#define PB_APP_PB_H_INCLUDED
#include <pb.h>

#include "base.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef PB_BYTES_ARRAY_T(1) CellMessage_row_t;
typedef PB_BYTES_ARRAY_T(1) CellMessage_column_t;
typedef PB_BYTES_ARRAY_T(1) CellMessage_value_t;
typedef struct _CellMessage {
    BaseHeader header;
    CellMessage_row_t row;
    CellMessage_column_t column;
    CellMessage_value_t value;
/* @@protoc_insertion_point(struct:CellMessage) */
} CellMessage;

typedef struct _KnockMessage {
    BaseHeader header;
/* @@protoc_insertion_point(struct:KnockMessage) */
} KnockMessage;

typedef struct _SensorsMessage {
    BaseHeader header;
/* @@protoc_insertion_point(struct:SensorsMessage) */
} SensorsMessage;

typedef struct _SettingsMessage {
    BaseHeader header;
/* @@protoc_insertion_point(struct:SettingsMessage) */
} SettingsMessage;

typedef PB_BYTES_ARRAY_T(1) TableMessage_id_t;
typedef PB_BYTES_ARRAY_T(176) TableMessage_data_t;
typedef struct _TableMessage {
    BaseHeader header;
    TableMessage_id_t id;
    TableMessage_data_t data;
/* @@protoc_insertion_point(struct:TableMessage) */
} TableMessage;

typedef struct _TaskMessage {
    BaseHeader header;
    uint32_t name_len;
    uint32_t pct;
    char name[12];
    bool is_last;
/* @@protoc_insertion_point(struct:TaskMessage) */
} TaskMessage;

/* Default values for struct fields */

/* Initializer values for message structs */
#define TaskMessage_init_default                 {BaseHeader_init_default, 0, 0, "", 0}
#define SensorsMessage_init_default              {BaseHeader_init_default}
#define KnockMessage_init_default                {BaseHeader_init_default}
#define SettingsMessage_init_default             {BaseHeader_init_default}
#define TableMessage_init_default                {BaseHeader_init_default, {0, {0}}, {0, {0}}}
#define CellMessage_init_default                 {BaseHeader_init_default, {0, {0}}, {0, {0}}, {0, {0}}}
#define TaskMessage_init_zero                    {BaseHeader_init_zero, 0, 0, "", 0}
#define SensorsMessage_init_zero                 {BaseHeader_init_zero}
#define KnockMessage_init_zero                   {BaseHeader_init_zero}
#define SettingsMessage_init_zero                {BaseHeader_init_zero}
#define TableMessage_init_zero                   {BaseHeader_init_zero, {0, {0}}, {0, {0}}}
#define CellMessage_init_zero                    {BaseHeader_init_zero, {0, {0}}, {0, {0}}, {0, {0}}}

/* Field tags (for use in manual encoding/decoding) */
#define CellMessage_header_tag                   1
#define CellMessage_row_tag                      2
#define CellMessage_column_tag                   3
#define CellMessage_value_tag                    4
#define KnockMessage_header_tag                  1
#define SensorsMessage_header_tag                1
#define SettingsMessage_header_tag               1
#define TableMessage_header_tag                  1
#define TableMessage_id_tag                      2
#define TableMessage_data_tag                    3
#define TaskMessage_header_tag                   1
#define TaskMessage_name_len_tag                 2
#define TaskMessage_pct_tag                      3
#define TaskMessage_name_tag                     4
#define TaskMessage_is_last_tag                  5

/* Struct field encoding specification for nanopb */
extern const pb_field_t TaskMessage_fields[6];
extern const pb_field_t SensorsMessage_fields[2];
extern const pb_field_t KnockMessage_fields[2];
extern const pb_field_t SettingsMessage_fields[2];
extern const pb_field_t TableMessage_fields[4];
extern const pb_field_t CellMessage_fields[5];

/* Maximum encoded size of messages (where known) */
#define TaskMessage_size                         (34 + BaseHeader_size)
#define SensorsMessage_size                      (6 + BaseHeader_size)
#define KnockMessage_size                        (6 + BaseHeader_size)
#define SettingsMessage_size                     (6 + BaseHeader_size)
#define TableMessage_size                        (188 + BaseHeader_size)
#define CellMessage_size                         (15 + BaseHeader_size)

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define APP_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
