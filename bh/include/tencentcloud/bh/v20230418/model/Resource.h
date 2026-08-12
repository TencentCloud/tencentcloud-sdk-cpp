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
#include <tencentcloud/bh/v20230418/model/ResourceDeployZone.h>


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
                     * 获取<p>服务实例ID，如bh-saas-s3ed4r5e</p>
                     * @return ResourceId <p>服务实例ID，如bh-saas-s3ed4r5e</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>服务实例ID，如bh-saas-s3ed4r5e</p>
                     * @param _resourceId <p>服务实例ID，如bh-saas-s3ed4r5e</p>
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
                     * 获取<p>地域编码</p>
                     * @return ApCode <p>地域编码</p>
                     * 
                     */
                    std::string GetApCode() const;

                    /**
                     * 设置<p>地域编码</p>
                     * @param _apCode <p>地域编码</p>
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
                     * 获取<p>服务实例规格信息</p>
                     * @return SvArgs <p>服务实例规格信息</p>
                     * 
                     */
                    std::string GetSvArgs() const;

                    /**
                     * 设置<p>服务实例规格信息</p>
                     * @param _svArgs <p>服务实例规格信息</p>
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
                     * 获取<p>VPC ID</p>
                     * @return VpcId <p>VPC ID</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC ID</p>
                     * @param _vpcId <p>VPC ID</p>
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
                     * 获取<p>服务规格对应的资产数</p>
                     * @return Nodes <p>服务规格对应的资产数</p>
                     * 
                     */
                    uint64_t GetNodes() const;

                    /**
                     * 设置<p>服务规格对应的资产数</p>
                     * @param _nodes <p>服务规格对应的资产数</p>
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
                     * 获取<p>自动续费标记，0 - 表示默认状态，1 - 表示自动续费，2 - 表示明确不自动续费</p>
                     * @return RenewFlag <p>自动续费标记，0 - 表示默认状态，1 - 表示自动续费，2 - 表示明确不自动续费</p>
                     * 
                     */
                    uint64_t GetRenewFlag() const;

                    /**
                     * 设置<p>自动续费标记，0 - 表示默认状态，1 - 表示自动续费，2 - 表示明确不自动续费</p>
                     * @param _renewFlag <p>自动续费标记，0 - 表示默认状态，1 - 表示自动续费，2 - 表示明确不自动续费</p>
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
                     * 获取<p>过期时间</p>
                     * @return ExpireTime <p>过期时间</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>过期时间</p>
                     * @param _expireTime <p>过期时间</p>
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
                     * 获取<p>资源状态，0 - 未初始化，1 - 正常，2 - 隔离，3 - 销毁，4 - 初始化失败，5 - 初始化中</p>
                     * @return Status <p>资源状态，0 - 未初始化，1 - 正常，2 - 隔离，3 - 销毁，4 - 初始化失败，5 - 初始化中</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>资源状态，0 - 未初始化，1 - 正常，2 - 隔离，3 - 销毁，4 - 初始化失败，5 - 初始化中</p>
                     * @param _status <p>资源状态，0 - 未初始化，1 - 正常，2 - 隔离，3 - 销毁，4 - 初始化失败，5 - 初始化中</p>
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
                     * 获取<p>服务实例名，如T-Sec-堡垒机（SaaS型）</p>
                     * @return ResourceName <p>服务实例名，如T-Sec-堡垒机（SaaS型）</p>
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置<p>服务实例名，如T-Sec-堡垒机（SaaS型）</p>
                     * @param _resourceName <p>服务实例名，如T-Sec-堡垒机（SaaS型）</p>
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
                     * 获取<p>定价模型ID</p>
                     * @return Pid <p>定价模型ID</p>
                     * 
                     */
                    uint64_t GetPid() const;

                    /**
                     * 设置<p>定价模型ID</p>
                     * @param _pid <p>定价模型ID</p>
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
                     * 获取<p>资源创建时间</p>
                     * @return CreateTime <p>资源创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>资源创建时间</p>
                     * @param _createTime <p>资源创建时间</p>
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
                     * 获取<p>商品码, p_cds_dasb</p>
                     * @return ProductCode <p>商品码, p_cds_dasb</p>
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置<p>商品码, p_cds_dasb</p>
                     * @param _productCode <p>商品码, p_cds_dasb</p>
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
                     * 获取<p>子商品码, sp_cds_dasb_bh_saas</p>
                     * @return SubProductCode <p>子商品码, sp_cds_dasb_bh_saas</p>
                     * 
                     */
                    std::string GetSubProductCode() const;

                    /**
                     * 设置<p>子商品码, sp_cds_dasb_bh_saas</p>
                     * @param _subProductCode <p>子商品码, sp_cds_dasb_bh_saas</p>
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
                     * 获取<p>可用区</p>
                     * @return Zone <p>可用区</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区</p>
                     * @param _zone <p>可用区</p>
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
                     * 获取<p>是否过期，true-过期，false-未过期</p>
                     * @return Expired <p>是否过期，true-过期，false-未过期</p>
                     * 
                     */
                    bool GetExpired() const;

                    /**
                     * 设置<p>是否过期，true-过期，false-未过期</p>
                     * @param _expired <p>是否过期，true-过期，false-未过期</p>
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
                     * 获取<p>是否开通，true-开通，false-未开通</p>
                     * @return Deployed <p>是否开通，true-开通，false-未开通</p>
                     * 
                     */
                    bool GetDeployed() const;

                    /**
                     * 设置<p>是否开通，true-开通，false-未开通</p>
                     * @param _deployed <p>是否开通，true-开通，false-未开通</p>
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
                     * 获取<p>开通服务的 VPC 名称</p>
                     * @return VpcName <p>开通服务的 VPC 名称</p>
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置<p>开通服务的 VPC 名称</p>
                     * @param _vpcName <p>开通服务的 VPC 名称</p>
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
                     * 获取<p>开通服务的 VPC 对应的网段</p>
                     * @return VpcCidrBlock <p>开通服务的 VPC 对应的网段</p>
                     * 
                     */
                    std::string GetVpcCidrBlock() const;

                    /**
                     * 设置<p>开通服务的 VPC 对应的网段</p>
                     * @param _vpcCidrBlock <p>开通服务的 VPC 对应的网段</p>
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
                     * 获取<p>开通服务的子网ID</p>
                     * @return SubnetId <p>开通服务的子网ID</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>开通服务的子网ID</p>
                     * @param _subnetId <p>开通服务的子网ID</p>
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
                     * 获取<p>开通服务的子网名称</p>
                     * @return SubnetName <p>开通服务的子网名称</p>
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置<p>开通服务的子网名称</p>
                     * @param _subnetName <p>开通服务的子网名称</p>
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
                     * 获取<p>开通服务的子网网段</p>
                     * @return CidrBlock <p>开通服务的子网网段</p>
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置<p>开通服务的子网网段</p>
                     * @param _cidrBlock <p>开通服务的子网网段</p>
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
                     * 获取<p>外部IP</p>
                     * @return PublicIpSet <p>外部IP</p>
                     * 
                     */
                    std::vector<std::string> GetPublicIpSet() const;

                    /**
                     * 设置<p>外部IP</p>
                     * @param _publicIpSet <p>外部IP</p>
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
                     * 获取<p>内部IP</p>
                     * @return PrivateIpSet <p>内部IP</p>
                     * 
                     */
                    std::vector<std::string> GetPrivateIpSet() const;

                    /**
                     * 设置<p>内部IP</p>
                     * @param _privateIpSet <p>内部IP</p>
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
                     * 获取<p>服务开通的高级功能列表，如:[DB]</p>
                     * @return ModuleSet <p>服务开通的高级功能列表，如:[DB]</p>
                     * 
                     */
                    std::vector<std::string> GetModuleSet() const;

                    /**
                     * 设置<p>服务开通的高级功能列表，如:[DB]</p>
                     * @param _moduleSet <p>服务开通的高级功能列表，如:[DB]</p>
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
                     * 获取<p>已使用的授权点数</p>
                     * @return UsedNodes <p>已使用的授权点数</p>
                     * 
                     */
                    uint64_t GetUsedNodes() const;

                    /**
                     * 设置<p>已使用的授权点数</p>
                     * @param _usedNodes <p>已使用的授权点数</p>
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
                     * 获取<p>扩展点数</p>
                     * @return ExtendPoints <p>扩展点数</p>
                     * 
                     */
                    uint64_t GetExtendPoints() const;

                    /**
                     * 设置<p>扩展点数</p>
                     * @param _extendPoints <p>扩展点数</p>
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
                     * 获取<p>带宽扩展包个数(4M)</p>
                     * @return PackageBandwidth <p>带宽扩展包个数(4M)</p>
                     * 
                     */
                    uint64_t GetPackageBandwidth() const;

                    /**
                     * 设置<p>带宽扩展包个数(4M)</p>
                     * @param _packageBandwidth <p>带宽扩展包个数(4M)</p>
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
                     * 获取<p>授权点数扩展包个数(50点)</p>
                     * @return PackageNode <p>授权点数扩展包个数(50点)</p>
                     * 
                     */
                    uint64_t GetPackageNode() const;

                    /**
                     * 设置<p>授权点数扩展包个数(50点)</p>
                     * @param _packageNode <p>授权点数扩展包个数(50点)</p>
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
                     * 获取<p>日志投递规格信息</p>
                     * @return LogDeliveryArgs <p>日志投递规格信息</p>
                     * 
                     */
                    std::string GetLogDeliveryArgs() const;

                    /**
                     * 设置<p>日志投递规格信息</p>
                     * @param _logDeliveryArgs <p>日志投递规格信息</p>
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
                     * 获取<p>堡垒机资源LB</p>
                     * @return ClbSet <p>堡垒机资源LB</p>
                     * 
                     */
                    std::vector<Clb> GetClbSet() const;

                    /**
                     * 设置<p>堡垒机资源LB</p>
                     * @param _clbSet <p>堡垒机资源LB</p>
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
                     * 获取<p>网络域个数</p>
                     * @return DomainCount <p>网络域个数</p>
                     * 
                     */
                    uint64_t GetDomainCount() const;

                    /**
                     * 设置<p>网络域个数</p>
                     * @param _domainCount <p>网络域个数</p>
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
                     * 获取<p>已经使用的网络域个数</p>
                     * @return UsedDomainCount <p>已经使用的网络域个数</p>
                     * 
                     */
                    uint64_t GetUsedDomainCount() const;

                    /**
                     * 设置<p>已经使用的网络域个数</p>
                     * @param _usedDomainCount <p>已经使用的网络域个数</p>
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
                     * 获取<p>开启的网络域个数（不包含默认网络域）</p>
                     * @return EnabledDomainCount <p>开启的网络域个数（不包含默认网络域）</p>
                     * 
                     */
                    uint64_t GetEnabledDomainCount() const;

                    /**
                     * 设置<p>开启的网络域个数（不包含默认网络域）</p>
                     * @param _enabledDomainCount <p>开启的网络域个数（不包含默认网络域）</p>
                     * 
                     */
                    void SetEnabledDomainCount(const uint64_t& _enabledDomainCount);

                    /**
                     * 判断参数 EnabledDomainCount 是否已赋值
                     * @return EnabledDomainCount 是否已赋值
                     * 
                     */
                    bool EnabledDomainCountHasBeenSet() const;

                    /**
                     * 获取<p>0 非试用版，1 试用版</p>
                     * @return Trial <p>0 非试用版，1 试用版</p>
                     * 
                     */
                    uint64_t GetTrial() const;

                    /**
                     * 设置<p>0 非试用版，1 试用版</p>
                     * @param _trial <p>0 非试用版，1 试用版</p>
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
                     * 获取<p>日志投递规格信息</p>
                     * @return LogDelivery <p>日志投递规格信息</p>
                     * 
                     */
                    std::string GetLogDelivery() const;

                    /**
                     * 设置<p>日志投递规格信息</p>
                     * @param _logDelivery <p>日志投递规格信息</p>
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
                     * 获取<p>cdc集群id</p>
                     * @return CdcClusterId <p>cdc集群id</p>
                     * 
                     */
                    std::string GetCdcClusterId() const;

                    /**
                     * 设置<p>cdc集群id</p>
                     * @param _cdcClusterId <p>cdc集群id</p>
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
                     * 获取<p>部署模式 默认0 0-cvm 1-tke</p>
                     * @return DeployModel <p>部署模式 默认0 0-cvm 1-tke</p>
                     * 
                     */
                    uint64_t GetDeployModel() const;

                    /**
                     * 设置<p>部署模式 默认0 0-cvm 1-tke</p>
                     * @param _deployModel <p>部署模式 默认0 0-cvm 1-tke</p>
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
                     * 获取<p>0 默认值，非内网访问，1 内网访问，2 内网访问开通中，3 内网访问关闭中</p>
                     * @return IntranetAccess <p>0 默认值，非内网访问，1 内网访问，2 内网访问开通中，3 内网访问关闭中</p>
                     * 
                     */
                    uint64_t GetIntranetAccess() const;

                    /**
                     * 设置<p>0 默认值，非内网访问，1 内网访问，2 内网访问开通中，3 内网访问关闭中</p>
                     * @param _intranetAccess <p>0 默认值，非内网访问，1 内网访问，2 内网访问开通中，3 内网访问关闭中</p>
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
                     * 获取<p>内网访问的ip</p>
                     * @return IntranetPrivateIpSet <p>内网访问的ip</p>
                     * 
                     */
                    std::vector<std::string> GetIntranetPrivateIpSet() const;

                    /**
                     * 设置<p>内网访问的ip</p>
                     * @param _intranetPrivateIpSet <p>内网访问的ip</p>
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
                     * 获取<p>开通内网访问的vpc</p>
                     * @return IntranetVpcId <p>开通内网访问的vpc</p>
                     * 
                     */
                    std::string GetIntranetVpcId() const;

                    /**
                     * 设置<p>开通内网访问的vpc</p>
                     * @param _intranetVpcId <p>开通内网访问的vpc</p>
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
                     * 获取<p>开通内网访问的subnetId</p>
                     * @return IntranetSubnetId <p>开通内网访问的subnetId</p>
                     * @deprecated
                     */
                    std::string GetIntranetSubnetId() const;

                    /**
                     * 设置<p>开通内网访问的subnetId</p>
                     * @param _intranetSubnetId <p>开通内网访问的subnetId</p>
                     * @deprecated
                     */
                    void SetIntranetSubnetId(const std::string& _intranetSubnetId);

                    /**
                     * 判断参数 IntranetSubnetId 是否已赋值
                     * @return IntranetSubnetId 是否已赋值
                     * @deprecated
                     */
                    bool IntranetSubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>开通内网访问的子网集合</p>
                     * @return IntranetSubnetIdSet <p>开通内网访问的子网集合</p>
                     * 
                     */
                    std::vector<std::string> GetIntranetSubnetIdSet() const;

                    /**
                     * 设置<p>开通内网访问的子网集合</p>
                     * @param _intranetSubnetIdSet <p>开通内网访问的子网集合</p>
                     * 
                     */
                    void SetIntranetSubnetIdSet(const std::vector<std::string>& _intranetSubnetIdSet);

                    /**
                     * 判断参数 IntranetSubnetIdSet 是否已赋值
                     * @return IntranetSubnetIdSet 是否已赋值
                     * 
                     */
                    bool IntranetSubnetIdSetHasBeenSet() const;

                    /**
                     * 获取<p>开通内网访问vpc的网段</p>
                     * @return IntranetVpcCidr <p>开通内网访问vpc的网段</p>
                     * 
                     */
                    std::string GetIntranetVpcCidr() const;

                    /**
                     * 设置<p>开通内网访问vpc的网段</p>
                     * @param _intranetVpcCidr <p>开通内网访问vpc的网段</p>
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
                     * 获取<p>堡垒机内网ip自定义域名</p>
                     * @return DomainName <p>堡垒机内网ip自定义域名</p>
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置<p>堡垒机内网ip自定义域名</p>
                     * @param _domainName <p>堡垒机内网ip自定义域名</p>
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取<p>是否共享clb，true-共享clb，false-独享clb</p>
                     * @return ShareClb <p>是否共享clb，true-共享clb，false-独享clb</p>
                     * 
                     */
                    bool GetShareClb() const;

                    /**
                     * 设置<p>是否共享clb，true-共享clb，false-独享clb</p>
                     * @param _shareClb <p>是否共享clb，true-共享clb，false-独享clb</p>
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
                     * 获取<p>共享clb id</p>
                     * @return OpenClbId <p>共享clb id</p>
                     * 
                     */
                    std::string GetOpenClbId() const;

                    /**
                     * 设置<p>共享clb id</p>
                     * @param _openClbId <p>共享clb id</p>
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
                     * 获取<p>运营商信息</p>
                     * @return LbVipIsp <p>运营商信息</p>
                     * 
                     */
                    std::string GetLbVipIsp() const;

                    /**
                     * 设置<p>运营商信息</p>
                     * @param _lbVipIsp <p>运营商信息</p>
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
                     * 获取<p>linux资产命令行运维端口</p>
                     * @return TUICmdPort <p>linux资产命令行运维端口</p>
                     * 
                     */
                    int64_t GetTUICmdPort() const;

                    /**
                     * 设置<p>linux资产命令行运维端口</p>
                     * @param _tUICmdPort <p>linux资产命令行运维端口</p>
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
                     * 获取<p>linux资产直连端口</p>
                     * @return TUIDirectPort <p>linux资产直连端口</p>
                     * 
                     */
                    int64_t GetTUIDirectPort() const;

                    /**
                     * 设置<p>linux资产直连端口</p>
                     * @param _tUIDirectPort <p>linux资产直连端口</p>
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
                     * 获取<p>1 默认值，web访问开启，0 web访问关闭，2 web访问开通中，3 web访问关闭中</p>
                     * @return WebAccess <p>1 默认值，web访问开启，0 web访问关闭，2 web访问开通中，3 web访问关闭中</p>
                     * 
                     */
                    uint64_t GetWebAccess() const;

                    /**
                     * 设置<p>1 默认值，web访问开启，0 web访问关闭，2 web访问开通中，3 web访问关闭中</p>
                     * @param _webAccess <p>1 默认值，web访问开启，0 web访问关闭，2 web访问开通中，3 web访问关闭中</p>
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
                     * 获取<p>1 默认值，客户单访问开启，0 客户端访问关闭，2 客户端访问开通中，3 客户端访问关闭中</p>
                     * @return ClientAccess <p>1 默认值，客户单访问开启，0 客户端访问关闭，2 客户端访问开通中，3 客户端访问关闭中</p>
                     * 
                     */
                    uint64_t GetClientAccess() const;

                    /**
                     * 设置<p>1 默认值，客户单访问开启，0 客户端访问关闭，2 客户端访问开通中，3 客户端访问关闭中</p>
                     * @param _clientAccess <p>1 默认值，客户单访问开启，0 客户端访问关闭，2 客户端访问开通中，3 客户端访问关闭中</p>
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
                     * 获取<p>1 默认值，外网访问开启，0 外网访问关闭，2 外网访问开通中，3 外网访问关闭中</p>
                     * @return ExternalAccess <p>1 默认值，外网访问开启，0 外网访问关闭，2 外网访问开通中，3 外网访问关闭中</p>
                     * 
                     */
                    uint64_t GetExternalAccess() const;

                    /**
                     * 设置<p>1 默认值，外网访问开启，0 外网访问关闭，2 外网访问开通中，3 外网访问关闭中</p>
                     * @param _externalAccess <p>1 默认值，外网访问开启，0 外网访问关闭，2 外网访问开通中，3 外网访问关闭中</p>
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
                     * 获取<p>0默认值。0-免费版（试用版）ioa，1-付费版ioa</p>
                     * @return IOAResource <p>0默认值。0-免费版（试用版）ioa，1-付费版ioa</p>
                     * 
                     */
                    uint64_t GetIOAResource() const;

                    /**
                     * 设置<p>0默认值。0-免费版（试用版）ioa，1-付费版ioa</p>
                     * @param _iOAResource <p>0默认值。0-免费版（试用版）ioa，1-付费版ioa</p>
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
                     * 获取<p>零信任堡垒机用户扩展包个数。1个扩展包对应20个用户数</p>
                     * @return PackageIOAUserCount <p>零信任堡垒机用户扩展包个数。1个扩展包对应20个用户数</p>
                     * 
                     */
                    uint64_t GetPackageIOAUserCount() const;

                    /**
                     * 设置<p>零信任堡垒机用户扩展包个数。1个扩展包对应20个用户数</p>
                     * @param _packageIOAUserCount <p>零信任堡垒机用户扩展包个数。1个扩展包对应20个用户数</p>
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
                     * 获取<p>零信任堡垒机带宽扩展包个数。一个扩展包表示4M带宽</p>
                     * @return PackageIOABandwidth <p>零信任堡垒机带宽扩展包个数。一个扩展包表示4M带宽</p>
                     * 
                     */
                    uint64_t GetPackageIOABandwidth() const;

                    /**
                     * 设置<p>零信任堡垒机带宽扩展包个数。一个扩展包表示4M带宽</p>
                     * @param _packageIOABandwidth <p>零信任堡垒机带宽扩展包个数。一个扩展包表示4M带宽</p>
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
                     * 获取<p>堡垒机实例对应的零信任实例id</p>
                     * @return IOAResourceId <p>堡垒机实例对应的零信任实例id</p>
                     * 
                     */
                    std::string GetIOAResourceId() const;

                    /**
                     * 设置<p>堡垒机实例对应的零信任实例id</p>
                     * @param _iOAResourceId <p>堡垒机实例对应的零信任实例id</p>
                     * 
                     */
                    void SetIOAResourceId(const std::string& _iOAResourceId);

                    /**
                     * 判断参数 IOAResourceId 是否已赋值
                     * @return IOAResourceId 是否已赋值
                     * 
                     */
                    bool IOAResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>资源类型 免费版/标准版/专业版 /国密版 free/standard/pro/gm</p>
                     * @return ResourceEdition <p>资源类型 免费版/标准版/专业版 /国密版 free/standard/pro/gm</p>
                     * 
                     */
                    std::string GetResourceEdition() const;

                    /**
                     * 设置<p>资源类型 免费版/标准版/专业版 /国密版 free/standard/pro/gm</p>
                     * @param _resourceEdition <p>资源类型 免费版/标准版/专业版 /国密版 free/standard/pro/gm</p>
                     * 
                     */
                    void SetResourceEdition(const std::string& _resourceEdition);

                    /**
                     * 判断参数 ResourceEdition 是否已赋值
                     * @return ResourceEdition 是否已赋值
                     * 
                     */
                    bool ResourceEditionHasBeenSet() const;

                    /**
                     * 获取<p>计费周期 年：y，月：m，日：d，时：h，分：M，秒：s，一次性购买：p</p>
                     * @return TimeUnit <p>计费周期 年：y，月：m，日：d，时：h，分：M，秒：s，一次性购买：p</p>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置<p>计费周期 年：y，月：m，日：d，时：h，分：M，秒：s，一次性购买：p</p>
                     * @param _timeUnit <p>计费周期 年：y，月：m，日：d，时：h，分：M，秒：s，一次性购买：p</p>
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取<p>计费时长</p>
                     * @return TimeSpan <p>计费时长</p>
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置<p>计费时长</p>
                     * @param _timeSpan <p>计费时长</p>
                     * 
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取<p>计费模式 0后付费，1预付费</p>
                     * @return PayMode <p>计费模式 0后付费，1预付费</p>
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置<p>计费模式 0后付费，1预付费</p>
                     * @param _payMode <p>计费模式 0后付费，1预付费</p>
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>计费侧地域</p>
                     * @return BillingRegion <p>计费侧地域</p>
                     * 
                     */
                    std::string GetBillingRegion() const;

                    /**
                     * 设置<p>计费侧地域</p>
                     * @param _billingRegion <p>计费侧地域</p>
                     * 
                     */
                    void SetBillingRegion(const std::string& _billingRegion);

                    /**
                     * 判断参数 BillingRegion 是否已赋值
                     * @return BillingRegion 是否已赋值
                     * 
                     */
                    bool BillingRegionHasBeenSet() const;

                    /**
                     * 获取<p>计费侧可用区</p>
                     * @return BillingZone <p>计费侧可用区</p>
                     * 
                     */
                    std::string GetBillingZone() const;

                    /**
                     * 设置<p>计费侧可用区</p>
                     * @param _billingZone <p>计费侧可用区</p>
                     * 
                     */
                    void SetBillingZone(const std::string& _billingZone);

                    /**
                     * 判断参数 BillingZone 是否已赋值
                     * @return BillingZone 是否已赋值
                     * 
                     */
                    bool BillingZoneHasBeenSet() const;

                    /**
                     * 获取<p>部署的cvm个数</p>
                     * @return DeployCvmCount <p>部署的cvm个数</p>
                     * 
                     */
                    uint64_t GetDeployCvmCount() const;

                    /**
                     * 设置<p>部署的cvm个数</p>
                     * @param _deployCvmCount <p>部署的cvm个数</p>
                     * 
                     */
                    void SetDeployCvmCount(const uint64_t& _deployCvmCount);

                    /**
                     * 判断参数 DeployCvmCount 是否已赋值
                     * @return DeployCvmCount 是否已赋值
                     * 
                     */
                    bool DeployCvmCountHasBeenSet() const;

                    /**
                     * 获取<p>堡垒机实例的可用区信息</p>
                     * @return ResourceZoneSet <p>堡垒机实例的可用区信息</p>
                     * 
                     */
                    std::vector<ResourceDeployZone> GetResourceZoneSet() const;

                    /**
                     * 设置<p>堡垒机实例的可用区信息</p>
                     * @param _resourceZoneSet <p>堡垒机实例的可用区信息</p>
                     * 
                     */
                    void SetResourceZoneSet(const std::vector<ResourceDeployZone>& _resourceZoneSet);

                    /**
                     * 判断参数 ResourceZoneSet 是否已赋值
                     * @return ResourceZoneSet 是否已赋值
                     * 
                     */
                    bool ResourceZoneSetHasBeenSet() const;

                private:

                    /**
                     * <p>服务实例ID，如bh-saas-s3ed4r5e</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>地域编码</p>
                     */
                    std::string m_apCode;
                    bool m_apCodeHasBeenSet;

                    /**
                     * <p>服务实例规格信息</p>
                     */
                    std::string m_svArgs;
                    bool m_svArgsHasBeenSet;

                    /**
                     * <p>VPC ID</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>服务规格对应的资产数</p>
                     */
                    uint64_t m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * <p>自动续费标记，0 - 表示默认状态，1 - 表示自动续费，2 - 表示明确不自动续费</p>
                     */
                    uint64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>过期时间</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>资源状态，0 - 未初始化，1 - 正常，2 - 隔离，3 - 销毁，4 - 初始化失败，5 - 初始化中</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>服务实例名，如T-Sec-堡垒机（SaaS型）</p>
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * <p>定价模型ID</p>
                     */
                    uint64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * <p>资源创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>商品码, p_cds_dasb</p>
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * <p>子商品码, sp_cds_dasb_bh_saas</p>
                     */
                    std::string m_subProductCode;
                    bool m_subProductCodeHasBeenSet;

                    /**
                     * <p>可用区</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>是否过期，true-过期，false-未过期</p>
                     */
                    bool m_expired;
                    bool m_expiredHasBeenSet;

                    /**
                     * <p>是否开通，true-开通，false-未开通</p>
                     */
                    bool m_deployed;
                    bool m_deployedHasBeenSet;

                    /**
                     * <p>开通服务的 VPC 名称</p>
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * <p>开通服务的 VPC 对应的网段</p>
                     */
                    std::string m_vpcCidrBlock;
                    bool m_vpcCidrBlockHasBeenSet;

                    /**
                     * <p>开通服务的子网ID</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>开通服务的子网名称</p>
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * <p>开通服务的子网网段</p>
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * <p>外部IP</p>
                     */
                    std::vector<std::string> m_publicIpSet;
                    bool m_publicIpSetHasBeenSet;

                    /**
                     * <p>内部IP</p>
                     */
                    std::vector<std::string> m_privateIpSet;
                    bool m_privateIpSetHasBeenSet;

                    /**
                     * <p>服务开通的高级功能列表，如:[DB]</p>
                     */
                    std::vector<std::string> m_moduleSet;
                    bool m_moduleSetHasBeenSet;

                    /**
                     * <p>已使用的授权点数</p>
                     */
                    uint64_t m_usedNodes;
                    bool m_usedNodesHasBeenSet;

                    /**
                     * <p>扩展点数</p>
                     */
                    uint64_t m_extendPoints;
                    bool m_extendPointsHasBeenSet;

                    /**
                     * <p>带宽扩展包个数(4M)</p>
                     */
                    uint64_t m_packageBandwidth;
                    bool m_packageBandwidthHasBeenSet;

                    /**
                     * <p>授权点数扩展包个数(50点)</p>
                     */
                    uint64_t m_packageNode;
                    bool m_packageNodeHasBeenSet;

                    /**
                     * <p>日志投递规格信息</p>
                     */
                    std::string m_logDeliveryArgs;
                    bool m_logDeliveryArgsHasBeenSet;

                    /**
                     * <p>堡垒机资源LB</p>
                     */
                    std::vector<Clb> m_clbSet;
                    bool m_clbSetHasBeenSet;

                    /**
                     * <p>网络域个数</p>
                     */
                    uint64_t m_domainCount;
                    bool m_domainCountHasBeenSet;

                    /**
                     * <p>已经使用的网络域个数</p>
                     */
                    uint64_t m_usedDomainCount;
                    bool m_usedDomainCountHasBeenSet;

                    /**
                     * <p>开启的网络域个数（不包含默认网络域）</p>
                     */
                    uint64_t m_enabledDomainCount;
                    bool m_enabledDomainCountHasBeenSet;

                    /**
                     * <p>0 非试用版，1 试用版</p>
                     */
                    uint64_t m_trial;
                    bool m_trialHasBeenSet;

                    /**
                     * <p>日志投递规格信息</p>
                     */
                    std::string m_logDelivery;
                    bool m_logDeliveryHasBeenSet;

                    /**
                     * <p>cdc集群id</p>
                     */
                    std::string m_cdcClusterId;
                    bool m_cdcClusterIdHasBeenSet;

                    /**
                     * <p>部署模式 默认0 0-cvm 1-tke</p>
                     */
                    uint64_t m_deployModel;
                    bool m_deployModelHasBeenSet;

                    /**
                     * <p>0 默认值，非内网访问，1 内网访问，2 内网访问开通中，3 内网访问关闭中</p>
                     */
                    uint64_t m_intranetAccess;
                    bool m_intranetAccessHasBeenSet;

                    /**
                     * <p>内网访问的ip</p>
                     */
                    std::vector<std::string> m_intranetPrivateIpSet;
                    bool m_intranetPrivateIpSetHasBeenSet;

                    /**
                     * <p>开通内网访问的vpc</p>
                     */
                    std::string m_intranetVpcId;
                    bool m_intranetVpcIdHasBeenSet;

                    /**
                     * <p>开通内网访问的subnetId</p>
                     */
                    std::string m_intranetSubnetId;
                    bool m_intranetSubnetIdHasBeenSet;

                    /**
                     * <p>开通内网访问的子网集合</p>
                     */
                    std::vector<std::string> m_intranetSubnetIdSet;
                    bool m_intranetSubnetIdSetHasBeenSet;

                    /**
                     * <p>开通内网访问vpc的网段</p>
                     */
                    std::string m_intranetVpcCidr;
                    bool m_intranetVpcCidrHasBeenSet;

                    /**
                     * <p>堡垒机内网ip自定义域名</p>
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * <p>是否共享clb，true-共享clb，false-独享clb</p>
                     */
                    bool m_shareClb;
                    bool m_shareClbHasBeenSet;

                    /**
                     * <p>共享clb id</p>
                     */
                    std::string m_openClbId;
                    bool m_openClbIdHasBeenSet;

                    /**
                     * <p>运营商信息</p>
                     */
                    std::string m_lbVipIsp;
                    bool m_lbVipIspHasBeenSet;

                    /**
                     * <p>linux资产命令行运维端口</p>
                     */
                    int64_t m_tUICmdPort;
                    bool m_tUICmdPortHasBeenSet;

                    /**
                     * <p>linux资产直连端口</p>
                     */
                    int64_t m_tUIDirectPort;
                    bool m_tUIDirectPortHasBeenSet;

                    /**
                     * <p>1 默认值，web访问开启，0 web访问关闭，2 web访问开通中，3 web访问关闭中</p>
                     */
                    uint64_t m_webAccess;
                    bool m_webAccessHasBeenSet;

                    /**
                     * <p>1 默认值，客户单访问开启，0 客户端访问关闭，2 客户端访问开通中，3 客户端访问关闭中</p>
                     */
                    uint64_t m_clientAccess;
                    bool m_clientAccessHasBeenSet;

                    /**
                     * <p>1 默认值，外网访问开启，0 外网访问关闭，2 外网访问开通中，3 外网访问关闭中</p>
                     */
                    uint64_t m_externalAccess;
                    bool m_externalAccessHasBeenSet;

                    /**
                     * <p>0默认值。0-免费版（试用版）ioa，1-付费版ioa</p>
                     */
                    uint64_t m_iOAResource;
                    bool m_iOAResourceHasBeenSet;

                    /**
                     * <p>零信任堡垒机用户扩展包个数。1个扩展包对应20个用户数</p>
                     */
                    uint64_t m_packageIOAUserCount;
                    bool m_packageIOAUserCountHasBeenSet;

                    /**
                     * <p>零信任堡垒机带宽扩展包个数。一个扩展包表示4M带宽</p>
                     */
                    uint64_t m_packageIOABandwidth;
                    bool m_packageIOABandwidthHasBeenSet;

                    /**
                     * <p>堡垒机实例对应的零信任实例id</p>
                     */
                    std::string m_iOAResourceId;
                    bool m_iOAResourceIdHasBeenSet;

                    /**
                     * <p>资源类型 免费版/标准版/专业版 /国密版 free/standard/pro/gm</p>
                     */
                    std::string m_resourceEdition;
                    bool m_resourceEditionHasBeenSet;

                    /**
                     * <p>计费周期 年：y，月：m，日：d，时：h，分：M，秒：s，一次性购买：p</p>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * <p>计费时长</p>
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * <p>计费模式 0后付费，1预付费</p>
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>计费侧地域</p>
                     */
                    std::string m_billingRegion;
                    bool m_billingRegionHasBeenSet;

                    /**
                     * <p>计费侧可用区</p>
                     */
                    std::string m_billingZone;
                    bool m_billingZoneHasBeenSet;

                    /**
                     * <p>部署的cvm个数</p>
                     */
                    uint64_t m_deployCvmCount;
                    bool m_deployCvmCountHasBeenSet;

                    /**
                     * <p>堡垒机实例的可用区信息</p>
                     */
                    std::vector<ResourceDeployZone> m_resourceZoneSet;
                    bool m_resourceZoneSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_RESOURCE_H_
