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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_ROWPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_ROWPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 数据处理ROW输出格式配置
                */
                class RowParam : public AbstractModel
                {
                public:
                    RowParam();
                    ~RowParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取行内容，KEY_VALUE，VALUE
                     * @return RowContent 行内容，KEY_VALUE，VALUE
                     * 
                     */
                    std::string GetRowContent() const;

                    /**
                     * 设置行内容，KEY_VALUE，VALUE
                     * @param _rowContent 行内容，KEY_VALUE，VALUE
                     * 
                     */
                    void SetRowContent(const std::string& _rowContent);

                    /**
                     * 判断参数 RowContent 是否已赋值
                     * @return RowContent 是否已赋值
                     * 
                     */
                    bool RowContentHasBeenSet() const;

                    /**
                     * 获取key和value间的分隔符
                     * @return KeyValueDelimiter key和value间的分隔符
                     * 
                     */
                    std::string GetKeyValueDelimiter() const;

                    /**
                     * 设置key和value间的分隔符
                     * @param _keyValueDelimiter key和value间的分隔符
                     * 
                     */
                    void SetKeyValueDelimiter(const std::string& _keyValueDelimiter);

                    /**
                     * 判断参数 KeyValueDelimiter 是否已赋值
                     * @return KeyValueDelimiter 是否已赋值
                     * 
                     */
                    bool KeyValueDelimiterHasBeenSet() const;

                    /**
                     * 获取元素建的分隔符
                     * @return EntryDelimiter 元素建的分隔符
                     * 
                     */
                    std::string GetEntryDelimiter() const;

                    /**
                     * 设置元素建的分隔符
                     * @param _entryDelimiter 元素建的分隔符
                     * 
                     */
                    void SetEntryDelimiter(const std::string& _entryDelimiter);

                    /**
                     * 判断参数 EntryDelimiter 是否已赋值
                     * @return EntryDelimiter 是否已赋值
                     * 
                     */
                    bool EntryDelimiterHasBeenSet() const;

                private:

                    /**
                     * 行内容，KEY_VALUE，VALUE
                     */
                    std::string m_rowContent;
                    bool m_rowContentHasBeenSet;

                    /**
                     * key和value间的分隔符
                     */
                    std::string m_keyValueDelimiter;
                    bool m_keyValueDelimiterHasBeenSet;

                    /**
                     * 元素建的分隔符
                     */
                    std::string m_entryDelimiter;
                    bool m_entryDelimiterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ROWPARAM_H_
