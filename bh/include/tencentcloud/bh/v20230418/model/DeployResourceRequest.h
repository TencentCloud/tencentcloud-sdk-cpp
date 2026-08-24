/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
#include <tencentcloud/bh/v20230418/model/ParamInitResourceSubnet.h>


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
                     * 获取<p>需要开通服务的资源ID</p>
                     * @return ResourceId <p>需要开通服务的资源ID</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>需要开通服务的资源ID</p>
                     * @param _resourceId <p>需要开通服务的资源ID</p>
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
                     * 获取<p>需要开通服务的地域</p>
                     * @return ApCode <p>需要开通服务的地域</p>
                     * 
                     */
                    std::string GetApCode() const;

                    /**
                     * 设置<p>需要开通服务的地域</p>
                     * @param _apCode <p>需要开通服务的地域</p>
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
                     * 获取<p>子网所在可用区</p>
                     * @return Zone <p>子网所在可用区</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>子网所在可用区</p>
                     * @param _zone <p>子网所在可用区</p>
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
                     * 获取<p>需要开通服务的VPC</p>
                     * @return VpcId <p>需要开通服务的VPC</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>需要开通服务的VPC</p>
                     * @param _vpcId <p>需要开通服务的VPC</p>
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
                     * 获取<p>需要开通服务的子网ID，此字段即将废除，请填写DeploySubnets包含的子网</p>
                     * @return SubnetId <p>需要开通服务的子网ID，此字段即将废除，请填写DeploySubnets包含的子网</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>需要开通服务的子网ID，此字段即将废除，请填写DeploySubnets包含的子网</p>
                     * @param _subnetId <p>需要开通服务的子网ID，此字段即将废除，请填写DeploySubnets包含的子网</p>
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
                     * 获取<p>需要开通服务的子网网段，此字段即将废除，请填写DeploySubnets包含的子网</p>
                     * @return CidrBlock <p>需要开通服务的子网网段，此字段即将废除，请填写DeploySubnets包含的子网</p>
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置<p>需要开通服务的子网网段，此字段即将废除，请填写DeploySubnets包含的子网</p>
                     * @param _cidrBlock <p>需要开通服务的子网网段，此字段即将废除，请填写DeploySubnets包含的子网</p>
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
                     * 获取<p>需要开通服务的VPC名称</p>
                     * @return VpcName <p>需要开通服务的VPC名称</p>
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置<p>需要开通服务的VPC名称</p>
                     * @param _vpcName <p>需要开通服务的VPC名称</p>
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
                     * 获取<p>需要开通服务的VPC对应的网段</p>
                     * @return VpcCidrBlock <p>需要开通服务的VPC对应的网段</p>
                     * 
                     */
                    std::string GetVpcCidrBlock() const;

                    /**
                     * 设置<p>需要开通服务的VPC对应的网段</p>
                     * @param _vpcCidrBlock <p>需要开通服务的VPC对应的网段</p>
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
                     * 获取<p>需要开通服务的子网名称，此字段即将废除，请填写DeploySubnets包含的子网</p>
                     * @return SubnetName <p>需要开通服务的子网名称，此字段即将废除，请填写DeploySubnets包含的子网</p>
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置<p>需要开通服务的子网名称，此字段即将废除，请填写DeploySubnets包含的子网</p>
                     * @param _subnetName <p>需要开通服务的子网名称，此字段即将废除，请填写DeploySubnets包含的子网</p>
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
                     * 获取<p>需要开通实例所属的CDC集群ID</p>
                     * @return CdcClusterId <p>需要开通实例所属的CDC集群ID</p>
                     * 
                     */
                    std::string GetCdcClusterId() const;

                    /**
                     * 设置<p>需要开通实例所属的CDC集群ID</p>
                     * @param _cdcClusterId <p>需要开通实例所属的CDC集群ID</p>
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
                     * 获取<p>开通堡垒机指定共享的clbId</p>
                     * @return ShareClbId <p>开通堡垒机指定共享的clbId</p>
                     * 
                     */
                    std::string GetShareClbId() const;

                    /**
                     * 设置<p>开通堡垒机指定共享的clbId</p>
                     * @param _shareClbId <p>开通堡垒机指定共享的clbId</p>
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
                     * 获取<p>0-关闭web访问堡垒机，1-开启web访问堡垒机</p>
                     * @return WebAccess <p>0-关闭web访问堡垒机，1-开启web访问堡垒机</p>
                     * 
                     */
                    uint64_t GetWebAccess() const;

                    /**
                     * 设置<p>0-关闭web访问堡垒机，1-开启web访问堡垒机</p>
                     * @param _webAccess <p>0-关闭web访问堡垒机，1-开启web访问堡垒机</p>
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
                     * 获取<p>0-关闭客户端访问堡垒机，1-开启客户端访问堡垒机</p>
                     * @return ClientAccess <p>0-关闭客户端访问堡垒机，1-开启客户端访问堡垒机</p>
                     * 
                     */
                    uint64_t GetClientAccess() const;

                    /**
                     * 设置<p>0-关闭客户端访问堡垒机，1-开启客户端访问堡垒机</p>
                     * @param _clientAccess <p>0-关闭客户端访问堡垒机，1-开启客户端访问堡垒机</p>
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
                     * 获取<p>0-关闭内网访问堡垒机，1-开启内网访问堡垒机</p>
                     * @return IntranetAccess <p>0-关闭内网访问堡垒机，1-开启内网访问堡垒机</p>
                     * 
                     */
                    uint64_t GetIntranetAccess() const;

                    /**
                     * 设置<p>0-关闭内网访问堡垒机，1-开启内网访问堡垒机</p>
                     * @param _intranetAccess <p>0-关闭内网访问堡垒机，1-开启内网访问堡垒机</p>
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
                     * 获取<p>0-关闭公网访问堡垒机，1-开启公网访问堡垒机</p>
                     * @return ExternalAccess <p>0-关闭公网访问堡垒机，1-开启公网访问堡垒机</p>
                     * 
                     */
                    uint64_t GetExternalAccess() const;

                    /**
                     * 设置<p>0-关闭公网访问堡垒机，1-开启公网访问堡垒机</p>
                     * @param _externalAccess <p>0-关闭公网访问堡垒机，1-开启公网访问堡垒机</p>
                     * 
                     */
                    void SetExternalAccess(const uint64_t& _externalAccess);

                    /**
                     * 判断参数 ExternalAccess 是否已赋值
                     * @return ExternalAccess 是否已赋值
                     * 
                     */
                    bool ExternalAccessHasBeenSet() const;

                    /**
                     * 获取<p>开通堡垒机的子网信息，最多支持2个子网</p>
                     * @return DeploySubnets <p>开通堡垒机的子网信息，最多支持2个子网</p>
                     * 
                     */
                    std::vector<ParamInitResourceSubnet> GetDeploySubnets() const;

                    /**
                     * 设置<p>开通堡垒机的子网信息，最多支持2个子网</p>
                     * @param _deploySubnets <p>开通堡垒机的子网信息，最多支持2个子网</p>
                     * 
                     */
                    void SetDeploySubnets(const std::vector<ParamInitResourceSubnet>& _deploySubnets);

                    /**
                     * 判断参数 DeploySubnets 是否已赋值
                     * @return DeploySubnets 是否已赋值
                     * 
                     */
                    bool DeploySubnetsHasBeenSet() const;

                    /**
                     * 获取<p>开通内网访问的VPC ID</p>
                     * @return IntranetVpcId <p>开通内网访问的VPC ID</p>
                     * 
                     */
                    std::string GetIntranetVpcId() const;

                    /**
                     * 设置<p>开通内网访问的VPC ID</p>
                     * @param _intranetVpcId <p>开通内网访问的VPC ID</p>
                     * 
                     */
                    void SetIntranetVpcId(const std::string& _intranetVpcId);

                    /**
                     * 判断参数 IntranetVpcId 是否已赋值
                     * @return IntranetVpcId 是否已赋值
                     * 
                     */
                    bool IntranetVpcIdHasBeenSet() const;

                    /**
                     * 获取<p>开通内网访问的VPC 网段</p>
                     * @return IntranetVpcCidrBlock <p>开通内网访问的VPC 网段</p>
                     * 
                     */
                    std::string GetIntranetVpcCidrBlock() const;

                    /**
                     * 设置<p>开通内网访问的VPC 网段</p>
                     * @param _intranetVpcCidrBlock <p>开通内网访问的VPC 网段</p>
                     * 
                     */
                    void SetIntranetVpcCidrBlock(const std::string& _intranetVpcCidrBlock);

                    /**
                     * 判断参数 IntranetVpcCidrBlock 是否已赋值
                     * @return IntranetVpcCidrBlock 是否已赋值
                     * 
                     */
                    bool IntranetVpcCidrBlockHasBeenSet() const;

                    /**
                     * 获取<p>开通内网访问的VPC名称</p>
                     * @return IntranetVpcName <p>开通内网访问的VPC名称</p>
                     * 
                     */
                    std::string GetIntranetVpcName() const;

                    /**
                     * 设置<p>开通内网访问的VPC名称</p>
                     * @param _intranetVpcName <p>开通内网访问的VPC名称</p>
                     * 
                     */
                    void SetIntranetVpcName(const std::string& _intranetVpcName);

                    /**
                     * 判断参数 IntranetVpcName 是否已赋值
                     * @return IntranetVpcName 是否已赋值
                     * 
                     */
                    bool IntranetVpcNameHasBeenSet() const;

                    /**
                     * 获取<p>开通内网访问的子网信息，最多支持2个子网</p>
                     * @return IntranetSubnets <p>开通内网访问的子网信息，最多支持2个子网</p>
                     * 
                     */
                    std::vector<ParamInitResourceSubnet> GetIntranetSubnets() const;

                    /**
                     * 设置<p>开通内网访问的子网信息，最多支持2个子网</p>
                     * @param _intranetSubnets <p>开通内网访问的子网信息，最多支持2个子网</p>
                     * 
                     */
                    void SetIntranetSubnets(const std::vector<ParamInitResourceSubnet>& _intranetSubnets);

                    /**
                     * 判断参数 IntranetSubnets 是否已赋值
                     * @return IntranetSubnets 是否已赋值
                     * 
                     */
                    bool IntranetSubnetsHasBeenSet() const;

                private:

                    /**
                     * <p>需要开通服务的资源ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>需要开通服务的地域</p>
                     */
                    std::string m_apCode;
                    bool m_apCodeHasBeenSet;

                    /**
                     * <p>子网所在可用区</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>需要开通服务的VPC</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>需要开通服务的子网ID，此字段即将废除，请填写DeploySubnets包含的子网</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>需要开通服务的子网网段，此字段即将废除，请填写DeploySubnets包含的子网</p>
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * <p>需要开通服务的VPC名称</p>
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * <p>需要开通服务的VPC对应的网段</p>
                     */
                    std::string m_vpcCidrBlock;
                    bool m_vpcCidrBlockHasBeenSet;

                    /**
                     * <p>需要开通服务的子网名称，此字段即将废除，请填写DeploySubnets包含的子网</p>
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * <p>需要开通实例所属的CDC集群ID</p>
                     */
                    std::string m_cdcClusterId;
                    bool m_cdcClusterIdHasBeenSet;

                    /**
                     * <p>开通堡垒机指定共享的clbId</p>
                     */
                    std::string m_shareClbId;
                    bool m_shareClbIdHasBeenSet;

                    /**
                     * <p>0-关闭web访问堡垒机，1-开启web访问堡垒机</p>
                     */
                    uint64_t m_webAccess;
                    bool m_webAccessHasBeenSet;

                    /**
                     * <p>0-关闭客户端访问堡垒机，1-开启客户端访问堡垒机</p>
                     */
                    uint64_t m_clientAccess;
                    bool m_clientAccessHasBeenSet;

                    /**
                     * <p>0-关闭内网访问堡垒机，1-开启内网访问堡垒机</p>
                     */
                    uint64_t m_intranetAccess;
                    bool m_intranetAccessHasBeenSet;

                    /**
                     * <p>0-关闭公网访问堡垒机，1-开启公网访问堡垒机</p>
                     */
                    uint64_t m_externalAccess;
                    bool m_externalAccessHasBeenSet;

                    /**
                     * <p>开通堡垒机的子网信息，最多支持2个子网</p>
                     */
                    std::vector<ParamInitResourceSubnet> m_deploySubnets;
                    bool m_deploySubnetsHasBeenSet;

                    /**
                     * <p>开通内网访问的VPC ID</p>
                     */
                    std::string m_intranetVpcId;
                    bool m_intranetVpcIdHasBeenSet;

                    /**
                     * <p>开通内网访问的VPC 网段</p>
                     */
                    std::string m_intranetVpcCidrBlock;
                    bool m_intranetVpcCidrBlockHasBeenSet;

                    /**
                     * <p>开通内网访问的VPC名称</p>
                     */
                    std::string m_intranetVpcName;
                    bool m_intranetVpcNameHasBeenSet;

                    /**
                     * <p>开通内网访问的子网信息，最多支持2个子网</p>
                     */
                    std::vector<ParamInitResourceSubnet> m_intranetSubnets;
                    bool m_intranetSubnetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_DEPLOYRESOURCEREQUEST_H_
