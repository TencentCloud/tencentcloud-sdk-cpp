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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_FILTER_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_FILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 列表通用过滤条件（多个 Filter 之间为 AND 关系，同一 Filter 的多个 value_list 为 OR 关系）
                */
                class Filter : public AbstractModel
                {
                public:
                    Filter();
                    ~Filter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过滤字段名
                     * @return Name 过滤字段名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置过滤字段名
                     * @param _name 过滤字段名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取操作符，默认 IN（向后兼容）<table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>FILTER_OPERATOR_IN</td><td>0</td><td>属于 value_list（默认值，向后兼容；value_list 不可为空）</td></tr><tr><td>FILTER_OPERATOR_NOT_IN</td><td>1</td><td>不属于 value_list（value_list 不可为空）</td></tr></table>
                     * @return Operator 操作符，默认 IN（向后兼容）<table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>FILTER_OPERATOR_IN</td><td>0</td><td>属于 value_list（默认值，向后兼容；value_list 不可为空）</td></tr><tr><td>FILTER_OPERATOR_NOT_IN</td><td>1</td><td>不属于 value_list（value_list 不可为空）</td></tr></table>
                     * 
                     */
                    int64_t GetOperator() const;

                    /**
                     * 设置操作符，默认 IN（向后兼容）<table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>FILTER_OPERATOR_IN</td><td>0</td><td>属于 value_list（默认值，向后兼容；value_list 不可为空）</td></tr><tr><td>FILTER_OPERATOR_NOT_IN</td><td>1</td><td>不属于 value_list（value_list 不可为空）</td></tr></table>
                     * @param _operator 操作符，默认 IN（向后兼容）<table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>FILTER_OPERATOR_IN</td><td>0</td><td>属于 value_list（默认值，向后兼容；value_list 不可为空）</td></tr><tr><td>FILTER_OPERATOR_NOT_IN</td><td>1</td><td>不属于 value_list（value_list 不可为空）</td></tr></table>
                     * 
                     */
                    void SetOperator(const int64_t& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取过滤值数组
                     * @return ValueList 过滤值数组
                     * 
                     */
                    std::vector<std::string> GetValueList() const;

                    /**
                     * 设置过滤值数组
                     * @param _valueList 过滤值数组
                     * 
                     */
                    void SetValueList(const std::vector<std::string>& _valueList);

                    /**
                     * 判断参数 ValueList 是否已赋值
                     * @return ValueList 是否已赋值
                     * 
                     */
                    bool ValueListHasBeenSet() const;

                private:

                    /**
                     * 过滤字段名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 操作符，默认 IN（向后兼容）<table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>FILTER_OPERATOR_IN</td><td>0</td><td>属于 value_list（默认值，向后兼容；value_list 不可为空）</td></tr><tr><td>FILTER_OPERATOR_NOT_IN</td><td>1</td><td>不属于 value_list（value_list 不可为空）</td></tr></table>
                     */
                    int64_t m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 过滤值数组
                     */
                    std::vector<std::string> m_valueList;
                    bool m_valueListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_FILTER_H_
