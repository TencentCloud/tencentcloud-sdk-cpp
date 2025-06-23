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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEATTRIBUTESRESPONSE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEATTRIBUTESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/VipEntity.h>
#include <tencentcloud/ckafka/v20190819/model/InstanceConfigDO.h>
#include <tencentcloud/ckafka/v20190819/model/Tag.h>
#include <tencentcloud/ckafka/v20190819/model/DynamicRetentionTime.h>
#include <tencentcloud/ckafka/v20190819/model/DynamicDiskConfig.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 实例属性返回结果对象
                */
                class InstanceAttributesResponse : public AbstractModel
                {
                public:
                    InstanceAttributesResponse();
                    ~InstanceAttributesResponse() = default;
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
                     * 获取ckafka集群实例Name
                     * @return InstanceName ckafka集群实例Name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置ckafka集群实例Name
                     * @param _instanceName ckafka集群实例Name
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
                     * 获取接入点 VIP 列表信息
                     * @return VipList 接入点 VIP 列表信息
                     * 
                     */
                    std::vector<VipEntity> GetVipList() const;

                    /**
                     * 设置接入点 VIP 列表信息
                     * @param _vipList 接入点 VIP 列表信息
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
                     * 获取虚拟IP
                     * @return Vip 虚拟IP
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置虚拟IP
                     * @param _vip 虚拟IP
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
                     * 获取虚拟端口
                     * @return Vport 虚拟端口
                     * 
                     */
                    std::string GetVport() const;

                    /**
                     * 设置虚拟端口
                     * @param _vport 虚拟端口
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
                     * 获取实例带宽，单位：Mbps
                     * @return Bandwidth 实例带宽，单位：Mbps
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置实例带宽，单位：Mbps
                     * @param _bandwidth 实例带宽，单位：Mbps
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
                     * 获取实例的存储大小，单位：GB
                     * @return DiskSize 实例的存储大小，单位：GB
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置实例的存储大小，单位：GB
                     * @param _diskSize 实例的存储大小，单位：GB
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
                     * 获取可用区
                     * @return ZoneId 可用区
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置可用区
                     * @param _zoneId 可用区
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
                     * 获取VPC 的 ID，为空表示是基础网络
                     * @return VpcId VPC 的 ID，为空表示是基础网络
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC 的 ID，为空表示是基础网络
                     * @param _vpcId VPC 的 ID，为空表示是基础网络
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
                     * 获取子网 ID， 为空表示基础网络
                     * @return SubnetId 子网 ID， 为空表示基础网络
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网 ID， 为空表示基础网络
                     * @param _subnetId 子网 ID， 为空表示基础网络
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
                     * 获取实例健康状态， 1：健康，2：告警，3：异常
                     * @return Healthy 实例健康状态， 1：健康，2：告警，3：异常
                     * 
                     */
                    int64_t GetHealthy() const;

                    /**
                     * 设置实例健康状态， 1：健康，2：告警，3：异常
                     * @param _healthy 实例健康状态， 1：健康，2：告警，3：异常
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
                     * 获取实例健康信息，当前会展示磁盘利用率，最大长度为256
                     * @return HealthyMessage 实例健康信息，当前会展示磁盘利用率，最大长度为256
                     * 
                     */
                    std::string GetHealthyMessage() const;

                    /**
                     * 设置实例健康信息，当前会展示磁盘利用率，最大长度为256
                     * @param _healthyMessage 实例健康信息，当前会展示磁盘利用率，最大长度为256
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取消息保存时间,单位为分钟
                     * @return MsgRetentionTime 消息保存时间,单位为分钟
                     * 
                     */
                    int64_t GetMsgRetentionTime() const;

                    /**
                     * 设置消息保存时间,单位为分钟
                     * @param _msgRetentionTime 消息保存时间,单位为分钟
                     * 
                     */
                    void SetMsgRetentionTime(const int64_t& _msgRetentionTime);

                    /**
                     * 判断参数 MsgRetentionTime 是否已赋值
                     * @return MsgRetentionTime 是否已赋值
                     * 
                     */
                    bool MsgRetentionTimeHasBeenSet() const;

                    /**
                     * 获取自动创建 Topic 配置， 若该字段为空，则表示未开启自动创建
                     * @return Config 自动创建 Topic 配置， 若该字段为空，则表示未开启自动创建
                     * 
                     */
                    InstanceConfigDO GetConfig() const;

                    /**
                     * 设置自动创建 Topic 配置， 若该字段为空，则表示未开启自动创建
                     * @param _config 自动创建 Topic 配置， 若该字段为空，则表示未开启自动创建
                     * 
                     */
                    void SetConfig(const InstanceConfigDO& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取剩余创建分区数
                     * @return RemainderPartitions 剩余创建分区数
                     * 
                     */
                    int64_t GetRemainderPartitions() const;

                    /**
                     * 设置剩余创建分区数
                     * @param _remainderPartitions 剩余创建分区数
                     * 
                     */
                    void SetRemainderPartitions(const int64_t& _remainderPartitions);

                    /**
                     * 判断参数 RemainderPartitions 是否已赋值
                     * @return RemainderPartitions 是否已赋值
                     * 
                     */
                    bool RemainderPartitionsHasBeenSet() const;

                    /**
                     * 获取剩余创建主题数
                     * @return RemainderTopics 剩余创建主题数
                     * 
                     */
                    int64_t GetRemainderTopics() const;

                    /**
                     * 设置剩余创建主题数
                     * @param _remainderTopics 剩余创建主题数
                     * 
                     */
                    void SetRemainderTopics(const int64_t& _remainderTopics);

                    /**
                     * 判断参数 RemainderTopics 是否已赋值
                     * @return RemainderTopics 是否已赋值
                     * 
                     */
                    bool RemainderTopicsHasBeenSet() const;

                    /**
                     * 获取当前创建分区数
                     * @return CreatedPartitions 当前创建分区数
                     * 
                     */
                    int64_t GetCreatedPartitions() const;

                    /**
                     * 设置当前创建分区数
                     * @param _createdPartitions 当前创建分区数
                     * 
                     */
                    void SetCreatedPartitions(const int64_t& _createdPartitions);

                    /**
                     * 判断参数 CreatedPartitions 是否已赋值
                     * @return CreatedPartitions 是否已赋值
                     * 
                     */
                    bool CreatedPartitionsHasBeenSet() const;

                    /**
                     * 获取当前创建主题数
                     * @return CreatedTopics 当前创建主题数
                     * 
                     */
                    int64_t GetCreatedTopics() const;

                    /**
                     * 设置当前创建主题数
                     * @param _createdTopics 当前创建主题数
                     * 
                     */
                    void SetCreatedTopics(const int64_t& _createdTopics);

                    /**
                     * 判断参数 CreatedTopics 是否已赋值
                     * @return CreatedTopics 是否已赋值
                     * 
                     */
                    bool CreatedTopicsHasBeenSet() const;

                    /**
                     * 获取标签数组
                     * @return Tags 标签数组
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签数组
                     * @param _tags 标签数组
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
                     * 获取过期时间
                     * @return ExpireTime 过期时间
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置过期时间
                     * @param _expireTime 过期时间
                     * 
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取可用区列表
                     * @return ZoneIds 可用区列表
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置可用区列表
                     * @param _zoneIds 可用区列表
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
                     * 获取ckafka集群实例版本
                     * @return Version ckafka集群实例版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置ckafka集群实例版本
                     * @param _version ckafka集群实例版本
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
                     * 获取最大分组数
                     * @return MaxGroupNum 最大分组数
                     * 
                     */
                    int64_t GetMaxGroupNum() const;

                    /**
                     * 设置最大分组数
                     * @param _maxGroupNum 最大分组数
                     * 
                     */
                    void SetMaxGroupNum(const int64_t& _maxGroupNum);

                    /**
                     * 判断参数 MaxGroupNum 是否已赋值
                     * @return MaxGroupNum 是否已赋值
                     * 
                     */
                    bool MaxGroupNumHasBeenSet() const;

                    /**
                     * 获取售卖类型,0:标准版,1:专业版
                     * @return Cvm 售卖类型,0:标准版,1:专业版
                     * 
                     */
                    int64_t GetCvm() const;

                    /**
                     * 设置售卖类型,0:标准版,1:专业版
                     * @param _cvm 售卖类型,0:标准版,1:专业版
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
                     * 获取类型
                     * @return InstanceType 类型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置类型
                     * @param _instanceType 类型
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
                     * 获取表示该实例支持的特性。FEATURE_SUBNET_ACL:表示acl策略支持设置子网。
                     * @return Features 表示该实例支持的特性。FEATURE_SUBNET_ACL:表示acl策略支持设置子网。
                     * 
                     */
                    std::vector<std::string> GetFeatures() const;

                    /**
                     * 设置表示该实例支持的特性。FEATURE_SUBNET_ACL:表示acl策略支持设置子网。
                     * @param _features 表示该实例支持的特性。FEATURE_SUBNET_ACL:表示acl策略支持设置子网。
                     * 
                     */
                    void SetFeatures(const std::vector<std::string>& _features);

                    /**
                     * 判断参数 Features 是否已赋值
                     * @return Features 是否已赋值
                     * 
                     */
                    bool FeaturesHasBeenSet() const;

                    /**
                     * 获取动态消息保留策略
                     * @return RetentionTimeConfig 动态消息保留策略
                     * 
                     */
                    DynamicRetentionTime GetRetentionTimeConfig() const;

                    /**
                     * 设置动态消息保留策略
                     * @param _retentionTimeConfig 动态消息保留策略
                     * 
                     */
                    void SetRetentionTimeConfig(const DynamicRetentionTime& _retentionTimeConfig);

                    /**
                     * 判断参数 RetentionTimeConfig 是否已赋值
                     * @return RetentionTimeConfig 是否已赋值
                     * 
                     */
                    bool RetentionTimeConfigHasBeenSet() const;

                    /**
                     * 获取最大连接数
                     * @return MaxConnection 最大连接数
                     * 
                     */
                    uint64_t GetMaxConnection() const;

                    /**
                     * 设置最大连接数
                     * @param _maxConnection 最大连接数
                     * 
                     */
                    void SetMaxConnection(const uint64_t& _maxConnection);

                    /**
                     * 判断参数 MaxConnection 是否已赋值
                     * @return MaxConnection 是否已赋值
                     * 
                     */
                    bool MaxConnectionHasBeenSet() const;

                    /**
                     * 获取公网带宽
                     * @return PublicNetwork 公网带宽
                     * 
                     */
                    int64_t GetPublicNetwork() const;

                    /**
                     * 设置公网带宽
                     * @param _publicNetwork 公网带宽
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
                     * 获取时间
                     * @return DeleteRouteTimestamp 时间
                     * 
                     */
                    std::string GetDeleteRouteTimestamp() const;

                    /**
                     * 设置时间
                     * @param _deleteRouteTimestamp 时间
                     * 
                     */
                    void SetDeleteRouteTimestamp(const std::string& _deleteRouteTimestamp);

                    /**
                     * 判断参数 DeleteRouteTimestamp 是否已赋值
                     * @return DeleteRouteTimestamp 是否已赋值
                     * 
                     */
                    bool DeleteRouteTimestampHasBeenSet() const;

                    /**
                     * 获取剩余创建分区数
                     * @return RemainingPartitions 剩余创建分区数
                     * 
                     */
                    int64_t GetRemainingPartitions() const;

                    /**
                     * 设置剩余创建分区数
                     * @param _remainingPartitions 剩余创建分区数
                     * 
                     */
                    void SetRemainingPartitions(const int64_t& _remainingPartitions);

                    /**
                     * 判断参数 RemainingPartitions 是否已赋值
                     * @return RemainingPartitions 是否已赋值
                     * 
                     */
                    bool RemainingPartitionsHasBeenSet() const;

                    /**
                     * 获取剩余创建主题数
                     * @return RemainingTopics 剩余创建主题数
                     * 
                     */
                    int64_t GetRemainingTopics() const;

                    /**
                     * 设置剩余创建主题数
                     * @param _remainingTopics 剩余创建主题数
                     * 
                     */
                    void SetRemainingTopics(const int64_t& _remainingTopics);

                    /**
                     * 判断参数 RemainingTopics 是否已赋值
                     * @return RemainingTopics 是否已赋值
                     * 
                     */
                    bool RemainingTopicsHasBeenSet() const;

                    /**
                     * 获取动态硬盘扩容策略
                     * @return DynamicDiskConfig 动态硬盘扩容策略
                     * 
                     */
                    DynamicDiskConfig GetDynamicDiskConfig() const;

                    /**
                     * 设置动态硬盘扩容策略
                     * @param _dynamicDiskConfig 动态硬盘扩容策略
                     * 
                     */
                    void SetDynamicDiskConfig(const DynamicDiskConfig& _dynamicDiskConfig);

                    /**
                     * 判断参数 DynamicDiskConfig 是否已赋值
                     * @return DynamicDiskConfig 是否已赋值
                     * 
                     */
                    bool DynamicDiskConfigHasBeenSet() const;

                    /**
                     * 获取实例计费类型
                     * @return InstanceChargeType 实例计费类型
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置实例计费类型
                     * @param _instanceChargeType 实例计费类型
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取集群类型
                     * @return ClusterType 集群类型
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置集群类型
                     * @param _clusterType 集群类型
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
                     * 获取免费分区数量
                     * @return FreePartitionNumber 免费分区数量
                     * 
                     */
                    int64_t GetFreePartitionNumber() const;

                    /**
                     * 设置免费分区数量
                     * @param _freePartitionNumber 免费分区数量
                     * 
                     */
                    void SetFreePartitionNumber(const int64_t& _freePartitionNumber);

                    /**
                     * 判断参数 FreePartitionNumber 是否已赋值
                     * @return FreePartitionNumber 是否已赋值
                     * 
                     */
                    bool FreePartitionNumberHasBeenSet() const;

                    /**
                     * 获取弹性带宽上浮值
                     * @return ElasticFloatBandwidth 弹性带宽上浮值
                     * 
                     */
                    int64_t GetElasticFloatBandwidth() const;

                    /**
                     * 设置弹性带宽上浮值
                     * @param _elasticFloatBandwidth 弹性带宽上浮值
                     * 
                     */
                    void SetElasticFloatBandwidth(const int64_t& _elasticFloatBandwidth);

                    /**
                     * 判断参数 ElasticFloatBandwidth 是否已赋值
                     * @return ElasticFloatBandwidth 是否已赋值
                     * 
                     */
                    bool ElasticFloatBandwidthHasBeenSet() const;

                    /**
                     * 获取ssl自定义证书id
                     * @return CustomCertId ssl自定义证书id
                     * 
                     */
                    std::string GetCustomCertId() const;

                    /**
                     * 设置ssl自定义证书id
                     * @param _customCertId ssl自定义证书id
                     * 
                     */
                    void SetCustomCertId(const std::string& _customCertId);

                    /**
                     * 判断参数 CustomCertId 是否已赋值
                     * @return CustomCertId 是否已赋值
                     * 
                     */
                    bool CustomCertIdHasBeenSet() const;

                    /**
                     * 获取集群topic默认 unclean.leader.election.enable配置: 1 开启 0 关闭
                     * @return UncleanLeaderElectionEnable 集群topic默认 unclean.leader.election.enable配置: 1 开启 0 关闭
                     * 
                     */
                    int64_t GetUncleanLeaderElectionEnable() const;

                    /**
                     * 设置集群topic默认 unclean.leader.election.enable配置: 1 开启 0 关闭
                     * @param _uncleanLeaderElectionEnable 集群topic默认 unclean.leader.election.enable配置: 1 开启 0 关闭
                     * 
                     */
                    void SetUncleanLeaderElectionEnable(const int64_t& _uncleanLeaderElectionEnable);

                    /**
                     * 判断参数 UncleanLeaderElectionEnable 是否已赋值
                     * @return UncleanLeaderElectionEnable 是否已赋值
                     * 
                     */
                    bool UncleanLeaderElectionEnableHasBeenSet() const;

                    /**
                     * 获取实例删除保护开关: 1 开启 0 关闭
                     * @return DeleteProtectionEnable 实例删除保护开关: 1 开启 0 关闭
                     * 
                     */
                    int64_t GetDeleteProtectionEnable() const;

                    /**
                     * 设置实例删除保护开关: 1 开启 0 关闭
                     * @param _deleteProtectionEnable 实例删除保护开关: 1 开启 0 关闭
                     * 
                     */
                    void SetDeleteProtectionEnable(const int64_t& _deleteProtectionEnable);

                    /**
                     * 判断参数 DeleteProtectionEnable 是否已赋值
                     * @return DeleteProtectionEnable 是否已赋值
                     * 
                     */
                    bool DeleteProtectionEnableHasBeenSet() const;

                private:

                    /**
                     * ckafka集群实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * ckafka集群实例Name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 接入点 VIP 列表信息
                     */
                    std::vector<VipEntity> m_vipList;
                    bool m_vipListHasBeenSet;

                    /**
                     * 虚拟IP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 虚拟端口
                     */
                    std::string m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 实例的状态。0: 创建中，1: 运行中，2: 删除中,  3: 已删除,  5: 隔离中,  7: 升级中,  -1: 创建失败 
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例带宽，单位：Mbps
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 实例的存储大小，单位：GB
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 可用区
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * VPC 的 ID，为空表示是基础网络
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网 ID， 为空表示基础网络
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 实例健康状态， 1：健康，2：告警，3：异常
                     */
                    int64_t m_healthy;
                    bool m_healthyHasBeenSet;

                    /**
                     * 实例健康信息，当前会展示磁盘利用率，最大长度为256
                     */
                    std::string m_healthyMessage;
                    bool m_healthyMessageHasBeenSet;

                    /**
                     * 创建时间
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 消息保存时间,单位为分钟
                     */
                    int64_t m_msgRetentionTime;
                    bool m_msgRetentionTimeHasBeenSet;

                    /**
                     * 自动创建 Topic 配置， 若该字段为空，则表示未开启自动创建
                     */
                    InstanceConfigDO m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 剩余创建分区数
                     */
                    int64_t m_remainderPartitions;
                    bool m_remainderPartitionsHasBeenSet;

                    /**
                     * 剩余创建主题数
                     */
                    int64_t m_remainderTopics;
                    bool m_remainderTopicsHasBeenSet;

                    /**
                     * 当前创建分区数
                     */
                    int64_t m_createdPartitions;
                    bool m_createdPartitionsHasBeenSet;

                    /**
                     * 当前创建主题数
                     */
                    int64_t m_createdTopics;
                    bool m_createdTopicsHasBeenSet;

                    /**
                     * 标签数组
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 过期时间
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 可用区列表
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * ckafka集群实例版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 最大分组数
                     */
                    int64_t m_maxGroupNum;
                    bool m_maxGroupNumHasBeenSet;

                    /**
                     * 售卖类型,0:标准版,1:专业版
                     */
                    int64_t m_cvm;
                    bool m_cvmHasBeenSet;

                    /**
                     * 类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 表示该实例支持的特性。FEATURE_SUBNET_ACL:表示acl策略支持设置子网。
                     */
                    std::vector<std::string> m_features;
                    bool m_featuresHasBeenSet;

                    /**
                     * 动态消息保留策略
                     */
                    DynamicRetentionTime m_retentionTimeConfig;
                    bool m_retentionTimeConfigHasBeenSet;

                    /**
                     * 最大连接数
                     */
                    uint64_t m_maxConnection;
                    bool m_maxConnectionHasBeenSet;

                    /**
                     * 公网带宽
                     */
                    int64_t m_publicNetwork;
                    bool m_publicNetworkHasBeenSet;

                    /**
                     * 时间
                     */
                    std::string m_deleteRouteTimestamp;
                    bool m_deleteRouteTimestampHasBeenSet;

                    /**
                     * 剩余创建分区数
                     */
                    int64_t m_remainingPartitions;
                    bool m_remainingPartitionsHasBeenSet;

                    /**
                     * 剩余创建主题数
                     */
                    int64_t m_remainingTopics;
                    bool m_remainingTopicsHasBeenSet;

                    /**
                     * 动态硬盘扩容策略
                     */
                    DynamicDiskConfig m_dynamicDiskConfig;
                    bool m_dynamicDiskConfigHasBeenSet;

                    /**
                     * 实例计费类型
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 集群类型
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 免费分区数量
                     */
                    int64_t m_freePartitionNumber;
                    bool m_freePartitionNumberHasBeenSet;

                    /**
                     * 弹性带宽上浮值
                     */
                    int64_t m_elasticFloatBandwidth;
                    bool m_elasticFloatBandwidthHasBeenSet;

                    /**
                     * ssl自定义证书id
                     */
                    std::string m_customCertId;
                    bool m_customCertIdHasBeenSet;

                    /**
                     * 集群topic默认 unclean.leader.election.enable配置: 1 开启 0 关闭
                     */
                    int64_t m_uncleanLeaderElectionEnable;
                    bool m_uncleanLeaderElectionEnableHasBeenSet;

                    /**
                     * 实例删除保护开关: 1 开启 0 关闭
                     */
                    int64_t m_deleteProtectionEnable;
                    bool m_deleteProtectionEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEATTRIBUTESRESPONSE_H_
