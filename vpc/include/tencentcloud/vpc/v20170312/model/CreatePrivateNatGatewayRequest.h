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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEPRIVATENATGATEWAYREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEPRIVATENATGATEWAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreatePrivateNatGateway请求参数结构体
                */
                class CreatePrivateNatGatewayRequest : public AbstractModel
                {
                public:
                    CreatePrivateNatGatewayRequest();
                    ~CreatePrivateNatGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取私网网关名称
                     * @return NatGatewayName 私网网关名称
                     * 
                     */
                    std::string GetNatGatewayName() const;

                    /**
                     * 设置私网网关名称
                     * @param _natGatewayName 私网网关名称
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
                     * 获取私有网络实例ID。当创建VPC类型私网NAT网关或者专线网关类型私网NAT网关时，此参数必填。
                     * @return VpcId 私有网络实例ID。当创建VPC类型私网NAT网关或者专线网关类型私网NAT网关时，此参数必填。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络实例ID。当创建VPC类型私网NAT网关或者专线网关类型私网NAT网关时，此参数必填。
                     * @param _vpcId 私有网络实例ID。当创建VPC类型私网NAT网关或者专线网关类型私网NAT网关时，此参数必填。
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
                     * 获取跨域参数。仅当取值为True时，才会支持跨域绑定VPC。
                     * @return CrossDomain 跨域参数。仅当取值为True时，才会支持跨域绑定VPC。
                     * 
                     */
                    bool GetCrossDomain() const;

                    /**
                     * 设置跨域参数。仅当取值为True时，才会支持跨域绑定VPC。
                     * @param _crossDomain 跨域参数。仅当取值为True时，才会支持跨域绑定VPC。
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
                     * 获取实例标签
                     * @return Tags 实例标签
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置实例标签
                     * @param _tags 实例标签
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取VPC类型私网NAT网关。仅当取值为True时，才会创建VPC类型私网NAT网关。
                     * @return VpcType VPC类型私网NAT网关。仅当取值为True时，才会创建VPC类型私网NAT网关。
                     * 
                     */
                    bool GetVpcType() const;

                    /**
                     * 设置VPC类型私网NAT网关。仅当取值为True时，才会创建VPC类型私网NAT网关。
                     * @param _vpcType VPC类型私网NAT网关。仅当取值为True时，才会创建VPC类型私网NAT网关。
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
                     * 获取云联网类型私网NAT网关需要绑定的云联网实例ID。
                     * @return CcnId 云联网类型私网NAT网关需要绑定的云联网实例ID。
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置云联网类型私网NAT网关需要绑定的云联网实例ID。
                     * @param _ccnId 云联网类型私网NAT网关需要绑定的云联网实例ID。
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
                     * 私网网关名称
                     */
                    std::string m_natGatewayName;
                    bool m_natGatewayNameHasBeenSet;

                    /**
                     * 私有网络实例ID。当创建VPC类型私网NAT网关或者专线网关类型私网NAT网关时，此参数必填。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 跨域参数。仅当取值为True时，才会支持跨域绑定VPC。
                     */
                    bool m_crossDomain;
                    bool m_crossDomainHasBeenSet;

                    /**
                     * 实例标签
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * VPC类型私网NAT网关。仅当取值为True时，才会创建VPC类型私网NAT网关。
                     */
                    bool m_vpcType;
                    bool m_vpcTypeHasBeenSet;

                    /**
                     * 云联网类型私网NAT网关需要绑定的云联网实例ID。
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEPRIVATENATGATEWAYREQUEST_H_
