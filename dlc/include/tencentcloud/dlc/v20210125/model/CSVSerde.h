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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CSVSERDE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CSVSERDE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CSV序列化及反序列化数据结构
                */
                class CSVSerde : public AbstractModel
                {
                public:
                    CSVSerde();
                    ~CSVSerde() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CSV序列化转义符，默认为"\\"，最长8个字符，如 Escape: "/\"
                     * @return Escape CSV序列化转义符，默认为"\\"，最长8个字符，如 Escape: "/\"
                     * 
                     */
                    std::string GetEscape() const;

                    /**
                     * 设置CSV序列化转义符，默认为"\\"，最长8个字符，如 Escape: "/\"
                     * @param _escape CSV序列化转义符，默认为"\\"，最长8个字符，如 Escape: "/\"
                     * 
                     */
                    void SetEscape(const std::string& _escape);

                    /**
                     * 判断参数 Escape 是否已赋值
                     * @return Escape 是否已赋值
                     * 
                     */
                    bool EscapeHasBeenSet() const;

                    /**
                     * 获取CSV序列化字段域符，默认为"'"，最长8个字符, 如 Quote: "\""
                     * @return Quote CSV序列化字段域符，默认为"'"，最长8个字符, 如 Quote: "\""
                     * 
                     */
                    std::string GetQuote() const;

                    /**
                     * 设置CSV序列化字段域符，默认为"'"，最长8个字符, 如 Quote: "\""
                     * @param _quote CSV序列化字段域符，默认为"'"，最长8个字符, 如 Quote: "\""
                     * 
                     */
                    void SetQuote(const std::string& _quote);

                    /**
                     * 判断参数 Quote 是否已赋值
                     * @return Quote 是否已赋值
                     * 
                     */
                    bool QuoteHasBeenSet() const;

                    /**
                     * 获取CSV序列化分隔符，默认为"\t"，最长8个字符, 如 Separator: "\t"
                     * @return Separator CSV序列化分隔符，默认为"\t"，最长8个字符, 如 Separator: "\t"
                     * 
                     */
                    std::string GetSeparator() const;

                    /**
                     * 设置CSV序列化分隔符，默认为"\t"，最长8个字符, 如 Separator: "\t"
                     * @param _separator CSV序列化分隔符，默认为"\t"，最长8个字符, 如 Separator: "\t"
                     * 
                     */
                    void SetSeparator(const std::string& _separator);

                    /**
                     * 判断参数 Separator 是否已赋值
                     * @return Separator 是否已赋值
                     * 
                     */
                    bool SeparatorHasBeenSet() const;

                private:

                    /**
                     * CSV序列化转义符，默认为"\\"，最长8个字符，如 Escape: "/\"
                     */
                    std::string m_escape;
                    bool m_escapeHasBeenSet;

                    /**
                     * CSV序列化字段域符，默认为"'"，最长8个字符, 如 Quote: "\""
                     */
                    std::string m_quote;
                    bool m_quoteHasBeenSet;

                    /**
                     * CSV序列化分隔符，默认为"\t"，最长8个字符, 如 Separator: "\t"
                     */
                    std::string m_separator;
                    bool m_separatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CSVSERDE_H_
