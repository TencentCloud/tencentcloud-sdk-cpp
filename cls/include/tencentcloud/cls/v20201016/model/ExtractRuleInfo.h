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
                     * 获取时间字段的key名字，TikeKey和TimeFormat必须成对出现
                     * @return TimeKey 时间字段的key名字，TikeKey和TimeFormat必须成对出现
                     * 
                     */
                    std::string GetTimeKey() const;

                    /**
                     * 设置时间字段的key名字，TikeKey和TimeFormat必须成对出现
                     * @param _timeKey 时间字段的key名字，TikeKey和TimeFormat必须成对出现
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
                     * 获取时间字段的格式，参考c语言的strftime函数对于时间的格式说明输出参数
                     * @return TimeFormat 时间字段的格式，参考c语言的strftime函数对于时间的格式说明输出参数
                     * 
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置时间字段的格式，参考c语言的strftime函数对于时间的格式说明输出参数
                     * @param _timeFormat 时间字段的格式，参考c语言的strftime函数对于时间的格式说明输出参数
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
                     * 获取分隔符类型日志的分隔符，只有LogType为delimiter_log时有效
                     * @return Delimiter 分隔符类型日志的分隔符，只有LogType为delimiter_log时有效
                     * 
                     */
                    std::string GetDelimiter() const;

                    /**
                     * 设置分隔符类型日志的分隔符，只有LogType为delimiter_log时有效
                     * @param _delimiter 分隔符类型日志的分隔符，只有LogType为delimiter_log时有效
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
                     * 获取整条日志匹配规则，只有LogType为fullregex_log时有效
                     * @return LogRegex 整条日志匹配规则，只有LogType为fullregex_log时有效
                     * 
                     */
                    std::string GetLogRegex() const;

                    /**
                     * 设置整条日志匹配规则，只有LogType为fullregex_log时有效
                     * @param _logRegex 整条日志匹配规则，只有LogType为fullregex_log时有效
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
                     * 获取行首匹配规则，只有LogType为multiline_log或fullregex_log时有效
                     * @return BeginRegex 行首匹配规则，只有LogType为multiline_log或fullregex_log时有效
                     * 
                     */
                    std::string GetBeginRegex() const;

                    /**
                     * 设置行首匹配规则，只有LogType为multiline_log或fullregex_log时有效
                     * @param _beginRegex 行首匹配规则，只有LogType为multiline_log或fullregex_log时有效
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
                     * 获取取的每个字段的key名字，为空的key代表丢弃这个字段，只有LogType为delimiter_log时有效，json_log的日志使用json本身的key。限制100个。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Keys 取的每个字段的key名字，为空的key代表丢弃这个字段，只有LogType为delimiter_log时有效，json_log的日志使用json本身的key。限制100个。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetKeys() const;

                    /**
                     * 设置取的每个字段的key名字，为空的key代表丢弃这个字段，只有LogType为delimiter_log时有效，json_log的日志使用json本身的key。限制100个。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keys 取的每个字段的key名字，为空的key代表丢弃这个字段，只有LogType为delimiter_log时有效，json_log的日志使用json本身的key。限制100个。
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
                     * 获取日志过滤规则列表（旧版），需要过滤日志的key，及其对应的regex。
 注意：2.9.3及以上版本LogListener ，建议使用AdvanceFilterRules配置日志过滤规则。

                     * @return FilterKeyRegex 日志过滤规则列表（旧版），需要过滤日志的key，及其对应的regex。
 注意：2.9.3及以上版本LogListener ，建议使用AdvanceFilterRules配置日志过滤规则。

                     * 
                     */
                    std::vector<KeyRegexInfo> GetFilterKeyRegex() const;

                    /**
                     * 设置日志过滤规则列表（旧版），需要过滤日志的key，及其对应的regex。
 注意：2.9.3及以上版本LogListener ，建议使用AdvanceFilterRules配置日志过滤规则。

                     * @param _filterKeyRegex 日志过滤规则列表（旧版），需要过滤日志的key，及其对应的regex。
 注意：2.9.3及以上版本LogListener ，建议使用AdvanceFilterRules配置日志过滤规则。

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
                     * 获取解析失败日志是否上传，true表示上传，false表示不上传
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnMatchUpLoadSwitch 解析失败日志是否上传，true表示上传，false表示不上传
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetUnMatchUpLoadSwitch() const;

                    /**
                     * 设置解析失败日志是否上传，true表示上传，false表示不上传
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unMatchUpLoadSwitch 解析失败日志是否上传，true表示上传，false表示不上传
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
                     * 获取失败日志的key，当UnMatchUpLoadSwitch为true时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnMatchLogKey 失败日志的key，当UnMatchUpLoadSwitch为true时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUnMatchLogKey() const;

                    /**
                     * 设置失败日志的key，当UnMatchUpLoadSwitch为true时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unMatchLogKey 失败日志的key，当UnMatchUpLoadSwitch为true时必填
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
                     * 获取增量采集模式下的回溯数据量，默认：-1（全量采集）；其他非负数表示增量采集（从最新的位置，往前采集${Backtracking}字节（Byte）的日志）最大支持1073741824（1G）。
注意：
- COS导入不支持此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Backtracking 增量采集模式下的回溯数据量，默认：-1（全量采集）；其他非负数表示增量采集（从最新的位置，往前采集${Backtracking}字节（Byte）的日志）最大支持1073741824（1G）。
注意：
- COS导入不支持此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBacktracking() const;

                    /**
                     * 设置增量采集模式下的回溯数据量，默认：-1（全量采集）；其他非负数表示增量采集（从最新的位置，往前采集${Backtracking}字节（Byte）的日志）最大支持1073741824（1G）。
注意：
- COS导入不支持此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backtracking 增量采集模式下的回溯数据量，默认：-1（全量采集）；其他非负数表示增量采集（从最新的位置，往前采集${Backtracking}字节（Byte）的日志）最大支持1073741824（1G）。
注意：
- COS导入不支持此字段。
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
                     * 获取是否为Gbk编码。 0：否；1：是。
注意
- 目前取0值时，表示UTF-8编码
- COS导入不支持此字段。
                     * @return IsGBK 是否为Gbk编码。 0：否；1：是。
注意
- 目前取0值时，表示UTF-8编码
- COS导入不支持此字段。
                     * 
                     */
                    int64_t GetIsGBK() const;

                    /**
                     * 设置是否为Gbk编码。 0：否；1：是。
注意
- 目前取0值时，表示UTF-8编码
- COS导入不支持此字段。
                     * @param _isGBK 是否为Gbk编码。 0：否；1：是。
注意
- 目前取0值时，表示UTF-8编码
- COS导入不支持此字段。
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
                     * 获取是否为标准json。  0：否； 1：是。
- 标准json指采集器使用业界标准开源解析器进行json解析，非标json指采集器使用CLS自研json解析器进行解析，两种解析器没有本质区别，建议客户使用标准json进行解析。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JsonStandard 是否为标准json。  0：否； 1：是。
- 标准json指采集器使用业界标准开源解析器进行json解析，非标json指采集器使用CLS自研json解析器进行解析，两种解析器没有本质区别，建议客户使用标准json进行解析。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetJsonStandard() const;

                    /**
                     * 设置是否为标准json。  0：否； 1：是。
- 标准json指采集器使用业界标准开源解析器进行json解析，非标json指采集器使用CLS自研json解析器进行解析，两种解析器没有本质区别，建议客户使用标准json进行解析。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jsonStandard 是否为标准json。  0：否； 1：是。
- 标准json指采集器使用业界标准开源解析器进行json解析，非标json指采集器使用CLS自研json解析器进行解析，两种解析器没有本质区别，建议客户使用标准json进行解析。
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
                     * 获取syslog传输协议，取值为tcp或者udp，只有在LogType为service_syslog时生效，其余类型无需填写。
注意：
- 该字段适用于：创建采集规则配置、修改采集规则配置。
- COS导入不支持此字段。
                     * @return Protocol syslog传输协议，取值为tcp或者udp，只有在LogType为service_syslog时生效，其余类型无需填写。
注意：
- 该字段适用于：创建采集规则配置、修改采集规则配置。
- COS导入不支持此字段。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置syslog传输协议，取值为tcp或者udp，只有在LogType为service_syslog时生效，其余类型无需填写。
注意：
- 该字段适用于：创建采集规则配置、修改采集规则配置。
- COS导入不支持此字段。
                     * @param _protocol syslog传输协议，取值为tcp或者udp，只有在LogType为service_syslog时生效，其余类型无需填写。
注意：
- 该字段适用于：创建采集规则配置、修改采集规则配置。
- COS导入不支持此字段。
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
                     * 获取syslog系统日志采集指定采集器监听的地址和端口 ，形式：[ip]:[port]，只有在LogType为service_syslog时生效，其余类型无需填写。
注意：
- 该字段适用于：创建采集规则配置、修改采集规则配置。
- COS导入不支持此字段。
                     * @return Address syslog系统日志采集指定采集器监听的地址和端口 ，形式：[ip]:[port]，只有在LogType为service_syslog时生效，其余类型无需填写。
注意：
- 该字段适用于：创建采集规则配置、修改采集规则配置。
- COS导入不支持此字段。
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置syslog系统日志采集指定采集器监听的地址和端口 ，形式：[ip]:[port]，只有在LogType为service_syslog时生效，其余类型无需填写。
注意：
- 该字段适用于：创建采集规则配置、修改采集规则配置。
- COS导入不支持此字段。
                     * @param _address syslog系统日志采集指定采集器监听的地址和端口 ，形式：[ip]:[port]，只有在LogType为service_syslog时生效，其余类型无需填写。
注意：
- 该字段适用于：创建采集规则配置、修改采集规则配置。
- COS导入不支持此字段。
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
                     * 获取rfc3164：指定系统日志采集使用RFC3164协议解析日志。
rfc5424：指定系统日志采集使用RFC5424协议解析日志。
auto：自动匹配rfc3164或者rfc5424其中一种协议。
只有在LogType为service_syslog时生效，其余类型无需填写。
注意：
- 该字段适用于：创建采集规则配置、修改采集规则配置
- COS导入不支持此字段。
                     * @return ParseProtocol rfc3164：指定系统日志采集使用RFC3164协议解析日志。
rfc5424：指定系统日志采集使用RFC5424协议解析日志。
auto：自动匹配rfc3164或者rfc5424其中一种协议。
只有在LogType为service_syslog时生效，其余类型无需填写。
注意：
- 该字段适用于：创建采集规则配置、修改采集规则配置
- COS导入不支持此字段。
                     * 
                     */
                    std::string GetParseProtocol() const;

                    /**
                     * 设置rfc3164：指定系统日志采集使用RFC3164协议解析日志。
rfc5424：指定系统日志采集使用RFC5424协议解析日志。
auto：自动匹配rfc3164或者rfc5424其中一种协议。
只有在LogType为service_syslog时生效，其余类型无需填写。
注意：
- 该字段适用于：创建采集规则配置、修改采集规则配置
- COS导入不支持此字段。
                     * @param _parseProtocol rfc3164：指定系统日志采集使用RFC3164协议解析日志。
rfc5424：指定系统日志采集使用RFC5424协议解析日志。
auto：自动匹配rfc3164或者rfc5424其中一种协议。
只有在LogType为service_syslog时生效，其余类型无需填写。
注意：
- 该字段适用于：创建采集规则配置、修改采集规则配置
- COS导入不支持此字段。
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
                     * 获取元数据类型。0: 不使用元数据信息；1:使用机器组元数据；2:使用用户自定义元数据；3:使用采集配置路径。
注意：
- COS导入不支持此字段。
                     * @return MetadataType 元数据类型。0: 不使用元数据信息；1:使用机器组元数据；2:使用用户自定义元数据；3:使用采集配置路径。
注意：
- COS导入不支持此字段。
                     * 
                     */
                    int64_t GetMetadataType() const;

                    /**
                     * 设置元数据类型。0: 不使用元数据信息；1:使用机器组元数据；2:使用用户自定义元数据；3:使用采集配置路径。
注意：
- COS导入不支持此字段。
                     * @param _metadataType 元数据类型。0: 不使用元数据信息；1:使用机器组元数据；2:使用用户自定义元数据；3:使用采集配置路径。
注意：
- COS导入不支持此字段。
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
                     * 获取采集配置路径正则表达式。

```
请用"()"标识路径中目标字段对应的正则表达式，解析时将"()"视为捕获组，并以__TAG__.{i}:{目标字段}的形式与日志一起上报，其中i为捕获组的序号。
若不希望以序号为键名，可以通过命名捕获组"(?<{键名}>{正则})"自定义键名，并以__TAG__.{键名}:{目标字段}的形式与日志一起上报。最多支持5个捕获组
```

注意：
- MetadataType为3时必填。
- COS导入不支持此字段。
                     * @return PathRegex 采集配置路径正则表达式。

```
请用"()"标识路径中目标字段对应的正则表达式，解析时将"()"视为捕获组，并以__TAG__.{i}:{目标字段}的形式与日志一起上报，其中i为捕获组的序号。
若不希望以序号为键名，可以通过命名捕获组"(?<{键名}>{正则})"自定义键名，并以__TAG__.{键名}:{目标字段}的形式与日志一起上报。最多支持5个捕获组
```

注意：
- MetadataType为3时必填。
- COS导入不支持此字段。
                     * 
                     */
                    std::string GetPathRegex() const;

                    /**
                     * 设置采集配置路径正则表达式。

```
请用"()"标识路径中目标字段对应的正则表达式，解析时将"()"视为捕获组，并以__TAG__.{i}:{目标字段}的形式与日志一起上报，其中i为捕获组的序号。
若不希望以序号为键名，可以通过命名捕获组"(?<{键名}>{正则})"自定义键名，并以__TAG__.{键名}:{目标字段}的形式与日志一起上报。最多支持5个捕获组
```

注意：
- MetadataType为3时必填。
- COS导入不支持此字段。
                     * @param _pathRegex 采集配置路径正则表达式。

```
请用"()"标识路径中目标字段对应的正则表达式，解析时将"()"视为捕获组，并以__TAG__.{i}:{目标字段}的形式与日志一起上报，其中i为捕获组的序号。
若不希望以序号为键名，可以通过命名捕获组"(?<{键名}>{正则})"自定义键名，并以__TAG__.{键名}:{目标字段}的形式与日志一起上报。最多支持5个捕获组
```

注意：
- MetadataType为3时必填。
- COS导入不支持此字段。
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
                     * 获取用户自定义元数据信息。
注意：
- MetadataType为2时必填。
- COS导入不支持此字段。
                     * @return MetaTags 用户自定义元数据信息。
注意：
- MetadataType为2时必填。
- COS导入不支持此字段。
                     * 
                     */
                    std::vector<MetaTagInfo> GetMetaTags() const;

                    /**
                     * 设置用户自定义元数据信息。
注意：
- MetadataType为2时必填。
- COS导入不支持此字段。
                     * @param _metaTags 用户自定义元数据信息。
注意：
- MetadataType为2时必填。
- COS导入不支持此字段。
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
                     * 获取Windows事件日志采集规则，只有在LogType为windows_event_log时生效，其余类型无需填写。
                     * @return EventLogRules Windows事件日志采集规则，只有在LogType为windows_event_log时生效，其余类型无需填写。
                     * 
                     */
                    std::vector<EventLog> GetEventLogRules() const;

                    /**
                     * 设置Windows事件日志采集规则，只有在LogType为windows_event_log时生效，其余类型无需填写。
                     * @param _eventLogRules Windows事件日志采集规则，只有在LogType为windows_event_log时生效，其余类型无需填写。
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
                     * 获取日志过滤规则列表（新版）。
注意：
- 2.9.3以下版本LogListener不支持， 请使用FilterKeyRegex配置日志过滤规则。
- 自建k8s采集配置（CreateConfigExtra、ModifyConfigExtra）不支持此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdvanceFilterRules 日志过滤规则列表（新版）。
注意：
- 2.9.3以下版本LogListener不支持， 请使用FilterKeyRegex配置日志过滤规则。
- 自建k8s采集配置（CreateConfigExtra、ModifyConfigExtra）不支持此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AdvanceFilterRuleInfo> GetAdvanceFilterRules() const;

                    /**
                     * 设置日志过滤规则列表（新版）。
注意：
- 2.9.3以下版本LogListener不支持， 请使用FilterKeyRegex配置日志过滤规则。
- 自建k8s采集配置（CreateConfigExtra、ModifyConfigExtra）不支持此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _advanceFilterRules 日志过滤规则列表（新版）。
注意：
- 2.9.3以下版本LogListener不支持， 请使用FilterKeyRegex配置日志过滤规则。
- 自建k8s采集配置（CreateConfigExtra、ModifyConfigExtra）不支持此字段。
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

                private:

                    /**
                     * 时间字段的key名字，TikeKey和TimeFormat必须成对出现
                     */
                    std::string m_timeKey;
                    bool m_timeKeyHasBeenSet;

                    /**
                     * 时间字段的格式，参考c语言的strftime函数对于时间的格式说明输出参数
                     */
                    std::string m_timeFormat;
                    bool m_timeFormatHasBeenSet;

                    /**
                     * 分隔符类型日志的分隔符，只有LogType为delimiter_log时有效
                     */
                    std::string m_delimiter;
                    bool m_delimiterHasBeenSet;

                    /**
                     * 整条日志匹配规则，只有LogType为fullregex_log时有效
                     */
                    std::string m_logRegex;
                    bool m_logRegexHasBeenSet;

                    /**
                     * 行首匹配规则，只有LogType为multiline_log或fullregex_log时有效
                     */
                    std::string m_beginRegex;
                    bool m_beginRegexHasBeenSet;

                    /**
                     * 取的每个字段的key名字，为空的key代表丢弃这个字段，只有LogType为delimiter_log时有效，json_log的日志使用json本身的key。限制100个。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * 日志过滤规则列表（旧版），需要过滤日志的key，及其对应的regex。
 注意：2.9.3及以上版本LogListener ，建议使用AdvanceFilterRules配置日志过滤规则。

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
                     * 失败日志的key，当UnMatchUpLoadSwitch为true时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_unMatchLogKey;
                    bool m_unMatchLogKeyHasBeenSet;

                    /**
                     * 增量采集模式下的回溯数据量，默认：-1（全量采集）；其他非负数表示增量采集（从最新的位置，往前采集${Backtracking}字节（Byte）的日志）最大支持1073741824（1G）。
注意：
- COS导入不支持此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_backtracking;
                    bool m_backtrackingHasBeenSet;

                    /**
                     * 是否为Gbk编码。 0：否；1：是。
注意
- 目前取0值时，表示UTF-8编码
- COS导入不支持此字段。
                     */
                    int64_t m_isGBK;
                    bool m_isGBKHasBeenSet;

                    /**
                     * 是否为标准json。  0：否； 1：是。
- 标准json指采集器使用业界标准开源解析器进行json解析，非标json指采集器使用CLS自研json解析器进行解析，两种解析器没有本质区别，建议客户使用标准json进行解析。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_jsonStandard;
                    bool m_jsonStandardHasBeenSet;

                    /**
                     * syslog传输协议，取值为tcp或者udp，只有在LogType为service_syslog时生效，其余类型无需填写。
注意：
- 该字段适用于：创建采集规则配置、修改采集规则配置。
- COS导入不支持此字段。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * syslog系统日志采集指定采集器监听的地址和端口 ，形式：[ip]:[port]，只有在LogType为service_syslog时生效，其余类型无需填写。
注意：
- 该字段适用于：创建采集规则配置、修改采集规则配置。
- COS导入不支持此字段。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * rfc3164：指定系统日志采集使用RFC3164协议解析日志。
rfc5424：指定系统日志采集使用RFC5424协议解析日志。
auto：自动匹配rfc3164或者rfc5424其中一种协议。
只有在LogType为service_syslog时生效，其余类型无需填写。
注意：
- 该字段适用于：创建采集规则配置、修改采集规则配置
- COS导入不支持此字段。
                     */
                    std::string m_parseProtocol;
                    bool m_parseProtocolHasBeenSet;

                    /**
                     * 元数据类型。0: 不使用元数据信息；1:使用机器组元数据；2:使用用户自定义元数据；3:使用采集配置路径。
注意：
- COS导入不支持此字段。
                     */
                    int64_t m_metadataType;
                    bool m_metadataTypeHasBeenSet;

                    /**
                     * 采集配置路径正则表达式。

```
请用"()"标识路径中目标字段对应的正则表达式，解析时将"()"视为捕获组，并以__TAG__.{i}:{目标字段}的形式与日志一起上报，其中i为捕获组的序号。
若不希望以序号为键名，可以通过命名捕获组"(?<{键名}>{正则})"自定义键名，并以__TAG__.{键名}:{目标字段}的形式与日志一起上报。最多支持5个捕获组
```

注意：
- MetadataType为3时必填。
- COS导入不支持此字段。
                     */
                    std::string m_pathRegex;
                    bool m_pathRegexHasBeenSet;

                    /**
                     * 用户自定义元数据信息。
注意：
- MetadataType为2时必填。
- COS导入不支持此字段。
                     */
                    std::vector<MetaTagInfo> m_metaTags;
                    bool m_metaTagsHasBeenSet;

                    /**
                     * Windows事件日志采集规则，只有在LogType为windows_event_log时生效，其余类型无需填写。
                     */
                    std::vector<EventLog> m_eventLogRules;
                    bool m_eventLogRulesHasBeenSet;

                    /**
                     * 日志过滤规则列表（新版）。
注意：
- 2.9.3以下版本LogListener不支持， 请使用FilterKeyRegex配置日志过滤规则。
- 自建k8s采集配置（CreateConfigExtra、ModifyConfigExtra）不支持此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AdvanceFilterRuleInfo> m_advanceFilterRules;
                    bool m_advanceFilterRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_EXTRACTRULEINFO_H_
