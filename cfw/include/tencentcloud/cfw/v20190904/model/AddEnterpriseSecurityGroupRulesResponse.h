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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_ADDENTERPRISESECURITYGROUPRULESRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_ADDENTERPRISESECURITYGROUPRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/SecurityGroupSimplifyRule.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * AddEnterpriseSecurityGroupRules返回参数结构体
                */
                class AddEnterpriseSecurityGroupRulesResponse : public AbstractModel
                {
                public:
                    AddEnterpriseSecurityGroupRulesResponse();
                    ~AddEnterpriseSecurityGroupRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取状态值，0：添加成功，非0：添加失败
                     * @return Status 状态值，0：添加成功，非0：添加失败
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取添加成功的规则详情
                     * @return Rules 添加成功的规则详情
                     * 
                     */
                    std::vector<SecurityGroupSimplifyRule> GetRules() const;

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * 状态值，0：添加成功，非0：添加失败
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 添加成功的规则详情
                     */
                    std::vector<SecurityGroupSimplifyRule> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_ADDENTERPRISESECURITYGROUPRULESRESPONSE_H_
