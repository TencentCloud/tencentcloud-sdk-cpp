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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SOURCEIPTRANSLATIONNATRULE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SOURCEIPTRANSLATIONNATRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * NAT的SNAT规则
                */
                class SourceIpTranslationNatRule : public AbstractModel
                {
                public:
                    SourceIpTranslationNatRule();
                    ~SourceIpTranslationNatRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源ID，如果ResourceType为USERDEFINED，可以为空字符串
                     * @return ResourceId 资源ID，如果ResourceType为USERDEFINED，可以为空字符串
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID，如果ResourceType为USERDEFINED，可以为空字符串
                     * @param _resourceId 资源ID，如果ResourceType为USERDEFINED，可以为空字符串
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资源类型，目前包含SUBNET、NETWORKINTERFACE、USERDEFINED
                     * @return ResourceType 资源类型，目前包含SUBNET、NETWORKINTERFACE、USERDEFINED
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型，目前包含SUBNET、NETWORKINTERFACE、USERDEFINED
                     * @param _resourceType 资源类型，目前包含SUBNET、NETWORKINTERFACE、USERDEFINED
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取源IP/网段
                     * @return PrivateIpAddress 源IP/网段
                     * 
                     */
                    std::string GetPrivateIpAddress() const;

                    /**
                     * 设置源IP/网段
                     * @param _privateIpAddress 源IP/网段
                     * 
                     */
                    void SetPrivateIpAddress(const std::string& _privateIpAddress);

                    /**
                     * 判断参数 PrivateIpAddress 是否已赋值
                     * @return PrivateIpAddress 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressHasBeenSet() const;

                    /**
                     * 获取弹性IP地址池
                     * @return PublicIpAddresses 弹性IP地址池
                     * 
                     */
                    std::vector<std::string> GetPublicIpAddresses() const;

                    /**
                     * 设置弹性IP地址池
                     * @param _publicIpAddresses 弹性IP地址池
                     * 
                     */
                    void SetPublicIpAddresses(const std::vector<std::string>& _publicIpAddresses);

                    /**
                     * 判断参数 PublicIpAddresses 是否已赋值
                     * @return PublicIpAddresses 是否已赋值
                     * 
                     */
                    bool PublicIpAddressesHasBeenSet() const;

                    /**
                     * 获取规则描述
                     * @return Description 规则描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述
                     * @param _description 规则描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Snat规则ID
                     * @return NatGatewaySnatId Snat规则ID
                     * 
                     */
                    std::string GetNatGatewaySnatId() const;

                    /**
                     * 设置Snat规则ID
                     * @param _natGatewaySnatId Snat规则ID
                     * 
                     */
                    void SetNatGatewaySnatId(const std::string& _natGatewaySnatId);

                    /**
                     * 判断参数 NatGatewaySnatId 是否已赋值
                     * @return NatGatewaySnatId 是否已赋值
                     * 
                     */
                    bool NatGatewaySnatIdHasBeenSet() const;

                    /**
                     * 获取NAT网关的ID。
                     * @return NatGatewayId NAT网关的ID。
                     * 
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置NAT网关的ID。
                     * @param _natGatewayId NAT网关的ID。
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
                     * 获取私有网络VPC的ID。
                     * @return VpcId 私有网络VPC的ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络VPC的ID。
                     * @param _vpcId 私有网络VPC的ID。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取NAT网关SNAT规则创建时间。
                     * @return CreatedTime NAT网关SNAT规则创建时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置NAT网关SNAT规则创建时间。
                     * @param _createdTime NAT网关SNAT规则创建时间。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                private:

                    /**
                     * 资源ID，如果ResourceType为USERDEFINED，可以为空字符串
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源类型，目前包含SUBNET、NETWORKINTERFACE、USERDEFINED
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 源IP/网段
                     */
                    std::string m_privateIpAddress;
                    bool m_privateIpAddressHasBeenSet;

                    /**
                     * 弹性IP地址池
                     */
                    std::vector<std::string> m_publicIpAddresses;
                    bool m_publicIpAddressesHasBeenSet;

                    /**
                     * 规则描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Snat规则ID
                     */
                    std::string m_natGatewaySnatId;
                    bool m_natGatewaySnatIdHasBeenSet;

                    /**
                     * NAT网关的ID。
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * 私有网络VPC的ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * NAT网关SNAT规则创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SOURCEIPTRANSLATIONNATRULE_H_
