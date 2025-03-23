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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEDETAIL_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/VipEntity.h>
#include <tencentcloud/ckafka/v20190819/model/Tag.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 实例详情
                */
                class InstanceDetail : public AbstractModel
                {
                public:
                    InstanceDetail();
                    ~InstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ckafka集群实例Id
                     * @return InstanceId ckafka集群实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ckafka集群实例Id
                     * @param _instanceId ckafka集群实例Id
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
                     * 获取ckafka集群实例名称
                     * @return InstanceName ckafka集群实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置ckafka集群实例名称
                     * @param _instanceName ckafka集群实例名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取访问实例的vip 信息
                     * @return Vip 访问实例的vip 信息
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置访问实例的vip 信息
                     * @param _vip 访问实例的vip 信息
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
                     * 获取访问实例的端口信息
                     * @return Vport 访问实例的端口信息
                     * 
                     */
                    std::string GetVport() const;

                    /**
                     * 设置访问实例的端口信息
                     * @param _vport 访问实例的端口信息
                     * 
                     */
                    void SetVport(const std::string& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取虚拟IP列表
                     * @return VipList 虚拟IP列表
                     * 
                     */
                    std::vector<VipEntity> GetVipList() const;

                    /**
                     * 设置虚拟IP列表
                     * @param _vipList 虚拟IP列表
                     * 
                     */
                    void SetVipList(const std::vector<VipEntity>& _vipList);

                    /**
                     * 判断参数 VipList 是否已赋值
                     * @return VipList 是否已赋值
                     * 
                     */
                    bool VipListHasBeenSet() const;

                    /**
                     * 获取实例的状态。0: 创建中，1: 运行中，2: 删除中,  3: 已删除,  5: 隔离中,  7: 升级中,  -1: 创建失败 
                     * @return Status 实例的状态。0: 创建中，1: 运行中，2: 删除中,  3: 已删除,  5: 隔离中,  7: 升级中,  -1: 创建失败 
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例的状态。0: 创建中，1: 运行中，2: 删除中,  3: 已删除,  5: 隔离中,  7: 升级中,  -1: 创建失败 
                     * @param _status 实例的状态。0: 创建中，1: 运行中，2: 删除中,  3: 已删除,  5: 隔离中,  7: 升级中,  -1: 创建失败 
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
                     * 获取实例带宽，单位Mbps
                     * @return Bandwidth 实例带宽，单位Mbps
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置实例带宽，单位Mbps
                     * @param _bandwidth 实例带宽，单位Mbps
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取ckafka集群实例磁盘大小，单位G
                     * @return DiskSize ckafka集群实例磁盘大小，单位G
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置ckafka集群实例磁盘大小，单位G
                     * @param _diskSize ckafka集群实例磁盘大小，单位G
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
                     * 获取可用区域ID
                     * @return ZoneId 可用区域ID
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置可用区域ID
                     * @param _zoneId 可用区域ID
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取vpcId，如果为空，说明是基础网络
                     * @return VpcId vpcId，如果为空，说明是基础网络
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpcId，如果为空，说明是基础网络
                     * @param _vpcId vpcId，如果为空，说明是基础网络
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
                     * 获取子网id
                     * @return SubnetId 子网id
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网id
                     * @param _subnetId 子网id
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
                     * 获取实例是否续费，int  枚举值：1表示自动续费，2表示明确不自动续费
                     * @return RenewFlag 实例是否续费，int  枚举值：1表示自动续费，2表示明确不自动续费
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置实例是否续费，int  枚举值：1表示自动续费，2表示明确不自动续费
                     * @param _renewFlag 实例是否续费，int  枚举值：1表示自动续费，2表示明确不自动续费
                     * 
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取实例状态 int：1表示健康，2表示告警，3 表示实例状态异常
                     * @return Healthy 实例状态 int：1表示健康，2表示告警，3 表示实例状态异常
                     * 
                     */
                    int64_t GetHealthy() const;

                    /**
                     * 设置实例状态 int：1表示健康，2表示告警，3 表示实例状态异常
                     * @param _healthy 实例状态 int：1表示健康，2表示告警，3 表示实例状态异常
                     * 
                     */
                    void SetHealthy(const int64_t& _healthy);

                    /**
                     * 判断参数 Healthy 是否已赋值
                     * @return Healthy 是否已赋值
                     * 
                     */
                    bool HealthyHasBeenSet() const;

                    /**
                     * 获取实例状态信息
                     * @return HealthyMessage 实例状态信息
                     * 
                     */
                    std::string GetHealthyMessage() const;

                    /**
                     * 设置实例状态信息
                     * @param _healthyMessage 实例状态信息
                     * 
                     */
                    void SetHealthyMessage(const std::string& _healthyMessage);

                    /**
                     * 判断参数 HealthyMessage 是否已赋值
                     * @return HealthyMessage 是否已赋值
                     * 
                     */
                    bool HealthyMessageHasBeenSet() const;

                    /**
                     * 获取实例创建时间
                     * @return CreateTime 实例创建时间
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置实例创建时间
                     * @param _createTime 实例创建时间
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取实例过期时间
                     * @return ExpireTime 实例过期时间
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置实例过期时间
                     * @param _expireTime 实例过期时间
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取是否为内部客户。值为1 表示内部客户
                     * @return IsInternal 是否为内部客户。值为1 表示内部客户
                     * 
                     */
                    int64_t GetIsInternal() const;

                    /**
                     * 设置是否为内部客户。值为1 表示内部客户
                     * @param _isInternal 是否为内部客户。值为1 表示内部客户
                     * 
                     */
                    void SetIsInternal(const int64_t& _isInternal);

                    /**
                     * 判断参数 IsInternal 是否已赋值
                     * @return IsInternal 是否已赋值
                     * 
                     */
                    bool IsInternalHasBeenSet() const;

                    /**
                     * 获取Topic个数
                     * @return TopicNum Topic个数
                     * 
                     */
                    int64_t GetTopicNum() const;

                    /**
                     * 设置Topic个数
                     * @param _topicNum Topic个数
                     * 
                     */
                    void SetTopicNum(const int64_t& _topicNum);

                    /**
                     * 判断参数 TopicNum 是否已赋值
                     * @return TopicNum 是否已赋值
                     * 
                     */
                    bool TopicNumHasBeenSet() const;

                    /**
                     * 获取标识tag
                     * @return Tags 标识tag
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标识tag
                     * @param _tags 标识tag
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
                     * 获取kafka版本信息
                     * @return Version kafka版本信息
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置kafka版本信息
                     * @param _version kafka版本信息
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取跨可用区
                     * @return ZoneIds 跨可用区
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置跨可用区
                     * @param _zoneIds 跨可用区
                     * 
                     */
                    void SetZoneIds(const std::vector<int64_t>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取ckafka售卖类型
                     * @return Cvm ckafka售卖类型
                     * 
                     */
                    int64_t GetCvm() const;

                    /**
                     * 设置ckafka售卖类型
                     * @param _cvm ckafka售卖类型
                     * 
                     */
                    void SetCvm(const int64_t& _cvm);

                    /**
                     * 判断参数 Cvm 是否已赋值
                     * @return Cvm 是否已赋值
                     * 
                     */
                    bool CvmHasBeenSet() const;

                    /**
                     * 获取ckafka集群实例类型
                     * @return InstanceType ckafka集群实例类型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置ckafka集群实例类型
                     * @param _instanceType ckafka集群实例类型
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
                     * 获取ckafka集群实例磁盘类型
                     * @return DiskType ckafka集群实例磁盘类型
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置ckafka集群实例磁盘类型
                     * @param _diskType ckafka集群实例磁盘类型
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
                     * 获取当前规格最大Topic数
                     * @return MaxTopicNumber 当前规格最大Topic数
                     * 
                     */
                    int64_t GetMaxTopicNumber() const;

                    /**
                     * 设置当前规格最大Topic数
                     * @param _maxTopicNumber 当前规格最大Topic数
                     * 
                     */
                    void SetMaxTopicNumber(const int64_t& _maxTopicNumber);

                    /**
                     * 判断参数 MaxTopicNumber 是否已赋值
                     * @return MaxTopicNumber 是否已赋值
                     * 
                     */
                    bool MaxTopicNumberHasBeenSet() const;

                    /**
                     * 获取当前规格最大Partition数
                     * @return MaxPartitionNumber 当前规格最大Partition数
                     * 
                     */
                    int64_t GetMaxPartitionNumber() const;

                    /**
                     * 设置当前规格最大Partition数
                     * @param _maxPartitionNumber 当前规格最大Partition数
                     * 
                     */
                    void SetMaxPartitionNumber(const int64_t& _maxPartitionNumber);

                    /**
                     * 判断参数 MaxPartitionNumber 是否已赋值
                     * @return MaxPartitionNumber 是否已赋值
                     * 
                     */
                    bool MaxPartitionNumberHasBeenSet() const;

                    /**
                     * 获取计划升级配置时间
                     * @return RebalanceTime 计划升级配置时间
                     * 
                     */
                    std::string GetRebalanceTime() const;

                    /**
                     * 设置计划升级配置时间
                     * @param _rebalanceTime 计划升级配置时间
                     * 
                     */
                    void SetRebalanceTime(const std::string& _rebalanceTime);

                    /**
                     * 判断参数 RebalanceTime 是否已赋值
                     * @return RebalanceTime 是否已赋值
                     * 
                     */
                    bool RebalanceTimeHasBeenSet() const;

                    /**
                     * 获取实例当前partition数量
                     * @return PartitionNumber 实例当前partition数量
                     * 
                     */
                    uint64_t GetPartitionNumber() const;

                    /**
                     * 设置实例当前partition数量
                     * @param _partitionNumber 实例当前partition数量
                     * 
                     */
                    void SetPartitionNumber(const uint64_t& _partitionNumber);

                    /**
                     * 判断参数 PartitionNumber 是否已赋值
                     * @return PartitionNumber 是否已赋值
                     * 
                     */
                    bool PartitionNumberHasBeenSet() const;

                    /**
                     * 获取ckafka集群实例公网带宽类型
                     * @return PublicNetworkChargeType ckafka集群实例公网带宽类型
                     * 
                     */
                    std::string GetPublicNetworkChargeType() const;

                    /**
                     * 设置ckafka集群实例公网带宽类型
                     * @param _publicNetworkChargeType ckafka集群实例公网带宽类型
                     * 
                     */
                    void SetPublicNetworkChargeType(const std::string& _publicNetworkChargeType);

                    /**
                     * 判断参数 PublicNetworkChargeType 是否已赋值
                     * @return PublicNetworkChargeType 是否已赋值
                     * 
                     */
                    bool PublicNetworkChargeTypeHasBeenSet() const;

                    /**
                     * 获取公网带宽 最小3Mbps  最大999Mbps 仅专业版支持填写
                     * @return PublicNetwork 公网带宽 最小3Mbps  最大999Mbps 仅专业版支持填写
                     * 
                     */
                    int64_t GetPublicNetwork() const;

                    /**
                     * 设置公网带宽 最小3Mbps  最大999Mbps 仅专业版支持填写
                     * @param _publicNetwork 公网带宽 最小3Mbps  最大999Mbps 仅专业版支持填写
                     * 
                     */
                    void SetPublicNetwork(const int64_t& _publicNetwork);

                    /**
                     * 判断参数 PublicNetwork 是否已赋值
                     * @return PublicNetwork 是否已赋值
                     * 
                     */
                    bool PublicNetworkHasBeenSet() const;

                    /**
                     * 获取ckafka集群实例底层集群类型
                     * @return ClusterType ckafka集群实例底层集群类型
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置ckafka集群实例底层集群类型
                     * @param _clusterType ckafka集群实例底层集群类型
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取实例功能列表
                     * @return Features 实例功能列表
                     * 
                     */
                    std::vector<std::string> GetFeatures() const;

                    /**
                     * 设置实例功能列表
                     * @param _features 实例功能列表
                     * 
                     */
                    void SetFeatures(const std::vector<std::string>& _features);

                    /**
                     * 判断参数 Features 是否已赋值
                     * @return Features 是否已赋值
                     * 
                     */
                    bool FeaturesHasBeenSet() const;

                private:

                    /**
                     * ckafka集群实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * ckafka集群实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 访问实例的vip 信息
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 访问实例的端口信息
                     */
                    std::string m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 虚拟IP列表
                     */
                    std::vector<VipEntity> m_vipList;
                    bool m_vipListHasBeenSet;

                    /**
                     * 实例的状态。0: 创建中，1: 运行中，2: 删除中,  3: 已删除,  5: 隔离中,  7: 升级中,  -1: 创建失败 
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例带宽，单位Mbps
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * ckafka集群实例磁盘大小，单位G
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 可用区域ID
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * vpcId，如果为空，说明是基础网络
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 实例是否续费，int  枚举值：1表示自动续费，2表示明确不自动续费
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 实例状态 int：1表示健康，2表示告警，3 表示实例状态异常
                     */
                    int64_t m_healthy;
                    bool m_healthyHasBeenSet;

                    /**
                     * 实例状态信息
                     */
                    std::string m_healthyMessage;
                    bool m_healthyMessageHasBeenSet;

                    /**
                     * 实例创建时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 实例过期时间
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 是否为内部客户。值为1 表示内部客户
                     */
                    int64_t m_isInternal;
                    bool m_isInternalHasBeenSet;

                    /**
                     * Topic个数
                     */
                    int64_t m_topicNum;
                    bool m_topicNumHasBeenSet;

                    /**
                     * 标识tag
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * kafka版本信息
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 跨可用区
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * ckafka售卖类型
                     */
                    int64_t m_cvm;
                    bool m_cvmHasBeenSet;

                    /**
                     * ckafka集群实例类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * ckafka集群实例磁盘类型
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 当前规格最大Topic数
                     */
                    int64_t m_maxTopicNumber;
                    bool m_maxTopicNumberHasBeenSet;

                    /**
                     * 当前规格最大Partition数
                     */
                    int64_t m_maxPartitionNumber;
                    bool m_maxPartitionNumberHasBeenSet;

                    /**
                     * 计划升级配置时间
                     */
                    std::string m_rebalanceTime;
                    bool m_rebalanceTimeHasBeenSet;

                    /**
                     * 实例当前partition数量
                     */
                    uint64_t m_partitionNumber;
                    bool m_partitionNumberHasBeenSet;

                    /**
                     * ckafka集群实例公网带宽类型
                     */
                    std::string m_publicNetworkChargeType;
                    bool m_publicNetworkChargeTypeHasBeenSet;

                    /**
                     * 公网带宽 最小3Mbps  最大999Mbps 仅专业版支持填写
                     */
                    int64_t m_publicNetwork;
                    bool m_publicNetworkHasBeenSet;

                    /**
                     * ckafka集群实例底层集群类型
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 实例功能列表
                     */
                    std::vector<std::string> m_features;
                    bool m_featuresHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEDETAIL_H_
