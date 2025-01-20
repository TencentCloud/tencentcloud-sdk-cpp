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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEPRIVATENATGATEWAYTRANSLATIONACLRULEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEPRIVATENATGATEWAYTRANSLATIONACLRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/TranslationAclRule.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreatePrivateNatGatewayTranslationAclRule请求参数结构体
                */
                class CreatePrivateNatGatewayTranslationAclRuleRequest : public AbstractModel
                {
                public:
                    CreatePrivateNatGatewayTranslationAclRuleRequest();
                    ~CreatePrivateNatGatewayTranslationAclRuleRequest() = default;
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
                     * 获取转换规则目标，可选值"LOCAL"。
                     * @return TranslationDirection 转换规则目标，可选值"LOCAL"。
                     * 
                     */
                    std::string GetTranslationDirection() const;

                    /**
                     * 设置转换规则目标，可选值"LOCAL"。
                     * @param _translationDirection 转换规则目标，可选值"LOCAL"。
                     * 
                     */
                    void SetTranslationDirection(const std::string& _translationDirection);

                    /**
                     * 判断参数 TranslationDirection 是否已赋值
                     * @return TranslationDirection 是否已赋值
                     * 
                     */
                    bool TranslationDirectionHasBeenSet() const;

                    /**
                     * 获取转换规则类型，可选值"NETWORK_LAYER","TRANSPORT_LAYER"。
                     * @return TranslationType 转换规则类型，可选值"NETWORK_LAYER","TRANSPORT_LAYER"。
                     * 
                     */
                    std::string GetTranslationType() const;

                    /**
                     * 设置转换规则类型，可选值"NETWORK_LAYER","TRANSPORT_LAYER"。
                     * @param _translationType 转换规则类型，可选值"NETWORK_LAYER","TRANSPORT_LAYER"。
                     * 
                     */
                    void SetTranslationType(const std::string& _translationType);

                    /**
                     * 判断参数 TranslationType 是否已赋值
                     * @return TranslationType 是否已赋值
                     * 
                     */
                    bool TranslationTypeHasBeenSet() const;

                    /**
                     * 获取转换`IP`,当转换规则类型为四层时为`IP`池。
                     * @return TranslationIp 转换`IP`,当转换规则类型为四层时为`IP`池。
                     * 
                     */
                    std::string GetTranslationIp() const;

                    /**
                     * 设置转换`IP`,当转换规则类型为四层时为`IP`池。
                     * @param _translationIp 转换`IP`,当转换规则类型为四层时为`IP`池。
                     * 
                     */
                    void SetTranslationIp(const std::string& _translationIp);

                    /**
                     * 判断参数 TranslationIp 是否已赋值
                     * @return TranslationIp 是否已赋值
                     * 
                     */
                    bool TranslationIpHasBeenSet() const;

                    /**
                     * 获取访问控制列表。
                     * @return TranslationAclRules 访问控制列表。
                     * 
                     */
                    std::vector<TranslationAclRule> GetTranslationAclRules() const;

                    /**
                     * 设置访问控制列表。
                     * @param _translationAclRules 访问控制列表。
                     * 
                     */
                    void SetTranslationAclRules(const std::vector<TranslationAclRule>& _translationAclRules);

                    /**
                     * 判断参数 TranslationAclRules 是否已赋值
                     * @return TranslationAclRules 是否已赋值
                     * 
                     */
                    bool TranslationAclRulesHasBeenSet() const;

                    /**
                     * 获取源`IP`,当转换规则类型为三层时有效。
                     * @return OriginalIp 源`IP`,当转换规则类型为三层时有效。
                     * 
                     */
                    std::string GetOriginalIp() const;

                    /**
                     * 设置源`IP`,当转换规则类型为三层时有效。
                     * @param _originalIp 源`IP`,当转换规则类型为三层时有效。
                     * 
                     */
                    void SetOriginalIp(const std::string& _originalIp);

                    /**
                     * 判断参数 OriginalIp 是否已赋值
                     * @return OriginalIp 是否已赋值
                     * 
                     */
                    bool OriginalIpHasBeenSet() const;

                private:

                    /**
                     * 私网网关唯一`ID`，形如：`intranat-xxxxxxxx`。
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * 转换规则目标，可选值"LOCAL"。
                     */
                    std::string m_translationDirection;
                    bool m_translationDirectionHasBeenSet;

                    /**
                     * 转换规则类型，可选值"NETWORK_LAYER","TRANSPORT_LAYER"。
                     */
                    std::string m_translationType;
                    bool m_translationTypeHasBeenSet;

                    /**
                     * 转换`IP`,当转换规则类型为四层时为`IP`池。
                     */
                    std::string m_translationIp;
                    bool m_translationIpHasBeenSet;

                    /**
                     * 访问控制列表。
                     */
                    std::vector<TranslationAclRule> m_translationAclRules;
                    bool m_translationAclRulesHasBeenSet;

                    /**
                     * 源`IP`,当转换规则类型为三层时有效。
                     */
                    std::string m_originalIp;
                    bool m_originalIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEPRIVATENATGATEWAYTRANSLATIONACLRULEREQUEST_H_
