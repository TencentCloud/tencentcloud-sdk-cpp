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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_RESOURCE_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_RESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bh/v20230418/model/Clb.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
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
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置服务实例ID，如bh-saas-s3ed4r5e
                     * @param _resourceId 服务实例ID，如bh-saas-s3ed4r5e
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
                     * 获取地域编码
                     * @return ApCode 地域编码
                     * 
                     */
                    std::string GetApCode() const;

                    /**
                     * 设置地域编码
                     * @param _apCode 地域编码
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
                     * 获取服务实例规格信息
                     * @return SvArgs 服务实例规格信息
                     * 
                     */
                    std::string GetSvArgs() const;

                    /**
                     * 设置服务实例规格信息
                     * @param _svArgs 服务实例规格信息
                     * 
                     */
                    void SetSvArgs(const std::string& _svArgs);

                    /**
                     * 判断参数 SvArgs 是否已赋值
                     * @return SvArgs 是否已赋值
                     * 
                     */
                    bool SvArgsHasBeenSet() const;

                    /**
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param _vpcId VPC ID
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
                     * 获取服务规格对应的资产数
                     * @return Nodes 服务规格对应的资产数
                     * 
                     */
                    uint64_t GetNodes() const;

                    /**
                     * 设置服务规格对应的资产数
                     * @param _nodes 服务规格对应的资产数
                     * 
                     */
                    void SetNodes(const uint64_t& _nodes);

                    /**
                     * 判断参数 Nodes 是否已赋值
                     * @return Nodes 是否已赋值
                     * 
                     */
                    bool NodesHasBeenSet() const;

                    /**
                     * 获取自动续费标记，0 - 表示默认状态，1 - 表示自动续费，2 - 表示明确不自动续费
                     * @return RenewFlag 自动续费标记，0 - 表示默认状态，1 - 表示自动续费，2 - 表示明确不自动续费
                     * 
                     */
                    uint64_t GetRenewFlag() const;

                    /**
                     * 设置自动续费标记，0 - 表示默认状态，1 - 表示自动续费，2 - 表示明确不自动续费
                     * @param _renewFlag 自动续费标记，0 - 表示默认状态，1 - 表示自动续费，2 - 表示明确不自动续费
                     * 
                     */
                    void SetRenewFlag(const uint64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取过期时间
                     * @return ExpireTime 过期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间
                     * @param _expireTime 过期时间
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取资源状态，0 - 未初始化，1 - 正常，2 - 隔离，3 - 销毁，4 - 初始化失败，5 - 初始化中
                     * @return Status 资源状态，0 - 未初始化，1 - 正常，2 - 隔离，3 - 销毁，4 - 初始化失败，5 - 初始化中
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置资源状态，0 - 未初始化，1 - 正常，2 - 隔离，3 - 销毁，4 - 初始化失败，5 - 初始化中
                     * @param _status 资源状态，0 - 未初始化，1 - 正常，2 - 隔离，3 - 销毁，4 - 初始化失败，5 - 初始化中
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取服务实例名，如T-Sec-堡垒机（SaaS型）
                     * @return ResourceName 服务实例名，如T-Sec-堡垒机（SaaS型）
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置服务实例名，如T-Sec-堡垒机（SaaS型）
                     * @param _resourceName 服务实例名，如T-Sec-堡垒机（SaaS型）
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取定价模型ID
                     * @return Pid 定价模型ID
                     * 
                     */
                    uint64_t GetPid() const;

                    /**
                     * 设置定价模型ID
                     * @param _pid 定价模型ID
                     * 
                     */
                    void SetPid(const uint64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取资源创建时间
                     * @return CreateTime 资源创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置资源创建时间
                     * @param _createTime 资源创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取商品码, p_cds_dasb
                     * @return ProductCode 商品码, p_cds_dasb
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置商品码, p_cds_dasb
                     * @param _productCode 商品码, p_cds_dasb
                     * 
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     * 
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取子商品码, sp_cds_dasb_bh_saas
                     * @return SubProductCode 子商品码, sp_cds_dasb_bh_saas
                     * 
                     */
                    std::string GetSubProductCode() const;

                    /**
                     * 设置子商品码, sp_cds_dasb_bh_saas
                     * @param _subProductCode 子商品码, sp_cds_dasb_bh_saas
                     * 
                     */
                    void SetSubProductCode(const std::string& _subProductCode);

                    /**
                     * 判断参数 SubProductCode 是否已赋值
                     * @return SubProductCode 是否已赋值
                     * 
                     */
                    bool SubProductCodeHasBeenSet() const;

                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
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
                     * 获取是否过期，true-过期，false-未过期
                     * @return Expired 是否过期，true-过期，false-未过期
                     * 
                     */
                    bool GetExpired() const;

                    /**
                     * 设置是否过期，true-过期，false-未过期
                     * @param _expired 是否过期，true-过期，false-未过期
                     * 
                     */
                    void SetExpired(const bool& _expired);

                    /**
                     * 判断参数 Expired 是否已赋值
                     * @return Expired 是否已赋值
                     * 
                     */
                    bool ExpiredHasBeenSet() const;

                    /**
                     * 获取是否开通，true-开通，false-未开通
                     * @return Deployed 是否开通，true-开通，false-未开通
                     * 
                     */
                    bool GetDeployed() const;

                    /**
                     * 设置是否开通，true-开通，false-未开通
                     * @param _deployed 是否开通，true-开通，false-未开通
                     * 
                     */
                    void SetDeployed(const bool& _deployed);

                    /**
                     * 判断参数 Deployed 是否已赋值
                     * @return Deployed 是否已赋值
                     * 
                     */
                    bool DeployedHasBeenSet() const;

                    /**
                     * 获取开通服务的 VPC 名称
                     * @return VpcName 开通服务的 VPC 名称
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置开通服务的 VPC 名称
                     * @param _vpcName 开通服务的 VPC 名称
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
                     * 获取开通服务的 VPC 对应的网段
                     * @return VpcCidrBlock 开通服务的 VPC 对应的网段
                     * 
                     */
                    std::string GetVpcCidrBlock() const;

                    /**
                     * 设置开通服务的 VPC 对应的网段
                     * @param _vpcCidrBlock 开通服务的 VPC 对应的网段
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
                     * 获取开通服务的子网ID
                     * @return SubnetId 开通服务的子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置开通服务的子网ID
                     * @param _subnetId 开通服务的子网ID
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
                     * 获取开通服务的子网名称
                     * @return SubnetName 开通服务的子网名称
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置开通服务的子网名称
                     * @param _subnetName 开通服务的子网名称
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
                     * 获取开通服务的子网网段
                     * @return CidrBlock 开通服务的子网网段
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置开通服务的子网网段
                     * @param _cidrBlock 开通服务的子网网段
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
                     * 获取外部IP
                     * @return PublicIpSet 外部IP
                     * 
                     */
                    std::vector<std::string> GetPublicIpSet() const;

                    /**
                     * 设置外部IP
                     * @param _publicIpSet 外部IP
                     * 
                     */
                    void SetPublicIpSet(const std::vector<std::string>& _publicIpSet);

                    /**
                     * 判断参数 PublicIpSet 是否已赋值
                     * @return PublicIpSet 是否已赋值
                     * 
                     */
                    bool PublicIpSetHasBeenSet() const;

                    /**
                     * 获取内部IP
                     * @return PrivateIpSet 内部IP
                     * 
                     */
                    std::vector<std::string> GetPrivateIpSet() const;

                    /**
                     * 设置内部IP
                     * @param _privateIpSet 内部IP
                     * 
                     */
                    void SetPrivateIpSet(const std::vector<std::string>& _privateIpSet);

                    /**
                     * 判断参数 PrivateIpSet 是否已赋值
                     * @return PrivateIpSet 是否已赋值
                     * 
                     */
                    bool PrivateIpSetHasBeenSet() const;

                    /**
                     * 获取服务开通的高级功能列表，如:[DB]
                     * @return ModuleSet 服务开通的高级功能列表，如:[DB]
                     * 
                     */
                    std::vector<std::string> GetModuleSet() const;

                    /**
                     * 设置服务开通的高级功能列表，如:[DB]
                     * @param _moduleSet 服务开通的高级功能列表，如:[DB]
                     * 
                     */
                    void SetModuleSet(const std::vector<std::string>& _moduleSet);

                    /**
                     * 判断参数 ModuleSet 是否已赋值
                     * @return ModuleSet 是否已赋值
                     * 
                     */
                    bool ModuleSetHasBeenSet() const;

                    /**
                     * 获取已使用的授权点数
                     * @return UsedNodes 已使用的授权点数
                     * 
                     */
                    uint64_t GetUsedNodes() const;

                    /**
                     * 设置已使用的授权点数
                     * @param _usedNodes 已使用的授权点数
                     * 
                     */
                    void SetUsedNodes(const uint64_t& _usedNodes);

                    /**
                     * 判断参数 UsedNodes 是否已赋值
                     * @return UsedNodes 是否已赋值
                     * 
                     */
                    bool UsedNodesHasBeenSet() const;

                    /**
                     * 获取扩展点数
                     * @return ExtendPoints 扩展点数
                     * 
                     */
                    uint64_t GetExtendPoints() const;

                    /**
                     * 设置扩展点数
                     * @param _extendPoints 扩展点数
                     * 
                     */
                    void SetExtendPoints(const uint64_t& _extendPoints);

                    /**
                     * 判断参数 ExtendPoints 是否已赋值
                     * @return ExtendPoints 是否已赋值
                     * 
                     */
                    bool ExtendPointsHasBeenSet() const;

                    /**
                     * 获取带宽扩展包个数(4M)
                     * @return PackageBandwidth 带宽扩展包个数(4M)
                     * 
                     */
                    uint64_t GetPackageBandwidth() const;

                    /**
                     * 设置带宽扩展包个数(4M)
                     * @param _packageBandwidth 带宽扩展包个数(4M)
                     * 
                     */
                    void SetPackageBandwidth(const uint64_t& _packageBandwidth);

                    /**
                     * 判断参数 PackageBandwidth 是否已赋值
                     * @return PackageBandwidth 是否已赋值
                     * 
                     */
                    bool PackageBandwidthHasBeenSet() const;

                    /**
                     * 获取授权点数扩展包个数(50点)
                     * @return PackageNode 授权点数扩展包个数(50点)
                     * 
                     */
                    uint64_t GetPackageNode() const;

                    /**
                     * 设置授权点数扩展包个数(50点)
                     * @param _packageNode 授权点数扩展包个数(50点)
                     * 
                     */
                    void SetPackageNode(const uint64_t& _packageNode);

                    /**
                     * 判断参数 PackageNode 是否已赋值
                     * @return PackageNode 是否已赋值
                     * 
                     */
                    bool PackageNodeHasBeenSet() const;

                    /**
                     * 获取日志投递规格信息
                     * @return LogDeliveryArgs 日志投递规格信息
                     * 
                     */
                    std::string GetLogDeliveryArgs() const;

                    /**
                     * 设置日志投递规格信息
                     * @param _logDeliveryArgs 日志投递规格信息
                     * 
                     */
                    void SetLogDeliveryArgs(const std::string& _logDeliveryArgs);

                    /**
                     * 判断参数 LogDeliveryArgs 是否已赋值
                     * @return LogDeliveryArgs 是否已赋值
                     * 
                     */
                    bool LogDeliveryArgsHasBeenSet() const;

                    /**
                     * 获取堡垒机资源LB	
                     * @return ClbSet 堡垒机资源LB	
                     * 
                     */
                    std::vector<Clb> GetClbSet() const;

                    /**
                     * 设置堡垒机资源LB	
                     * @param _clbSet 堡垒机资源LB	
                     * 
                     */
                    void SetClbSet(const std::vector<Clb>& _clbSet);

                    /**
                     * 判断参数 ClbSet 是否已赋值
                     * @return ClbSet 是否已赋值
                     * 
                     */
                    bool ClbSetHasBeenSet() const;

                    /**
                     * 获取网络域个数
                     * @return DomainCount 网络域个数
                     * 
                     */
                    uint64_t GetDomainCount() const;

                    /**
                     * 设置网络域个数
                     * @param _domainCount 网络域个数
                     * 
                     */
                    void SetDomainCount(const uint64_t& _domainCount);

                    /**
                     * 判断参数 DomainCount 是否已赋值
                     * @return DomainCount 是否已赋值
                     * 
                     */
                    bool DomainCountHasBeenSet() const;

                    /**
                     * 获取已经使用的网络域个数
                     * @return UsedDomainCount 已经使用的网络域个数
                     * 
                     */
                    uint64_t GetUsedDomainCount() const;

                    /**
                     * 设置已经使用的网络域个数
                     * @param _usedDomainCount 已经使用的网络域个数
                     * 
                     */
                    void SetUsedDomainCount(const uint64_t& _usedDomainCount);

                    /**
                     * 判断参数 UsedDomainCount 是否已赋值
                     * @return UsedDomainCount 是否已赋值
                     * 
                     */
                    bool UsedDomainCountHasBeenSet() const;

                    /**
                     * 获取0 非试用版，1 试用版
                     * @return Trial 0 非试用版，1 试用版
                     * 
                     */
                    uint64_t GetTrial() const;

                    /**
                     * 设置0 非试用版，1 试用版
                     * @param _trial 0 非试用版，1 试用版
                     * 
                     */
                    void SetTrial(const uint64_t& _trial);

                    /**
                     * 判断参数 Trial 是否已赋值
                     * @return Trial 是否已赋值
                     * 
                     */
                    bool TrialHasBeenSet() const;

                    /**
                     * 获取日志投递规格信息
                     * @return LogDelivery 日志投递规格信息
                     * 
                     */
                    std::string GetLogDelivery() const;

                    /**
                     * 设置日志投递规格信息
                     * @param _logDelivery 日志投递规格信息
                     * 
                     */
                    void SetLogDelivery(const std::string& _logDelivery);

                    /**
                     * 判断参数 LogDelivery 是否已赋值
                     * @return LogDelivery 是否已赋值
                     * 
                     */
                    bool LogDeliveryHasBeenSet() const;

                    /**
                     * 获取cdc集群id
                     * @return CdcClusterId cdc集群id
                     * 
                     */
                    std::string GetCdcClusterId() const;

                    /**
                     * 设置cdc集群id
                     * @param _cdcClusterId cdc集群id
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
                     * 获取部署模式 默认0 0-cvm 1-tke
                     * @return DeployModel 部署模式 默认0 0-cvm 1-tke
                     * 
                     */
                    uint64_t GetDeployModel() const;

                    /**
                     * 设置部署模式 默认0 0-cvm 1-tke
                     * @param _deployModel 部署模式 默认0 0-cvm 1-tke
                     * 
                     */
                    void SetDeployModel(const uint64_t& _deployModel);

                    /**
                     * 判断参数 DeployModel 是否已赋值
                     * @return DeployModel 是否已赋值
                     * 
                     */
                    bool DeployModelHasBeenSet() const;

                    /**
                     * 获取0 默认值，非内网访问，1 内网访问，2 内网访问开通中，3 内网访问关闭中
                     * @return IntranetAccess 0 默认值，非内网访问，1 内网访问，2 内网访问开通中，3 内网访问关闭中
                     * 
                     */
                    uint64_t GetIntranetAccess() const;

                    /**
                     * 设置0 默认值，非内网访问，1 内网访问，2 内网访问开通中，3 内网访问关闭中
                     * @param _intranetAccess 0 默认值，非内网访问，1 内网访问，2 内网访问开通中，3 内网访问关闭中
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
                     * 获取内网访问的ip
                     * @return IntranetPrivateIpSet 内网访问的ip
                     * 
                     */
                    std::vector<std::string> GetIntranetPrivateIpSet() const;

                    /**
                     * 设置内网访问的ip
                     * @param _intranetPrivateIpSet 内网访问的ip
                     * 
                     */
                    void SetIntranetPrivateIpSet(const std::vector<std::string>& _intranetPrivateIpSet);

                    /**
                     * 判断参数 IntranetPrivateIpSet 是否已赋值
                     * @return IntranetPrivateIpSet 是否已赋值
                     * 
                     */
                    bool IntranetPrivateIpSetHasBeenSet() const;

                    /**
                     * 获取开通内网访问的vpc
                     * @return IntranetVpcId 开通内网访问的vpc
                     * 
                     */
                    std::string GetIntranetVpcId() const;

                    /**
                     * 设置开通内网访问的vpc
                     * @param _intranetVpcId 开通内网访问的vpc
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
                     * 获取开通内网访问vpc的网段
                     * @return IntranetVpcCidr 开通内网访问vpc的网段
                     * 
                     */
                    std::string GetIntranetVpcCidr() const;

                    /**
                     * 设置开通内网访问vpc的网段
                     * @param _intranetVpcCidr 开通内网访问vpc的网段
                     * 
                     */
                    void SetIntranetVpcCidr(const std::string& _intranetVpcCidr);

                    /**
                     * 判断参数 IntranetVpcCidr 是否已赋值
                     * @return IntranetVpcCidr 是否已赋值
                     * 
                     */
                    bool IntranetVpcCidrHasBeenSet() const;

                    /**
                     * 获取是否共享clb，true-共享clb，false-独享clb
                     * @return ShareClb 是否共享clb，true-共享clb，false-独享clb
                     * 
                     */
                    bool GetShareClb() const;

                    /**
                     * 设置是否共享clb，true-共享clb，false-独享clb
                     * @param _shareClb 是否共享clb，true-共享clb，false-独享clb
                     * 
                     */
                    void SetShareClb(const bool& _shareClb);

                    /**
                     * 判断参数 ShareClb 是否已赋值
                     * @return ShareClb 是否已赋值
                     * 
                     */
                    bool ShareClbHasBeenSet() const;

                    /**
                     * 获取共享clb id
                     * @return OpenClbId 共享clb id
                     * 
                     */
                    std::string GetOpenClbId() const;

                    /**
                     * 设置共享clb id
                     * @param _openClbId 共享clb id
                     * 
                     */
                    void SetOpenClbId(const std::string& _openClbId);

                    /**
                     * 判断参数 OpenClbId 是否已赋值
                     * @return OpenClbId 是否已赋值
                     * 
                     */
                    bool OpenClbIdHasBeenSet() const;

                    /**
                     * 获取运营商信息
                     * @return LbVipIsp 运营商信息
                     * 
                     */
                    std::string GetLbVipIsp() const;

                    /**
                     * 设置运营商信息
                     * @param _lbVipIsp 运营商信息
                     * 
                     */
                    void SetLbVipIsp(const std::string& _lbVipIsp);

                    /**
                     * 判断参数 LbVipIsp 是否已赋值
                     * @return LbVipIsp 是否已赋值
                     * 
                     */
                    bool LbVipIspHasBeenSet() const;

                    /**
                     * 获取linux资产命令行运维端口
                     * @return TUICmdPort linux资产命令行运维端口
                     * 
                     */
                    int64_t GetTUICmdPort() const;

                    /**
                     * 设置linux资产命令行运维端口
                     * @param _tUICmdPort linux资产命令行运维端口
                     * 
                     */
                    void SetTUICmdPort(const int64_t& _tUICmdPort);

                    /**
                     * 判断参数 TUICmdPort 是否已赋值
                     * @return TUICmdPort 是否已赋值
                     * 
                     */
                    bool TUICmdPortHasBeenSet() const;

                    /**
                     * 获取linux资产直连端口
                     * @return TUIDirectPort linux资产直连端口
                     * 
                     */
                    int64_t GetTUIDirectPort() const;

                    /**
                     * 设置linux资产直连端口
                     * @param _tUIDirectPort linux资产直连端口
                     * 
                     */
                    void SetTUIDirectPort(const int64_t& _tUIDirectPort);

                    /**
                     * 判断参数 TUIDirectPort 是否已赋值
                     * @return TUIDirectPort 是否已赋值
                     * 
                     */
                    bool TUIDirectPortHasBeenSet() const;

                    /**
                     * 获取1 默认值，web访问开启，0 web访问关闭，2 web访问开通中，3 web访问关闭中
                     * @return WebAccess 1 默认值，web访问开启，0 web访问关闭，2 web访问开通中，3 web访问关闭中
                     * 
                     */
                    uint64_t GetWebAccess() const;

                    /**
                     * 设置1 默认值，web访问开启，0 web访问关闭，2 web访问开通中，3 web访问关闭中
                     * @param _webAccess 1 默认值，web访问开启，0 web访问关闭，2 web访问开通中，3 web访问关闭中
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
                     * 获取1 默认值，客户单访问开启，0 客户端访问关闭，2 客户端访问开通中，3 客户端访问关闭中
                     * @return ClientAccess 1 默认值，客户单访问开启，0 客户端访问关闭，2 客户端访问开通中，3 客户端访问关闭中
                     * 
                     */
                    uint64_t GetClientAccess() const;

                    /**
                     * 设置1 默认值，客户单访问开启，0 客户端访问关闭，2 客户端访问开通中，3 客户端访问关闭中
                     * @param _clientAccess 1 默认值，客户单访问开启，0 客户端访问关闭，2 客户端访问开通中，3 客户端访问关闭中
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
                     * 获取1 默认值，外网访问开启，0 外网访问关闭，2 外网访问开通中，3 外网访问关闭中
                     * @return ExternalAccess 1 默认值，外网访问开启，0 外网访问关闭，2 外网访问开通中，3 外网访问关闭中
                     * 
                     */
                    uint64_t GetExternalAccess() const;

                    /**
                     * 设置1 默认值，外网访问开启，0 外网访问关闭，2 外网访问开通中，3 外网访问关闭中
                     * @param _externalAccess 1 默认值，外网访问开启，0 外网访问关闭，2 外网访问开通中，3 外网访问关闭中
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
                     * 获取0默认值。0-免费版（试用版）ioa，1-付费版ioa
                     * @return IOAResource 0默认值。0-免费版（试用版）ioa，1-付费版ioa
                     * 
                     */
                    uint64_t GetIOAResource() const;

                    /**
                     * 设置0默认值。0-免费版（试用版）ioa，1-付费版ioa
                     * @param _iOAResource 0默认值。0-免费版（试用版）ioa，1-付费版ioa
                     * 
                     */
                    void SetIOAResource(const uint64_t& _iOAResource);

                    /**
                     * 判断参数 IOAResource 是否已赋值
                     * @return IOAResource 是否已赋值
                     * 
                     */
                    bool IOAResourceHasBeenSet() const;

                    /**
                     * 获取零信任堡垒机用户扩展包个数。1个扩展包对应20个用户数
                     * @return PackageIOAUserCount 零信任堡垒机用户扩展包个数。1个扩展包对应20个用户数
                     * 
                     */
                    uint64_t GetPackageIOAUserCount() const;

                    /**
                     * 设置零信任堡垒机用户扩展包个数。1个扩展包对应20个用户数
                     * @param _packageIOAUserCount 零信任堡垒机用户扩展包个数。1个扩展包对应20个用户数
                     * 
                     */
                    void SetPackageIOAUserCount(const uint64_t& _packageIOAUserCount);

                    /**
                     * 判断参数 PackageIOAUserCount 是否已赋值
                     * @return PackageIOAUserCount 是否已赋值
                     * 
                     */
                    bool PackageIOAUserCountHasBeenSet() const;

                    /**
                     * 获取 零信任堡垒机带宽扩展包个数。一个扩展包表示4M带宽
                     * @return PackageIOABandwidth  零信任堡垒机带宽扩展包个数。一个扩展包表示4M带宽
                     * 
                     */
                    uint64_t GetPackageIOABandwidth() const;

                    /**
                     * 设置 零信任堡垒机带宽扩展包个数。一个扩展包表示4M带宽
                     * @param _packageIOABandwidth  零信任堡垒机带宽扩展包个数。一个扩展包表示4M带宽
                     * 
                     */
                    void SetPackageIOABandwidth(const uint64_t& _packageIOABandwidth);

                    /**
                     * 判断参数 PackageIOABandwidth 是否已赋值
                     * @return PackageIOABandwidth 是否已赋值
                     * 
                     */
                    bool PackageIOABandwidthHasBeenSet() const;

                    /**
                     * 获取堡垒机实例对应的零信任实例id
                     * @return IOAResourceId 堡垒机实例对应的零信任实例id
                     * 
                     */
                    std::string GetIOAResourceId() const;

                    /**
                     * 设置堡垒机实例对应的零信任实例id
                     * @param _iOAResourceId 堡垒机实例对应的零信任实例id
                     * 
                     */
                    void SetIOAResourceId(const std::string& _iOAResourceId);

                    /**
                     * 判断参数 IOAResourceId 是否已赋值
                     * @return IOAResourceId 是否已赋值
                     * 
                     */
                    bool IOAResourceIdHasBeenSet() const;

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

                    /**
                     * 日志投递规格信息
                     */
                    std::string m_logDeliveryArgs;
                    bool m_logDeliveryArgsHasBeenSet;

                    /**
                     * 堡垒机资源LB	
                     */
                    std::vector<Clb> m_clbSet;
                    bool m_clbSetHasBeenSet;

                    /**
                     * 网络域个数
                     */
                    uint64_t m_domainCount;
                    bool m_domainCountHasBeenSet;

                    /**
                     * 已经使用的网络域个数
                     */
                    uint64_t m_usedDomainCount;
                    bool m_usedDomainCountHasBeenSet;

                    /**
                     * 0 非试用版，1 试用版
                     */
                    uint64_t m_trial;
                    bool m_trialHasBeenSet;

                    /**
                     * 日志投递规格信息
                     */
                    std::string m_logDelivery;
                    bool m_logDeliveryHasBeenSet;

                    /**
                     * cdc集群id
                     */
                    std::string m_cdcClusterId;
                    bool m_cdcClusterIdHasBeenSet;

                    /**
                     * 部署模式 默认0 0-cvm 1-tke
                     */
                    uint64_t m_deployModel;
                    bool m_deployModelHasBeenSet;

                    /**
                     * 0 默认值，非内网访问，1 内网访问，2 内网访问开通中，3 内网访问关闭中
                     */
                    uint64_t m_intranetAccess;
                    bool m_intranetAccessHasBeenSet;

                    /**
                     * 内网访问的ip
                     */
                    std::vector<std::string> m_intranetPrivateIpSet;
                    bool m_intranetPrivateIpSetHasBeenSet;

                    /**
                     * 开通内网访问的vpc
                     */
                    std::string m_intranetVpcId;
                    bool m_intranetVpcIdHasBeenSet;

                    /**
                     * 开通内网访问vpc的网段
                     */
                    std::string m_intranetVpcCidr;
                    bool m_intranetVpcCidrHasBeenSet;

                    /**
                     * 是否共享clb，true-共享clb，false-独享clb
                     */
                    bool m_shareClb;
                    bool m_shareClbHasBeenSet;

                    /**
                     * 共享clb id
                     */
                    std::string m_openClbId;
                    bool m_openClbIdHasBeenSet;

                    /**
                     * 运营商信息
                     */
                    std::string m_lbVipIsp;
                    bool m_lbVipIspHasBeenSet;

                    /**
                     * linux资产命令行运维端口
                     */
                    int64_t m_tUICmdPort;
                    bool m_tUICmdPortHasBeenSet;

                    /**
                     * linux资产直连端口
                     */
                    int64_t m_tUIDirectPort;
                    bool m_tUIDirectPortHasBeenSet;

                    /**
                     * 1 默认值，web访问开启，0 web访问关闭，2 web访问开通中，3 web访问关闭中
                     */
                    uint64_t m_webAccess;
                    bool m_webAccessHasBeenSet;

                    /**
                     * 1 默认值，客户单访问开启，0 客户端访问关闭，2 客户端访问开通中，3 客户端访问关闭中
                     */
                    uint64_t m_clientAccess;
                    bool m_clientAccessHasBeenSet;

                    /**
                     * 1 默认值，外网访问开启，0 外网访问关闭，2 外网访问开通中，3 外网访问关闭中
                     */
                    uint64_t m_externalAccess;
                    bool m_externalAccessHasBeenSet;

                    /**
                     * 0默认值。0-免费版（试用版）ioa，1-付费版ioa
                     */
                    uint64_t m_iOAResource;
                    bool m_iOAResourceHasBeenSet;

                    /**
                     * 零信任堡垒机用户扩展包个数。1个扩展包对应20个用户数
                     */
                    uint64_t m_packageIOAUserCount;
                    bool m_packageIOAUserCountHasBeenSet;

                    /**
                     *  零信任堡垒机带宽扩展包个数。一个扩展包表示4M带宽
                     */
                    uint64_t m_packageIOABandwidth;
                    bool m_packageIOABandwidthHasBeenSet;

                    /**
                     * 堡垒机实例对应的零信任实例id
                     */
                    std::string m_iOAResourceId;
                    bool m_iOAResourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_RESOURCE_H_
