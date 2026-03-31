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
#include <tencentcloud/cls/v20201016/model/EventLog.h>
#include <tencentcloud/cls/v20201016/model/AdvanceFilterRuleInfo.h>


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
                     * 获取<p>时间字段的key名字，TimeKey和TimeFormat必须成对出现</p>
                     * @return TimeKey <p>时间字段的key名字，TimeKey和TimeFormat必须成对出现</p>
                     * 
                     */
                    std::string GetTimeKey() const;

                    /**
                     * 设置<p>时间字段的key名字，TimeKey和TimeFormat必须成对出现</p>
                     * @param _timeKey <p>时间字段的key名字，TimeKey和TimeFormat必须成对出现</p>
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
                     * 获取<p>时间字段的格式，参考c语言的strftime函数对于时间的格式说明输出参数</p><ul><li>参考 <a href="https://cloud.tencent.com/document/product/614/38614">配置时间格式</a> 文档</li></ul>
                     * @return TimeFormat <p>时间字段的格式，参考c语言的strftime函数对于时间的格式说明输出参数</p><ul><li>参考 <a href="https://cloud.tencent.com/document/product/614/38614">配置时间格式</a> 文档</li></ul>
                     * 
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置<p>时间字段的格式，参考c语言的strftime函数对于时间的格式说明输出参数</p><ul><li>参考 <a href="https://cloud.tencent.com/document/product/614/38614">配置时间格式</a> 文档</li></ul>
                     * @param _timeFormat <p>时间字段的格式，参考c语言的strftime函数对于时间的格式说明输出参数</p><ul><li>参考 <a href="https://cloud.tencent.com/document/product/614/38614">配置时间格式</a> 文档</li></ul>
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
                     * 获取<p>分隔符类型日志的分隔符，只有LogType为delimiter_log时有效</p>
                     * @return Delimiter <p>分隔符类型日志的分隔符，只有LogType为delimiter_log时有效</p>
                     * 
                     */
                    std::string GetDelimiter() const;

                    /**
                     * 设置<p>分隔符类型日志的分隔符，只有LogType为delimiter_log时有效</p>
                     * @param _delimiter <p>分隔符类型日志的分隔符，只有LogType为delimiter_log时有效</p>
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
                     * 获取<p>整条日志匹配规则，只有LogType为fullregex_log时有效</p>
                     * @return LogRegex <p>整条日志匹配规则，只有LogType为fullregex_log时有效</p>
                     * 
                     */
                    std::string GetLogRegex() const;

                    /**
                     * 设置<p>整条日志匹配规则，只有LogType为fullregex_log时有效</p>
                     * @param _logRegex <p>整条日志匹配规则，只有LogType为fullregex_log时有效</p>
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
                     * 获取<p>行首匹配规则，只有LogType为multiline_log或fullregex_log时有效</p>
                     * @return BeginRegex <p>行首匹配规则，只有LogType为multiline_log或fullregex_log时有效</p>
                     * 
                     */
                    std::string GetBeginRegex() const;

                    /**
                     * 设置<p>行首匹配规则，只有LogType为multiline_log或fullregex_log时有效</p>
                     * @param _beginRegex <p>行首匹配规则，只有LogType为multiline_log或fullregex_log时有效</p>
                     * 
                     */
                    void SetBeginRegex(const std::string& _beginRegex);

                    /**
                     * 判断参数 BeginRegex 是否已赋值
                     * @return BeginRegex 是否已赋值
                     * 
                     */
                    bool BeginRegexHasBeenSet() const;

                    /**
                     * 获取<p>取的每个字段的key名字，为空的key代表丢弃这个字段，只有LogType为delimiter_log时有效，json_log的日志使用json本身的key。限制100个。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Keys <p>取的每个字段的key名字，为空的key代表丢弃这个字段，只有LogType为delimiter_log时有效，json_log的日志使用json本身的key。限制100个。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetKeys() const;

                    /**
                     * 设置<p>取的每个字段的key名字，为空的key代表丢弃这个字段，只有LogType为delimiter_log时有效，json_log的日志使用json本身的key。限制100个。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keys <p>取的每个字段的key名字，为空的key代表丢弃这个字段，只有LogType为delimiter_log时有效，json_log的日志使用json本身的key。限制100个。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>日志过滤规则列表（旧版），需要过滤日志的key，及其对应的regex。<br> 注意：2.9.3及以上版本LogListener ，建议使用AdvanceFilterRules配置日志过滤规则。</p>
                     * @return FilterKeyRegex <p>日志过滤规则列表（旧版），需要过滤日志的key，及其对应的regex。<br> 注意：2.9.3及以上版本LogListener ，建议使用AdvanceFilterRules配置日志过滤规则。</p>
                     * 
                     */
                    std::vector<KeyRegexInfo> GetFilterKeyRegex() const;

                    /**
                     * 设置<p>日志过滤规则列表（旧版），需要过滤日志的key，及其对应的regex。<br> 注意：2.9.3及以上版本LogListener ，建议使用AdvanceFilterRules配置日志过滤规则。</p>
                     * @param _filterKeyRegex <p>日志过滤规则列表（旧版），需要过滤日志的key，及其对应的regex。<br> 注意：2.9.3及以上版本LogListener ，建议使用AdvanceFilterRules配置日志过滤规则。</p>
                     * 
                     */
                    void SetFilterKeyRegex(const std::vector<KeyRegexInfo>& _filterKeyRegex);

                    /**
                     * 判断参数 FilterKeyRegex 是否已赋值
                     * @return FilterKeyRegex 是否已赋值
                     * 
                     */
                    bool FilterKeyRegexHasBeenSet() const;

                    /**
                     * 获取<p>解析失败日志是否上传，true表示上传，false表示不上传</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnMatchUpLoadSwitch <p>解析失败日志是否上传，true表示上传，false表示不上传</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetUnMatchUpLoadSwitch() const;

                    /**
                     * 设置<p>解析失败日志是否上传，true表示上传，false表示不上传</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unMatchUpLoadSwitch <p>解析失败日志是否上传，true表示上传，false表示不上传</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUnMatchUpLoadSwitch(const bool& _unMatchUpLoadSwitch);

                    /**
                     * 判断参数 UnMatchUpLoadSwitch 是否已赋值
                     * @return UnMatchUpLoadSwitch 是否已赋值
                     * 
                     */
                    bool UnMatchUpLoadSwitchHasBeenSet() const;

                    /**
                     * 获取<p>失败日志的key，当UnMatchUpLoadSwitch为true时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnMatchLogKey <p>失败日志的key，当UnMatchUpLoadSwitch为true时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUnMatchLogKey() const;

                    /**
                     * 设置<p>失败日志的key，当UnMatchUpLoadSwitch为true时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unMatchLogKey <p>失败日志的key，当UnMatchUpLoadSwitch为true时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>增量采集模式下的回溯数据量，默认：-1（全量采集）；其他非负数表示增量采集（从最新的位置，往前采集${Backtracking}字节（Byte）的日志）最大支持1073741824（1G）。<br>注意：</p><ul><li>COS导入不支持此字段。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Backtracking <p>增量采集模式下的回溯数据量，默认：-1（全量采集）；其他非负数表示增量采集（从最新的位置，往前采集${Backtracking}字节（Byte）的日志）最大支持1073741824（1G）。<br>注意：</p><ul><li>COS导入不支持此字段。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBacktracking() const;

                    /**
                     * 设置<p>增量采集模式下的回溯数据量，默认：-1（全量采集）；其他非负数表示增量采集（从最新的位置，往前采集${Backtracking}字节（Byte）的日志）最大支持1073741824（1G）。<br>注意：</p><ul><li>COS导入不支持此字段。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backtracking <p>增量采集模式下的回溯数据量，默认：-1（全量采集）；其他非负数表示增量采集（从最新的位置，往前采集${Backtracking}字节（Byte）的日志）最大支持1073741824（1G）。<br>注意：</p><ul><li>COS导入不支持此字段。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBacktracking(const int64_t& _backtracking);

                    /**
                     * 判断参数 Backtracking 是否已赋值
                     * @return Backtracking 是否已赋值
                     * 
                     */
                    bool BacktrackingHasBeenSet() const;

                    /**
                     * 获取<p>是否为Gbk编码。 0：否；1：是。<br>注意</p><ul><li>目前取0值时，表示UTF-8编码</li><li>COS导入不支持此字段。</li></ul>
                     * @return IsGBK <p>是否为Gbk编码。 0：否；1：是。<br>注意</p><ul><li>目前取0值时，表示UTF-8编码</li><li>COS导入不支持此字段。</li></ul>
                     * 
                     */
                    int64_t GetIsGBK() const;

                    /**
                     * 设置<p>是否为Gbk编码。 0：否；1：是。<br>注意</p><ul><li>目前取0值时，表示UTF-8编码</li><li>COS导入不支持此字段。</li></ul>
                     * @param _isGBK <p>是否为Gbk编码。 0：否；1：是。<br>注意</p><ul><li>目前取0值时，表示UTF-8编码</li><li>COS导入不支持此字段。</li></ul>
                     * 
                     */
                    void SetIsGBK(const int64_t& _isGBK);

                    /**
                     * 判断参数 IsGBK 是否已赋值
                     * @return IsGBK 是否已赋值
                     * 
                     */
                    bool IsGBKHasBeenSet() const;

                    /**
                     * 获取<p>是否为标准json。  0：否； 1：是。</p><ul><li>标准json指采集器使用业界标准开源解析器进行json解析，非标json指采集器使用CLS自研json解析器进行解析，两种解析器没有本质区别，建议客户使用标准json进行解析。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JsonStandard <p>是否为标准json。  0：否； 1：是。</p><ul><li>标准json指采集器使用业界标准开源解析器进行json解析，非标json指采集器使用CLS自研json解析器进行解析，两种解析器没有本质区别，建议客户使用标准json进行解析。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetJsonStandard() const;

                    /**
                     * 设置<p>是否为标准json。  0：否； 1：是。</p><ul><li>标准json指采集器使用业界标准开源解析器进行json解析，非标json指采集器使用CLS自研json解析器进行解析，两种解析器没有本质区别，建议客户使用标准json进行解析。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jsonStandard <p>是否为标准json。  0：否； 1：是。</p><ul><li>标准json指采集器使用业界标准开源解析器进行json解析，非标json指采集器使用CLS自研json解析器进行解析，两种解析器没有本质区别，建议客户使用标准json进行解析。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJsonStandard(const int64_t& _jsonStandard);

                    /**
                     * 判断参数 JsonStandard 是否已赋值
                     * @return JsonStandard 是否已赋值
                     * 
                     */
                    bool JsonStandardHasBeenSet() const;

                    /**
                     * 获取<p>syslog传输协议，取值为tcp或者udp，只有在LogType为service_syslog时生效，其余类型无需填写。<br>注意：</p><ul><li>该字段适用于：创建采集规则配置、修改采集规则配置。</li><li>COS导入不支持此字段。</li></ul>
                     * @return Protocol <p>syslog传输协议，取值为tcp或者udp，只有在LogType为service_syslog时生效，其余类型无需填写。<br>注意：</p><ul><li>该字段适用于：创建采集规则配置、修改采集规则配置。</li><li>COS导入不支持此字段。</li></ul>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>syslog传输协议，取值为tcp或者udp，只有在LogType为service_syslog时生效，其余类型无需填写。<br>注意：</p><ul><li>该字段适用于：创建采集规则配置、修改采集规则配置。</li><li>COS导入不支持此字段。</li></ul>
                     * @param _protocol <p>syslog传输协议，取值为tcp或者udp，只有在LogType为service_syslog时生效，其余类型无需填写。<br>注意：</p><ul><li>该字段适用于：创建采集规则配置、修改采集规则配置。</li><li>COS导入不支持此字段。</li></ul>
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取<p>syslog系统日志采集指定采集器监听的地址和端口 ，形式：[ip]:[port]，只有在LogType为service_syslog时生效，其余类型无需填写。<br>注意：</p><ul><li>该字段适用于：创建采集规则配置、修改采集规则配置。</li><li>COS导入不支持此字段。</li></ul>
                     * @return Address <p>syslog系统日志采集指定采集器监听的地址和端口 ，形式：[ip]:[port]，只有在LogType为service_syslog时生效，其余类型无需填写。<br>注意：</p><ul><li>该字段适用于：创建采集规则配置、修改采集规则配置。</li><li>COS导入不支持此字段。</li></ul>
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置<p>syslog系统日志采集指定采集器监听的地址和端口 ，形式：[ip]:[port]，只有在LogType为service_syslog时生效，其余类型无需填写。<br>注意：</p><ul><li>该字段适用于：创建采集规则配置、修改采集规则配置。</li><li>COS导入不支持此字段。</li></ul>
                     * @param _address <p>syslog系统日志采集指定采集器监听的地址和端口 ，形式：[ip]:[port]，只有在LogType为service_syslog时生效，其余类型无需填写。<br>注意：</p><ul><li>该字段适用于：创建采集规则配置、修改采集规则配置。</li><li>COS导入不支持此字段。</li></ul>
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取<p>rfc3164：指定系统日志采集使用RFC3164协议解析日志。<br>rfc5424：指定系统日志采集使用RFC5424协议解析日志。<br>auto：自动匹配rfc3164或者rfc5424其中一种协议。<br>只有在LogType为service_syslog时生效，其余类型无需填写。<br>注意：</p><ul><li>该字段适用于：创建采集规则配置、修改采集规则配置</li><li>COS导入不支持此字段。</li></ul>
                     * @return ParseProtocol <p>rfc3164：指定系统日志采集使用RFC3164协议解析日志。<br>rfc5424：指定系统日志采集使用RFC5424协议解析日志。<br>auto：自动匹配rfc3164或者rfc5424其中一种协议。<br>只有在LogType为service_syslog时生效，其余类型无需填写。<br>注意：</p><ul><li>该字段适用于：创建采集规则配置、修改采集规则配置</li><li>COS导入不支持此字段。</li></ul>
                     * 
                     */
                    std::string GetParseProtocol() const;

                    /**
                     * 设置<p>rfc3164：指定系统日志采集使用RFC3164协议解析日志。<br>rfc5424：指定系统日志采集使用RFC5424协议解析日志。<br>auto：自动匹配rfc3164或者rfc5424其中一种协议。<br>只有在LogType为service_syslog时生效，其余类型无需填写。<br>注意：</p><ul><li>该字段适用于：创建采集规则配置、修改采集规则配置</li><li>COS导入不支持此字段。</li></ul>
                     * @param _parseProtocol <p>rfc3164：指定系统日志采集使用RFC3164协议解析日志。<br>rfc5424：指定系统日志采集使用RFC5424协议解析日志。<br>auto：自动匹配rfc3164或者rfc5424其中一种协议。<br>只有在LogType为service_syslog时生效，其余类型无需填写。<br>注意：</p><ul><li>该字段适用于：创建采集规则配置、修改采集规则配置</li><li>COS导入不支持此字段。</li></ul>
                     * 
                     */
                    void SetParseProtocol(const std::string& _parseProtocol);

                    /**
                     * 判断参数 ParseProtocol 是否已赋值
                     * @return ParseProtocol 是否已赋值
                     * 
                     */
                    bool ParseProtocolHasBeenSet() const;

                    /**
                     * 获取<p>元数据类型。0: 不使用元数据信息；1:使用机器组元数据；2:使用用户自定义元数据；3:使用采集配置路径。<br>注意：</p><ul><li>COS导入不支持此字段。</li></ul>
                     * @return MetadataType <p>元数据类型。0: 不使用元数据信息；1:使用机器组元数据；2:使用用户自定义元数据；3:使用采集配置路径。<br>注意：</p><ul><li>COS导入不支持此字段。</li></ul>
                     * 
                     */
                    int64_t GetMetadataType() const;

                    /**
                     * 设置<p>元数据类型。0: 不使用元数据信息；1:使用机器组元数据；2:使用用户自定义元数据；3:使用采集配置路径。<br>注意：</p><ul><li>COS导入不支持此字段。</li></ul>
                     * @param _metadataType <p>元数据类型。0: 不使用元数据信息；1:使用机器组元数据；2:使用用户自定义元数据；3:使用采集配置路径。<br>注意：</p><ul><li>COS导入不支持此字段。</li></ul>
                     * 
                     */
                    void SetMetadataType(const int64_t& _metadataType);

                    /**
                     * 判断参数 MetadataType 是否已赋值
                     * @return MetadataType 是否已赋值
                     * 
                     */
                    bool MetadataTypeHasBeenSet() const;

                    /**
                     * 获取<p>采集配置路径正则表达式。</p><p><pre><code>请用&quot;()&quot;标识路径中目标字段对应的正则表达式，解析时将&quot;()&quot;视为捕获组，并以__TAG__.{i}:{目标字段}的形式与日志一起上报，其中i为捕获组的序号。若不希望以序号为键名，可以通过命名捕获组&quot;(?&lt;{键名}&gt;{正则})&quot;自定义键名，并以__TAG__.{键名}:{目标字段}的形式与日志一起上报。最多支持5个捕获组</code></pre></p><p>注意：</p><ul><li>MetadataType为3时必填。</li><li>COS导入不支持此字段。</li></ul>
                     * @return PathRegex <p>采集配置路径正则表达式。</p><p><pre><code>请用&quot;()&quot;标识路径中目标字段对应的正则表达式，解析时将&quot;()&quot;视为捕获组，并以__TAG__.{i}:{目标字段}的形式与日志一起上报，其中i为捕获组的序号。若不希望以序号为键名，可以通过命名捕获组&quot;(?&lt;{键名}&gt;{正则})&quot;自定义键名，并以__TAG__.{键名}:{目标字段}的形式与日志一起上报。最多支持5个捕获组</code></pre></p><p>注意：</p><ul><li>MetadataType为3时必填。</li><li>COS导入不支持此字段。</li></ul>
                     * 
                     */
                    std::string GetPathRegex() const;

                    /**
                     * 设置<p>采集配置路径正则表达式。</p><p><pre><code>请用&quot;()&quot;标识路径中目标字段对应的正则表达式，解析时将&quot;()&quot;视为捕获组，并以__TAG__.{i}:{目标字段}的形式与日志一起上报，其中i为捕获组的序号。若不希望以序号为键名，可以通过命名捕获组&quot;(?&lt;{键名}&gt;{正则})&quot;自定义键名，并以__TAG__.{键名}:{目标字段}的形式与日志一起上报。最多支持5个捕获组</code></pre></p><p>注意：</p><ul><li>MetadataType为3时必填。</li><li>COS导入不支持此字段。</li></ul>
                     * @param _pathRegex <p>采集配置路径正则表达式。</p><p><pre><code>请用&quot;()&quot;标识路径中目标字段对应的正则表达式，解析时将&quot;()&quot;视为捕获组，并以__TAG__.{i}:{目标字段}的形式与日志一起上报，其中i为捕获组的序号。若不希望以序号为键名，可以通过命名捕获组&quot;(?&lt;{键名}&gt;{正则})&quot;自定义键名，并以__TAG__.{键名}:{目标字段}的形式与日志一起上报。最多支持5个捕获组</code></pre></p><p>注意：</p><ul><li>MetadataType为3时必填。</li><li>COS导入不支持此字段。</li></ul>
                     * 
                     */
                    void SetPathRegex(const std::string& _pathRegex);

                    /**
                     * 判断参数 PathRegex 是否已赋值
                     * @return PathRegex 是否已赋值
                     * 
                     */
                    bool PathRegexHasBeenSet() const;

                    /**
                     * 获取<p>用户自定义元数据信息。<br>注意：</p><ul><li>MetadataType为2时必填。</li><li>COS导入不支持此字段。</li></ul>
                     * @return MetaTags <p>用户自定义元数据信息。<br>注意：</p><ul><li>MetadataType为2时必填。</li><li>COS导入不支持此字段。</li></ul>
                     * 
                     */
                    std::vector<MetaTagInfo> GetMetaTags() const;

                    /**
                     * 设置<p>用户自定义元数据信息。<br>注意：</p><ul><li>MetadataType为2时必填。</li><li>COS导入不支持此字段。</li></ul>
                     * @param _metaTags <p>用户自定义元数据信息。<br>注意：</p><ul><li>MetadataType为2时必填。</li><li>COS导入不支持此字段。</li></ul>
                     * 
                     */
                    void SetMetaTags(const std::vector<MetaTagInfo>& _metaTags);

                    /**
                     * 判断参数 MetaTags 是否已赋值
                     * @return MetaTags 是否已赋值
                     * 
                     */
                    bool MetaTagsHasBeenSet() const;

                    /**
                     * 获取<p>Windows事件日志采集规则，只有在LogType为windows_event_log时生效，其余类型无需填写。</p>
                     * @return EventLogRules <p>Windows事件日志采集规则，只有在LogType为windows_event_log时生效，其余类型无需填写。</p>
                     * 
                     */
                    std::vector<EventLog> GetEventLogRules() const;

                    /**
                     * 设置<p>Windows事件日志采集规则，只有在LogType为windows_event_log时生效，其余类型无需填写。</p>
                     * @param _eventLogRules <p>Windows事件日志采集规则，只有在LogType为windows_event_log时生效，其余类型无需填写。</p>
                     * 
                     */
                    void SetEventLogRules(const std::vector<EventLog>& _eventLogRules);

                    /**
                     * 判断参数 EventLogRules 是否已赋值
                     * @return EventLogRules 是否已赋值
                     * 
                     */
                    bool EventLogRulesHasBeenSet() const;

                    /**
                     * 获取<p>日志过滤规则列表（新版）。<br>注意：</p><ul><li>2.9.3以下版本LogListener不支持， 请使用FilterKeyRegex配置日志过滤规则。</li><li>自建k8s采集配置（CreateConfigExtra、ModifyConfigExtra）不支持此字段。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdvanceFilterRules <p>日志过滤规则列表（新版）。<br>注意：</p><ul><li>2.9.3以下版本LogListener不支持， 请使用FilterKeyRegex配置日志过滤规则。</li><li>自建k8s采集配置（CreateConfigExtra、ModifyConfigExtra）不支持此字段。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AdvanceFilterRuleInfo> GetAdvanceFilterRules() const;

                    /**
                     * 设置<p>日志过滤规则列表（新版）。<br>注意：</p><ul><li>2.9.3以下版本LogListener不支持， 请使用FilterKeyRegex配置日志过滤规则。</li><li>自建k8s采集配置（CreateConfigExtra、ModifyConfigExtra）不支持此字段。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _advanceFilterRules <p>日志过滤规则列表（新版）。<br>注意：</p><ul><li>2.9.3以下版本LogListener不支持， 请使用FilterKeyRegex配置日志过滤规则。</li><li>自建k8s采集配置（CreateConfigExtra、ModifyConfigExtra）不支持此字段。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdvanceFilterRules(const std::vector<AdvanceFilterRuleInfo>& _advanceFilterRules);

                    /**
                     * 判断参数 AdvanceFilterRules 是否已赋值
                     * @return AdvanceFilterRules 是否已赋值
                     * 
                     */
                    bool AdvanceFilterRulesHasBeenSet() const;

                    /**
                     * 获取<p>原始日志的键名称(Key)；所有原始日志， 均以您指定的键名称（Key），原始日志内容作为值（Value）进行上传，为空时表示不开启原始日志上传。</p><ul><li>COS导入不支持此字段。</li></ul>
                     * @return RawLogKey <p>原始日志的键名称(Key)；所有原始日志， 均以您指定的键名称（Key），原始日志内容作为值（Value）进行上传，为空时表示不开启原始日志上传。</p><ul><li>COS导入不支持此字段。</li></ul>
                     * 
                     */
                    std::string GetRawLogKey() const;

                    /**
                     * 设置<p>原始日志的键名称(Key)；所有原始日志， 均以您指定的键名称（Key），原始日志内容作为值（Value）进行上传，为空时表示不开启原始日志上传。</p><ul><li>COS导入不支持此字段。</li></ul>
                     * @param _rawLogKey <p>原始日志的键名称(Key)；所有原始日志， 均以您指定的键名称（Key），原始日志内容作为值（Value）进行上传，为空时表示不开启原始日志上传。</p><ul><li>COS导入不支持此字段。</li></ul>
                     * 
                     */
                    void SetRawLogKey(const std::string& _rawLogKey);

                    /**
                     * 判断参数 RawLogKey 是否已赋值
                     * @return RawLogKey 是否已赋值
                     * 
                     */
                    bool RawLogKeyHasBeenSet() const;

                private:

                    /**
                     * <p>时间字段的key名字，TimeKey和TimeFormat必须成对出现</p>
                     */
                    std::string m_timeKey;
                    bool m_timeKeyHasBeenSet;

                    /**
                     * <p>时间字段的格式，参考c语言的strftime函数对于时间的格式说明输出参数</p><ul><li>参考 <a href="https://cloud.tencent.com/document/product/614/38614">配置时间格式</a> 文档</li></ul>
                     */
                    std::string m_timeFormat;
                    bool m_timeFormatHasBeenSet;

                    /**
                     * <p>分隔符类型日志的分隔符，只有LogType为delimiter_log时有效</p>
                     */
                    std::string m_delimiter;
                    bool m_delimiterHasBeenSet;

                    /**
                     * <p>整条日志匹配规则，只有LogType为fullregex_log时有效</p>
                     */
                    std::string m_logRegex;
                    bool m_logRegexHasBeenSet;

                    /**
                     * <p>行首匹配规则，只有LogType为multiline_log或fullregex_log时有效</p>
                     */
                    std::string m_beginRegex;
                    bool m_beginRegexHasBeenSet;

                    /**
                     * <p>取的每个字段的key名字，为空的key代表丢弃这个字段，只有LogType为delimiter_log时有效，json_log的日志使用json本身的key。限制100个。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * <p>日志过滤规则列表（旧版），需要过滤日志的key，及其对应的regex。<br> 注意：2.9.3及以上版本LogListener ，建议使用AdvanceFilterRules配置日志过滤规则。</p>
                     */
                    std::vector<KeyRegexInfo> m_filterKeyRegex;
                    bool m_filterKeyRegexHasBeenSet;

                    /**
                     * <p>解析失败日志是否上传，true表示上传，false表示不上传</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_unMatchUpLoadSwitch;
                    bool m_unMatchUpLoadSwitchHasBeenSet;

                    /**
                     * <p>失败日志的key，当UnMatchUpLoadSwitch为true时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_unMatchLogKey;
                    bool m_unMatchLogKeyHasBeenSet;

                    /**
                     * <p>增量采集模式下的回溯数据量，默认：-1（全量采集）；其他非负数表示增量采集（从最新的位置，往前采集${Backtracking}字节（Byte）的日志）最大支持1073741824（1G）。<br>注意：</p><ul><li>COS导入不支持此字段。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_backtracking;
                    bool m_backtrackingHasBeenSet;

                    /**
                     * <p>是否为Gbk编码。 0：否；1：是。<br>注意</p><ul><li>目前取0值时，表示UTF-8编码</li><li>COS导入不支持此字段。</li></ul>
                     */
                    int64_t m_isGBK;
                    bool m_isGBKHasBeenSet;

                    /**
                     * <p>是否为标准json。  0：否； 1：是。</p><ul><li>标准json指采集器使用业界标准开源解析器进行json解析，非标json指采集器使用CLS自研json解析器进行解析，两种解析器没有本质区别，建议客户使用标准json进行解析。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_jsonStandard;
                    bool m_jsonStandardHasBeenSet;

                    /**
                     * <p>syslog传输协议，取值为tcp或者udp，只有在LogType为service_syslog时生效，其余类型无需填写。<br>注意：</p><ul><li>该字段适用于：创建采集规则配置、修改采集规则配置。</li><li>COS导入不支持此字段。</li></ul>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>syslog系统日志采集指定采集器监听的地址和端口 ，形式：[ip]:[port]，只有在LogType为service_syslog时生效，其余类型无需填写。<br>注意：</p><ul><li>该字段适用于：创建采集规则配置、修改采集规则配置。</li><li>COS导入不支持此字段。</li></ul>
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * <p>rfc3164：指定系统日志采集使用RFC3164协议解析日志。<br>rfc5424：指定系统日志采集使用RFC5424协议解析日志。<br>auto：自动匹配rfc3164或者rfc5424其中一种协议。<br>只有在LogType为service_syslog时生效，其余类型无需填写。<br>注意：</p><ul><li>该字段适用于：创建采集规则配置、修改采集规则配置</li><li>COS导入不支持此字段。</li></ul>
                     */
                    std::string m_parseProtocol;
                    bool m_parseProtocolHasBeenSet;

                    /**
                     * <p>元数据类型。0: 不使用元数据信息；1:使用机器组元数据；2:使用用户自定义元数据；3:使用采集配置路径。<br>注意：</p><ul><li>COS导入不支持此字段。</li></ul>
                     */
                    int64_t m_metadataType;
                    bool m_metadataTypeHasBeenSet;

                    /**
                     * <p>采集配置路径正则表达式。</p><p><pre><code>请用&quot;()&quot;标识路径中目标字段对应的正则表达式，解析时将&quot;()&quot;视为捕获组，并以__TAG__.{i}:{目标字段}的形式与日志一起上报，其中i为捕获组的序号。若不希望以序号为键名，可以通过命名捕获组&quot;(?&lt;{键名}&gt;{正则})&quot;自定义键名，并以__TAG__.{键名}:{目标字段}的形式与日志一起上报。最多支持5个捕获组</code></pre></p><p>注意：</p><ul><li>MetadataType为3时必填。</li><li>COS导入不支持此字段。</li></ul>
                     */
                    std::string m_pathRegex;
                    bool m_pathRegexHasBeenSet;

                    /**
                     * <p>用户自定义元数据信息。<br>注意：</p><ul><li>MetadataType为2时必填。</li><li>COS导入不支持此字段。</li></ul>
                     */
                    std::vector<MetaTagInfo> m_metaTags;
                    bool m_metaTagsHasBeenSet;

                    /**
                     * <p>Windows事件日志采集规则，只有在LogType为windows_event_log时生效，其余类型无需填写。</p>
                     */
                    std::vector<EventLog> m_eventLogRules;
                    bool m_eventLogRulesHasBeenSet;

                    /**
                     * <p>日志过滤规则列表（新版）。<br>注意：</p><ul><li>2.9.3以下版本LogListener不支持， 请使用FilterKeyRegex配置日志过滤规则。</li><li>自建k8s采集配置（CreateConfigExtra、ModifyConfigExtra）不支持此字段。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AdvanceFilterRuleInfo> m_advanceFilterRules;
                    bool m_advanceFilterRulesHasBeenSet;

                    /**
                     * <p>原始日志的键名称(Key)；所有原始日志， 均以您指定的键名称（Key），原始日志内容作为值（Value）进行上传，为空时表示不开启原始日志上传。</p><ul><li>COS导入不支持此字段。</li></ul>
                     */
                    std::string m_rawLogKey;
                    bool m_rawLogKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_EXTRACTRULEINFO_H_
