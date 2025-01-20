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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEPRIVATENATGATEWAYDESTINATIONIPPORTTRANSLATIONNATRULEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEPRIVATENATGATEWAYDESTINATIONIPPORTTRANSLATIONNATRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/LocalDestinationIpPortTranslationNatRule.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreatePrivateNatGatewayDestinationIpPortTranslationNatRule请求参数结构体
                */
                class CreatePrivateNatGatewayDestinationIpPortTranslationNatRuleRequest : public AbstractModel
                {
                public:
                    CreatePrivateNatGatewayDestinationIpPortTranslationNatRuleRequest();
                    ~CreatePrivateNatGatewayDestinationIpPortTranslationNatRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取私网网关唯一`ID`，形如：`intranat-xxxxxxxx`。
                     * @return NatGatewayId 私网网关唯一`ID`，形如：`intranat-xxxxxxxx`。
                     * 
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置私网网关唯一`ID`，形如：`intranat-xxxxxxxx`。
                     * @param _natGatewayId 私网网关唯一`ID`，形如：`intranat-xxxxxxxx`。
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
                     * 获取目的端口转换规则列表。
                     * @return LocalDestinationIpPortTranslationNatRules 目的端口转换规则列表。
                     * 
                     */
                    std::vector<LocalDestinationIpPortTranslationNatRule> GetLocalDestinationIpPortTranslationNatRules() const;

                    /**
                     * 设置目的端口转换规则列表。
                     * @param _localDestinationIpPortTranslationNatRules 目的端口转换规则列表。
                     * 
                     */
                    void SetLocalDestinationIpPortTranslationNatRules(const std::vector<LocalDestinationIpPortTranslationNatRule>& _localDestinationIpPortTranslationNatRules);

                    /**
                     * 判断参数 LocalDestinationIpPortTranslationNatRules 是否已赋值
                     * @return LocalDestinationIpPortTranslationNatRules 是否已赋值
                     * 
                     */
                    bool LocalDestinationIpPortTranslationNatRulesHasBeenSet() const;

                private:

                    /**
                     * 私网网关唯一`ID`，形如：`intranat-xxxxxxxx`。
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * 目的端口转换规则列表。
                     */
                    std::vector<LocalDestinationIpPortTranslationNatRule> m_localDestinationIpPortTranslationNatRules;
                    bool m_localDestinationIpPortTranslationNatRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEPRIVATENATGATEWAYDESTINATIONIPPORTTRANSLATIONNATRULEREQUEST_H_
