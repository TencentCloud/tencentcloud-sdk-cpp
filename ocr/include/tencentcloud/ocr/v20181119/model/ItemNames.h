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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_ITEMNAMES_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_ITEMNAMES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 自定义抽取需要的字段名称、字段类型、字段提示词。
                */
                class ItemNames : public AbstractModel
                {
                public:
                    ItemNames();
                    ~ItemNames() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义抽取功能需返回的字段名称。
                     * @return KeyName 自定义抽取功能需返回的字段名称。
                     * 
                     */
                    std::string GetKeyName() const;

                    /**
                     * 设置自定义抽取功能需返回的字段名称。
                     * @param _keyName 自定义抽取功能需返回的字段名称。
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
                     * 获取默认 0；0表示kv对  1表示 表格字段。

                     * @return KeyType 默认 0；0表示kv对  1表示 表格字段。

                     * 
                     */
                    int64_t GetKeyType() const;

                    /**
                     * 设置默认 0；0表示kv对  1表示 表格字段。

                     * @param _keyType 默认 0；0表示kv对  1表示 表格字段。

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
                     * 获取抽取字段的描述内容。

                     * @return KeyPrompt 抽取字段的描述内容。

                     * 
                     */
                    std::string GetKeyPrompt() const;

                    /**
                     * 设置抽取字段的描述内容。

                     * @param _keyPrompt 抽取字段的描述内容。

                     * 
                     */
                    void SetKeyPrompt(const std::string& _keyPrompt);

                    /**
                     * 判断参数 KeyPrompt 是否已赋值
                     * @return KeyPrompt 是否已赋值
                     * 
                     */
                    bool KeyPromptHasBeenSet() const;

                private:

                    /**
                     * 自定义抽取功能需返回的字段名称。
                     */
                    std::string m_keyName;
                    bool m_keyNameHasBeenSet;

                    /**
                     * 默认 0；0表示kv对  1表示 表格字段。

                     */
                    int64_t m_keyType;
                    bool m_keyTypeHasBeenSet;

                    /**
                     * 抽取字段的描述内容。

                     */
                    std::string m_keyPrompt;
                    bool m_keyPromptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ITEMNAMES_H_
