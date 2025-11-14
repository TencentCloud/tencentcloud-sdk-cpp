/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_LOGRECHARGERULEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_LOGRECHARGERULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 日志导入规则
                */
                class LogRechargeRuleInfo : public AbstractModel
                {
                public:
                    LogRechargeRuleInfo();
                    ~LogRechargeRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取导入类型，支持json_log：json格式日志，minimalist_log: 单行全文，fullregex_log: 单行完全正则
                     * @return RechargeType 导入类型，支持json_log：json格式日志，minimalist_log: 单行全文，fullregex_log: 单行完全正则
                     * 
                     */
                    std::string GetRechargeType() const;

                    /**
                     * 设置导入类型，支持json_log：json格式日志，minimalist_log: 单行全文，fullregex_log: 单行完全正则
                     * @param _rechargeType 导入类型，支持json_log：json格式日志，minimalist_log: 单行全文，fullregex_log: 单行完全正则
                     * 
                     */
                    void SetRechargeType(const std::string& _rechargeType);

                    /**
                     * 判断参数 RechargeType 是否已赋值
                     * @return RechargeType 是否已赋值
                     * 
                     */
                    bool RechargeTypeHasBeenSet() const;

                    /**
                     * 获取解析编码格式，0: UTF-8（默认值），1: GBK
                     * @return EncodingFormat 解析编码格式，0: UTF-8（默认值），1: GBK
                     * 
                     */
                    uint64_t GetEncodingFormat() const;

                    /**
                     * 设置解析编码格式，0: UTF-8（默认值），1: GBK
                     * @param _encodingFormat 解析编码格式，0: UTF-8（默认值），1: GBK
                     * 
                     */
                    void SetEncodingFormat(const uint64_t& _encodingFormat);

                    /**
                     * 判断参数 EncodingFormat 是否已赋值
                     * @return EncodingFormat 是否已赋值
                     * 
                     */
                    bool EncodingFormatHasBeenSet() const;

                    /**
                     * 获取使用默认时间状态。true：开启后将使用系统当前时间或 Kafka 消息时间戳作为日志时间戳；false：关闭将使用日志中的时间字段作为日志时间戳。 默认：true
                     * @return DefaultTimeSwitch 使用默认时间状态。true：开启后将使用系统当前时间或 Kafka 消息时间戳作为日志时间戳；false：关闭将使用日志中的时间字段作为日志时间戳。 默认：true
                     * 
                     */
                    bool GetDefaultTimeSwitch() const;

                    /**
                     * 设置使用默认时间状态。true：开启后将使用系统当前时间或 Kafka 消息时间戳作为日志时间戳；false：关闭将使用日志中的时间字段作为日志时间戳。 默认：true
                     * @param _defaultTimeSwitch 使用默认时间状态。true：开启后将使用系统当前时间或 Kafka 消息时间戳作为日志时间戳；false：关闭将使用日志中的时间字段作为日志时间戳。 默认：true
                     * 
                     */
                    void SetDefaultTimeSwitch(const bool& _defaultTimeSwitch);

                    /**
                     * 判断参数 DefaultTimeSwitch 是否已赋值
                     * @return DefaultTimeSwitch 是否已赋值
                     * 
                     */
                    bool DefaultTimeSwitchHasBeenSet() const;

                    /**
                     * 获取整条日志匹配规则，只有RechargeType为fullregex_log时有效
                     * @return LogRegex 整条日志匹配规则，只有RechargeType为fullregex_log时有效
                     * 
                     */
                    std::string GetLogRegex() const;

                    /**
                     * 设置整条日志匹配规则，只有RechargeType为fullregex_log时有效
                     * @param _logRegex 整条日志匹配规则，只有RechargeType为fullregex_log时有效
                     * 
                     */
                    void SetLogRegex(const std::string& _logRegex);

                    /**
                     * 判断参数 LogRegex 是否已赋值
                     * @return LogRegex 是否已赋值
                     * 
                     */
                    bool LogRegexHasBeenSet() const;

                    /**
                     * 获取解析失败日志是否上传，true表示上传，false表示不上传
                     * @return UnMatchLogSwitch 解析失败日志是否上传，true表示上传，false表示不上传
                     * 
                     */
                    bool GetUnMatchLogSwitch() const;

                    /**
                     * 设置解析失败日志是否上传，true表示上传，false表示不上传
                     * @param _unMatchLogSwitch 解析失败日志是否上传，true表示上传，false表示不上传
                     * 
                     */
                    void SetUnMatchLogSwitch(const bool& _unMatchLogSwitch);

                    /**
                     * 判断参数 UnMatchLogSwitch 是否已赋值
                     * @return UnMatchLogSwitch 是否已赋值
                     * 
                     */
                    bool UnMatchLogSwitchHasBeenSet() const;

                    /**
                     * 获取解析失败日志的键名称
                     * @return UnMatchLogKey 解析失败日志的键名称
                     * 
                     */
                    std::string GetUnMatchLogKey() const;

                    /**
                     * 设置解析失败日志的键名称
                     * @param _unMatchLogKey 解析失败日志的键名称
                     * 
                     */
                    void SetUnMatchLogKey(const std::string& _unMatchLogKey);

                    /**
                     * 判断参数 UnMatchLogKey 是否已赋值
                     * @return UnMatchLogKey 是否已赋值
                     * 
                     */
                    bool UnMatchLogKeyHasBeenSet() const;

                    /**
                     * 获取解析失败日志时间来源，0: 系统当前时间，1: Kafka消息时间戳
                     * @return UnMatchLogTimeSrc 解析失败日志时间来源，0: 系统当前时间，1: Kafka消息时间戳
                     * 
                     */
                    uint64_t GetUnMatchLogTimeSrc() const;

                    /**
                     * 设置解析失败日志时间来源，0: 系统当前时间，1: Kafka消息时间戳
                     * @param _unMatchLogTimeSrc 解析失败日志时间来源，0: 系统当前时间，1: Kafka消息时间戳
                     * 
                     */
                    void SetUnMatchLogTimeSrc(const uint64_t& _unMatchLogTimeSrc);

                    /**
                     * 判断参数 UnMatchLogTimeSrc 是否已赋值
                     * @return UnMatchLogTimeSrc 是否已赋值
                     * 
                     */
                    bool UnMatchLogTimeSrcHasBeenSet() const;

                    /**
                     * 获取默认时间来源，0: 系统当前时间，1: Kafka消息时间戳
                     * @return DefaultTimeSrc 默认时间来源，0: 系统当前时间，1: Kafka消息时间戳
                     * 
                     */
                    uint64_t GetDefaultTimeSrc() const;

                    /**
                     * 设置默认时间来源，0: 系统当前时间，1: Kafka消息时间戳
                     * @param _defaultTimeSrc 默认时间来源，0: 系统当前时间，1: Kafka消息时间戳
                     * 
                     */
                    void SetDefaultTimeSrc(const uint64_t& _defaultTimeSrc);

                    /**
                     * 判断参数 DefaultTimeSrc 是否已赋值
                     * @return DefaultTimeSrc 是否已赋值
                     * 
                     */
                    bool DefaultTimeSrcHasBeenSet() const;

                    /**
                     * 获取时间字段，日志中代表时间的字段名。

- 当DefaultTimeSwitch为false，且RechargeType数据提取模式为 `json_log` JSON-文件日志 或 `fullregex_log` 单行完全正则-文件日志时， TimeKey不能为空。
                     * @return TimeKey 时间字段，日志中代表时间的字段名。

- 当DefaultTimeSwitch为false，且RechargeType数据提取模式为 `json_log` JSON-文件日志 或 `fullregex_log` 单行完全正则-文件日志时， TimeKey不能为空。
                     * 
                     */
                    std::string GetTimeKey() const;

                    /**
                     * 设置时间字段，日志中代表时间的字段名。

- 当DefaultTimeSwitch为false，且RechargeType数据提取模式为 `json_log` JSON-文件日志 或 `fullregex_log` 单行完全正则-文件日志时， TimeKey不能为空。
                     * @param _timeKey 时间字段，日志中代表时间的字段名。

- 当DefaultTimeSwitch为false，且RechargeType数据提取模式为 `json_log` JSON-文件日志 或 `fullregex_log` 单行完全正则-文件日志时， TimeKey不能为空。
                     * 
                     */
                    void SetTimeKey(const std::string& _timeKey);

                    /**
                     * 判断参数 TimeKey 是否已赋值
                     * @return TimeKey 是否已赋值
                     * 
                     */
                    bool TimeKeyHasBeenSet() const;

                    /**
                     * 获取时间提取正则表达式。
- 当DefaultTimeSwitch为false，且RechargeType数据提取模式为 `minimalist_log` 单行全文-文件日志时， TimeRegex不能为空。
- 仅需输入日志中代表时间的字段的正则表达式即可；若匹配到多个字段，将使用第一个。
   例：日志原文为：message with time 2022-08-08 14:20:20，则您可以设置提取时间正则为\d\d\d\d-\d\d-\d\d \d\d:\d\d:\d\d

                     * @return TimeRegex 时间提取正则表达式。
- 当DefaultTimeSwitch为false，且RechargeType数据提取模式为 `minimalist_log` 单行全文-文件日志时， TimeRegex不能为空。
- 仅需输入日志中代表时间的字段的正则表达式即可；若匹配到多个字段，将使用第一个。
   例：日志原文为：message with time 2022-08-08 14:20:20，则您可以设置提取时间正则为\d\d\d\d-\d\d-\d\d \d\d:\d\d:\d\d

                     * 
                     */
                    std::string GetTimeRegex() const;

                    /**
                     * 设置时间提取正则表达式。
- 当DefaultTimeSwitch为false，且RechargeType数据提取模式为 `minimalist_log` 单行全文-文件日志时， TimeRegex不能为空。
- 仅需输入日志中代表时间的字段的正则表达式即可；若匹配到多个字段，将使用第一个。
   例：日志原文为：message with time 2022-08-08 14:20:20，则您可以设置提取时间正则为\d\d\d\d-\d\d-\d\d \d\d:\d\d:\d\d

                     * @param _timeRegex 时间提取正则表达式。
- 当DefaultTimeSwitch为false，且RechargeType数据提取模式为 `minimalist_log` 单行全文-文件日志时， TimeRegex不能为空。
- 仅需输入日志中代表时间的字段的正则表达式即可；若匹配到多个字段，将使用第一个。
   例：日志原文为：message with time 2022-08-08 14:20:20，则您可以设置提取时间正则为\d\d\d\d-\d\d-\d\d \d\d:\d\d:\d\d

                     * 
                     */
                    void SetTimeRegex(const std::string& _timeRegex);

                    /**
                     * 判断参数 TimeRegex 是否已赋值
                     * @return TimeRegex 是否已赋值
                     * 
                     */
                    bool TimeRegexHasBeenSet() const;

                    /**
                     * 获取时间字段格式。
- 当DefaultTimeSwitch为false时， TimeFormat不能为空。
                     * @return TimeFormat 时间字段格式。
- 当DefaultTimeSwitch为false时， TimeFormat不能为空。
                     * 
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置时间字段格式。
- 当DefaultTimeSwitch为false时， TimeFormat不能为空。
                     * @param _timeFormat 时间字段格式。
- 当DefaultTimeSwitch为false时， TimeFormat不能为空。
                     * 
                     */
                    void SetTimeFormat(const std::string& _timeFormat);

                    /**
                     * 判断参数 TimeFormat 是否已赋值
                     * @return TimeFormat 是否已赋值
                     * 
                     */
                    bool TimeFormatHasBeenSet() const;

                    /**
                     * 获取时间字段时区。
- 当DefaultTimeSwitch为false时， TimeZone不能为空。
- 时区格式规则
​前缀​：使用 GMT 或 UTC 作为时区基准
​偏移量​：
    - `-` 表示西时区（比基准时间晚）
    - `+` 表示东时区（比基准时间早）
    -  格式为 ±HH:MM（小时:分钟）

- 当前支持：
```
"GMT-12:00" 
"GMT-11:00" 
"GMT-10:00" 
"GMT-09:30" 
"GMT-09:00" 
"GMT-08:00" 
"GMT-07:00" 
"GMT-06:00" 
"GMT-05:00" 
"GMT-04:00" 
"GMT-03:30" 
"GMT-03:00" 
"GMT-02:00" 
"GMT-01:00" 
"GMT+00:00"
"GMT+01:00"
"GMT+02:00"
"GMT+03:30"
"GMT+04:00"
"GMT+04:30"
"GMT+05:00"
"GMT+05:30"
"GMT+05:45"
"GMT+06:00"
"GMT+06:30"
"GMT+07:00"
"GMT+08:00"
"GMT+09:00"
"GMT+09:30"
"GMT+10:00"
"GMT+10:30"
"GMT+11:00"
"GMT+11:30"
"GMT+12:00"
"GMT+12:45"
"GMT+13:00"
"GMT+14:00"
"UTC-11:00"
"UTC-10:00"
"UTC-09:00"
"UTC-08:00"
"UTC-12:00"
"UTC-07:00"
"UTC-06:00"
"UTC-05:00"
"UTC-04:30"
"UTC-04:00"
"UTC-03:30"
"UTC-03:00"
"UTC-02:00"
"UTC-01:00"
"UTC+00:00"
"UTC+01:00"
"UTC+02:00"
"UTC+03:00"
"UTC+03:30"
"UTC+04:00"
"UTC+04:30"
"UTC+05:00"
"UTC+05:45"
"UTC+06:00"
"UTC+06:30"
"UTC+07:00"
"UTC+08:00"
"UTC+09:00"
"UTC+09:30"
"UTC+10:00"
"UTC+11:00"
"UTC+12:00"
"UTC+13:00"
```
                     * @return TimeZone 时间字段时区。
- 当DefaultTimeSwitch为false时， TimeZone不能为空。
- 时区格式规则
​前缀​：使用 GMT 或 UTC 作为时区基准
​偏移量​：
    - `-` 表示西时区（比基准时间晚）
    - `+` 表示东时区（比基准时间早）
    -  格式为 ±HH:MM（小时:分钟）

- 当前支持：
```
"GMT-12:00" 
"GMT-11:00" 
"GMT-10:00" 
"GMT-09:30" 
"GMT-09:00" 
"GMT-08:00" 
"GMT-07:00" 
"GMT-06:00" 
"GMT-05:00" 
"GMT-04:00" 
"GMT-03:30" 
"GMT-03:00" 
"GMT-02:00" 
"GMT-01:00" 
"GMT+00:00"
"GMT+01:00"
"GMT+02:00"
"GMT+03:30"
"GMT+04:00"
"GMT+04:30"
"GMT+05:00"
"GMT+05:30"
"GMT+05:45"
"GMT+06:00"
"GMT+06:30"
"GMT+07:00"
"GMT+08:00"
"GMT+09:00"
"GMT+09:30"
"GMT+10:00"
"GMT+10:30"
"GMT+11:00"
"GMT+11:30"
"GMT+12:00"
"GMT+12:45"
"GMT+13:00"
"GMT+14:00"
"UTC-11:00"
"UTC-10:00"
"UTC-09:00"
"UTC-08:00"
"UTC-12:00"
"UTC-07:00"
"UTC-06:00"
"UTC-05:00"
"UTC-04:30"
"UTC-04:00"
"UTC-03:30"
"UTC-03:00"
"UTC-02:00"
"UTC-01:00"
"UTC+00:00"
"UTC+01:00"
"UTC+02:00"
"UTC+03:00"
"UTC+03:30"
"UTC+04:00"
"UTC+04:30"
"UTC+05:00"
"UTC+05:45"
"UTC+06:00"
"UTC+06:30"
"UTC+07:00"
"UTC+08:00"
"UTC+09:00"
"UTC+09:30"
"UTC+10:00"
"UTC+11:00"
"UTC+12:00"
"UTC+13:00"
```
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置时间字段时区。
- 当DefaultTimeSwitch为false时， TimeZone不能为空。
- 时区格式规则
​前缀​：使用 GMT 或 UTC 作为时区基准
​偏移量​：
    - `-` 表示西时区（比基准时间晚）
    - `+` 表示东时区（比基准时间早）
    -  格式为 ±HH:MM（小时:分钟）

- 当前支持：
```
"GMT-12:00" 
"GMT-11:00" 
"GMT-10:00" 
"GMT-09:30" 
"GMT-09:00" 
"GMT-08:00" 
"GMT-07:00" 
"GMT-06:00" 
"GMT-05:00" 
"GMT-04:00" 
"GMT-03:30" 
"GMT-03:00" 
"GMT-02:00" 
"GMT-01:00" 
"GMT+00:00"
"GMT+01:00"
"GMT+02:00"
"GMT+03:30"
"GMT+04:00"
"GMT+04:30"
"GMT+05:00"
"GMT+05:30"
"GMT+05:45"
"GMT+06:00"
"GMT+06:30"
"GMT+07:00"
"GMT+08:00"
"GMT+09:00"
"GMT+09:30"
"GMT+10:00"
"GMT+10:30"
"GMT+11:00"
"GMT+11:30"
"GMT+12:00"
"GMT+12:45"
"GMT+13:00"
"GMT+14:00"
"UTC-11:00"
"UTC-10:00"
"UTC-09:00"
"UTC-08:00"
"UTC-12:00"
"UTC-07:00"
"UTC-06:00"
"UTC-05:00"
"UTC-04:30"
"UTC-04:00"
"UTC-03:30"
"UTC-03:00"
"UTC-02:00"
"UTC-01:00"
"UTC+00:00"
"UTC+01:00"
"UTC+02:00"
"UTC+03:00"
"UTC+03:30"
"UTC+04:00"
"UTC+04:30"
"UTC+05:00"
"UTC+05:45"
"UTC+06:00"
"UTC+06:30"
"UTC+07:00"
"UTC+08:00"
"UTC+09:00"
"UTC+09:30"
"UTC+10:00"
"UTC+11:00"
"UTC+12:00"
"UTC+13:00"
```
                     * @param _timeZone 时间字段时区。
- 当DefaultTimeSwitch为false时， TimeZone不能为空。
- 时区格式规则
​前缀​：使用 GMT 或 UTC 作为时区基准
​偏移量​：
    - `-` 表示西时区（比基准时间晚）
    - `+` 表示东时区（比基准时间早）
    -  格式为 ±HH:MM（小时:分钟）

- 当前支持：
```
"GMT-12:00" 
"GMT-11:00" 
"GMT-10:00" 
"GMT-09:30" 
"GMT-09:00" 
"GMT-08:00" 
"GMT-07:00" 
"GMT-06:00" 
"GMT-05:00" 
"GMT-04:00" 
"GMT-03:30" 
"GMT-03:00" 
"GMT-02:00" 
"GMT-01:00" 
"GMT+00:00"
"GMT+01:00"
"GMT+02:00"
"GMT+03:30"
"GMT+04:00"
"GMT+04:30"
"GMT+05:00"
"GMT+05:30"
"GMT+05:45"
"GMT+06:00"
"GMT+06:30"
"GMT+07:00"
"GMT+08:00"
"GMT+09:00"
"GMT+09:30"
"GMT+10:00"
"GMT+10:30"
"GMT+11:00"
"GMT+11:30"
"GMT+12:00"
"GMT+12:45"
"GMT+13:00"
"GMT+14:00"
"UTC-11:00"
"UTC-10:00"
"UTC-09:00"
"UTC-08:00"
"UTC-12:00"
"UTC-07:00"
"UTC-06:00"
"UTC-05:00"
"UTC-04:30"
"UTC-04:00"
"UTC-03:30"
"UTC-03:00"
"UTC-02:00"
"UTC-01:00"
"UTC+00:00"
"UTC+01:00"
"UTC+02:00"
"UTC+03:00"
"UTC+03:30"
"UTC+04:00"
"UTC+04:30"
"UTC+05:00"
"UTC+05:45"
"UTC+06:00"
"UTC+06:30"
"UTC+07:00"
"UTC+08:00"
"UTC+09:00"
"UTC+09:30"
"UTC+10:00"
"UTC+11:00"
"UTC+12:00"
"UTC+13:00"
```
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                    /**
                     * 获取元数据信息，Kafka导入支持kafka_topic,kafka_partition,kafka_offset,kafka_timestamp
                     * @return Metadata 元数据信息，Kafka导入支持kafka_topic,kafka_partition,kafka_offset,kafka_timestamp
                     * 
                     */
                    std::vector<std::string> GetMetadata() const;

                    /**
                     * 设置元数据信息，Kafka导入支持kafka_topic,kafka_partition,kafka_offset,kafka_timestamp
                     * @param _metadata 元数据信息，Kafka导入支持kafka_topic,kafka_partition,kafka_offset,kafka_timestamp
                     * 
                     */
                    void SetMetadata(const std::vector<std::string>& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取日志Key列表，RechargeType为full_regex_log、delimiter_log时必填
                     * @return Keys 日志Key列表，RechargeType为full_regex_log、delimiter_log时必填
                     * 
                     */
                    std::vector<std::string> GetKeys() const;

                    /**
                     * 设置日志Key列表，RechargeType为full_regex_log、delimiter_log时必填
                     * @param _keys 日志Key列表，RechargeType为full_regex_log、delimiter_log时必填
                     * 
                     */
                    void SetKeys(const std::vector<std::string>& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     * 
                     */
                    bool KeysHasBeenSet() const;

                    /**
                     * 获取json解析模式，开启首层数据解析
                     * @return ParseArray json解析模式，开启首层数据解析
                     * 
                     */
                    bool GetParseArray() const;

                    /**
                     * 设置json解析模式，开启首层数据解析
                     * @param _parseArray json解析模式，开启首层数据解析
                     * 
                     */
                    void SetParseArray(const bool& _parseArray);

                    /**
                     * 判断参数 ParseArray 是否已赋值
                     * @return ParseArray 是否已赋值
                     * 
                     */
                    bool ParseArrayHasBeenSet() const;

                    /**
                     * 获取分隔符解析模式-分隔符
当解析格式为分隔符提取时，该字段必填
                     * @return Delimiter 分隔符解析模式-分隔符
当解析格式为分隔符提取时，该字段必填
                     * 
                     */
                    std::string GetDelimiter() const;

                    /**
                     * 设置分隔符解析模式-分隔符
当解析格式为分隔符提取时，该字段必填
                     * @param _delimiter 分隔符解析模式-分隔符
当解析格式为分隔符提取时，该字段必填
                     * 
                     */
                    void SetDelimiter(const std::string& _delimiter);

                    /**
                     * 判断参数 Delimiter 是否已赋值
                     * @return Delimiter 是否已赋值
                     * 
                     */
                    bool DelimiterHasBeenSet() const;

                private:

                    /**
                     * 导入类型，支持json_log：json格式日志，minimalist_log: 单行全文，fullregex_log: 单行完全正则
                     */
                    std::string m_rechargeType;
                    bool m_rechargeTypeHasBeenSet;

                    /**
                     * 解析编码格式，0: UTF-8（默认值），1: GBK
                     */
                    uint64_t m_encodingFormat;
                    bool m_encodingFormatHasBeenSet;

                    /**
                     * 使用默认时间状态。true：开启后将使用系统当前时间或 Kafka 消息时间戳作为日志时间戳；false：关闭将使用日志中的时间字段作为日志时间戳。 默认：true
                     */
                    bool m_defaultTimeSwitch;
                    bool m_defaultTimeSwitchHasBeenSet;

                    /**
                     * 整条日志匹配规则，只有RechargeType为fullregex_log时有效
                     */
                    std::string m_logRegex;
                    bool m_logRegexHasBeenSet;

                    /**
                     * 解析失败日志是否上传，true表示上传，false表示不上传
                     */
                    bool m_unMatchLogSwitch;
                    bool m_unMatchLogSwitchHasBeenSet;

                    /**
                     * 解析失败日志的键名称
                     */
                    std::string m_unMatchLogKey;
                    bool m_unMatchLogKeyHasBeenSet;

                    /**
                     * 解析失败日志时间来源，0: 系统当前时间，1: Kafka消息时间戳
                     */
                    uint64_t m_unMatchLogTimeSrc;
                    bool m_unMatchLogTimeSrcHasBeenSet;

                    /**
                     * 默认时间来源，0: 系统当前时间，1: Kafka消息时间戳
                     */
                    uint64_t m_defaultTimeSrc;
                    bool m_defaultTimeSrcHasBeenSet;

                    /**
                     * 时间字段，日志中代表时间的字段名。

- 当DefaultTimeSwitch为false，且RechargeType数据提取模式为 `json_log` JSON-文件日志 或 `fullregex_log` 单行完全正则-文件日志时， TimeKey不能为空。
                     */
                    std::string m_timeKey;
                    bool m_timeKeyHasBeenSet;

                    /**
                     * 时间提取正则表达式。
- 当DefaultTimeSwitch为false，且RechargeType数据提取模式为 `minimalist_log` 单行全文-文件日志时， TimeRegex不能为空。
- 仅需输入日志中代表时间的字段的正则表达式即可；若匹配到多个字段，将使用第一个。
   例：日志原文为：message with time 2022-08-08 14:20:20，则您可以设置提取时间正则为\d\d\d\d-\d\d-\d\d \d\d:\d\d:\d\d

                     */
                    std::string m_timeRegex;
                    bool m_timeRegexHasBeenSet;

                    /**
                     * 时间字段格式。
- 当DefaultTimeSwitch为false时， TimeFormat不能为空。
                     */
                    std::string m_timeFormat;
                    bool m_timeFormatHasBeenSet;

                    /**
                     * 时间字段时区。
- 当DefaultTimeSwitch为false时， TimeZone不能为空。
- 时区格式规则
​前缀​：使用 GMT 或 UTC 作为时区基准
​偏移量​：
    - `-` 表示西时区（比基准时间晚）
    - `+` 表示东时区（比基准时间早）
    -  格式为 ±HH:MM（小时:分钟）

- 当前支持：
```
"GMT-12:00" 
"GMT-11:00" 
"GMT-10:00" 
"GMT-09:30" 
"GMT-09:00" 
"GMT-08:00" 
"GMT-07:00" 
"GMT-06:00" 
"GMT-05:00" 
"GMT-04:00" 
"GMT-03:30" 
"GMT-03:00" 
"GMT-02:00" 
"GMT-01:00" 
"GMT+00:00"
"GMT+01:00"
"GMT+02:00"
"GMT+03:30"
"GMT+04:00"
"GMT+04:30"
"GMT+05:00"
"GMT+05:30"
"GMT+05:45"
"GMT+06:00"
"GMT+06:30"
"GMT+07:00"
"GMT+08:00"
"GMT+09:00"
"GMT+09:30"
"GMT+10:00"
"GMT+10:30"
"GMT+11:00"
"GMT+11:30"
"GMT+12:00"
"GMT+12:45"
"GMT+13:00"
"GMT+14:00"
"UTC-11:00"
"UTC-10:00"
"UTC-09:00"
"UTC-08:00"
"UTC-12:00"
"UTC-07:00"
"UTC-06:00"
"UTC-05:00"
"UTC-04:30"
"UTC-04:00"
"UTC-03:30"
"UTC-03:00"
"UTC-02:00"
"UTC-01:00"
"UTC+00:00"
"UTC+01:00"
"UTC+02:00"
"UTC+03:00"
"UTC+03:30"
"UTC+04:00"
"UTC+04:30"
"UTC+05:00"
"UTC+05:45"
"UTC+06:00"
"UTC+06:30"
"UTC+07:00"
"UTC+08:00"
"UTC+09:00"
"UTC+09:30"
"UTC+10:00"
"UTC+11:00"
"UTC+12:00"
"UTC+13:00"
```
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * 元数据信息，Kafka导入支持kafka_topic,kafka_partition,kafka_offset,kafka_timestamp
                     */
                    std::vector<std::string> m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * 日志Key列表，RechargeType为full_regex_log、delimiter_log时必填
                     */
                    std::vector<std::string> m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * json解析模式，开启首层数据解析
                     */
                    bool m_parseArray;
                    bool m_parseArrayHasBeenSet;

                    /**
                     * 分隔符解析模式-分隔符
当解析格式为分隔符提取时，该字段必填
                     */
                    std::string m_delimiter;
                    bool m_delimiterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_LOGRECHARGERULEINFO_H_
