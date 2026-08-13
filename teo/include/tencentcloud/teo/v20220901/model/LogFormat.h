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
                * 实时日志投递的输出格式。您可以直接通过 FormatType 参数使用指定预设日志输出格式（JSON Lines / csv），也可以在预设日志输出格式基础上，通过其他参数来自定义变体输出格式，使用详情见 [自定义日志输出格式](https://cloud.tencent.com/document/product/1552/110448)。
                */
                class LogFormat : public AbstractModel
                {
                public:
                    LogFormat();
                    ~LogFormat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>日志输出格式，取值有：</p><ul><li>json：使用预设日志输出格式 JSON Lines，单条日志中的字段以键值对方式呈现；</li><li>csv：使用预设日志输出格式 csv，单条日志中仅呈现字段值，不呈现字段名称。</li><li>template：使用用户自定义输出模板，单条日志中支持按照自定义模板进行自定义排版和拼接，需配合 RecordTemplate 字段使用。</li></ul>
                     * @return FormatType <p>日志输出格式，取值有：</p><ul><li>json：使用预设日志输出格式 JSON Lines，单条日志中的字段以键值对方式呈现；</li><li>csv：使用预设日志输出格式 csv，单条日志中仅呈现字段值，不呈现字段名称。</li><li>template：使用用户自定义输出模板，单条日志中支持按照自定义模板进行自定义排版和拼接，需配合 RecordTemplate 字段使用。</li></ul>
                     * 
                     */
                    std::string GetFormatType() const;

                    /**
                     * 设置<p>日志输出格式，取值有：</p><ul><li>json：使用预设日志输出格式 JSON Lines，单条日志中的字段以键值对方式呈现；</li><li>csv：使用预设日志输出格式 csv，单条日志中仅呈现字段值，不呈现字段名称。</li><li>template：使用用户自定义输出模板，单条日志中支持按照自定义模板进行自定义排版和拼接，需配合 RecordTemplate 字段使用。</li></ul>
                     * @param _formatType <p>日志输出格式，取值有：</p><ul><li>json：使用预设日志输出格式 JSON Lines，单条日志中的字段以键值对方式呈现；</li><li>csv：使用预设日志输出格式 csv，单条日志中仅呈现字段值，不呈现字段名称。</li><li>template：使用用户自定义输出模板，单条日志中支持按照自定义模板进行自定义排版和拼接，需配合 RecordTemplate 字段使用。</li></ul>
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
                     * 获取<p>在每个日志投递批次之前添加的字符串。每个日志投递批次可能包含多条日志记录。</p>
                     * @return BatchPrefix <p>在每个日志投递批次之前添加的字符串。每个日志投递批次可能包含多条日志记录。</p>
                     * 
                     */
                    std::string GetBatchPrefix() const;

                    /**
                     * 设置<p>在每个日志投递批次之前添加的字符串。每个日志投递批次可能包含多条日志记录。</p>
                     * @param _batchPrefix <p>在每个日志投递批次之前添加的字符串。每个日志投递批次可能包含多条日志记录。</p>
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
                     * 获取<p>在每个日志投递批次后附加的字符串。</p>
                     * @return BatchSuffix <p>在每个日志投递批次后附加的字符串。</p>
                     * 
                     */
                    std::string GetBatchSuffix() const;

                    /**
                     * 设置<p>在每个日志投递批次后附加的字符串。</p>
                     * @param _batchSuffix <p>在每个日志投递批次后附加的字符串。</p>
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
                     * 获取<p>单条日志前缀，在每条日志记录之前添加的字符串。</p>
                     * @return RecordPrefix <p>单条日志前缀，在每条日志记录之前添加的字符串。</p>
                     * 
                     */
                    std::string GetRecordPrefix() const;

                    /**
                     * 设置<p>单条日志前缀，在每条日志记录之前添加的字符串。</p>
                     * @param _recordPrefix <p>单条日志前缀，在每条日志记录之前添加的字符串。</p>
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
                     * 获取<p>单条日志后缀，在每条日志记录后附加的字符串。</p>
                     * @return RecordSuffix <p>单条日志后缀，在每条日志记录后附加的字符串。</p>
                     * 
                     */
                    std::string GetRecordSuffix() const;

                    /**
                     * 设置<p>单条日志后缀，在每条日志记录后附加的字符串。</p>
                     * @param _recordSuffix <p>单条日志后缀，在每条日志记录后附加的字符串。</p>
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
                     * 获取<p>日志分隔符，插入日志记录之间作为分隔的字符串，取值有：</p><ul><li>\n：换行符；</li><li>\t：制表符；</li><li>，：半角逗号。</li></ul>
                     * @return RecordDelimiter <p>日志分隔符，插入日志记录之间作为分隔的字符串，取值有：</p><ul><li>\n：换行符；</li><li>\t：制表符；</li><li>，：半角逗号。</li></ul>
                     * 
                     */
                    std::string GetRecordDelimiter() const;

                    /**
                     * 设置<p>日志分隔符，插入日志记录之间作为分隔的字符串，取值有：</p><ul><li>\n：换行符；</li><li>\t：制表符；</li><li>，：半角逗号。</li></ul>
                     * @param _recordDelimiter <p>日志分隔符，插入日志记录之间作为分隔的字符串，取值有：</p><ul><li>\n：换行符；</li><li>\t：制表符；</li><li>，：半角逗号。</li></ul>
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
                     * 获取<p>日志模板，单条日志的输出模板，长度限制 4KB，仅当 FormatType = template 生效。支持对配置的推送字段按照模板进行自定义排版和拼接。</p>
                     * @return RecordTemplate <p>日志模板，单条日志的输出模板，长度限制 4KB，仅当 FormatType = template 生效。支持对配置的推送字段按照模板进行自定义排版和拼接。</p>
                     * 
                     */
                    std::string GetRecordTemplate() const;

                    /**
                     * 设置<p>日志模板，单条日志的输出模板，长度限制 4KB，仅当 FormatType = template 生效。支持对配置的推送字段按照模板进行自定义排版和拼接。</p>
                     * @param _recordTemplate <p>日志模板，单条日志的输出模板，长度限制 4KB，仅当 FormatType = template 生效。支持对配置的推送字段按照模板进行自定义排版和拼接。</p>
                     * 
                     */
                    void SetRecordTemplate(const std::string& _recordTemplate);

                    /**
                     * 判断参数 RecordTemplate 是否已赋值
                     * @return RecordTemplate 是否已赋值
                     * 
                     */
                    bool RecordTemplateHasBeenSet() const;

                    /**
                     * 获取<p>字段分隔符，单条日志记录内，插入字段之间作为分隔符的字符串，仅当 FormatType = csv 生效。取值有：<ul><li>\t：制表符；</li><li>，：半角逗号；</li><li>;：半角分号。</li></ul></p>
                     * @return FieldDelimiter <p>字段分隔符，单条日志记录内，插入字段之间作为分隔符的字符串，仅当 FormatType = csv 生效。取值有：<ul><li>\t：制表符；</li><li>，：半角逗号；</li><li>;：半角分号。</li></ul></p>
                     * 
                     */
                    std::string GetFieldDelimiter() const;

                    /**
                     * 设置<p>字段分隔符，单条日志记录内，插入字段之间作为分隔符的字符串，仅当 FormatType = csv 生效。取值有：<ul><li>\t：制表符；</li><li>，：半角逗号；</li><li>;：半角分号。</li></ul></p>
                     * @param _fieldDelimiter <p>字段分隔符，单条日志记录内，插入字段之间作为分隔符的字符串，仅当 FormatType = csv 生效。取值有：<ul><li>\t：制表符；</li><li>，：半角逗号；</li><li>;：半角分号。</li></ul></p>
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
                     * <p>日志输出格式，取值有：</p><ul><li>json：使用预设日志输出格式 JSON Lines，单条日志中的字段以键值对方式呈现；</li><li>csv：使用预设日志输出格式 csv，单条日志中仅呈现字段值，不呈现字段名称。</li><li>template：使用用户自定义输出模板，单条日志中支持按照自定义模板进行自定义排版和拼接，需配合 RecordTemplate 字段使用。</li></ul>
                     */
                    std::string m_formatType;
                    bool m_formatTypeHasBeenSet;

                    /**
                     * <p>在每个日志投递批次之前添加的字符串。每个日志投递批次可能包含多条日志记录。</p>
                     */
                    std::string m_batchPrefix;
                    bool m_batchPrefixHasBeenSet;

                    /**
                     * <p>在每个日志投递批次后附加的字符串。</p>
                     */
                    std::string m_batchSuffix;
                    bool m_batchSuffixHasBeenSet;

                    /**
                     * <p>单条日志前缀，在每条日志记录之前添加的字符串。</p>
                     */
                    std::string m_recordPrefix;
                    bool m_recordPrefixHasBeenSet;

                    /**
                     * <p>单条日志后缀，在每条日志记录后附加的字符串。</p>
                     */
                    std::string m_recordSuffix;
                    bool m_recordSuffixHasBeenSet;

                    /**
                     * <p>日志分隔符，插入日志记录之间作为分隔的字符串，取值有：</p><ul><li>\n：换行符；</li><li>\t：制表符；</li><li>，：半角逗号。</li></ul>
                     */
                    std::string m_recordDelimiter;
                    bool m_recordDelimiterHasBeenSet;

                    /**
                     * <p>日志模板，单条日志的输出模板，长度限制 4KB，仅当 FormatType = template 生效。支持对配置的推送字段按照模板进行自定义排版和拼接。</p>
                     */
                    std::string m_recordTemplate;
                    bool m_recordTemplateHasBeenSet;

                    /**
                     * <p>字段分隔符，单条日志记录内，插入字段之间作为分隔符的字符串，仅当 FormatType = csv 生效。取值有：<ul><li>\t：制表符；</li><li>，：半角逗号；</li><li>;：半角分号。</li></ul></p>
                     */
                    std::string m_fieldDelimiter;
                    bool m_fieldDelimiterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_LOGFORMAT_H_
