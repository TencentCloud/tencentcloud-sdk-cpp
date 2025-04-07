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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_HIGHLIGHTITEM_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_HIGHLIGHTITEM_H_

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
                * 符合检索条件的关键词，一般用于高亮显示。仅支持键值检索，不支持全文检索
                */
                class HighLightItem : public AbstractModel
                {
                public:
                    HighLightItem();
                    ~HighLightItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取高亮的日志字段名称
                     * @return Key 高亮的日志字段名称
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置高亮的日志字段名称
                     * @param _key 高亮的日志字段名称
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取高亮的关键词
                     * @return Values 高亮的关键词
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置高亮的关键词
                     * @param _values 高亮的关键词
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * 高亮的日志字段名称
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 高亮的关键词
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_HIGHLIGHTITEM_H_
