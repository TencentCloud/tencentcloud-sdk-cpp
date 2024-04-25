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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_LOGFORMAT_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_LOGFORMAT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 实时日志投递的输出格式。您可以直接通过 FormatType 参数使用指定预设日志输出格式（JSON Lines / csv），也可以在预设日志输出格式基础上，通过其他参数来自定义变体输出格式。
                */
                class LogFormat : public AbstractModel
                {
                public:
                    LogFormat();
                    ~LogFormat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志投递的预设输出格式类型，取值有：
<li>json：使用预设日志输出格式 JSON Lines，单条日志中的字段以键值对方式呈现；</li>
<li>csv：使用预设日志输出格式 csv，单条日志中仅呈现字段值，不呈现字段名称。</li>
                     * @return FormatType 日志投递的预设输出格式类型，取值有：
<li>json：使用预设日志输出格式 JSON Lines，单条日志中的字段以键值对方式呈现；</li>
<li>csv：使用预设日志输出格式 csv，单条日志中仅呈现字段值，不呈现字段名称。</li>
                     * 
                     */
                    std::string GetFormatType() const;

                    /**
                     * 设置日志投递的预设输出格式类型，取值有：
<li>json：使用预设日志输出格式 JSON Lines，单条日志中的字段以键值对方式呈现；</li>
<li>csv：使用预设日志输出格式 csv，单条日志中仅呈现字段值，不呈现字段名称。</li>
                     * @param _formatType 日志投递的预设输出格式类型，取值有：
<li>json：使用预设日志输出格式 JSON Lines，单条日志中的字段以键值对方式呈现；</li>
<li>csv：使用预设日志输出格式 csv，单条日志中仅呈现字段值，不呈现字段名称。</li>
                     * 
                     */
                    void SetFormatType(const std::string& _formatType);

                    /**
                     * 判断参数 FormatType 是否已赋值
                     * @return FormatType 是否已赋值
                     * 
                     */
                    bool FormatTypeHasBeenSet() const;

                    /**
                     * 获取在每个日志投递批次之前添加的字符串。每个日志投递批次可能包含多条日志记录。
                     * @return BatchPrefix 在每个日志投递批次之前添加的字符串。每个日志投递批次可能包含多条日志记录。
                     * 
                     */
                    std::string GetBatchPrefix() const;

                    /**
                     * 设置在每个日志投递批次之前添加的字符串。每个日志投递批次可能包含多条日志记录。
                     * @param _batchPrefix 在每个日志投递批次之前添加的字符串。每个日志投递批次可能包含多条日志记录。
                     * 
                     */
                    void SetBatchPrefix(const std::string& _batchPrefix);

                    /**
                     * 判断参数 BatchPrefix 是否已赋值
                     * @return BatchPrefix 是否已赋值
                     * 
                     */
                    bool BatchPrefixHasBeenSet() const;

                    /**
                     * 获取在每个日志投递批次后附加的字符串。
                     * @return BatchSuffix 在每个日志投递批次后附加的字符串。
                     * 
                     */
                    std::string GetBatchSuffix() const;

                    /**
                     * 设置在每个日志投递批次后附加的字符串。
                     * @param _batchSuffix 在每个日志投递批次后附加的字符串。
                     * 
                     */
                    void SetBatchSuffix(const std::string& _batchSuffix);

                    /**
                     * 判断参数 BatchSuffix 是否已赋值
                     * @return BatchSuffix 是否已赋值
                     * 
                     */
                    bool BatchSuffixHasBeenSet() const;

                    /**
                     * 获取在每条日志记录之前添加的字符串。
                     * @return RecordPrefix 在每条日志记录之前添加的字符串。
                     * 
                     */
                    std::string GetRecordPrefix() const;

                    /**
                     * 设置在每条日志记录之前添加的字符串。
                     * @param _recordPrefix 在每条日志记录之前添加的字符串。
                     * 
                     */
                    void SetRecordPrefix(const std::string& _recordPrefix);

                    /**
                     * 判断参数 RecordPrefix 是否已赋值
                     * @return RecordPrefix 是否已赋值
                     * 
                     */
                    bool RecordPrefixHasBeenSet() const;

                    /**
                     * 获取在每条日志记录后附加的字符串。
                     * @return RecordSuffix 在每条日志记录后附加的字符串。
                     * 
                     */
                    std::string GetRecordSuffix() const;

                    /**
                     * 设置在每条日志记录后附加的字符串。
                     * @param _recordSuffix 在每条日志记录后附加的字符串。
                     * 
                     */
                    void SetRecordSuffix(const std::string& _recordSuffix);

                    /**
                     * 判断参数 RecordSuffix 是否已赋值
                     * @return RecordSuffix 是否已赋值
                     * 
                     */
                    bool RecordSuffixHasBeenSet() const;

                    /**
                     * 获取插入日志记录之间作为分隔符的字符串，取值有：
<li>\n：换行符；</li>
<li>\t：制表符；</li>
<li>，：半角逗号。</li>
                     * @return RecordDelimiter 插入日志记录之间作为分隔符的字符串，取值有：
<li>\n：换行符；</li>
<li>\t：制表符；</li>
<li>，：半角逗号。</li>
                     * 
                     */
                    std::string GetRecordDelimiter() const;

                    /**
                     * 设置插入日志记录之间作为分隔符的字符串，取值有：
<li>\n：换行符；</li>
<li>\t：制表符；</li>
<li>，：半角逗号。</li>
                     * @param _recordDelimiter 插入日志记录之间作为分隔符的字符串，取值有：
<li>\n：换行符；</li>
<li>\t：制表符；</li>
<li>，：半角逗号。</li>
                     * 
                     */
                    void SetRecordDelimiter(const std::string& _recordDelimiter);

                    /**
                     * 判断参数 RecordDelimiter 是否已赋值
                     * @return RecordDelimiter 是否已赋值
                     * 
                     */
                    bool RecordDelimiterHasBeenSet() const;

                    /**
                     * 获取单条日志记录内，插入字段之间作为分隔符的字符串，取值有：
<li>\t：制表符；</li>
<li>，：半角逗号；</li>
<li>;：半角分号。</li>
                     * @return FieldDelimiter 单条日志记录内，插入字段之间作为分隔符的字符串，取值有：
<li>\t：制表符；</li>
<li>，：半角逗号；</li>
<li>;：半角分号。</li>
                     * 
                     */
                    std::string GetFieldDelimiter() const;

                    /**
                     * 设置单条日志记录内，插入字段之间作为分隔符的字符串，取值有：
<li>\t：制表符；</li>
<li>，：半角逗号；</li>
<li>;：半角分号。</li>
                     * @param _fieldDelimiter 单条日志记录内，插入字段之间作为分隔符的字符串，取值有：
<li>\t：制表符；</li>
<li>，：半角逗号；</li>
<li>;：半角分号。</li>
                     * 
                     */
                    void SetFieldDelimiter(const std::string& _fieldDelimiter);

                    /**
                     * 判断参数 FieldDelimiter 是否已赋值
                     * @return FieldDelimiter 是否已赋值
                     * 
                     */
                    bool FieldDelimiterHasBeenSet() const;

                private:

                    /**
                     * 日志投递的预设输出格式类型，取值有：
<li>json：使用预设日志输出格式 JSON Lines，单条日志中的字段以键值对方式呈现；</li>
<li>csv：使用预设日志输出格式 csv，单条日志中仅呈现字段值，不呈现字段名称。</li>
                     */
                    std::string m_formatType;
                    bool m_formatTypeHasBeenSet;

                    /**
                     * 在每个日志投递批次之前添加的字符串。每个日志投递批次可能包含多条日志记录。
                     */
                    std::string m_batchPrefix;
                    bool m_batchPrefixHasBeenSet;

                    /**
                     * 在每个日志投递批次后附加的字符串。
                     */
                    std::string m_batchSuffix;
                    bool m_batchSuffixHasBeenSet;

                    /**
                     * 在每条日志记录之前添加的字符串。
                     */
                    std::string m_recordPrefix;
                    bool m_recordPrefixHasBeenSet;

                    /**
                     * 在每条日志记录后附加的字符串。
                     */
                    std::string m_recordSuffix;
                    bool m_recordSuffixHasBeenSet;

                    /**
                     * 插入日志记录之间作为分隔符的字符串，取值有：
<li>\n：换行符；</li>
<li>\t：制表符；</li>
<li>，：半角逗号。</li>
                     */
                    std::string m_recordDelimiter;
                    bool m_recordDelimiterHasBeenSet;

                    /**
                     * 单条日志记录内，插入字段之间作为分隔符的字符串，取值有：
<li>\t：制表符；</li>
<li>，：半角逗号；</li>
<li>;：半角分号。</li>
                     */
                    std::string m_fieldDelimiter;
                    bool m_fieldDelimiterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_LOGFORMAT_H_
