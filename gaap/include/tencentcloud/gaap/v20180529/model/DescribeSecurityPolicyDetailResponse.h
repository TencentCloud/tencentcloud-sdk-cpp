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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBESECURITYPOLICYDETAILRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBESECURITYPOLICYDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/SecurityPolicyRuleOut.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeSecurityPolicyDetail返回参数结构体
                */
                class DescribeSecurityPolicyDetailResponse : public AbstractModel
                {
                public:
                    DescribeSecurityPolicyDetailResponse();
                    ~DescribeSecurityPolicyDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取通道ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyId 通道ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取安全策略状态：
BOUND，已开启安全策略
UNBIND，已关闭安全策略
BINDING，安全策略开启中
UNBINDING，安全策略关闭中。
                     * @return Status 安全策略状态：
BOUND，已开启安全策略
UNBIND，已关闭安全策略
BINDING，安全策略开启中
UNBINDING，安全策略关闭中。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取默认策略：ACCEPT或DROP。
                     * @return DefaultAction 默认策略：ACCEPT或DROP。
                     * 
                     */
                    std::string GetDefaultAction() const;

                    /**
                     * 判断参数 DefaultAction 是否已赋值
                     * @return DefaultAction 是否已赋值
                     * 
                     */
                    bool DefaultActionHasBeenSet() const;

                    /**
                     * 获取策略ID
                     * @return PolicyId 策略ID
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取规则列表
                     * @return RuleList 规则列表
                     * 
                     */
                    std::vector<SecurityPolicyRuleOut> GetRuleList() const;

                    /**
                     * 判断参数 RuleList 是否已赋值
                     * @return RuleList 是否已赋值
                     * 
                     */
                    bool RuleListHasBeenSet() const;

                private:

                    /**
                     * 通道ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * 安全策略状态：
BOUND，已开启安全策略
UNBIND，已关闭安全策略
BINDING，安全策略开启中
UNBINDING，安全策略关闭中。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 默认策略：ACCEPT或DROP。
                     */
                    std::string m_defaultAction;
                    bool m_defaultActionHasBeenSet;

                    /**
                     * 策略ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 规则列表
                     */
                    std::vector<SecurityPolicyRuleOut> m_ruleList;
                    bool m_ruleListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBESECURITYPOLICYDETAILRESPONSE_H_
