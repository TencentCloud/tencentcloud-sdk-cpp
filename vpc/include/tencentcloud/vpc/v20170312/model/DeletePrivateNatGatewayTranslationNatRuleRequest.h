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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETEPRIVATENATGATEWAYTRANSLATIONNATRULEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETEPRIVATENATGATEWAYTRANSLATIONNATRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/TranslationNatRule.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DeletePrivateNatGatewayTranslationNatRule请求参数结构体
                */
                class DeletePrivateNatGatewayTranslationNatRuleRequest : public AbstractModel
                {
                public:
                    DeletePrivateNatGatewayTranslationNatRuleRequest();
                    ~DeletePrivateNatGatewayTranslationNatRuleRequest() = default;
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
                     * 获取转换规则对象数组。
                     * @return TranslationNatRules 转换规则对象数组。
                     * 
                     */
                    std::vector<TranslationNatRule> GetTranslationNatRules() const;

                    /**
                     * 设置转换规则对象数组。
                     * @param _translationNatRules 转换规则对象数组。
                     * 
                     */
                    void SetTranslationNatRules(const std::vector<TranslationNatRule>& _translationNatRules);

                    /**
                     * 判断参数 TranslationNatRules 是否已赋值
                     * @return TranslationNatRules 是否已赋值
                     * 
                     */
                    bool TranslationNatRulesHasBeenSet() const;

                    /**
                     * 获取跨域参数，当VPC为跨域时填写为True。
                     * @return CrossDomain 跨域参数，当VPC为跨域时填写为True。
                     * 
                     */
                    bool GetCrossDomain() const;

                    /**
                     * 设置跨域参数，当VPC为跨域时填写为True。
                     * @param _crossDomain 跨域参数，当VPC为跨域时填写为True。
                     * 
                     */
                    void SetCrossDomain(const bool& _crossDomain);

                    /**
                     * 判断参数 CrossDomain 是否已赋值
                     * @return CrossDomain 是否已赋值
                     * 
                     */
                    bool CrossDomainHasBeenSet() const;

                private:

                    /**
                     * 私网网关唯一`ID`，形如：`intranat-xxxxxxxx`。
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * 转换规则对象数组。
                     */
                    std::vector<TranslationNatRule> m_translationNatRules;
                    bool m_translationNatRulesHasBeenSet;

                    /**
                     * 跨域参数，当VPC为跨域时填写为True。
                     */
                    bool m_crossDomain;
                    bool m_crossDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETEPRIVATENATGATEWAYTRANSLATIONNATRULEREQUEST_H_
