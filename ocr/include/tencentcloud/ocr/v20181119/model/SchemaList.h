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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_SCHEMALIST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_SCHEMALIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/SchemaList.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 描述用户提供的出参结构的模板
                */
                class SchemaList : public AbstractModel
                {
                public:
                    SchemaList();
                    ~SchemaList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>自定义需提取的字段名称。注：若需提取多个字段，可定义多个KeyName。</p>
                     * @return KeyName <p>自定义需提取的字段名称。注：若需提取多个字段，可定义多个KeyName。</p>
                     * 
                     */
                    std::string GetKeyName() const;

                    /**
                     * 设置<p>自定义需提取的字段名称。注：若需提取多个字段，可定义多个KeyName。</p>
                     * @param _keyName <p>自定义需提取的字段名称。注：若需提取多个字段，可定义多个KeyName。</p>
                     * 
                     */
                    void SetKeyName(const std::string& _keyName);

                    /**
                     * 判断参数 KeyName 是否已赋值
                     * @return KeyName 是否已赋值
                     * 
                     */
                    bool KeyNameHasBeenSet() const;

                    /**
                     * 获取<p>字段类型。</p><p>枚举值：</p><ul><li>0： 表示KeyName为简单字段（如姓名、性别等）。</li><li>1： 表示KeyName为数组对象（如工作经历、教育经历列表）。</li></ul>
                     * @return KeyType <p>字段类型。</p><p>枚举值：</p><ul><li>0： 表示KeyName为简单字段（如姓名、性别等）。</li><li>1： 表示KeyName为数组对象（如工作经历、教育经历列表）。</li></ul>
                     * 
                     */
                    int64_t GetKeyType() const;

                    /**
                     * 设置<p>字段类型。</p><p>枚举值：</p><ul><li>0： 表示KeyName为简单字段（如姓名、性别等）。</li><li>1： 表示KeyName为数组对象（如工作经历、教育经历列表）。</li></ul>
                     * @param _keyType <p>字段类型。</p><p>枚举值：</p><ul><li>0： 表示KeyName为简单字段（如姓名、性别等）。</li><li>1： 表示KeyName为数组对象（如工作经历、教育经历列表）。</li></ul>
                     * 
                     */
                    void SetKeyType(const int64_t& _keyType);

                    /**
                     * 判断参数 KeyType 是否已赋值
                     * @return KeyType 是否已赋值
                     * 
                     */
                    bool KeyTypeHasBeenSet() const;

                    /**
                     * 获取<p>补充提取字段的描述。</p>
                     * @return KeyPrompt <p>补充提取字段的描述。</p>
                     * 
                     */
                    std::string GetKeyPrompt() const;

                    /**
                     * 设置<p>补充提取字段的描述。</p>
                     * @param _keyPrompt <p>补充提取字段的描述。</p>
                     * 
                     */
                    void SetKeyPrompt(const std::string& _keyPrompt);

                    /**
                     * 判断参数 KeyPrompt 是否已赋值
                     * @return KeyPrompt 是否已赋值
                     * 
                     */
                    bool KeyPromptHasBeenSet() const;

                    /**
                     * 获取<p>嵌套SchemaList结构，最多支持嵌套三层。注：仅当KeyType=1时生效。</p>
                     * @return SubItems <p>嵌套SchemaList结构，最多支持嵌套三层。注：仅当KeyType=1时生效。</p>
                     * 
                     */
                    std::vector<SchemaList> GetSubItems() const;

                    /**
                     * 设置<p>嵌套SchemaList结构，最多支持嵌套三层。注：仅当KeyType=1时生效。</p>
                     * @param _subItems <p>嵌套SchemaList结构，最多支持嵌套三层。注：仅当KeyType=1时生效。</p>
                     * 
                     */
                    void SetSubItems(const std::vector<SchemaList>& _subItems);

                    /**
                     * 判断参数 SubItems 是否已赋值
                     * @return SubItems 是否已赋值
                     * 
                     */
                    bool SubItemsHasBeenSet() const;

                private:

                    /**
                     * <p>自定义需提取的字段名称。注：若需提取多个字段，可定义多个KeyName。</p>
                     */
                    std::string m_keyName;
                    bool m_keyNameHasBeenSet;

                    /**
                     * <p>字段类型。</p><p>枚举值：</p><ul><li>0： 表示KeyName为简单字段（如姓名、性别等）。</li><li>1： 表示KeyName为数组对象（如工作经历、教育经历列表）。</li></ul>
                     */
                    int64_t m_keyType;
                    bool m_keyTypeHasBeenSet;

                    /**
                     * <p>补充提取字段的描述。</p>
                     */
                    std::string m_keyPrompt;
                    bool m_keyPromptHasBeenSet;

                    /**
                     * <p>嵌套SchemaList结构，最多支持嵌套三层。注：仅当KeyType=1时生效。</p>
                     */
                    std::vector<SchemaList> m_subItems;
                    bool m_subItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_SCHEMALIST_H_
