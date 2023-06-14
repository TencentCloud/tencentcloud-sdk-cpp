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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_ASSETDETAIL_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_ASSETDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssa/v20180608/model/Tag.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 资产详情信息
                */
                class AssetDetail : public AbstractModel
                {
                public:
                    AssetDetail();
                    ~AssetDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资产类型
                     * @return AssetType 资产类型
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置资产类型
                     * @param _assetType 资产类型
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取名字
                     * @return Name 名字
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名字
                     * @param _name 名字
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取区域
                     * @return Region 区域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置区域
                     * @param _region 区域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取所属网络
                     * @return VpcId 所属网络
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置所属网络
                     * @param _vpcId 所属网络
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
                     * 获取主机类型
                     * @return InstanceType 主机类型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置主机类型
                     * @param _instanceType 主机类型
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取主机状态
                     * @return InstanceState 主机状态
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置主机状态
                     * @param _instanceState 主机状态
                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取主机IP-公网
                     * @return PublicIpAddresses 主机IP-公网
                     * 
                     */
                    std::vector<std::string> GetPublicIpAddresses() const;

                    /**
                     * 设置主机IP-公网
                     * @param _publicIpAddresses 主机IP-公网
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
                     * 获取引擎版本
                     * @return EngineVersion 引擎版本
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置引擎版本
                     * @param _engineVersion 引擎版本
                     * 
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取标识
                     * @return Id 标识
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置标识
                     * @param _id 标识
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tag 标签
                     * 
                     */
                    std::vector<Tag> GetTag() const;

                    /**
                     * 设置标签
                     * @param _tag 标签
                     * 
                     */
                    void SetTag(const std::vector<Tag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取内网IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vip 内网IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置内网IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vip 内网IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取负载均衡示例的vip列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoadBalancerVips 负载均衡示例的vip列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerVips() const;

                    /**
                     * 设置负载均衡示例的vip列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _loadBalancerVips 负载均衡示例的vip列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLoadBalancerVips(const std::vector<std::string>& _loadBalancerVips);

                    /**
                     * 判断参数 LoadBalancerVips 是否已赋值
                     * @return LoadBalancerVips 是否已赋值
                     * 
                     */
                    bool LoadBalancerVipsHasBeenSet() const;

                    /**
                     * 获取账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin 账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUin() const;

                    /**
                     * 设置账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uin 账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUin(const int64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreationDate 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreationDate() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creationDate 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreationDate(const std::string& _creationDate);

                    /**
                     * 判断参数 CreationDate 是否已赋值
                     * @return CreationDate 是否已赋值
                     * 
                     */
                    bool CreationDateHasBeenSet() const;

                    /**
                     * 获取访问域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Domain 访问域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置访问域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domain 访问域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取资产唯一id
                     * @return AssetUniqid 资产唯一id
                     * 
                     */
                    std::string GetAssetUniqid() const;

                    /**
                     * 设置资产唯一id
                     * @param _assetUniqid 资产唯一id
                     * 
                     */
                    void SetAssetUniqid(const std::string& _assetUniqid);

                    /**
                     * 判断参数 AssetUniqid 是否已赋值
                     * @return AssetUniqid 是否已赋值
                     * 
                     */
                    bool AssetUniqidHasBeenSet() const;

                    /**
                     * 获取关联实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 关联实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置关联实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 关联实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取配置硬盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskType 配置硬盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置配置硬盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskType 配置硬盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取配置硬盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiskSize 配置硬盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置配置硬盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diskSize 配置硬盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取云硬盘/证书状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetStatus 云硬盘/证书状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetStatus() const;

                    /**
                     * 设置云硬盘/证书状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetStatus 云硬盘/证书状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetStatus(const std::string& _assetStatus);

                    /**
                     * 判断参数 AssetStatus 是否已赋值
                     * @return AssetStatus 是否已赋值
                     * 
                     */
                    bool AssetStatusHasBeenSet() const;

                    /**
                     * 获取证书类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertType 证书类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCertType() const;

                    /**
                     * 设置证书类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _certType 证书类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCertType(const std::string& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     * 
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取所属项目
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectName 所属项目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置所属项目
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectName 所属项目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertEndTime 到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCertEndTime() const;

                    /**
                     * 设置到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _certEndTime 到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCertEndTime(const std::string& _certEndTime);

                    /**
                     * 判断参数 CertEndTime 是否已赋值
                     * @return CertEndTime 是否已赋值
                     * 
                     */
                    bool CertEndTimeHasBeenSet() const;

                    /**
                     * 获取nosql引擎/版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductType nosql引擎/版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProductType() const;

                    /**
                     * 设置nosql引擎/版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productType nosql引擎/版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductType(const int64_t& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                    /**
                     * 获取主机IP-内网
                     * @return PrivateIpAddresses 主机IP-内网
                     * 
                     */
                    std::vector<std::string> GetPrivateIpAddresses() const;

                    /**
                     * 设置主机IP-内网
                     * @param _privateIpAddresses 主机IP-内网
                     * 
                     */
                    void SetPrivateIpAddresses(const std::vector<std::string>& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取证书有效期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValidityPeriod 证书有效期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValidityPeriod() const;

                    /**
                     * 设置证书有效期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _validityPeriod 证书有效期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValidityPeriod(const std::string& _validityPeriod);

                    /**
                     * 判断参数 ValidityPeriod 是否已赋值
                     * @return ValidityPeriod 是否已赋值
                     * 
                     */
                    bool ValidityPeriodHasBeenSet() const;

                    /**
                     * 获取分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupName 分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupName 分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取端口服务数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port 端口服务数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPort() const;

                    /**
                     * 设置端口服务数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _port 端口服务数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPort(const std::vector<std::string>& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取配置风险数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskConfig 配置风险数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetRiskConfig() const;

                    /**
                     * 设置配置风险数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskConfig 配置风险数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRiskConfig(const std::vector<std::string>& _riskConfig);

                    /**
                     * 判断参数 RiskConfig 是否已赋值
                     * @return RiskConfig 是否已赋值
                     * 
                     */
                    bool RiskConfigHasBeenSet() const;

                    /**
                     * 获取相关待处理事件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Event 相关待处理事件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEvent() const;

                    /**
                     * 设置相关待处理事件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _event 相关待处理事件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEvent(const std::string& _event);

                    /**
                     * 判断参数 Event 是否已赋值
                     * @return Event 是否已赋值
                     * 
                     */
                    bool EventHasBeenSet() const;

                    /**
                     * 获取相关待处理漏洞
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vul 相关待处理漏洞
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVul() const;

                    /**
                     * 设置相关待处理漏洞
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vul 相关待处理漏洞
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVul(const std::string& _vul);

                    /**
                     * 判断参数 Vul 是否已赋值
                     * @return Vul 是否已赋值
                     * 
                     */
                    bool VulHasBeenSet() const;

                    /**
                     * 获取资产发现时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SsaAssetDiscoverTime 资产发现时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSsaAssetDiscoverTime() const;

                    /**
                     * 设置资产发现时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ssaAssetDiscoverTime 资产发现时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSsaAssetDiscoverTime(const std::string& _ssaAssetDiscoverTime);

                    /**
                     * 判断参数 SsaAssetDiscoverTime 是否已赋值
                     * @return SsaAssetDiscoverTime 是否已赋值
                     * 
                     */
                    bool SsaAssetDiscoverTimeHasBeenSet() const;

                    /**
                     * 获取所属子网
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetSubnetId 所属子网
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetSubnetId() const;

                    /**
                     * 设置所属子网
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetSubnetId 所属子网
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetSubnetId(const std::string& _assetSubnetId);

                    /**
                     * 判断参数 AssetSubnetId 是否已赋值
                     * @return AssetSubnetId 是否已赋值
                     * 
                     */
                    bool AssetSubnetIdHasBeenSet() const;

                    /**
                     * 获取子网名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetSubnetName 子网名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetSubnetName() const;

                    /**
                     * 设置子网名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetSubnetName 子网名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetSubnetName(const std::string& _assetSubnetName);

                    /**
                     * 判断参数 AssetSubnetName 是否已赋值
                     * @return AssetSubnetName 是否已赋值
                     * 
                     */
                    bool AssetSubnetNameHasBeenSet() const;

                    /**
                     * 获取vpc名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetVpcName vpc名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetVpcName() const;

                    /**
                     * 设置vpc名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetVpcName vpc名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetVpcName(const std::string& _assetVpcName);

                    /**
                     * 判断参数 AssetVpcName 是否已赋值
                     * @return AssetVpcName 是否已赋值
                     * 
                     */
                    bool AssetVpcNameHasBeenSet() const;

                    /**
                     * 获取集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterType 集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetClusterType() const;

                    /**
                     * 设置集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterType 集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterType(const int64_t& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NameSpace 命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNameSpace() const;

                    /**
                     * 设置命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nameSpace 命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNameSpace(const std::string& _nameSpace);

                    /**
                     * 判断参数 NameSpace 是否已赋值
                     * @return NameSpace 是否已赋值
                     * 
                     */
                    bool NameSpaceHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetCreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetCreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetCreateTime(const std::string& _assetCreateTime);

                    /**
                     * 判断参数 AssetCreateTime 是否已赋值
                     * @return AssetCreateTime 是否已赋值
                     * 
                     */
                    bool AssetCreateTimeHasBeenSet() const;

                    /**
                     * 获取负载均衡网络类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoadBalancerType 负载均衡网络类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置负载均衡网络类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _loadBalancerType 负载均衡网络类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLoadBalancerType(const std::string& _loadBalancerType);

                    /**
                     * 判断参数 LoadBalancerType 是否已赋值
                     * @return LoadBalancerType 是否已赋值
                     * 
                     */
                    bool LoadBalancerTypeHasBeenSet() const;

                    /**
                     * 获取ipv6信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetIpv6 ipv6信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAssetIpv6() const;

                    /**
                     * 设置ipv6信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetIpv6 ipv6信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetIpv6(const std::vector<std::string>& _assetIpv6);

                    /**
                     * 判断参数 AssetIpv6 是否已赋值
                     * @return AssetIpv6 是否已赋值
                     * 
                     */
                    bool AssetIpv6HasBeenSet() const;

                    /**
                     * 获取ssh风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SSHRisk ssh风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSSHRisk() const;

                    /**
                     * 设置ssh风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sSHRisk ssh风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSSHRisk(const std::string& _sSHRisk);

                    /**
                     * 判断参数 SSHRisk 是否已赋值
                     * @return SSHRisk 是否已赋值
                     * 
                     */
                    bool SSHRiskHasBeenSet() const;

                    /**
                     * 获取rdp风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RDPRisk rdp风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRDPRisk() const;

                    /**
                     * 设置rdp风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rDPRisk rdp风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRDPRisk(const std::string& _rDPRisk);

                    /**
                     * 判断参数 RDPRisk 是否已赋值
                     * @return RDPRisk 是否已赋值
                     * 
                     */
                    bool RDPRiskHasBeenSet() const;

                    /**
                     * 获取安全事件风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventRisk 安全事件风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventRisk() const;

                    /**
                     * 设置安全事件风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventRisk 安全事件风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventRisk(const std::string& _eventRisk);

                    /**
                     * 判断参数 EventRisk 是否已赋值
                     * @return EventRisk 是否已赋值
                     * 
                     */
                    bool EventRiskHasBeenSet() const;

                    /**
                     * 获取漏洞数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetVulNum 漏洞数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAssetVulNum() const;

                    /**
                     * 设置漏洞数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetVulNum 漏洞数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetVulNum(const int64_t& _assetVulNum);

                    /**
                     * 判断参数 AssetVulNum 是否已赋值
                     * @return AssetVulNum 是否已赋值
                     * 
                     */
                    bool AssetVulNumHasBeenSet() const;

                    /**
                     * 获取资产事件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetEventNum 资产事件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAssetEventNum() const;

                    /**
                     * 设置资产事件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetEventNum 资产事件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetEventNum(const int64_t& _assetEventNum);

                    /**
                     * 判断参数 AssetEventNum 是否已赋值
                     * @return AssetEventNum 是否已赋值
                     * 
                     */
                    bool AssetEventNumHasBeenSet() const;

                    /**
                     * 获取cspm风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetCspmRiskNum cspm风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAssetCspmRiskNum() const;

                    /**
                     * 设置cspm风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetCspmRiskNum cspm风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetCspmRiskNum(const int64_t& _assetCspmRiskNum);

                    /**
                     * 判断参数 AssetCspmRiskNum 是否已赋值
                     * @return AssetCspmRiskNum 是否已赋值
                     * 
                     */
                    bool AssetCspmRiskNumHasBeenSet() const;

                    /**
                     * 获取资产删除时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SsaAssetDeleteTime 资产删除时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSsaAssetDeleteTime() const;

                    /**
                     * 设置资产删除时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ssaAssetDeleteTime 资产删除时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSsaAssetDeleteTime(const std::string& _ssaAssetDeleteTime);

                    /**
                     * 判断参数 SsaAssetDeleteTime 是否已赋值
                     * @return SsaAssetDeleteTime 是否已赋值
                     * 
                     */
                    bool SsaAssetDeleteTimeHasBeenSet() const;

                    /**
                     * 获取费用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChargeType 费用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置费用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chargeType 费用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetRegionName 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetRegionName() const;

                    /**
                     * 设置地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetRegionName 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetRegionName(const std::string& _assetRegionName);

                    /**
                     * 判断参数 AssetRegionName 是否已赋值
                     * @return AssetRegionName 是否已赋值
                     * 
                     */
                    bool AssetRegionNameHasBeenSet() const;

                    /**
                     * 获取vpc信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetVpcid vpc信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetVpcid() const;

                    /**
                     * 设置vpc信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetVpcid vpc信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetVpcid(const std::string& _assetVpcid);

                    /**
                     * 判断参数 AssetVpcid 是否已赋值
                     * @return AssetVpcid 是否已赋值
                     * 
                     */
                    bool AssetVpcidHasBeenSet() const;

                private:

                    /**
                     * 资产类型
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 区域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 所属网络
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 主机类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 主机状态
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * 主机IP-公网
                     */
                    std::vector<std::string> m_publicIpAddresses;
                    bool m_publicIpAddressesHasBeenSet;

                    /**
                     * 引擎版本
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * 标识
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 内网IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 负载均衡示例的vip列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_loadBalancerVips;
                    bool m_loadBalancerVipsHasBeenSet;

                    /**
                     * 账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creationDate;
                    bool m_creationDateHasBeenSet;

                    /**
                     * 访问域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 资产唯一id
                     */
                    std::string m_assetUniqid;
                    bool m_assetUniqidHasBeenSet;

                    /**
                     * 关联实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 配置硬盘类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 配置硬盘大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 云硬盘/证书状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetStatus;
                    bool m_assetStatusHasBeenSet;

                    /**
                     * 证书类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * 所属项目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certEndTime;
                    bool m_certEndTimeHasBeenSet;

                    /**
                     * nosql引擎/版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * 主机IP-内网
                     */
                    std::vector<std::string> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * 证书有效期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_validityPeriod;
                    bool m_validityPeriodHasBeenSet;

                    /**
                     * 分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 端口服务数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 配置风险数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_riskConfig;
                    bool m_riskConfigHasBeenSet;

                    /**
                     * 相关待处理事件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_event;
                    bool m_eventHasBeenSet;

                    /**
                     * 相关待处理漏洞
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vul;
                    bool m_vulHasBeenSet;

                    /**
                     * 资产发现时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ssaAssetDiscoverTime;
                    bool m_ssaAssetDiscoverTimeHasBeenSet;

                    /**
                     * 所属子网
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetSubnetId;
                    bool m_assetSubnetIdHasBeenSet;

                    /**
                     * 子网名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetSubnetName;
                    bool m_assetSubnetNameHasBeenSet;

                    /**
                     * vpc名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetVpcName;
                    bool m_assetVpcNameHasBeenSet;

                    /**
                     * 集群类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nameSpace;
                    bool m_nameSpaceHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetCreateTime;
                    bool m_assetCreateTimeHasBeenSet;

                    /**
                     * 负载均衡网络类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * ipv6信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_assetIpv6;
                    bool m_assetIpv6HasBeenSet;

                    /**
                     * ssh风险
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sSHRisk;
                    bool m_sSHRiskHasBeenSet;

                    /**
                     * rdp风险
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rDPRisk;
                    bool m_rDPRiskHasBeenSet;

                    /**
                     * 安全事件风险
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventRisk;
                    bool m_eventRiskHasBeenSet;

                    /**
                     * 漏洞数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_assetVulNum;
                    bool m_assetVulNumHasBeenSet;

                    /**
                     * 资产事件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_assetEventNum;
                    bool m_assetEventNumHasBeenSet;

                    /**
                     * cspm风险
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_assetCspmRiskNum;
                    bool m_assetCspmRiskNumHasBeenSet;

                    /**
                     * 资产删除时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ssaAssetDeleteTime;
                    bool m_ssaAssetDeleteTimeHasBeenSet;

                    /**
                     * 费用类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetRegionName;
                    bool m_assetRegionNameHasBeenSet;

                    /**
                     * vpc信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetVpcid;
                    bool m_assetVpcidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_ASSETDETAIL_H_
