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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RULEANDCONDITIONS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RULEANDCONDITIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/RuleCondition.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 规则引擎条件且关系条件列表
                */
                class RuleAndConditions : public AbstractModel
                {
                public:
                    RuleAndConditions();
                    ~RuleAndConditions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则引擎条件，该数组内所有项全部满足即判断该条件满足。
                     * @return Conditions 规则引擎条件，该数组内所有项全部满足即判断该条件满足。
                     * 
                     */
                    std::vector<RuleCondition> GetConditions() const;

                    /**
                     * 设置规则引擎条件，该数组内所有项全部满足即判断该条件满足。
                     * @param _conditions 规则引擎条件，该数组内所有项全部满足即判断该条件满足。
                     * 
                     */
                    void SetConditions(const std::vector<RuleCondition>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                private:

                    /**
                     * 规则引擎条件，该数组内所有项全部满足即判断该条件满足。
                     */
                    std::vector<RuleCondition> m_conditions;
                    bool m_conditionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULEANDCONDITIONS_H_
