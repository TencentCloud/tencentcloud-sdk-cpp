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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_DEPLOYRESOURCEREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_DEPLOYRESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DeployResource请求参数结构体
                */
                class DeployResourceRequest : public AbstractModel
                {
                public:
                    DeployResourceRequest();
                    ~DeployResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要开通服务的资源ID
                     * @return ResourceId 需要开通服务的资源ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置需要开通服务的资源ID
                     * @param _resourceId 需要开通服务的资源ID
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
                     * 获取需要开通服务的地域
                     * @return ApCode 需要开通服务的地域
                     * 
                     */
                    std::string GetApCode() const;

                    /**
                     * 设置需要开通服务的地域
                     * @param _apCode 需要开通服务的地域
                     * 
                     */
                    void SetApCode(const std::string& _apCode);

                    /**
                     * 判断参数 ApCode 是否已赋值
                     * @return ApCode 是否已赋值
                     * 
                     */
                    bool ApCodeHasBeenSet() const;

                    /**
                     * 获取子网所在可用区
                     * @return Zone 子网所在可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置子网所在可用区
                     * @param _zone 子网所在可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取需要开通服务的VPC
                     * @return VpcId 需要开通服务的VPC
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置需要开通服务的VPC
                     * @param _vpcId 需要开通服务的VPC
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
                     * 获取需要开通服务的子网ID
                     * @return SubnetId 需要开通服务的子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置需要开通服务的子网ID
                     * @param _subnetId 需要开通服务的子网ID
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取需要开通服务的子网网段
                     * @return CidrBlock 需要开通服务的子网网段
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置需要开通服务的子网网段
                     * @param _cidrBlock 需要开通服务的子网网段
                     * 
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取需要开通服务的VPC名称
                     * @return VpcName 需要开通服务的VPC名称
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置需要开通服务的VPC名称
                     * @param _vpcName 需要开通服务的VPC名称
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取需要开通服务的VPC对应的网段
                     * @return VpcCidrBlock 需要开通服务的VPC对应的网段
                     * 
                     */
                    std::string GetVpcCidrBlock() const;

                    /**
                     * 设置需要开通服务的VPC对应的网段
                     * @param _vpcCidrBlock 需要开通服务的VPC对应的网段
                     * 
                     */
                    void SetVpcCidrBlock(const std::string& _vpcCidrBlock);

                    /**
                     * 判断参数 VpcCidrBlock 是否已赋值
                     * @return VpcCidrBlock 是否已赋值
                     * 
                     */
                    bool VpcCidrBlockHasBeenSet() const;

                    /**
                     * 获取需要开通服务的子网名称
                     * @return SubnetName 需要开通服务的子网名称
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置需要开通服务的子网名称
                     * @param _subnetName 需要开通服务的子网名称
                     * 
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     * 
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取需要开通实例所属的CDC集群ID
                     * @return CdcClusterId 需要开通实例所属的CDC集群ID
                     * 
                     */
                    std::string GetCdcClusterId() const;

                    /**
                     * 设置需要开通实例所属的CDC集群ID
                     * @param _cdcClusterId 需要开通实例所属的CDC集群ID
                     * 
                     */
                    void SetCdcClusterId(const std::string& _cdcClusterId);

                    /**
                     * 判断参数 CdcClusterId 是否已赋值
                     * @return CdcClusterId 是否已赋值
                     * 
                     */
                    bool CdcClusterIdHasBeenSet() const;

                    /**
                     * 获取开通堡垒机指定共享的clbId
                     * @return ShareClbId 开通堡垒机指定共享的clbId
                     * 
                     */
                    std::string GetShareClbId() const;

                    /**
                     * 设置开通堡垒机指定共享的clbId
                     * @param _shareClbId 开通堡垒机指定共享的clbId
                     * 
                     */
                    void SetShareClbId(const std::string& _shareClbId);

                    /**
                     * 判断参数 ShareClbId 是否已赋值
                     * @return ShareClbId 是否已赋值
                     * 
                     */
                    bool ShareClbIdHasBeenSet() const;

                    /**
                     * 获取0-关闭web访问堡垒机，1-开启web访问堡垒机
                     * @return WebAccess 0-关闭web访问堡垒机，1-开启web访问堡垒机
                     * 
                     */
                    uint64_t GetWebAccess() const;

                    /**
                     * 设置0-关闭web访问堡垒机，1-开启web访问堡垒机
                     * @param _webAccess 0-关闭web访问堡垒机，1-开启web访问堡垒机
                     * 
                     */
                    void SetWebAccess(const uint64_t& _webAccess);

                    /**
                     * 判断参数 WebAccess 是否已赋值
                     * @return WebAccess 是否已赋值
                     * 
                     */
                    bool WebAccessHasBeenSet() const;

                    /**
                     * 获取0-关闭客户端访问堡垒机，1-开启客户端访问堡垒机
                     * @return ClientAccess 0-关闭客户端访问堡垒机，1-开启客户端访问堡垒机
                     * 
                     */
                    uint64_t GetClientAccess() const;

                    /**
                     * 设置0-关闭客户端访问堡垒机，1-开启客户端访问堡垒机
                     * @param _clientAccess 0-关闭客户端访问堡垒机，1-开启客户端访问堡垒机
                     * 
                     */
                    void SetClientAccess(const uint64_t& _clientAccess);

                    /**
                     * 判断参数 ClientAccess 是否已赋值
                     * @return ClientAccess 是否已赋值
                     * 
                     */
                    bool ClientAccessHasBeenSet() const;

                    /**
                     * 获取0-关闭内网访问堡垒机，1-开启内网访问堡垒机
                     * @return IntranetAccess 0-关闭内网访问堡垒机，1-开启内网访问堡垒机
                     * 
                     */
                    uint64_t GetIntranetAccess() const;

                    /**
                     * 设置0-关闭内网访问堡垒机，1-开启内网访问堡垒机
                     * @param _intranetAccess 0-关闭内网访问堡垒机，1-开启内网访问堡垒机
                     * 
                     */
                    void SetIntranetAccess(const uint64_t& _intranetAccess);

                    /**
                     * 判断参数 IntranetAccess 是否已赋值
                     * @return IntranetAccess 是否已赋值
                     * 
                     */
                    bool IntranetAccessHasBeenSet() const;

                    /**
                     * 获取0-关闭公网访问堡垒机，1-开启公网访问堡垒机
                     * @return ExternalAccess 0-关闭公网访问堡垒机，1-开启公网访问堡垒机
                     * 
                     */
                    uint64_t GetExternalAccess() const;

                    /**
                     * 设置0-关闭公网访问堡垒机，1-开启公网访问堡垒机
                     * @param _externalAccess 0-关闭公网访问堡垒机，1-开启公网访问堡垒机
                     * 
                     */
                    void SetExternalAccess(const uint64_t& _externalAccess);

                    /**
                     * 判断参数 ExternalAccess 是否已赋值
                     * @return ExternalAccess 是否已赋值
                     * 
                     */
                    bool ExternalAccessHasBeenSet() const;

                private:

                    /**
                     * 需要开通服务的资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 需要开通服务的地域
                     */
                    std::string m_apCode;
                    bool m_apCodeHasBeenSet;

                    /**
                     * 子网所在可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 需要开通服务的VPC
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 需要开通服务的子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 需要开通服务的子网网段
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * 需要开通服务的VPC名称
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 需要开通服务的VPC对应的网段
                     */
                    std::string m_vpcCidrBlock;
                    bool m_vpcCidrBlockHasBeenSet;

                    /**
                     * 需要开通服务的子网名称
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * 需要开通实例所属的CDC集群ID
                     */
                    std::string m_cdcClusterId;
                    bool m_cdcClusterIdHasBeenSet;

                    /**
                     * 开通堡垒机指定共享的clbId
                     */
                    std::string m_shareClbId;
                    bool m_shareClbIdHasBeenSet;

                    /**
                     * 0-关闭web访问堡垒机，1-开启web访问堡垒机
                     */
                    uint64_t m_webAccess;
                    bool m_webAccessHasBeenSet;

                    /**
                     * 0-关闭客户端访问堡垒机，1-开启客户端访问堡垒机
                     */
                    uint64_t m_clientAccess;
                    bool m_clientAccessHasBeenSet;

                    /**
                     * 0-关闭内网访问堡垒机，1-开启内网访问堡垒机
                     */
                    uint64_t m_intranetAccess;
                    bool m_intranetAccessHasBeenSet;

                    /**
                     * 0-关闭公网访问堡垒机，1-开启公网访问堡垒机
                     */
                    uint64_t m_externalAccess;
                    bool m_externalAccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_DEPLOYRESOURCEREQUEST_H_
