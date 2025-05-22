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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_MIDQUERYCONDITION_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_MIDQUERYCONDITION_H_

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
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeMidDimensionValueList的查询条件
                */
                class MidQueryCondition : public AbstractModel
                {
                public:
                    MidQueryCondition();
                    ~MidQueryCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取维度
                     * @return Key 维度
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置维度
                     * @param _key 维度
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
                     * 获取操作符，支持=、in
                     * @return Operator 操作符，支持=、in
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作符，支持=、in
                     * @param _operator 操作符，支持=、in
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取维度值，当Op是=时，只使用第一个元素
                     * @return Value 维度值，当Op是=时，只使用第一个元素
                     * 
                     */
                    std::vector<std::string> GetValue() const;

                    /**
                     * 设置维度值，当Op是=时，只使用第一个元素
                     * @param _value 维度值，当Op是=时，只使用第一个元素
                     * 
                     */
                    void SetValue(const std::vector<std::string>& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 维度
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 操作符，支持=、in
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 维度值，当Op是=时，只使用第一个元素
                     */
                    std::vector<std::string> m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MIDQUERYCONDITION_H_
