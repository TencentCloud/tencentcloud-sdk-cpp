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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CSVINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CSVINFO_H_

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
                * csv内容描述
                */
                class CsvInfo : public AbstractModel
                {
                public:
                    CsvInfo();
                    ~CsvInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取csv首行是否打印key
                     * @return PrintKey csv首行是否打印key
                     * 
                     */
                    bool GetPrintKey() const;

                    /**
                     * 设置csv首行是否打印key
                     * @param _printKey csv首行是否打印key
                     * 
                     */
                    void SetPrintKey(const bool& _printKey);

                    /**
                     * 判断参数 PrintKey 是否已赋值
                     * @return PrintKey 是否已赋值
                     * 
                     */
                    bool PrintKeyHasBeenSet() const;

                    /**
                     * 获取每列key的名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Keys 每列key的名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetKeys() const;

                    /**
                     * 设置每列key的名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keys 每列key的名字
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
                     * 获取各字段间的分隔符
                     * @return Delimiter 各字段间的分隔符
                     * 
                     */
                    std::string GetDelimiter() const;

                    /**
                     * 设置各字段间的分隔符
                     * @param _delimiter 各字段间的分隔符
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
                     * 获取若字段内容中包含分隔符，则使用该转义符包裹改字段，只能填写单引号、双引号、空字符串
                     * @return EscapeChar 若字段内容中包含分隔符，则使用该转义符包裹改字段，只能填写单引号、双引号、空字符串
                     * 
                     */
                    std::string GetEscapeChar() const;

                    /**
                     * 设置若字段内容中包含分隔符，则使用该转义符包裹改字段，只能填写单引号、双引号、空字符串
                     * @param _escapeChar 若字段内容中包含分隔符，则使用该转义符包裹改字段，只能填写单引号、双引号、空字符串
                     * 
                     */
                    void SetEscapeChar(const std::string& _escapeChar);

                    /**
                     * 判断参数 EscapeChar 是否已赋值
                     * @return EscapeChar 是否已赋值
                     * 
                     */
                    bool EscapeCharHasBeenSet() const;

                    /**
                     * 获取对于上面指定的不存在字段使用该内容填充
                     * @return NonExistingField 对于上面指定的不存在字段使用该内容填充
                     * 
                     */
                    std::string GetNonExistingField() const;

                    /**
                     * 设置对于上面指定的不存在字段使用该内容填充
                     * @param _nonExistingField 对于上面指定的不存在字段使用该内容填充
                     * 
                     */
                    void SetNonExistingField(const std::string& _nonExistingField);

                    /**
                     * 判断参数 NonExistingField 是否已赋值
                     * @return NonExistingField 是否已赋值
                     * 
                     */
                    bool NonExistingFieldHasBeenSet() const;

                private:

                    /**
                     * csv首行是否打印key
                     */
                    bool m_printKey;
                    bool m_printKeyHasBeenSet;

                    /**
                     * 每列key的名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * 各字段间的分隔符
                     */
                    std::string m_delimiter;
                    bool m_delimiterHasBeenSet;

                    /**
                     * 若字段内容中包含分隔符，则使用该转义符包裹改字段，只能填写单引号、双引号、空字符串
                     */
                    std::string m_escapeChar;
                    bool m_escapeCharHasBeenSet;

                    /**
                     * 对于上面指定的不存在字段使用该内容填充
                     */
                    std::string m_nonExistingField;
                    bool m_nonExistingFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CSVINFO_H_
