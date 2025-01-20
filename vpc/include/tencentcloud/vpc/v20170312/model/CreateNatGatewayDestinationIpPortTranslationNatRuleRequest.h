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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATENATGATEWAYDESTINATIONIPPORTTRANSLATIONNATRULEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATENATGATEWAYDESTINATIONIPPORTTRANSLATIONNATRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/DestinationIpPortTranslationNatRule.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateNatGatewayDestinationIpPortTranslationNatRule请求参数结构体
                */
                class CreateNatGatewayDestinationIpPortTranslationNatRuleRequest : public AbstractModel
                {
                public:
                    CreateNatGatewayDestinationIpPortTranslationNatRuleRequest();
                    ~CreateNatGatewayDestinationIpPortTranslationNatRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取NAT网关的ID，形如：`nat-df45454`。
                     * @return NatGatewayId NAT网关的ID，形如：`nat-df45454`。
                     * 
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置NAT网关的ID，形如：`nat-df45454`。
                     * @param _natGatewayId NAT网关的ID，形如：`nat-df45454`。
                     * 
                     */
                    void SetNatGatewayId(const std::string& _natGatewayId);

                    /**
                     * 判断参数 NatGatewayId 是否已赋值
                     * @return NatGatewayId 是否已赋值
                     * 
                     */
                    bool NatGatewayIdHasBeenSet() const;

                    /**
                     * 获取NAT网关的端口转换规则。
                     * @return DestinationIpPortTranslationNatRules NAT网关的端口转换规则。
                     * 
                     */
                    std::vector<DestinationIpPortTranslationNatRule> GetDestinationIpPortTranslationNatRules() const;

                    /**
                     * 设置NAT网关的端口转换规则。
                     * @param _destinationIpPortTranslationNatRules NAT网关的端口转换规则。
                     * 
                     */
                    void SetDestinationIpPortTranslationNatRules(const std::vector<DestinationIpPortTranslationNatRule>& _destinationIpPortTranslationNatRules);

                    /**
                     * 判断参数 DestinationIpPortTranslationNatRules 是否已赋值
                     * @return DestinationIpPortTranslationNatRules 是否已赋值
                     * 
                     */
                    bool DestinationIpPortTranslationNatRulesHasBeenSet() const;

                private:

                    /**
                     * NAT网关的ID，形如：`nat-df45454`。
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * NAT网关的端口转换规则。
                     */
                    std::vector<DestinationIpPortTranslationNatRule> m_destinationIpPortTranslationNatRules;
                    bool m_destinationIpPortTranslationNatRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATENATGATEWAYDESTINATIONIPPORTTRANSLATIONNATRULEREQUEST_H_
