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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_REMOVEENTERPRISESECURITYGROUPRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_REMOVEENTERPRISESECURITYGROUPRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * RemoveEnterpriseSecurityGroupRule请求参数结构体
                */
                class RemoveEnterpriseSecurityGroupRuleRequest : public AbstractModel
                {
                public:
                    RemoveEnterpriseSecurityGroupRuleRequest();
                    ~RemoveEnterpriseSecurityGroupRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则的uuid，可通过查询规则列表获取
                     * @return RuleUuid 规则的uuid，可通过查询规则列表获取
                     * 
                     */
                    int64_t GetRuleUuid() const;

                    /**
                     * 设置规则的uuid，可通过查询规则列表获取
                     * @param _ruleUuid 规则的uuid，可通过查询规则列表获取
                     * 
                     */
                    void SetRuleUuid(const int64_t& _ruleUuid);

                    /**
                     * 判断参数 RuleUuid 是否已赋值
                     * @return RuleUuid 是否已赋值
                     * 
                     */
                    bool RuleUuidHasBeenSet() const;

                    /**
                     * 获取删除类型，0是单条删除，RuleUuid填写删除规则id，1为全部删除，RuleUuid填0即可
                     * @return RemoveType 删除类型，0是单条删除，RuleUuid填写删除规则id，1为全部删除，RuleUuid填0即可
                     * 
                     */
                    int64_t GetRemoveType() const;

                    /**
                     * 设置删除类型，0是单条删除，RuleUuid填写删除规则id，1为全部删除，RuleUuid填0即可
                     * @param _removeType 删除类型，0是单条删除，RuleUuid填写删除规则id，1为全部删除，RuleUuid填0即可
                     * 
                     */
                    void SetRemoveType(const int64_t& _removeType);

                    /**
                     * 判断参数 RemoveType 是否已赋值
                     * @return RemoveType 是否已赋值
                     * 
                     */
                    bool RemoveTypeHasBeenSet() const;

                private:

                    /**
                     * 规则的uuid，可通过查询规则列表获取
                     */
                    int64_t m_ruleUuid;
                    bool m_ruleUuidHasBeenSet;

                    /**
                     * 删除类型，0是单条删除，RuleUuid填写删除规则id，1为全部删除，RuleUuid填0即可
                     */
                    int64_t m_removeType;
                    bool m_removeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_REMOVEENTERPRISESECURITYGROUPRULEREQUEST_H_
