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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPCONDITION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPCONDITION_H_

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
                * 回源配置的条件参数
                */
                class OriginGroupCondition : public AbstractModel
                {
                public:
                    OriginGroupCondition();
                    ~OriginGroupCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取匹配类型，取值有：
<li>url：当前站点下匹配URL路径的请求，例如：/example 或 /example/foo.jpg。支持*表示通配符，支持?表示匹配一个字符。
</li>
                     * @return Target 匹配类型，取值有：
<li>url：当前站点下匹配URL路径的请求，例如：/example 或 /example/foo.jpg。支持*表示通配符，支持?表示匹配一个字符。
</li>
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置匹配类型，取值有：
<li>url：当前站点下匹配URL路径的请求，例如：/example 或 /example/foo.jpg。支持*表示通配符，支持?表示匹配一个字符。
</li>
                     * @param Target 匹配类型，取值有：
<li>url：当前站点下匹配URL路径的请求，例如：/example 或 /example/foo.jpg。支持*表示通配符，支持?表示匹配一个字符。
</li>
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取运算符，取值有：
<li>equal：等于。</li>
                     * @return Operator 运算符，取值有：
<li>equal：等于。</li>
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置运算符，取值有：
<li>equal：等于。</li>
                     * @param Operator 运算符，取值有：
<li>equal：等于。</li>
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取对应匹配类型的取值。
                     * @return Values 对应匹配类型的取值。
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置对应匹配类型的取值。
                     * @param Values 对应匹配类型的取值。
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * 匹配类型，取值有：
<li>url：当前站点下匹配URL路径的请求，例如：/example 或 /example/foo.jpg。支持*表示通配符，支持?表示匹配一个字符。
</li>
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * 运算符，取值有：
<li>equal：等于。</li>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 对应匹配类型的取值。
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPCONDITION_H_
