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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYL7ACCRULEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYL7ACCRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/RuleEngineItem.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyL7AccRule请求参数结构体
                */
                class ModifyL7AccRuleRequest : public AbstractModel
                {
                public:
                    ModifyL7AccRuleRequest();
                    ~ModifyL7AccRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID。
                     * @return ZoneId 站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
                     * @param _zoneId 站点 ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取需要修改的规则。您可以先通过 DescribeL7AccRules 接口来获取需要修改的规则的 Ruleid，然后传入修改后的规则内容，原规则内容会被覆盖式更新。
                     * @return Rule 需要修改的规则。您可以先通过 DescribeL7AccRules 接口来获取需要修改的规则的 Ruleid，然后传入修改后的规则内容，原规则内容会被覆盖式更新。
                     * 
                     */
                    RuleEngineItem GetRule() const;

                    /**
                     * 设置需要修改的规则。您可以先通过 DescribeL7AccRules 接口来获取需要修改的规则的 Ruleid，然后传入修改后的规则内容，原规则内容会被覆盖式更新。
                     * @param _rule 需要修改的规则。您可以先通过 DescribeL7AccRules 接口来获取需要修改的规则的 Ruleid，然后传入修改后的规则内容，原规则内容会被覆盖式更新。
                     * 
                     */
                    void SetRule(const RuleEngineItem& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 需要修改的规则。您可以先通过 DescribeL7AccRules 接口来获取需要修改的规则的 Ruleid，然后传入修改后的规则内容，原规则内容会被覆盖式更新。
                     */
                    RuleEngineItem m_rule;
                    bool m_ruleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYL7ACCRULEREQUEST_H_
