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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_DISPENSEFILTER_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_DISPENSEFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * 过滤表
                */
                class DispenseFilter : public AbstractModel
                {
                public:
                    DispenseFilter();
                    ~DispenseFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取维度名称
                     * @return Key 维度名称
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置维度名称
                     * @param _key 维度名称
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
                     * 获取维度值列表
                     * @return Values 维度值列表
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置维度值列表
                     * @param _values 维度值列表
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取表示式
                     * @return Expression 表示式
                     * 
                     */
                    std::string GetExpression() const;

                    /**
                     * 设置表示式
                     * @param _expression 表示式
                     * 
                     */
                    void SetExpression(const std::string& _expression);

                    /**
                     * 判断参数 Expression 是否已赋值
                     * @return Expression 是否已赋值
                     * 
                     */
                    bool ExpressionHasBeenSet() const;

                private:

                    /**
                     * 维度名称
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 维度值列表
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * 表示式
                     */
                    std::string m_expression;
                    bool m_expressionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_DISPENSEFILTER_H_
