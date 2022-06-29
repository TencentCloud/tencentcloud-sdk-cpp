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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_RESOURCE_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_RESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * 堡垒机服务信息
                */
                class Resource : public AbstractModel
                {
                public:
                    Resource();
                    ~Resource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务实例ID，如bh-saas-s3ed4r5e
                     * @return ResourceId 服务实例ID，如bh-saas-s3ed4r5e
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置服务实例ID，如bh-saas-s3ed4r5e
                     * @param ResourceId 服务实例ID，如bh-saas-s3ed4r5e
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取地域编码
                     * @return ApCode 地域编码
                     */
                    std::string GetApCode() const;

                    /**
                     * 设置地域编码
                     * @param ApCode 地域编码
                     */
                    void SetApCode(const std::string& _apCode);

                    /**
                     * 判断参数 ApCode 是否已赋值
                     * @return ApCode 是否已赋值
                     */
                    bool ApCodeHasBeenSet() const;

                    /**
                     * 获取服务实例规格信息
                     * @return SvArgs 服务实例规格信息
                     */
                    std::string GetSvArgs() const;

                    /**
                     * 设置服务实例规格信息
                     * @param SvArgs 服务实例规格信息
                     */
                    void SetSvArgs(const std::string& _svArgs);

                    /**
                     * 判断参数 SvArgs 是否已赋值
                     * @return SvArgs 是否已赋值
                     */
                    bool SvArgsHasBeenSet() const;

                    /**
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param VpcId VPC ID
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取服务规格对应的资产数
                     * @return Nodes 服务规格对应的资产数
                     */
                    uint64_t GetNodes() const;

                    /**
                     * 设置服务规格对应的资产数
                     * @param Nodes 服务规格对应的资产数
                     */
                    void SetNodes(const uint64_t& _nodes);

                    /**
                     * 判断参数 Nodes 是否已赋值
                     * @return Nodes 是否已赋值
                     */
                    bool NodesHasBeenSet() const;

                    /**
                     * 获取自动续费标记，0 - 表示默认状态，1 - 表示自动续费，2 - 表示明确不自动续费
                     * @return RenewFlag 自动续费标记，0 - 表示默认状态，1 - 表示自动续费，2 - 表示明确不自动续费
                     */
                    uint64_t GetRenewFlag() const;

                    /**
                     * 设置自动续费标记，0 - 表示默认状态，1 - 表示自动续费，2 - 表示明确不自动续费
                     * @param RenewFlag 自动续费标记，0 - 表示默认状态，1 - 表示自动续费，2 - 表示明确不自动续费
                     */
                    void SetRenewFlag(const uint64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取过期时间
                     * @return ExpireTime 过期时间
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间
                     * @param ExpireTime 过期时间
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取资源状态，0 - 未初始化，1 - 正常，2 - 隔离，3 - 销毁，4 - 初始化失败，5 - 初始化中
                     * @return Status 资源状态，0 - 未初始化，1 - 正常，2 - 隔离，3 - 销毁，4 - 初始化失败，5 - 初始化中
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置资源状态，0 - 未初始化，1 - 正常，2 - 隔离，3 - 销毁，4 - 初始化失败，5 - 初始化中
                     * @param Status 资源状态，0 - 未初始化，1 - 正常，2 - 隔离，3 - 销毁，4 - 初始化失败，5 - 初始化中
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取服务实例名，如T-Sec-堡垒机（SaaS型）
                     * @return ResourceName 服务实例名，如T-Sec-堡垒机（SaaS型）
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置服务实例名，如T-Sec-堡垒机（SaaS型）
                     * @param ResourceName 服务实例名，如T-Sec-堡垒机（SaaS型）
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取定价模型ID
                     * @return Pid 定价模型ID
                     */
                    uint64_t GetPid() const;

                    /**
                     * 设置定价模型ID
                     * @param Pid 定价模型ID
                     */
                    void SetPid(const uint64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取资源创建时间
                     * @return CreateTime 资源创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置资源创建时间
                     * @param CreateTime 资源创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取商品码, p_cds_dasb
                     * @return ProductCode 商品码, p_cds_dasb
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置商品码, p_cds_dasb
                     * @param ProductCode 商品码, p_cds_dasb
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取子商品码, sp_cds_dasb_bh_saas
                     * @return SubProductCode 子商品码, sp_cds_dasb_bh_saas
                     */
                    std::string GetSubProductCode() const;

                    /**
                     * 设置子商品码, sp_cds_dasb_bh_saas
                     * @param SubProductCode 子商品码, sp_cds_dasb_bh_saas
                     */
                    void SetSubProductCode(const std::string& _subProductCode);

                    /**
                     * 判断参数 SubProductCode 是否已赋值
                     * @return SubProductCode 是否已赋值
                     */
                    bool SubProductCodeHasBeenSet() const;

                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param Zone 可用区
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取是否过期，true-过期，false-未过期
                     * @return Expired 是否过期，true-过期，false-未过期
                     */
                    bool GetExpired() const;

                    /**
                     * 设置是否过期，true-过期，false-未过期
                     * @param Expired 是否过期，true-过期，false-未过期
                     */
                    void SetExpired(const bool& _expired);

                    /**
                     * 判断参数 Expired 是否已赋值
                     * @return Expired 是否已赋值
                     */
                    bool ExpiredHasBeenSet() const;

                    /**
                     * 获取是否开通，true-开通，false-未开通
                     * @return Deployed 是否开通，true-开通，false-未开通
                     */
                    bool GetDeployed() const;

                    /**
                     * 设置是否开通，true-开通，false-未开通
                     * @param Deployed 是否开通，true-开通，false-未开通
                     */
                    void SetDeployed(const bool& _deployed);

                    /**
                     * 判断参数 Deployed 是否已赋值
                     * @return Deployed 是否已赋值
                     */
                    bool DeployedHasBeenSet() const;

                    /**
                     * 获取开通服务的 VPC 名称
                     * @return VpcName 开通服务的 VPC 名称
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置开通服务的 VPC 名称
                     * @param VpcName 开通服务的 VPC 名称
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取开通服务的 VPC 对应的网段
                     * @return VpcCidrBlock 开通服务的 VPC 对应的网段
                     */
                    std::string GetVpcCidrBlock() const;

                    /**
                     * 设置开通服务的 VPC 对应的网段
                     * @param VpcCidrBlock 开通服务的 VPC 对应的网段
                     */
                    void SetVpcCidrBlock(const std::string& _vpcCidrBlock);

                    /**
                     * 判断参数 VpcCidrBlock 是否已赋值
                     * @return VpcCidrBlock 是否已赋值
                     */
                    bool VpcCidrBlockHasBeenSet() const;

                    /**
                     * 获取开通服务的子网ID
                     * @return SubnetId 开通服务的子网ID
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置开通服务的子网ID
                     * @param SubnetId 开通服务的子网ID
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取开通服务的子网名称
                     * @return SubnetName 开通服务的子网名称
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置开通服务的子网名称
                     * @param SubnetName 开通服务的子网名称
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取开通服务的子网网段
                     * @return CidrBlock 开通服务的子网网段
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置开通服务的子网网段
                     * @param CidrBlock 开通服务的子网网段
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取外部IP
                     * @return PublicIpSet 外部IP
                     */
                    std::vector<std::string> GetPublicIpSet() const;

                    /**
                     * 设置外部IP
                     * @param PublicIpSet 外部IP
                     */
                    void SetPublicIpSet(const std::vector<std::string>& _publicIpSet);

                    /**
                     * 判断参数 PublicIpSet 是否已赋值
                     * @return PublicIpSet 是否已赋值
                     */
                    bool PublicIpSetHasBeenSet() const;

                    /**
                     * 获取内部IP
                     * @return PrivateIpSet 内部IP
                     */
                    std::vector<std::string> GetPrivateIpSet() const;

                    /**
                     * 设置内部IP
                     * @param PrivateIpSet 内部IP
                     */
                    void SetPrivateIpSet(const std::vector<std::string>& _privateIpSet);

                    /**
                     * 判断参数 PrivateIpSet 是否已赋值
                     * @return PrivateIpSet 是否已赋值
                     */
                    bool PrivateIpSetHasBeenSet() const;

                    /**
                     * 获取服务开通的高级功能列表，如:[DB]
                     * @return ModuleSet 服务开通的高级功能列表，如:[DB]
                     */
                    std::vector<std::string> GetModuleSet() const;

                    /**
                     * 设置服务开通的高级功能列表，如:[DB]
                     * @param ModuleSet 服务开通的高级功能列表，如:[DB]
                     */
                    void SetModuleSet(const std::vector<std::string>& _moduleSet);

                    /**
                     * 判断参数 ModuleSet 是否已赋值
                     * @return ModuleSet 是否已赋值
                     */
                    bool ModuleSetHasBeenSet() const;

                    /**
                     * 获取已使用的授权点数
                     * @return UsedNodes 已使用的授权点数
                     */
                    uint64_t GetUsedNodes() const;

                    /**
                     * 设置已使用的授权点数
                     * @param UsedNodes 已使用的授权点数
                     */
                    void SetUsedNodes(const uint64_t& _usedNodes);

                    /**
                     * 判断参数 UsedNodes 是否已赋值
                     * @return UsedNodes 是否已赋值
                     */
                    bool UsedNodesHasBeenSet() const;

                    /**
                     * 获取扩展点数
                     * @return ExtendPoints 扩展点数
                     */
                    uint64_t GetExtendPoints() const;

                    /**
                     * 设置扩展点数
                     * @param ExtendPoints 扩展点数
                     */
                    void SetExtendPoints(const uint64_t& _extendPoints);

                    /**
                     * 判断参数 ExtendPoints 是否已赋值
                     * @return ExtendPoints 是否已赋值
                     */
                    bool ExtendPointsHasBeenSet() const;

                    /**
                     * 获取带宽扩展包个数(4M)
                     * @return PackageBandwidth 带宽扩展包个数(4M)
                     */
                    uint64_t GetPackageBandwidth() const;

                    /**
                     * 设置带宽扩展包个数(4M)
                     * @param PackageBandwidth 带宽扩展包个数(4M)
                     */
                    void SetPackageBandwidth(const uint64_t& _packageBandwidth);

                    /**
                     * 判断参数 PackageBandwidth 是否已赋值
                     * @return PackageBandwidth 是否已赋值
                     */
                    bool PackageBandwidthHasBeenSet() const;

                    /**
                     * 获取授权点数扩展包个数(50点)
                     * @return PackageNode 授权点数扩展包个数(50点)
                     */
                    uint64_t GetPackageNode() const;

                    /**
                     * 设置授权点数扩展包个数(50点)
                     * @param PackageNode 授权点数扩展包个数(50点)
                     */
                    void SetPackageNode(const uint64_t& _packageNode);

                    /**
                     * 判断参数 PackageNode 是否已赋值
                     * @return PackageNode 是否已赋值
                     */
                    bool PackageNodeHasBeenSet() const;

                private:

                    /**
                     * 服务实例ID，如bh-saas-s3ed4r5e
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 地域编码
                     */
                    std::string m_apCode;
                    bool m_apCodeHasBeenSet;

                    /**
                     * 服务实例规格信息
                     */
                    std::string m_svArgs;
                    bool m_svArgsHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 服务规格对应的资产数
                     */
                    uint64_t m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * 自动续费标记，0 - 表示默认状态，1 - 表示自动续费，2 - 表示明确不自动续费
                     */
                    uint64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 过期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 资源状态，0 - 未初始化，1 - 正常，2 - 隔离，3 - 销毁，4 - 初始化失败，5 - 初始化中
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 服务实例名，如T-Sec-堡垒机（SaaS型）
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 定价模型ID
                     */
                    uint64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * 资源创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 商品码, p_cds_dasb
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * 子商品码, sp_cds_dasb_bh_saas
                     */
                    std::string m_subProductCode;
                    bool m_subProductCodeHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 是否过期，true-过期，false-未过期
                     */
                    bool m_expired;
                    bool m_expiredHasBeenSet;

                    /**
                     * 是否开通，true-开通，false-未开通
                     */
                    bool m_deployed;
                    bool m_deployedHasBeenSet;

                    /**
                     * 开通服务的 VPC 名称
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 开通服务的 VPC 对应的网段
                     */
                    std::string m_vpcCidrBlock;
                    bool m_vpcCidrBlockHasBeenSet;

                    /**
                     * 开通服务的子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 开通服务的子网名称
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * 开通服务的子网网段
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * 外部IP
                     */
                    std::vector<std::string> m_publicIpSet;
                    bool m_publicIpSetHasBeenSet;

                    /**
                     * 内部IP
                     */
                    std::vector<std::string> m_privateIpSet;
                    bool m_privateIpSetHasBeenSet;

                    /**
                     * 服务开通的高级功能列表，如:[DB]
                     */
                    std::vector<std::string> m_moduleSet;
                    bool m_moduleSetHasBeenSet;

                    /**
                     * 已使用的授权点数
                     */
                    uint64_t m_usedNodes;
                    bool m_usedNodesHasBeenSet;

                    /**
                     * 扩展点数
                     */
                    uint64_t m_extendPoints;
                    bool m_extendPointsHasBeenSet;

                    /**
                     * 带宽扩展包个数(4M)
                     */
                    uint64_t m_packageBandwidth;
                    bool m_packageBandwidthHasBeenSet;

                    /**
                     * 授权点数扩展包个数(50点)
                     */
                    uint64_t m_packageNode;
                    bool m_packageNodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_RESOURCE_H_
