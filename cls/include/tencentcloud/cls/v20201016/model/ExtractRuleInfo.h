/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_EXTRACTRULEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_EXTRACTRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/KeyRegexInfo.h>
#include <tencentcloud/cls/v20201016/model/MetaTagInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 日志提取规则
                */
                class ExtractRuleInfo : public AbstractModel
                {
                public:
                    ExtractRuleInfo();
                    ~ExtractRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间字段的key名字，time_key和time_format必须成对出现
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeKey 时间字段的key名字，time_key和time_format必须成对出现
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTimeKey() const;

                    /**
                     * 设置时间字段的key名字，time_key和time_format必须成对出现
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TimeKey 时间字段的key名字，time_key和time_format必须成对出现
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTimeKey(const std::string& _timeKey);

                    /**
                     * 判断参数 TimeKey 是否已赋值
                     * @return TimeKey 是否已赋值
                     */
                    bool TimeKeyHasBeenSet() const;

                    /**
                     * 获取时间字段的格式，参考c语言的strftime函数对于时间的格式说明输出参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeFormat 时间字段的格式，参考c语言的strftime函数对于时间的格式说明输出参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置时间字段的格式，参考c语言的strftime函数对于时间的格式说明输出参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TimeFormat 时间字段的格式，参考c语言的strftime函数对于时间的格式说明输出参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTimeFormat(const std::string& _timeFormat);

                    /**
                     * 判断参数 TimeFormat 是否已赋值
                     * @return TimeFormat 是否已赋值
                     */
                    bool TimeFormatHasBeenSet() const;

                    /**
                     * 获取分隔符类型日志的分隔符，只有log_type为delimiter_log时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Delimiter 分隔符类型日志的分隔符，只有log_type为delimiter_log时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDelimiter() const;

                    /**
                     * 设置分隔符类型日志的分隔符，只有log_type为delimiter_log时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Delimiter 分隔符类型日志的分隔符，只有log_type为delimiter_log时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDelimiter(const std::string& _delimiter);

                    /**
                     * 判断参数 Delimiter 是否已赋值
                     * @return Delimiter 是否已赋值
                     */
                    bool DelimiterHasBeenSet() const;

                    /**
                     * 获取整条日志匹配规则，只有log_type为fullregex_log时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogRegex 整条日志匹配规则，只有log_type为fullregex_log时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLogRegex() const;

                    /**
                     * 设置整条日志匹配规则，只有log_type为fullregex_log时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LogRegex 整条日志匹配规则，只有log_type为fullregex_log时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLogRegex(const std::string& _logRegex);

                    /**
                     * 判断参数 LogRegex 是否已赋值
                     * @return LogRegex 是否已赋值
                     */
                    bool LogRegexHasBeenSet() const;

                    /**
                     * 获取行首匹配规则，只有log_type为multiline_log或fullregex_log时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BeginRegex 行首匹配规则，只有log_type为multiline_log或fullregex_log时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBeginRegex() const;

                    /**
                     * 设置行首匹配规则，只有log_type为multiline_log或fullregex_log时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BeginRegex 行首匹配规则，只有log_type为multiline_log或fullregex_log时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBeginRegex(const std::string& _beginRegex);

                    /**
                     * 判断参数 BeginRegex 是否已赋值
                     * @return BeginRegex 是否已赋值
                     */
                    bool BeginRegexHasBeenSet() const;

                    /**
                     * 获取取的每个字段的key名字，为空的key代表丢弃这个字段，只有log_type为delimiter_log时有效，json_log的日志使用json本身的key
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Keys 取的每个字段的key名字，为空的key代表丢弃这个字段，只有log_type为delimiter_log时有效，json_log的日志使用json本身的key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetKeys() const;

                    /**
                     * 设置取的每个字段的key名字，为空的key代表丢弃这个字段，只有log_type为delimiter_log时有效，json_log的日志使用json本身的key
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Keys 取的每个字段的key名字，为空的key代表丢弃这个字段，只有log_type为delimiter_log时有效，json_log的日志使用json本身的key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetKeys(const std::vector<std::string>& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     */
                    bool KeysHasBeenSet() const;

                    /**
                     * 获取需要过滤日志的key，及其对应的regex
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FilterKeyRegex 需要过滤日志的key，及其对应的regex
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KeyRegexInfo> GetFilterKeyRegex() const;

                    /**
                     * 设置需要过滤日志的key，及其对应的regex
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FilterKeyRegex 需要过滤日志的key，及其对应的regex
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFilterKeyRegex(const std::vector<KeyRegexInfo>& _filterKeyRegex);

                    /**
                     * 判断参数 FilterKeyRegex 是否已赋值
                     * @return FilterKeyRegex 是否已赋值
                     */
                    bool FilterKeyRegexHasBeenSet() const;

                    /**
                     * 获取解析失败日志是否上传，true表示上传，false表示不上传
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnMatchUpLoadSwitch 解析失败日志是否上传，true表示上传，false表示不上传
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetUnMatchUpLoadSwitch() const;

                    /**
                     * 设置解析失败日志是否上传，true表示上传，false表示不上传
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UnMatchUpLoadSwitch 解析失败日志是否上传，true表示上传，false表示不上传
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUnMatchUpLoadSwitch(const bool& _unMatchUpLoadSwitch);

                    /**
                     * 判断参数 UnMatchUpLoadSwitch 是否已赋值
                     * @return UnMatchUpLoadSwitch 是否已赋值
                     */
                    bool UnMatchUpLoadSwitchHasBeenSet() const;

                    /**
                     * 获取失败日志的key
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnMatchLogKey 失败日志的key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUnMatchLogKey() const;

                    /**
                     * 设置失败日志的key
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UnMatchLogKey 失败日志的key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUnMatchLogKey(const std::string& _unMatchLogKey);

                    /**
                     * 判断参数 UnMatchLogKey 是否已赋值
                     * @return UnMatchLogKey 是否已赋值
                     */
                    bool UnMatchLogKeyHasBeenSet() const;

                    /**
                     * 获取增量采集模式下的回溯数据量，默认-1（全量采集）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Backtracking 增量采集模式下的回溯数据量，默认-1（全量采集）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetBacktracking() const;

                    /**
                     * 设置增量采集模式下的回溯数据量，默认-1（全量采集）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Backtracking 增量采集模式下的回溯数据量，默认-1（全量采集）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBacktracking(const int64_t& _backtracking);

                    /**
                     * 判断参数 Backtracking 是否已赋值
                     * @return Backtracking 是否已赋值
                     */
                    bool BacktrackingHasBeenSet() const;

                    /**
                     * 获取是否为Gbk编码.   0: 否, 1: 是
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsGBK 是否为Gbk编码.   0: 否, 1: 是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetIsGBK() const;

                    /**
                     * 设置是否为Gbk编码.   0: 否, 1: 是
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsGBK 是否为Gbk编码.   0: 否, 1: 是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsGBK(const int64_t& _isGBK);

                    /**
                     * 判断参数 IsGBK 是否已赋值
                     * @return IsGBK 是否已赋值
                     */
                    bool IsGBKHasBeenSet() const;

                    /**
                     * 获取是否为标准json.   0: 否, 1: 是
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JsonStandard 是否为标准json.   0: 否, 1: 是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetJsonStandard() const;

                    /**
                     * 设置是否为标准json.   0: 否, 1: 是
注意：此字段可能返回 null，表示取不到有效值。
                     * @param JsonStandard 是否为标准json.   0: 否, 1: 是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetJsonStandard(const int64_t& _jsonStandard);

                    /**
                     * 判断参数 JsonStandard 是否已赋值
                     * @return JsonStandard 是否已赋值
                     */
                    bool JsonStandardHasBeenSet() const;

                    /**
                     * 获取syslog传输协议，取值为tcp或者udp。
该字段适用于：创建采集规则配置、修改采集规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protocol syslog传输协议，取值为tcp或者udp。
该字段适用于：创建采集规则配置、修改采集规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置syslog传输协议，取值为tcp或者udp。
该字段适用于：创建采集规则配置、修改采集规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Protocol syslog传输协议，取值为tcp或者udp。
该字段适用于：创建采集规则配置、修改采集规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取syslog系统日志采集指定采集器监听的地址和端口 ，形式：[ip]:[port]。举例：127.0.0.1:9000
该字段适用于：创建采集规则配置、修改采集规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Address syslog系统日志采集指定采集器监听的地址和端口 ，形式：[ip]:[port]。举例：127.0.0.1:9000
该字段适用于：创建采集规则配置、修改采集规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置syslog系统日志采集指定采集器监听的地址和端口 ，形式：[ip]:[port]。举例：127.0.0.1:9000
该字段适用于：创建采集规则配置、修改采集规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Address syslog系统日志采集指定采集器监听的地址和端口 ，形式：[ip]:[port]。举例：127.0.0.1:9000
该字段适用于：创建采集规则配置、修改采集规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取rfc3164：指定系统日志采集使用RFC3164协议解析日志。
rfc5424：指定系统日志采集使用RFC5424协议解析日志。
auto：自动匹配rfc3164或者rfc5424其中一种协议
该字段适用于：创建采集规则配置、修改采集规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParseProtocol rfc3164：指定系统日志采集使用RFC3164协议解析日志。
rfc5424：指定系统日志采集使用RFC5424协议解析日志。
auto：自动匹配rfc3164或者rfc5424其中一种协议
该字段适用于：创建采集规则配置、修改采集规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetParseProtocol() const;

                    /**
                     * 设置rfc3164：指定系统日志采集使用RFC3164协议解析日志。
rfc5424：指定系统日志采集使用RFC5424协议解析日志。
auto：自动匹配rfc3164或者rfc5424其中一种协议
该字段适用于：创建采集规则配置、修改采集规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ParseProtocol rfc3164：指定系统日志采集使用RFC3164协议解析日志。
rfc5424：指定系统日志采集使用RFC5424协议解析日志。
auto：自动匹配rfc3164或者rfc5424其中一种协议
该字段适用于：创建采集规则配置、修改采集规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetParseProtocol(const std::string& _parseProtocol);

                    /**
                     * 判断参数 ParseProtocol 是否已赋值
                     * @return ParseProtocol 是否已赋值
                     */
                    bool ParseProtocolHasBeenSet() const;

                    /**
                     * 获取元数据类型，0: 不使用元数据信息，1:使用机器组元数据，2:使用用户自定义元数据，3:使用采集配置路径，
                     * @return MetadataType 元数据类型，0: 不使用元数据信息，1:使用机器组元数据，2:使用用户自定义元数据，3:使用采集配置路径，
                     */
                    int64_t GetMetadataType() const;

                    /**
                     * 设置元数据类型，0: 不使用元数据信息，1:使用机器组元数据，2:使用用户自定义元数据，3:使用采集配置路径，
                     * @param MetadataType 元数据类型，0: 不使用元数据信息，1:使用机器组元数据，2:使用用户自定义元数据，3:使用采集配置路径，
                     */
                    void SetMetadataType(const int64_t& _metadataType);

                    /**
                     * 判断参数 MetadataType 是否已赋值
                     * @return MetadataType 是否已赋值
                     */
                    bool MetadataTypeHasBeenSet() const;

                    /**
                     * 获取采集配置路径正则表达式，MetadataType为1时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PathRegex 采集配置路径正则表达式，MetadataType为1时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPathRegex() const;

                    /**
                     * 设置采集配置路径正则表达式，MetadataType为1时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PathRegex 采集配置路径正则表达式，MetadataType为1时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPathRegex(const std::string& _pathRegex);

                    /**
                     * 判断参数 PathRegex 是否已赋值
                     * @return PathRegex 是否已赋值
                     */
                    bool PathRegexHasBeenSet() const;

                    /**
                     * 获取用户自定义元数据信息，MetadataType为2时必填
                     * @return MetaTags 用户自定义元数据信息，MetadataType为2时必填
                     */
                    std::vector<MetaTagInfo> GetMetaTags() const;

                    /**
                     * 设置用户自定义元数据信息，MetadataType为2时必填
                     * @param MetaTags 用户自定义元数据信息，MetadataType为2时必填
                     */
                    void SetMetaTags(const std::vector<MetaTagInfo>& _metaTags);

                    /**
                     * 判断参数 MetaTags 是否已赋值
                     * @return MetaTags 是否已赋值
                     */
                    bool MetaTagsHasBeenSet() const;

                private:

                    /**
                     * 时间字段的key名字，time_key和time_format必须成对出现
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeKey;
                    bool m_timeKeyHasBeenSet;

                    /**
                     * 时间字段的格式，参考c语言的strftime函数对于时间的格式说明输出参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeFormat;
                    bool m_timeFormatHasBeenSet;

                    /**
                     * 分隔符类型日志的分隔符，只有log_type为delimiter_log时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_delimiter;
                    bool m_delimiterHasBeenSet;

                    /**
                     * 整条日志匹配规则，只有log_type为fullregex_log时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logRegex;
                    bool m_logRegexHasBeenSet;

                    /**
                     * 行首匹配规则，只有log_type为multiline_log或fullregex_log时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_beginRegex;
                    bool m_beginRegexHasBeenSet;

                    /**
                     * 取的每个字段的key名字，为空的key代表丢弃这个字段，只有log_type为delimiter_log时有效，json_log的日志使用json本身的key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * 需要过滤日志的key，及其对应的regex
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KeyRegexInfo> m_filterKeyRegex;
                    bool m_filterKeyRegexHasBeenSet;

                    /**
                     * 解析失败日志是否上传，true表示上传，false表示不上传
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_unMatchUpLoadSwitch;
                    bool m_unMatchUpLoadSwitchHasBeenSet;

                    /**
                     * 失败日志的key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_unMatchLogKey;
                    bool m_unMatchLogKeyHasBeenSet;

                    /**
                     * 增量采集模式下的回溯数据量，默认-1（全量采集）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_backtracking;
                    bool m_backtrackingHasBeenSet;

                    /**
                     * 是否为Gbk编码.   0: 否, 1: 是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isGBK;
                    bool m_isGBKHasBeenSet;

                    /**
                     * 是否为标准json.   0: 否, 1: 是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_jsonStandard;
                    bool m_jsonStandardHasBeenSet;

                    /**
                     * syslog传输协议，取值为tcp或者udp。
该字段适用于：创建采集规则配置、修改采集规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * syslog系统日志采集指定采集器监听的地址和端口 ，形式：[ip]:[port]。举例：127.0.0.1:9000
该字段适用于：创建采集规则配置、修改采集规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * rfc3164：指定系统日志采集使用RFC3164协议解析日志。
rfc5424：指定系统日志采集使用RFC5424协议解析日志。
auto：自动匹配rfc3164或者rfc5424其中一种协议
该字段适用于：创建采集规则配置、修改采集规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parseProtocol;
                    bool m_parseProtocolHasBeenSet;

                    /**
                     * 元数据类型，0: 不使用元数据信息，1:使用机器组元数据，2:使用用户自定义元数据，3:使用采集配置路径，
                     */
                    int64_t m_metadataType;
                    bool m_metadataTypeHasBeenSet;

                    /**
                     * 采集配置路径正则表达式，MetadataType为1时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pathRegex;
                    bool m_pathRegexHasBeenSet;

                    /**
                     * 用户自定义元数据信息，MetadataType为2时必填
                     */
                    std::vector<MetaTagInfo> m_metaTags;
                    bool m_metaTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_EXTRACTRULEINFO_H_
