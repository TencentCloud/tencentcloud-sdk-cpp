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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_QUERYCONDITION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_QUERYCONDITION_H_

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
                * 查询条件
                */
                class QueryCondition : public AbstractModel
                {
                public:
                    QueryCondition();
                    ~QueryCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>筛选条件的key。</p>
                     * @return Key <p>筛选条件的key。</p>
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>筛选条件的key。</p>
                     * @param _key <p>筛选条件的key。</p>
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
                     * 获取<p>查询条件操作符，操作类型有：</p><li>equals: 等于；</li><li>notEquals: 不等于；</li><li>include: 包含；</li><li>notInclude: 不包含; </li><li>startWith: 开始的值是value；</li><li>notStartWith: 不以value的值开始；</li><li>endWith: 结尾是value值；</li><li>notEndWith: 不以value的值结尾。</li>
                     * @return Operator <p>查询条件操作符，操作类型有：</p><li>equals: 等于；</li><li>notEquals: 不等于；</li><li>include: 包含；</li><li>notInclude: 不包含; </li><li>startWith: 开始的值是value；</li><li>notStartWith: 不以value的值开始；</li><li>endWith: 结尾是value值；</li><li>notEndWith: 不以value的值结尾。</li>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置<p>查询条件操作符，操作类型有：</p><li>equals: 等于；</li><li>notEquals: 不等于；</li><li>include: 包含；</li><li>notInclude: 不包含; </li><li>startWith: 开始的值是value；</li><li>notStartWith: 不以value的值开始；</li><li>endWith: 结尾是value值；</li><li>notEndWith: 不以value的值结尾。</li>
                     * @param _operator <p>查询条件操作符，操作类型有：</p><li>equals: 等于；</li><li>notEquals: 不等于；</li><li>include: 包含；</li><li>notInclude: 不包含; </li><li>startWith: 开始的值是value；</li><li>notStartWith: 不以value的值开始；</li><li>endWith: 结尾是value值；</li><li>notEndWith: 不以value的值结尾。</li>
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
                     * 获取<p>筛选条件的值。</p>
                     * @return Value <p>筛选条件的值。</p>
                     * 
                     */
                    std::vector<std::string> GetValue() const;

                    /**
                     * 设置<p>筛选条件的值。</p>
                     * @param _value <p>筛选条件的值。</p>
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
                     * <p>筛选条件的key。</p>
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>查询条件操作符，操作类型有：</p><li>equals: 等于；</li><li>notEquals: 不等于；</li><li>include: 包含；</li><li>notInclude: 不包含; </li><li>startWith: 开始的值是value；</li><li>notStartWith: 不以value的值开始；</li><li>endWith: 结尾是value值；</li><li>notEndWith: 不以value的值结尾。</li>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>筛选条件的值。</p>
                     */
                    std::vector<std::string> m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_QUERYCONDITION_H_
