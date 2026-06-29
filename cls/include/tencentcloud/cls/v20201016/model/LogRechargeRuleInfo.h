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
#include <tencentcloud/cls/v20201016/model/JsonExpandInfo.h>


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
                     * 获取<p>导入类型，支持json_log：json格式日志，minimalist_log: 单行全文，fullregex_log: 单行完全正则</p>
                     * @return RechargeType <p>导入类型，支持json_log：json格式日志，minimalist_log: 单行全文，fullregex_log: 单行完全正则</p>
                     * 
                     */
                    std::string GetRechargeType() const;

                    /**
                     * 设置<p>导入类型，支持json_log：json格式日志，minimalist_log: 单行全文，fullregex_log: 单行完全正则</p>
                     * @param _rechargeType <p>导入类型，支持json_log：json格式日志，minimalist_log: 单行全文，fullregex_log: 单行完全正则</p>
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
                     * 获取<p>解析编码格式，0: UTF-8（默认值），1: GBK</p>
                     * @return EncodingFormat <p>解析编码格式，0: UTF-8（默认值），1: GBK</p>
                     * 
                     */
                    uint64_t GetEncodingFormat() const;

                    /**
                     * 设置<p>解析编码格式，0: UTF-8（默认值），1: GBK</p>
                     * @param _encodingFormat <p>解析编码格式，0: UTF-8（默认值），1: GBK</p>
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
                     * 获取<p>使用默认时间状态。true：开启后将使用系统当前时间或 Kafka 消息时间戳作为日志时间戳；false：关闭将使用日志中的时间字段作为日志时间戳。 默认：true</p>
                     * @return DefaultTimeSwitch <p>使用默认时间状态。true：开启后将使用系统当前时间或 Kafka 消息时间戳作为日志时间戳；false：关闭将使用日志中的时间字段作为日志时间戳。 默认：true</p>
                     * 
                     */
                    bool GetDefaultTimeSwitch() const;

                    /**
                     * 设置<p>使用默认时间状态。true：开启后将使用系统当前时间或 Kafka 消息时间戳作为日志时间戳；false：关闭将使用日志中的时间字段作为日志时间戳。 默认：true</p>
                     * @param _defaultTimeSwitch <p>使用默认时间状态。true：开启后将使用系统当前时间或 Kafka 消息时间戳作为日志时间戳；false：关闭将使用日志中的时间字段作为日志时间戳。 默认：true</p>
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
                     * 获取<p>整条日志匹配规则，只有RechargeType为fullregex_log时有效</p>
                     * @return LogRegex <p>整条日志匹配规则，只有RechargeType为fullregex_log时有效</p>
                     * 
                     */
                    std::string GetLogRegex() const;

                    /**
                     * 设置<p>整条日志匹配规则，只有RechargeType为fullregex_log时有效</p>
                     * @param _logRegex <p>整条日志匹配规则，只有RechargeType为fullregex_log时有效</p>
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
                     * 获取<p>解析失败日志是否上传，true表示上传，false表示不上传</p>
                     * @return UnMatchLogSwitch <p>解析失败日志是否上传，true表示上传，false表示不上传</p>
                     * 
                     */
                    bool GetUnMatchLogSwitch() const;

                    /**
                     * 设置<p>解析失败日志是否上传，true表示上传，false表示不上传</p>
                     * @param _unMatchLogSwitch <p>解析失败日志是否上传，true表示上传，false表示不上传</p>
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
                     * 获取<p>解析失败日志的键名称</p>
                     * @return UnMatchLogKey <p>解析失败日志的键名称</p>
                     * 
                     */
                    std::string GetUnMatchLogKey() const;

                    /**
                     * 设置<p>解析失败日志的键名称</p>
                     * @param _unMatchLogKey <p>解析失败日志的键名称</p>
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
                     * 获取<p>解析失败日志时间来源，0: 系统当前时间，1: Kafka消息时间戳</p>
                     * @return UnMatchLogTimeSrc <p>解析失败日志时间来源，0: 系统当前时间，1: Kafka消息时间戳</p>
                     * 
                     */
                    uint64_t GetUnMatchLogTimeSrc() const;

                    /**
                     * 设置<p>解析失败日志时间来源，0: 系统当前时间，1: Kafka消息时间戳</p>
                     * @param _unMatchLogTimeSrc <p>解析失败日志时间来源，0: 系统当前时间，1: Kafka消息时间戳</p>
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
                     * 获取<p>默认时间来源，0: 系统当前时间，1: Kafka消息时间戳</p>
                     * @return DefaultTimeSrc <p>默认时间来源，0: 系统当前时间，1: Kafka消息时间戳</p>
                     * 
                     */
                    uint64_t GetDefaultTimeSrc() const;

                    /**
                     * 设置<p>默认时间来源，0: 系统当前时间，1: Kafka消息时间戳</p>
                     * @param _defaultTimeSrc <p>默认时间来源，0: 系统当前时间，1: Kafka消息时间戳</p>
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
                     * 获取<p>时间字段，日志中代表时间的字段名。</p><ul><li>当DefaultTimeSwitch为false，且RechargeType数据提取模式为 <code>json_log</code> JSON-文件日志 或 <code>fullregex_log</code> 单行完全正则-文件日志时， TimeKey不能为空。</li></ul>
                     * @return TimeKey <p>时间字段，日志中代表时间的字段名。</p><ul><li>当DefaultTimeSwitch为false，且RechargeType数据提取模式为 <code>json_log</code> JSON-文件日志 或 <code>fullregex_log</code> 单行完全正则-文件日志时， TimeKey不能为空。</li></ul>
                     * 
                     */
                    std::string GetTimeKey() const;

                    /**
                     * 设置<p>时间字段，日志中代表时间的字段名。</p><ul><li>当DefaultTimeSwitch为false，且RechargeType数据提取模式为 <code>json_log</code> JSON-文件日志 或 <code>fullregex_log</code> 单行完全正则-文件日志时， TimeKey不能为空。</li></ul>
                     * @param _timeKey <p>时间字段，日志中代表时间的字段名。</p><ul><li>当DefaultTimeSwitch为false，且RechargeType数据提取模式为 <code>json_log</code> JSON-文件日志 或 <code>fullregex_log</code> 单行完全正则-文件日志时， TimeKey不能为空。</li></ul>
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
                     * 获取<p>时间提取正则表达式。</p><ul><li>当DefaultTimeSwitch为false，且RechargeType数据提取模式为 <code>minimalist_log</code> 单行全文-文件日志时， TimeRegex不能为空。</li><li>仅需输入日志中代表时间的字段的正则表达式即可；若匹配到多个字段，将使用第一个。<br> 例：日志原文为：message with time 2022-08-08 14:20:20，则您可以设置提取时间正则为\d\d\d\d-\d\d-\d\d \d\d:\d\d:\d\d</li></ul>
                     * @return TimeRegex <p>时间提取正则表达式。</p><ul><li>当DefaultTimeSwitch为false，且RechargeType数据提取模式为 <code>minimalist_log</code> 单行全文-文件日志时， TimeRegex不能为空。</li><li>仅需输入日志中代表时间的字段的正则表达式即可；若匹配到多个字段，将使用第一个。<br> 例：日志原文为：message with time 2022-08-08 14:20:20，则您可以设置提取时间正则为\d\d\d\d-\d\d-\d\d \d\d:\d\d:\d\d</li></ul>
                     * 
                     */
                    std::string GetTimeRegex() const;

                    /**
                     * 设置<p>时间提取正则表达式。</p><ul><li>当DefaultTimeSwitch为false，且RechargeType数据提取模式为 <code>minimalist_log</code> 单行全文-文件日志时， TimeRegex不能为空。</li><li>仅需输入日志中代表时间的字段的正则表达式即可；若匹配到多个字段，将使用第一个。<br> 例：日志原文为：message with time 2022-08-08 14:20:20，则您可以设置提取时间正则为\d\d\d\d-\d\d-\d\d \d\d:\d\d:\d\d</li></ul>
                     * @param _timeRegex <p>时间提取正则表达式。</p><ul><li>当DefaultTimeSwitch为false，且RechargeType数据提取模式为 <code>minimalist_log</code> 单行全文-文件日志时， TimeRegex不能为空。</li><li>仅需输入日志中代表时间的字段的正则表达式即可；若匹配到多个字段，将使用第一个。<br> 例：日志原文为：message with time 2022-08-08 14:20:20，则您可以设置提取时间正则为\d\d\d\d-\d\d-\d\d \d\d:\d\d:\d\d</li></ul>
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
                     * 获取<p>时间字段格式。</p><ul><li>当DefaultTimeSwitch为false时， TimeFormat不能为空。</li></ul>
                     * @return TimeFormat <p>时间字段格式。</p><ul><li>当DefaultTimeSwitch为false时， TimeFormat不能为空。</li></ul>
                     * 
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置<p>时间字段格式。</p><ul><li>当DefaultTimeSwitch为false时， TimeFormat不能为空。</li></ul>
                     * @param _timeFormat <p>时间字段格式。</p><ul><li>当DefaultTimeSwitch为false时， TimeFormat不能为空。</li></ul>
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
                     * 获取<p>时间字段时区。</p><ul><li><p>当DefaultTimeSwitch为false时， TimeZone不能为空。</p></li><li><p>时区格式规则<br>前缀：使用 GMT 或 UTC 作为时区基准<br>偏移量：</p><ul><li><code>-</code> 表示西时区（比基准时间晚）</li><li><code>+</code> 表示东时区（比基准时间早）</li><li>格式为 ±HH:MM（小时:分钟）</li></ul></li><li><p>当前支持：<br><pre><code>&quot;GMT-12:00&quot; &quot;GMT-11:00&quot; &quot;GMT-10:00&quot; &quot;GMT-09:30&quot; &quot;GMT-09:00&quot; &quot;GMT-08:00&quot; &quot;GMT-07:00&quot; &quot;GMT-06:00&quot; &quot;GMT-05:00&quot; &quot;GMT-04:00&quot; &quot;GMT-03:30&quot; &quot;GMT-03:00&quot; &quot;GMT-02:00&quot; &quot;GMT-01:00&quot; &quot;GMT+00:00&quot;&quot;GMT+01:00&quot;&quot;GMT+02:00&quot;&quot;GMT+03:30&quot;&quot;GMT+04:00&quot;&quot;GMT+04:30&quot;&quot;GMT+05:00&quot;&quot;GMT+05:30&quot;&quot;GMT+05:45&quot;&quot;GMT+06:00&quot;&quot;GMT+06:30&quot;&quot;GMT+07:00&quot;&quot;GMT+08:00&quot;&quot;GMT+09:00&quot;&quot;GMT+09:30&quot;&quot;GMT+10:00&quot;&quot;GMT+10:30&quot;&quot;GMT+11:00&quot;&quot;GMT+11:30&quot;&quot;GMT+12:00&quot;&quot;GMT+12:45&quot;&quot;GMT+13:00&quot;&quot;GMT+14:00&quot;&quot;UTC-11:00&quot;&quot;UTC-10:00&quot;&quot;UTC-09:00&quot;&quot;UTC-08:00&quot;&quot;UTC-12:00&quot;&quot;UTC-07:00&quot;&quot;UTC-06:00&quot;&quot;UTC-05:00&quot;&quot;UTC-04:30&quot;&quot;UTC-04:00&quot;&quot;UTC-03:30&quot;&quot;UTC-03:00&quot;&quot;UTC-02:00&quot;&quot;UTC-01:00&quot;&quot;UTC+00:00&quot;&quot;UTC+01:00&quot;&quot;UTC+02:00&quot;&quot;UTC+03:00&quot;&quot;UTC+03:30&quot;&quot;UTC+04:00&quot;&quot;UTC+04:30&quot;&quot;UTC+05:00&quot;&quot;UTC+05:45&quot;&quot;UTC+06:00&quot;&quot;UTC+06:30&quot;&quot;UTC+07:00&quot;&quot;UTC+08:00&quot;&quot;UTC+09:00&quot;&quot;UTC+09:30&quot;&quot;UTC+10:00&quot;&quot;UTC+11:00&quot;&quot;UTC+12:00&quot;&quot;UTC+13:00&quot;</code></pre></p></li></ul>
                     * @return TimeZone <p>时间字段时区。</p><ul><li><p>当DefaultTimeSwitch为false时， TimeZone不能为空。</p></li><li><p>时区格式规则<br>前缀：使用 GMT 或 UTC 作为时区基准<br>偏移量：</p><ul><li><code>-</code> 表示西时区（比基准时间晚）</li><li><code>+</code> 表示东时区（比基准时间早）</li><li>格式为 ±HH:MM（小时:分钟）</li></ul></li><li><p>当前支持：<br><pre><code>&quot;GMT-12:00&quot; &quot;GMT-11:00&quot; &quot;GMT-10:00&quot; &quot;GMT-09:30&quot; &quot;GMT-09:00&quot; &quot;GMT-08:00&quot; &quot;GMT-07:00&quot; &quot;GMT-06:00&quot; &quot;GMT-05:00&quot; &quot;GMT-04:00&quot; &quot;GMT-03:30&quot; &quot;GMT-03:00&quot; &quot;GMT-02:00&quot; &quot;GMT-01:00&quot; &quot;GMT+00:00&quot;&quot;GMT+01:00&quot;&quot;GMT+02:00&quot;&quot;GMT+03:30&quot;&quot;GMT+04:00&quot;&quot;GMT+04:30&quot;&quot;GMT+05:00&quot;&quot;GMT+05:30&quot;&quot;GMT+05:45&quot;&quot;GMT+06:00&quot;&quot;GMT+06:30&quot;&quot;GMT+07:00&quot;&quot;GMT+08:00&quot;&quot;GMT+09:00&quot;&quot;GMT+09:30&quot;&quot;GMT+10:00&quot;&quot;GMT+10:30&quot;&quot;GMT+11:00&quot;&quot;GMT+11:30&quot;&quot;GMT+12:00&quot;&quot;GMT+12:45&quot;&quot;GMT+13:00&quot;&quot;GMT+14:00&quot;&quot;UTC-11:00&quot;&quot;UTC-10:00&quot;&quot;UTC-09:00&quot;&quot;UTC-08:00&quot;&quot;UTC-12:00&quot;&quot;UTC-07:00&quot;&quot;UTC-06:00&quot;&quot;UTC-05:00&quot;&quot;UTC-04:30&quot;&quot;UTC-04:00&quot;&quot;UTC-03:30&quot;&quot;UTC-03:00&quot;&quot;UTC-02:00&quot;&quot;UTC-01:00&quot;&quot;UTC+00:00&quot;&quot;UTC+01:00&quot;&quot;UTC+02:00&quot;&quot;UTC+03:00&quot;&quot;UTC+03:30&quot;&quot;UTC+04:00&quot;&quot;UTC+04:30&quot;&quot;UTC+05:00&quot;&quot;UTC+05:45&quot;&quot;UTC+06:00&quot;&quot;UTC+06:30&quot;&quot;UTC+07:00&quot;&quot;UTC+08:00&quot;&quot;UTC+09:00&quot;&quot;UTC+09:30&quot;&quot;UTC+10:00&quot;&quot;UTC+11:00&quot;&quot;UTC+12:00&quot;&quot;UTC+13:00&quot;</code></pre></p></li></ul>
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置<p>时间字段时区。</p><ul><li><p>当DefaultTimeSwitch为false时， TimeZone不能为空。</p></li><li><p>时区格式规则<br>前缀：使用 GMT 或 UTC 作为时区基准<br>偏移量：</p><ul><li><code>-</code> 表示西时区（比基准时间晚）</li><li><code>+</code> 表示东时区（比基准时间早）</li><li>格式为 ±HH:MM（小时:分钟）</li></ul></li><li><p>当前支持：<br><pre><code>&quot;GMT-12:00&quot; &quot;GMT-11:00&quot; &quot;GMT-10:00&quot; &quot;GMT-09:30&quot; &quot;GMT-09:00&quot; &quot;GMT-08:00&quot; &quot;GMT-07:00&quot; &quot;GMT-06:00&quot; &quot;GMT-05:00&quot; &quot;GMT-04:00&quot; &quot;GMT-03:30&quot; &quot;GMT-03:00&quot; &quot;GMT-02:00&quot; &quot;GMT-01:00&quot; &quot;GMT+00:00&quot;&quot;GMT+01:00&quot;&quot;GMT+02:00&quot;&quot;GMT+03:30&quot;&quot;GMT+04:00&quot;&quot;GMT+04:30&quot;&quot;GMT+05:00&quot;&quot;GMT+05:30&quot;&quot;GMT+05:45&quot;&quot;GMT+06:00&quot;&quot;GMT+06:30&quot;&quot;GMT+07:00&quot;&quot;GMT+08:00&quot;&quot;GMT+09:00&quot;&quot;GMT+09:30&quot;&quot;GMT+10:00&quot;&quot;GMT+10:30&quot;&quot;GMT+11:00&quot;&quot;GMT+11:30&quot;&quot;GMT+12:00&quot;&quot;GMT+12:45&quot;&quot;GMT+13:00&quot;&quot;GMT+14:00&quot;&quot;UTC-11:00&quot;&quot;UTC-10:00&quot;&quot;UTC-09:00&quot;&quot;UTC-08:00&quot;&quot;UTC-12:00&quot;&quot;UTC-07:00&quot;&quot;UTC-06:00&quot;&quot;UTC-05:00&quot;&quot;UTC-04:30&quot;&quot;UTC-04:00&quot;&quot;UTC-03:30&quot;&quot;UTC-03:00&quot;&quot;UTC-02:00&quot;&quot;UTC-01:00&quot;&quot;UTC+00:00&quot;&quot;UTC+01:00&quot;&quot;UTC+02:00&quot;&quot;UTC+03:00&quot;&quot;UTC+03:30&quot;&quot;UTC+04:00&quot;&quot;UTC+04:30&quot;&quot;UTC+05:00&quot;&quot;UTC+05:45&quot;&quot;UTC+06:00&quot;&quot;UTC+06:30&quot;&quot;UTC+07:00&quot;&quot;UTC+08:00&quot;&quot;UTC+09:00&quot;&quot;UTC+09:30&quot;&quot;UTC+10:00&quot;&quot;UTC+11:00&quot;&quot;UTC+12:00&quot;&quot;UTC+13:00&quot;</code></pre></p></li></ul>
                     * @param _timeZone <p>时间字段时区。</p><ul><li><p>当DefaultTimeSwitch为false时， TimeZone不能为空。</p></li><li><p>时区格式规则<br>前缀：使用 GMT 或 UTC 作为时区基准<br>偏移量：</p><ul><li><code>-</code> 表示西时区（比基准时间晚）</li><li><code>+</code> 表示东时区（比基准时间早）</li><li>格式为 ±HH:MM（小时:分钟）</li></ul></li><li><p>当前支持：<br><pre><code>&quot;GMT-12:00&quot; &quot;GMT-11:00&quot; &quot;GMT-10:00&quot; &quot;GMT-09:30&quot; &quot;GMT-09:00&quot; &quot;GMT-08:00&quot; &quot;GMT-07:00&quot; &quot;GMT-06:00&quot; &quot;GMT-05:00&quot; &quot;GMT-04:00&quot; &quot;GMT-03:30&quot; &quot;GMT-03:00&quot; &quot;GMT-02:00&quot; &quot;GMT-01:00&quot; &quot;GMT+00:00&quot;&quot;GMT+01:00&quot;&quot;GMT+02:00&quot;&quot;GMT+03:30&quot;&quot;GMT+04:00&quot;&quot;GMT+04:30&quot;&quot;GMT+05:00&quot;&quot;GMT+05:30&quot;&quot;GMT+05:45&quot;&quot;GMT+06:00&quot;&quot;GMT+06:30&quot;&quot;GMT+07:00&quot;&quot;GMT+08:00&quot;&quot;GMT+09:00&quot;&quot;GMT+09:30&quot;&quot;GMT+10:00&quot;&quot;GMT+10:30&quot;&quot;GMT+11:00&quot;&quot;GMT+11:30&quot;&quot;GMT+12:00&quot;&quot;GMT+12:45&quot;&quot;GMT+13:00&quot;&quot;GMT+14:00&quot;&quot;UTC-11:00&quot;&quot;UTC-10:00&quot;&quot;UTC-09:00&quot;&quot;UTC-08:00&quot;&quot;UTC-12:00&quot;&quot;UTC-07:00&quot;&quot;UTC-06:00&quot;&quot;UTC-05:00&quot;&quot;UTC-04:30&quot;&quot;UTC-04:00&quot;&quot;UTC-03:30&quot;&quot;UTC-03:00&quot;&quot;UTC-02:00&quot;&quot;UTC-01:00&quot;&quot;UTC+00:00&quot;&quot;UTC+01:00&quot;&quot;UTC+02:00&quot;&quot;UTC+03:00&quot;&quot;UTC+03:30&quot;&quot;UTC+04:00&quot;&quot;UTC+04:30&quot;&quot;UTC+05:00&quot;&quot;UTC+05:45&quot;&quot;UTC+06:00&quot;&quot;UTC+06:30&quot;&quot;UTC+07:00&quot;&quot;UTC+08:00&quot;&quot;UTC+09:00&quot;&quot;UTC+09:30&quot;&quot;UTC+10:00&quot;&quot;UTC+11:00&quot;&quot;UTC+12:00&quot;&quot;UTC+13:00&quot;</code></pre></p></li></ul>
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
                     * 获取<p>元数据信息，Kafka导入支持kafka_topic,kafka_partition,kafka_offset,kafka_timestamp</p>
                     * @return Metadata <p>元数据信息，Kafka导入支持kafka_topic,kafka_partition,kafka_offset,kafka_timestamp</p>
                     * 
                     */
                    std::vector<std::string> GetMetadata() const;

                    /**
                     * 设置<p>元数据信息，Kafka导入支持kafka_topic,kafka_partition,kafka_offset,kafka_timestamp</p>
                     * @param _metadata <p>元数据信息，Kafka导入支持kafka_topic,kafka_partition,kafka_offset,kafka_timestamp</p>
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
                     * 获取<p>日志Key列表，RechargeType为full_regex_log、delimiter_log时必填</p>
                     * @return Keys <p>日志Key列表，RechargeType为full_regex_log、delimiter_log时必填</p>
                     * 
                     */
                    std::vector<std::string> GetKeys() const;

                    /**
                     * 设置<p>日志Key列表，RechargeType为full_regex_log、delimiter_log时必填</p>
                     * @param _keys <p>日志Key列表，RechargeType为full_regex_log、delimiter_log时必填</p>
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
                     * 获取<p>json解析模式，开启首层数据解析</p>
                     * @return ParseArray <p>json解析模式，开启首层数据解析</p>
                     * 
                     */
                    bool GetParseArray() const;

                    /**
                     * 设置<p>json解析模式，开启首层数据解析</p>
                     * @param _parseArray <p>json解析模式，开启首层数据解析</p>
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
                     * 获取<p>分隔符解析模式-分隔符<br>当解析格式为分隔符提取时，该字段必填</p>
                     * @return Delimiter <p>分隔符解析模式-分隔符<br>当解析格式为分隔符提取时，该字段必填</p>
                     * 
                     */
                    std::string GetDelimiter() const;

                    /**
                     * 设置<p>分隔符解析模式-分隔符<br>当解析格式为分隔符提取时，该字段必填</p>
                     * @param _delimiter <p>分隔符解析模式-分隔符<br>当解析格式为分隔符提取时，该字段必填</p>
                     * 
                     */
                    void SetDelimiter(const std::string& _delimiter);

                    /**
                     * 判断参数 Delimiter 是否已赋值
                     * @return Delimiter 是否已赋值
                     * 
                     */
                    bool DelimiterHasBeenSet() const;

                    /**
                     * 获取<p>JSON嵌套展开配置。仅RechargeType为json_log时生效，不传表示不开启。</p>
                     * @return JsonExpand <p>JSON嵌套展开配置。仅RechargeType为json_log时生效，不传表示不开启。</p>
                     * 
                     */
                    JsonExpandInfo GetJsonExpand() const;

                    /**
                     * 设置<p>JSON嵌套展开配置。仅RechargeType为json_log时生效，不传表示不开启。</p>
                     * @param _jsonExpand <p>JSON嵌套展开配置。仅RechargeType为json_log时生效，不传表示不开启。</p>
                     * 
                     */
                    void SetJsonExpand(const JsonExpandInfo& _jsonExpand);

                    /**
                     * 判断参数 JsonExpand 是否已赋值
                     * @return JsonExpand 是否已赋值
                     * 
                     */
                    bool JsonExpandHasBeenSet() const;

                private:

                    /**
                     * <p>导入类型，支持json_log：json格式日志，minimalist_log: 单行全文，fullregex_log: 单行完全正则</p>
                     */
                    std::string m_rechargeType;
                    bool m_rechargeTypeHasBeenSet;

                    /**
                     * <p>解析编码格式，0: UTF-8（默认值），1: GBK</p>
                     */
                    uint64_t m_encodingFormat;
                    bool m_encodingFormatHasBeenSet;

                    /**
                     * <p>使用默认时间状态。true：开启后将使用系统当前时间或 Kafka 消息时间戳作为日志时间戳；false：关闭将使用日志中的时间字段作为日志时间戳。 默认：true</p>
                     */
                    bool m_defaultTimeSwitch;
                    bool m_defaultTimeSwitchHasBeenSet;

                    /**
                     * <p>整条日志匹配规则，只有RechargeType为fullregex_log时有效</p>
                     */
                    std::string m_logRegex;
                    bool m_logRegexHasBeenSet;

                    /**
                     * <p>解析失败日志是否上传，true表示上传，false表示不上传</p>
                     */
                    bool m_unMatchLogSwitch;
                    bool m_unMatchLogSwitchHasBeenSet;

                    /**
                     * <p>解析失败日志的键名称</p>
                     */
                    std::string m_unMatchLogKey;
                    bool m_unMatchLogKeyHasBeenSet;

                    /**
                     * <p>解析失败日志时间来源，0: 系统当前时间，1: Kafka消息时间戳</p>
                     */
                    uint64_t m_unMatchLogTimeSrc;
                    bool m_unMatchLogTimeSrcHasBeenSet;

                    /**
                     * <p>默认时间来源，0: 系统当前时间，1: Kafka消息时间戳</p>
                     */
                    uint64_t m_defaultTimeSrc;
                    bool m_defaultTimeSrcHasBeenSet;

                    /**
                     * <p>时间字段，日志中代表时间的字段名。</p><ul><li>当DefaultTimeSwitch为false，且RechargeType数据提取模式为 <code>json_log</code> JSON-文件日志 或 <code>fullregex_log</code> 单行完全正则-文件日志时， TimeKey不能为空。</li></ul>
                     */
                    std::string m_timeKey;
                    bool m_timeKeyHasBeenSet;

                    /**
                     * <p>时间提取正则表达式。</p><ul><li>当DefaultTimeSwitch为false，且RechargeType数据提取模式为 <code>minimalist_log</code> 单行全文-文件日志时， TimeRegex不能为空。</li><li>仅需输入日志中代表时间的字段的正则表达式即可；若匹配到多个字段，将使用第一个。<br> 例：日志原文为：message with time 2022-08-08 14:20:20，则您可以设置提取时间正则为\d\d\d\d-\d\d-\d\d \d\d:\d\d:\d\d</li></ul>
                     */
                    std::string m_timeRegex;
                    bool m_timeRegexHasBeenSet;

                    /**
                     * <p>时间字段格式。</p><ul><li>当DefaultTimeSwitch为false时， TimeFormat不能为空。</li></ul>
                     */
                    std::string m_timeFormat;
                    bool m_timeFormatHasBeenSet;

                    /**
                     * <p>时间字段时区。</p><ul><li><p>当DefaultTimeSwitch为false时， TimeZone不能为空。</p></li><li><p>时区格式规则<br>前缀：使用 GMT 或 UTC 作为时区基准<br>偏移量：</p><ul><li><code>-</code> 表示西时区（比基准时间晚）</li><li><code>+</code> 表示东时区（比基准时间早）</li><li>格式为 ±HH:MM（小时:分钟）</li></ul></li><li><p>当前支持：<br><pre><code>&quot;GMT-12:00&quot; &quot;GMT-11:00&quot; &quot;GMT-10:00&quot; &quot;GMT-09:30&quot; &quot;GMT-09:00&quot; &quot;GMT-08:00&quot; &quot;GMT-07:00&quot; &quot;GMT-06:00&quot; &quot;GMT-05:00&quot; &quot;GMT-04:00&quot; &quot;GMT-03:30&quot; &quot;GMT-03:00&quot; &quot;GMT-02:00&quot; &quot;GMT-01:00&quot; &quot;GMT+00:00&quot;&quot;GMT+01:00&quot;&quot;GMT+02:00&quot;&quot;GMT+03:30&quot;&quot;GMT+04:00&quot;&quot;GMT+04:30&quot;&quot;GMT+05:00&quot;&quot;GMT+05:30&quot;&quot;GMT+05:45&quot;&quot;GMT+06:00&quot;&quot;GMT+06:30&quot;&quot;GMT+07:00&quot;&quot;GMT+08:00&quot;&quot;GMT+09:00&quot;&quot;GMT+09:30&quot;&quot;GMT+10:00&quot;&quot;GMT+10:30&quot;&quot;GMT+11:00&quot;&quot;GMT+11:30&quot;&quot;GMT+12:00&quot;&quot;GMT+12:45&quot;&quot;GMT+13:00&quot;&quot;GMT+14:00&quot;&quot;UTC-11:00&quot;&quot;UTC-10:00&quot;&quot;UTC-09:00&quot;&quot;UTC-08:00&quot;&quot;UTC-12:00&quot;&quot;UTC-07:00&quot;&quot;UTC-06:00&quot;&quot;UTC-05:00&quot;&quot;UTC-04:30&quot;&quot;UTC-04:00&quot;&quot;UTC-03:30&quot;&quot;UTC-03:00&quot;&quot;UTC-02:00&quot;&quot;UTC-01:00&quot;&quot;UTC+00:00&quot;&quot;UTC+01:00&quot;&quot;UTC+02:00&quot;&quot;UTC+03:00&quot;&quot;UTC+03:30&quot;&quot;UTC+04:00&quot;&quot;UTC+04:30&quot;&quot;UTC+05:00&quot;&quot;UTC+05:45&quot;&quot;UTC+06:00&quot;&quot;UTC+06:30&quot;&quot;UTC+07:00&quot;&quot;UTC+08:00&quot;&quot;UTC+09:00&quot;&quot;UTC+09:30&quot;&quot;UTC+10:00&quot;&quot;UTC+11:00&quot;&quot;UTC+12:00&quot;&quot;UTC+13:00&quot;</code></pre></p></li></ul>
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * <p>元数据信息，Kafka导入支持kafka_topic,kafka_partition,kafka_offset,kafka_timestamp</p>
                     */
                    std::vector<std::string> m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * <p>日志Key列表，RechargeType为full_regex_log、delimiter_log时必填</p>
                     */
                    std::vector<std::string> m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * <p>json解析模式，开启首层数据解析</p>
                     */
                    bool m_parseArray;
                    bool m_parseArrayHasBeenSet;

                    /**
                     * <p>分隔符解析模式-分隔符<br>当解析格式为分隔符提取时，该字段必填</p>
                     */
                    std::string m_delimiter;
                    bool m_delimiterHasBeenSet;

                    /**
                     * <p>JSON嵌套展开配置。仅RechargeType为json_log时生效，不传表示不开启。</p>
                     */
                    JsonExpandInfo m_jsonExpand;
                    bool m_jsonExpandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_LOGRECHARGERULEINFO_H_
