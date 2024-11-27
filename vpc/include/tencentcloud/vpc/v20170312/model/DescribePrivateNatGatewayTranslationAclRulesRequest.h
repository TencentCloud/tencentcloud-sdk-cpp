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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEPRIVATENATGATEWAYTRANSLATIONACLRULESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEPRIVATENATGATEWAYTRANSLATIONACLRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribePrivateNatGatewayTranslationAclRules请求参数结构体
                */
                class DescribePrivateNatGatewayTranslationAclRulesRequest : public AbstractModel
                {
                public:
                    DescribePrivateNatGatewayTranslationAclRulesRequest();
                    ~DescribePrivateNatGatewayTranslationAclRulesRequest() = default;
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

                    /**
                     * 获取偏移量。默认值为0。
                     * @return Offset 偏移量。默认值为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量。默认值为0。
                     * @param _offset 偏移量。默认值为0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数目，默认值为20。
                     * @return Limit 返回数目，默认值为20。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数目，默认值为20。
                     * @param _limit 返回数目，默认值为20。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取ACL规则描述
                     * @return Description ACL规则描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置ACL规则描述
                     * @param _description ACL规则描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

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
                     * 源`IP`,当转换规则类型为三层时有效。
                     */
                    std::string m_originalIp;
                    bool m_originalIpHasBeenSet;

                    /**
                     * 偏移量。默认值为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数目，默认值为20。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * ACL规则描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEPRIVATENATGATEWAYTRANSLATIONACLRULESREQUEST_H_
