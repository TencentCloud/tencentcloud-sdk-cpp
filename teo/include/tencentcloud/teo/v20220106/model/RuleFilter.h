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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_RULEFILTER_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_RULEFILTER_H_

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
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 规则查询 Filter
                */
                class RuleFilter : public AbstractModel
                {
                public:
                    RuleFilter();
                    ~RuleFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过滤参数，取值有：
<li> RULE_ID：规则 ID。 </li>
                     * @return Name 过滤参数，取值有：
<li> RULE_ID：规则 ID。 </li>
                     */
                    std::string GetName() const;

                    /**
                     * 设置过滤参数，取值有：
<li> RULE_ID：规则 ID。 </li>
                     * @param Name 过滤参数，取值有：
<li> RULE_ID：规则 ID。 </li>
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取参数值。
                     * @return Values 参数值。
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置参数值。
                     * @param Values 参数值。
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * 过滤参数，取值有：
<li> RULE_ID：规则 ID。 </li>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 参数值。
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_RULEFILTER_H_
