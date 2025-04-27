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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_PRIVATENATGATEWAY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_PRIVATENATGATEWAY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>
#include <tencentcloud/vpc/v20170312/model/PrivateNatCrossDomainInfo.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 私网网关对象
                */
                class PrivateNatGateway : public AbstractModel
                {
                public:
                    PrivateNatGateway();
                    ~PrivateNatGateway() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取私网网关`ID`。
                     * @return NatGatewayId 私网网关`ID`。
                     * 
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置私网网关`ID`。
                     * @param _natGatewayId 私网网关`ID`。
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
                     * 获取私网网关名称。
                     * @return NatGatewayName 私网网关名称。
                     * 
                     */
                    std::string GetNatGatewayName() const;

                    /**
                     * 设置私网网关名称。
                     * @param _natGatewayName 私网网关名称。
                     * 
                     */
                    void SetNatGatewayName(const std::string& _natGatewayName);

                    /**
                     * 判断参数 NatGatewayName 是否已赋值
                     * @return NatGatewayName 是否已赋值
                     * 
                     */
                    bool NatGatewayNameHasBeenSet() const;

                    /**
                     * 获取私网网关关联`VPC`实例`ID`。
                     * @return VpcId 私网网关关联`VPC`实例`ID`。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私网网关关联`VPC`实例`ID`。
                     * @param _vpcId 私网网关关联`VPC`实例`ID`。
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
                     * 获取私网网关当前状态。
                     * @return Status 私网网关当前状态。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置私网网关当前状态。
                     * @param _status 私网网关当前状态。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取私网网关跨域标志。
                     * @return CrossDomain 私网网关跨域标志。
                     * 
                     */
                    bool GetCrossDomain() const;

                    /**
                     * 设置私网网关跨域标志。
                     * @param _crossDomain 私网网关跨域标志。
                     * 
                     */
                    void SetCrossDomain(const bool& _crossDomain);

                    /**
                     * 判断参数 CrossDomain 是否已赋值
                     * @return CrossDomain 是否已赋值
                     * 
                     */
                    bool CrossDomainHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedTime 创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间
                     * @param _createdTime 创建时间
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取标签键值对。
                     * @return TagSet 标签键值对。
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置标签键值对。
                     * @param _tagSet 标签键值对。
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取专线网关唯一`ID`
                     * @return DirectConnectGatewayIds 专线网关唯一`ID`
                     * 
                     */
                    std::vector<std::string> GetDirectConnectGatewayIds() const;

                    /**
                     * 设置专线网关唯一`ID`
                     * @param _directConnectGatewayIds 专线网关唯一`ID`
                     * 
                     */
                    void SetDirectConnectGatewayIds(const std::vector<std::string>& _directConnectGatewayIds);

                    /**
                     * 判断参数 DirectConnectGatewayIds 是否已赋值
                     * @return DirectConnectGatewayIds 是否已赋值
                     * 
                     */
                    bool DirectConnectGatewayIdsHasBeenSet() const;

                    /**
                     * 获取私网网关类型
                     * @return NatType 私网网关类型
                     * 
                     */
                    std::string GetNatType() const;

                    /**
                     * 设置私网网关类型
                     * @param _natType 私网网关类型
                     * 
                     */
                    void SetNatType(const std::string& _natType);

                    /**
                     * 判断参数 NatType 是否已赋值
                     * @return NatType 是否已赋值
                     * 
                     */
                    bool NatTypeHasBeenSet() const;

                    /**
                     * 获取私网NAT跨域信息
                     * @return CrossDomainInfo 私网NAT跨域信息
                     * 
                     */
                    PrivateNatCrossDomainInfo GetCrossDomainInfo() const;

                    /**
                     * 设置私网NAT跨域信息
                     * @param _crossDomainInfo 私网NAT跨域信息
                     * 
                     */
                    void SetCrossDomainInfo(const PrivateNatCrossDomainInfo& _crossDomainInfo);

                    /**
                     * 判断参数 CrossDomainInfo 是否已赋值
                     * @return CrossDomainInfo 是否已赋值
                     * 
                     */
                    bool CrossDomainInfoHasBeenSet() const;

                    /**
                     * 获取是否VPC型私网网关
                     * @return VpcType 是否VPC型私网网关
                     * 
                     */
                    bool GetVpcType() const;

                    /**
                     * 设置是否VPC型私网网关
                     * @param _vpcType 是否VPC型私网网关
                     * 
                     */
                    void SetVpcType(const bool& _vpcType);

                    /**
                     * 判断参数 VpcType 是否已赋值
                     * @return VpcType 是否已赋值
                     * 
                     */
                    bool VpcTypeHasBeenSet() const;

                    /**
                     * 获取跨域私网NAT关联的云联网ID	
                     * @return CcnId 跨域私网NAT关联的云联网ID	
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置跨域私网NAT关联的云联网ID	
                     * @param _ccnId 跨域私网NAT关联的云联网ID	
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                private:

                    /**
                     * 私网网关`ID`。
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * 私网网关名称。
                     */
                    std::string m_natGatewayName;
                    bool m_natGatewayNameHasBeenSet;

                    /**
                     * 私网网关关联`VPC`实例`ID`。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私网网关当前状态。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 私网网关跨域标志。
                     */
                    bool m_crossDomain;
                    bool m_crossDomainHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 标签键值对。
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 专线网关唯一`ID`
                     */
                    std::vector<std::string> m_directConnectGatewayIds;
                    bool m_directConnectGatewayIdsHasBeenSet;

                    /**
                     * 私网网关类型
                     */
                    std::string m_natType;
                    bool m_natTypeHasBeenSet;

                    /**
                     * 私网NAT跨域信息
                     */
                    PrivateNatCrossDomainInfo m_crossDomainInfo;
                    bool m_crossDomainInfoHasBeenSet;

                    /**
                     * 是否VPC型私网网关
                     */
                    bool m_vpcType;
                    bool m_vpcTypeHasBeenSet;

                    /**
                     * 跨域私网NAT关联的云联网ID	
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_PRIVATENATGATEWAY_H_
