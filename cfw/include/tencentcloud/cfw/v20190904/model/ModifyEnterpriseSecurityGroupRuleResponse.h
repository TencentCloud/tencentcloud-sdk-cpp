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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYENTERPRISESECURITYGROUPRULERESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYENTERPRISESECURITYGROUPRULERESPONSE_H_

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
                * ModifyEnterpriseSecurityGroupRule返回参数结构体
                */
                class ModifyEnterpriseSecurityGroupRuleResponse : public AbstractModel
                {
                public:
                    ModifyEnterpriseSecurityGroupRuleResponse();
                    ~ModifyEnterpriseSecurityGroupRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取ModifyType=0/1 返回规则 ID；ModifyType=2 回显请求中的 RuleUuid。
                     * @return NewRuleUuid ModifyType=0/1 返回规则 ID；ModifyType=2 回显请求中的 RuleUuid。
                     * 
                     */
                    uint64_t GetNewRuleUuid() const;

                    /**
                     * 判断参数 NewRuleUuid 是否已赋值
                     * @return NewRuleUuid 是否已赋值
                     * 
                     */
                    bool NewRuleUuidHasBeenSet() const;

                    /**
                     * 获取处理状态：0 表示成功。
                     * @return Status 处理状态：0 表示成功。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * ModifyType=0/1 返回规则 ID；ModifyType=2 回显请求中的 RuleUuid。
                     */
                    uint64_t m_newRuleUuid;
                    bool m_newRuleUuidHasBeenSet;

                    /**
                     * 处理状态：0 表示成功。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYENTERPRISESECURITYGROUPRULERESPONSE_H_
