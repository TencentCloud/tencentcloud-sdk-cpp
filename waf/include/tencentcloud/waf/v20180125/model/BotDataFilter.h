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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_BOTDATAFILTER_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_BOTDATAFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 搜索框内容，冒号前面是key, 冒号是操作，值是最后一位，操作（冒号）默认是相等
                */
                class BotDataFilter : public AbstractModel
                {
                public:
                    BotDataFilter();
                    ~BotDataFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取查询维度
                     * @return Entity 查询维度
                     * 
                     */
                    std::string GetEntity() const;

                    /**
                     * 设置查询维度
                     * @param _entity 查询维度
                     * 
                     */
                    void SetEntity(const std::string& _entity);

                    /**
                     * 判断参数 Entity 是否已赋值
                     * @return Entity 是否已赋值
                     * 
                     */
                    bool EntityHasBeenSet() const;

                    /**
                     * 获取操作符
                     * @return Operator 操作符
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作符
                     * @param _operator 操作符
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
                     * 获取操作值，多个值用
                     * @return Value 操作值，多个值用
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置操作值，多个值用
                     * @param _value 操作值，多个值用
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 查询维度
                     */
                    std::string m_entity;
                    bool m_entityHasBeenSet;

                    /**
                     * 操作符
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 操作值，多个值用
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_BOTDATAFILTER_H_
