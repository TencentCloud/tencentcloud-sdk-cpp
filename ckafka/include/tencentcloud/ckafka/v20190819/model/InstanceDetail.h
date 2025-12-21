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
                     * 获取<p>ckafka集群实例Id</p>
                     * @return InstanceId <p>ckafka集群实例Id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>ckafka集群实例Id</p>
                     * @param _instanceId <p>ckafka集群实例Id</p>
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
                     * 获取<p>ckafka集群实例名称</p>
                     * @return InstanceName <p>ckafka集群实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>ckafka集群实例名称</p>
                     * @param _instanceName <p>ckafka集群实例名称</p>
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
                     * 获取<p>访问实例的vip 信息</p>
                     * @return Vip <p>访问实例的vip 信息</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>访问实例的vip 信息</p>
                     * @param _vip <p>访问实例的vip 信息</p>
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
                     * 获取<p>访问实例的端口信息</p>
                     * @return Vport <p>访问实例的端口信息</p>
                     * 
                     */
                    std::string GetVport() const;

                    /**
                     * 设置<p>访问实例的端口信息</p>
                     * @param _vport <p>访问实例的端口信息</p>
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
                     * 获取<p>虚拟IP列表</p>
                     * @return VipList <p>虚拟IP列表</p>
                     * 
                     */
                    std::vector<VipEntity> GetVipList() const;

                    /**
                     * 设置<p>虚拟IP列表</p>
                     * @param _vipList <p>虚拟IP列表</p>
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
                     * 获取<p>实例的状态。0: 创建中，1: 运行中，2: 删除中,  3: 已删除,  5: 隔离中,  7: 升级中,  -1: 创建失败 </p>
                     * @return Status <p>实例的状态。0: 创建中，1: 运行中，2: 删除中,  3: 已删除,  5: 隔离中,  7: 升级中,  -1: 创建失败 </p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>实例的状态。0: 创建中，1: 运行中，2: 删除中,  3: 已删除,  5: 隔离中,  7: 升级中,  -1: 创建失败 </p>
                     * @param _status <p>实例的状态。0: 创建中，1: 运行中，2: 删除中,  3: 已删除,  5: 隔离中,  7: 升级中,  -1: 创建失败 </p>
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
                     * 获取<p>实例带宽，单位Mbps</p>
                     * @return Bandwidth <p>实例带宽，单位Mbps</p>
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置<p>实例带宽，单位Mbps</p>
                     * @param _bandwidth <p>实例带宽，单位Mbps</p>
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
                     * 获取<p>ckafka集群实例磁盘大小，单位G</p>
                     * @return DiskSize <p>ckafka集群实例磁盘大小，单位G</p>
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置<p>ckafka集群实例磁盘大小，单位G</p>
                     * @param _diskSize <p>ckafka集群实例磁盘大小，单位G</p>
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
                     * 获取<p>可用区域ID</p>
                     * @return ZoneId <p>可用区域ID</p>
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置<p>可用区域ID</p>
                     * @param _zoneId <p>可用区域ID</p>
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
                     * 获取<p>vpcId，如果为空，说明是基础网络</p>
                     * @return VpcId <p>vpcId，如果为空，说明是基础网络</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>vpcId，如果为空，说明是基础网络</p>
                     * @param _vpcId <p>vpcId，如果为空，说明是基础网络</p>
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
                     * 获取<p>子网id</p>
                     * @return SubnetId <p>子网id</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网id</p>
                     * @param _subnetId <p>子网id</p>
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
                     * 获取<p>实例是否续费，int  枚举值：1表示自动续费，2表示明确不自动续费</p>
                     * @return RenewFlag <p>实例是否续费，int  枚举值：1表示自动续费，2表示明确不自动续费</p>
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置<p>实例是否续费，int  枚举值：1表示自动续费，2表示明确不自动续费</p>
                     * @param _renewFlag <p>实例是否续费，int  枚举值：1表示自动续费，2表示明确不自动续费</p>
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
                     * 获取<p>实例状态 int：1表示健康，2表示告警，3 表示实例状态异常</p>
                     * @return Healthy <p>实例状态 int：1表示健康，2表示告警，3 表示实例状态异常</p>
                     * 
                     */
                    int64_t GetHealthy() const;

                    /**
                     * 设置<p>实例状态 int：1表示健康，2表示告警，3 表示实例状态异常</p>
                     * @param _healthy <p>实例状态 int：1表示健康，2表示告警，3 表示实例状态异常</p>
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
                     * 获取<p>实例状态信息</p>
                     * @return HealthyMessage <p>实例状态信息</p>
                     * 
                     */
                    std::string GetHealthyMessage() const;

                    /**
                     * 设置<p>实例状态信息</p>
                     * @param _healthyMessage <p>实例状态信息</p>
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
                     * 获取<p>实例创建时间</p>
                     * @return CreateTime <p>实例创建时间</p>
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置<p>实例创建时间</p>
                     * @param _createTime <p>实例创建时间</p>
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
                     * 获取<p>实例过期时间</p>
                     * @return ExpireTime <p>实例过期时间</p>
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置<p>实例过期时间</p>
                     * @param _expireTime <p>实例过期时间</p>
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
                     * 获取<p>是否为内部客户。值为1 表示内部客户</p>
                     * @return IsInternal <p>是否为内部客户。值为1 表示内部客户</p>
                     * 
                     */
                    int64_t GetIsInternal() const;

                    /**
                     * 设置<p>是否为内部客户。值为1 表示内部客户</p>
                     * @param _isInternal <p>是否为内部客户。值为1 表示内部客户</p>
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
                     * 获取<p>Topic个数</p>
                     * @return TopicNum <p>Topic个数</p>
                     * 
                     */
                    int64_t GetTopicNum() const;

                    /**
                     * 设置<p>Topic个数</p>
                     * @param _topicNum <p>Topic个数</p>
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
                     * 获取<p>标识tag</p>
                     * @return Tags <p>标识tag</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标识tag</p>
                     * @param _tags <p>标识tag</p>
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
                     * 获取<p>kafka版本信息</p>
                     * @return Version <p>kafka版本信息</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>kafka版本信息</p>
                     * @param _version <p>kafka版本信息</p>
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
                     * 获取<p>跨可用区</p>
                     * @return ZoneIds <p>跨可用区</p>
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置<p>跨可用区</p>
                     * @param _zoneIds <p>跨可用区</p>
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
                     * 获取<p>ckafka售卖类型</p>
                     * @return Cvm <p>ckafka售卖类型</p>
                     * 
                     */
                    int64_t GetCvm() const;

                    /**
                     * 设置<p>ckafka售卖类型</p>
                     * @param _cvm <p>ckafka售卖类型</p>
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
                     * 获取<p>ckafka集群实例类型</p>
                     * @return InstanceType <p>ckafka集群实例类型</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>ckafka集群实例类型</p>
                     * @param _instanceType <p>ckafka集群实例类型</p>
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
                     * 获取<p>ckafka集群实例磁盘类型</p>
                     * @return DiskType <p>ckafka集群实例磁盘类型</p>
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置<p>ckafka集群实例磁盘类型</p>
                     * @param _diskType <p>ckafka集群实例磁盘类型</p>
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
                     * 获取<p>当前规格最大Topic数</p>
                     * @return MaxTopicNumber <p>当前规格最大Topic数</p>
                     * 
                     */
                    int64_t GetMaxTopicNumber() const;

                    /**
                     * 设置<p>当前规格最大Topic数</p>
                     * @param _maxTopicNumber <p>当前规格最大Topic数</p>
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
                     * 获取<p>当前规格最大Partition数</p>
                     * @return MaxPartitionNumber <p>当前规格最大Partition数</p>
                     * 
                     */
                    int64_t GetMaxPartitionNumber() const;

                    /**
                     * 设置<p>当前规格最大Partition数</p>
                     * @param _maxPartitionNumber <p>当前规格最大Partition数</p>
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
                     * 获取<p>计划升级配置时间</p>
                     * @return RebalanceTime <p>计划升级配置时间</p>
                     * 
                     */
                    std::string GetRebalanceTime() const;

                    /**
                     * 设置<p>计划升级配置时间</p>
                     * @param _rebalanceTime <p>计划升级配置时间</p>
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
                     * 获取<p>实例当前partition数量</p>
                     * @return PartitionNumber <p>实例当前partition数量</p>
                     * 
                     */
                    uint64_t GetPartitionNumber() const;

                    /**
                     * 设置<p>实例当前partition数量</p>
                     * @param _partitionNumber <p>实例当前partition数量</p>
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
                     * 获取<p>ckafka集群实例公网带宽类型</p>
                     * @return PublicNetworkChargeType <p>ckafka集群实例公网带宽类型</p>
                     * 
                     */
                    std::string GetPublicNetworkChargeType() const;

                    /**
                     * 设置<p>ckafka集群实例公网带宽类型</p>
                     * @param _publicNetworkChargeType <p>ckafka集群实例公网带宽类型</p>
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
                     * 获取<p>公网带宽 最小3Mbps  最大999Mbps 仅专业版支持填写</p>
                     * @return PublicNetwork <p>公网带宽 最小3Mbps  最大999Mbps 仅专业版支持填写</p>
                     * 
                     */
                    int64_t GetPublicNetwork() const;

                    /**
                     * 设置<p>公网带宽 最小3Mbps  最大999Mbps 仅专业版支持填写</p>
                     * @param _publicNetwork <p>公网带宽 最小3Mbps  最大999Mbps 仅专业版支持填写</p>
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
                     * 获取<p>ckafka集群实例底层集群类型</p>
                     * @return ClusterType <p>ckafka集群实例底层集群类型</p>
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置<p>ckafka集群实例底层集群类型</p>
                     * @param _clusterType <p>ckafka集群实例底层集群类型</p>
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
                     * 获取<p>实例功能列表</p>
                     * @return Features <p>实例功能列表</p>
                     * 
                     */
                    std::vector<std::string> GetFeatures() const;

                    /**
                     * 设置<p>实例功能列表</p>
                     * @param _features <p>实例功能列表</p>
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
                     * <p>ckafka集群实例Id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>ckafka集群实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>访问实例的vip 信息</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>访问实例的端口信息</p>
                     */
                    std::string m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>虚拟IP列表</p>
                     */
                    std::vector<VipEntity> m_vipList;
                    bool m_vipListHasBeenSet;

                    /**
                     * <p>实例的状态。0: 创建中，1: 运行中，2: 删除中,  3: 已删除,  5: 隔离中,  7: 升级中,  -1: 创建失败 </p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>实例带宽，单位Mbps</p>
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * <p>ckafka集群实例磁盘大小，单位G</p>
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>可用区域ID</p>
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>vpcId，如果为空，说明是基础网络</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网id</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>实例是否续费，int  枚举值：1表示自动续费，2表示明确不自动续费</p>
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>实例状态 int：1表示健康，2表示告警，3 表示实例状态异常</p>
                     */
                    int64_t m_healthy;
                    bool m_healthyHasBeenSet;

                    /**
                     * <p>实例状态信息</p>
                     */
                    std::string m_healthyMessage;
                    bool m_healthyMessageHasBeenSet;

                    /**
                     * <p>实例创建时间</p>
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>实例过期时间</p>
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>是否为内部客户。值为1 表示内部客户</p>
                     */
                    int64_t m_isInternal;
                    bool m_isInternalHasBeenSet;

                    /**
                     * <p>Topic个数</p>
                     */
                    int64_t m_topicNum;
                    bool m_topicNumHasBeenSet;

                    /**
                     * <p>标识tag</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>kafka版本信息</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>跨可用区</p>
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * <p>ckafka售卖类型</p>
                     */
                    int64_t m_cvm;
                    bool m_cvmHasBeenSet;

                    /**
                     * <p>ckafka集群实例类型</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>ckafka集群实例磁盘类型</p>
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * <p>当前规格最大Topic数</p>
                     */
                    int64_t m_maxTopicNumber;
                    bool m_maxTopicNumberHasBeenSet;

                    /**
                     * <p>当前规格最大Partition数</p>
                     */
                    int64_t m_maxPartitionNumber;
                    bool m_maxPartitionNumberHasBeenSet;

                    /**
                     * <p>计划升级配置时间</p>
                     */
                    std::string m_rebalanceTime;
                    bool m_rebalanceTimeHasBeenSet;

                    /**
                     * <p>实例当前partition数量</p>
                     */
                    uint64_t m_partitionNumber;
                    bool m_partitionNumberHasBeenSet;

                    /**
                     * <p>ckafka集群实例公网带宽类型</p>
                     */
                    std::string m_publicNetworkChargeType;
                    bool m_publicNetworkChargeTypeHasBeenSet;

                    /**
                     * <p>公网带宽 最小3Mbps  最大999Mbps 仅专业版支持填写</p>
                     */
                    int64_t m_publicNetwork;
                    bool m_publicNetworkHasBeenSet;

                    /**
                     * <p>ckafka集群实例底层集群类型</p>
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <p>实例功能列表</p>
                     */
                    std::vector<std::string> m_features;
                    bool m_featuresHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEDETAIL_H_
