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
                     * 获取<p>ckafka集群实例Name</p>
                     * @return InstanceName <p>ckafka集群实例Name</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>ckafka集群实例Name</p>
                     * @param _instanceName <p>ckafka集群实例Name</p>
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
                     * 获取<p>接入点 VIP 列表信息</p>
                     * @return VipList <p>接入点 VIP 列表信息</p>
                     * 
                     */
                    std::vector<VipEntity> GetVipList() const;

                    /**
                     * 设置<p>接入点 VIP 列表信息</p>
                     * @param _vipList <p>接入点 VIP 列表信息</p>
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
                     * 获取<p>虚拟IP</p>
                     * @return Vip <p>虚拟IP</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>虚拟IP</p>
                     * @param _vip <p>虚拟IP</p>
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
                     * 获取<p>虚拟端口</p>
                     * @return Vport <p>虚拟端口</p>
                     * 
                     */
                    std::string GetVport() const;

                    /**
                     * 设置<p>虚拟端口</p>
                     * @param _vport <p>虚拟端口</p>
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
                     * 获取<p>实例带宽，单位：Mbps</p>
                     * @return Bandwidth <p>实例带宽，单位：Mbps</p>
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置<p>实例带宽，单位：Mbps</p>
                     * @param _bandwidth <p>实例带宽，单位：Mbps</p>
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
                     * 获取<p>实例的存储大小，单位：GB</p>
                     * @return DiskSize <p>实例的存储大小，单位：GB</p>
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置<p>实例的存储大小，单位：GB</p>
                     * @param _diskSize <p>实例的存储大小，单位：GB</p>
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
                     * 获取<p>可用区</p>
                     * @return ZoneId <p>可用区</p>
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置<p>可用区</p>
                     * @param _zoneId <p>可用区</p>
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
                     * 获取<p>VPC 的 ID，为空表示是基础网络</p>
                     * @return VpcId <p>VPC 的 ID，为空表示是基础网络</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC 的 ID，为空表示是基础网络</p>
                     * @param _vpcId <p>VPC 的 ID，为空表示是基础网络</p>
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
                     * 获取<p>子网 ID， 为空表示基础网络</p>
                     * @return SubnetId <p>子网 ID， 为空表示基础网络</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网 ID， 为空表示基础网络</p>
                     * @param _subnetId <p>子网 ID， 为空表示基础网络</p>
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
                     * 获取<p>实例健康状态， 1：健康，2：告警，3：异常</p>
                     * @return Healthy <p>实例健康状态， 1：健康，2：告警，3：异常</p>
                     * 
                     */
                    int64_t GetHealthy() const;

                    /**
                     * 设置<p>实例健康状态， 1：健康，2：告警，3：异常</p>
                     * @param _healthy <p>实例健康状态， 1：健康，2：告警，3：异常</p>
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
                     * 获取<p>实例健康信息，当前会展示磁盘利用率，最大长度为256</p>
                     * @return HealthyMessage <p>实例健康信息，当前会展示磁盘利用率，最大长度为256</p>
                     * 
                     */
                    std::string GetHealthyMessage() const;

                    /**
                     * 设置<p>实例健康信息，当前会展示磁盘利用率，最大长度为256</p>
                     * @param _healthyMessage <p>实例健康信息，当前会展示磁盘利用率，最大长度为256</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>消息保存时间,单位为分钟</p>
                     * @return MsgRetentionTime <p>消息保存时间,单位为分钟</p>
                     * 
                     */
                    int64_t GetMsgRetentionTime() const;

                    /**
                     * 设置<p>消息保存时间,单位为分钟</p>
                     * @param _msgRetentionTime <p>消息保存时间,单位为分钟</p>
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
                     * 获取<p>自动创建 Topic 配置， 若该字段为空，则表示未开启自动创建</p>
                     * @return Config <p>自动创建 Topic 配置， 若该字段为空，则表示未开启自动创建</p>
                     * 
                     */
                    InstanceConfigDO GetConfig() const;

                    /**
                     * 设置<p>自动创建 Topic 配置， 若该字段为空，则表示未开启自动创建</p>
                     * @param _config <p>自动创建 Topic 配置， 若该字段为空，则表示未开启自动创建</p>
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
                     * 获取<p>剩余创建分区数</p>
                     * @return RemainderPartitions <p>剩余创建分区数</p>
                     * 
                     */
                    int64_t GetRemainderPartitions() const;

                    /**
                     * 设置<p>剩余创建分区数</p>
                     * @param _remainderPartitions <p>剩余创建分区数</p>
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
                     * 获取<p>剩余创建主题数</p>
                     * @return RemainderTopics <p>剩余创建主题数</p>
                     * 
                     */
                    int64_t GetRemainderTopics() const;

                    /**
                     * 设置<p>剩余创建主题数</p>
                     * @param _remainderTopics <p>剩余创建主题数</p>
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
                     * 获取<p>当前创建分区数</p>
                     * @return CreatedPartitions <p>当前创建分区数</p>
                     * 
                     */
                    int64_t GetCreatedPartitions() const;

                    /**
                     * 设置<p>当前创建分区数</p>
                     * @param _createdPartitions <p>当前创建分区数</p>
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
                     * 获取<p>当前创建主题数</p>
                     * @return CreatedTopics <p>当前创建主题数</p>
                     * 
                     */
                    int64_t GetCreatedTopics() const;

                    /**
                     * 设置<p>当前创建主题数</p>
                     * @param _createdTopics <p>当前创建主题数</p>
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
                     * 获取<p>标签数组</p>
                     * @return Tags <p>标签数组</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签数组</p>
                     * @param _tags <p>标签数组</p>
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
                     * 获取<p>过期时间</p>
                     * @return ExpireTime <p>过期时间</p>
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置<p>过期时间</p>
                     * @param _expireTime <p>过期时间</p>
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
                     * 获取<p>可用区列表</p>
                     * @return ZoneIds <p>可用区列表</p>
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置<p>可用区列表</p>
                     * @param _zoneIds <p>可用区列表</p>
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
                     * 获取<p>ckafka集群实例版本</p>
                     * @return Version <p>ckafka集群实例版本</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>ckafka集群实例版本</p>
                     * @param _version <p>ckafka集群实例版本</p>
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
                     * 获取<p>最大分组数</p>
                     * @return MaxGroupNum <p>最大分组数</p>
                     * 
                     */
                    int64_t GetMaxGroupNum() const;

                    /**
                     * 设置<p>最大分组数</p>
                     * @param _maxGroupNum <p>最大分组数</p>
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
                     * 获取<p>售卖类型,0:标准版,1:专业版</p>
                     * @return Cvm <p>售卖类型,0:标准版,1:专业版</p>
                     * 
                     */
                    int64_t GetCvm() const;

                    /**
                     * 设置<p>售卖类型,0:标准版,1:专业版</p>
                     * @param _cvm <p>售卖类型,0:标准版,1:专业版</p>
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
                     * 获取<p>实例类型  枚举列表: profession  :专业版  <br />standards2  :标准版premium   :高级版serverless  :serverless版</p>
                     * @return InstanceType <p>实例类型  枚举列表: profession  :专业版  <br />standards2  :标准版premium   :高级版serverless  :serverless版</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>实例类型  枚举列表: profession  :专业版  <br />standards2  :标准版premium   :高级版serverless  :serverless版</p>
                     * @param _instanceType <p>实例类型  枚举列表: profession  :专业版  <br />standards2  :标准版premium   :高级版serverless  :serverless版</p>
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
                     * 获取<p>表示该实例支持的特性。FEATURE_SUBNET_ACL:表示acl策略支持设置子网。</p>
                     * @return Features <p>表示该实例支持的特性。FEATURE_SUBNET_ACL:表示acl策略支持设置子网。</p>
                     * 
                     */
                    std::vector<std::string> GetFeatures() const;

                    /**
                     * 设置<p>表示该实例支持的特性。FEATURE_SUBNET_ACL:表示acl策略支持设置子网。</p>
                     * @param _features <p>表示该实例支持的特性。FEATURE_SUBNET_ACL:表示acl策略支持设置子网。</p>
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
                     * 获取<p>动态消息保留策略</p>
                     * @return RetentionTimeConfig <p>动态消息保留策略</p>
                     * 
                     */
                    DynamicRetentionTime GetRetentionTimeConfig() const;

                    /**
                     * 设置<p>动态消息保留策略</p>
                     * @param _retentionTimeConfig <p>动态消息保留策略</p>
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
                     * 获取<p>最大连接数</p>
                     * @return MaxConnection <p>最大连接数</p>
                     * 
                     */
                    uint64_t GetMaxConnection() const;

                    /**
                     * 设置<p>最大连接数</p>
                     * @param _maxConnection <p>最大连接数</p>
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
                     * 获取<p>公网带宽</p>
                     * @return PublicNetwork <p>公网带宽</p>
                     * 
                     */
                    int64_t GetPublicNetwork() const;

                    /**
                     * 设置<p>公网带宽</p>
                     * @param _publicNetwork <p>公网带宽</p>
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
                     * 获取<p>该字段已废弃,无实际含义</p>
                     * @return DeleteRouteTimestamp <p>该字段已废弃,无实际含义</p>
                     * 
                     */
                    std::string GetDeleteRouteTimestamp() const;

                    /**
                     * 设置<p>该字段已废弃,无实际含义</p>
                     * @param _deleteRouteTimestamp <p>该字段已废弃,无实际含义</p>
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
                     * 获取<p>剩余创建分区数</p>
                     * @return RemainingPartitions <p>剩余创建分区数</p>
                     * 
                     */
                    int64_t GetRemainingPartitions() const;

                    /**
                     * 设置<p>剩余创建分区数</p>
                     * @param _remainingPartitions <p>剩余创建分区数</p>
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
                     * 获取<p>剩余创建主题数</p>
                     * @return RemainingTopics <p>剩余创建主题数</p>
                     * 
                     */
                    int64_t GetRemainingTopics() const;

                    /**
                     * 设置<p>剩余创建主题数</p>
                     * @param _remainingTopics <p>剩余创建主题数</p>
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
                     * 获取<p>动态硬盘扩容策略</p>
                     * @return DynamicDiskConfig <p>动态硬盘扩容策略</p>
                     * 
                     */
                    DynamicDiskConfig GetDynamicDiskConfig() const;

                    /**
                     * 设置<p>动态硬盘扩容策略</p>
                     * @param _dynamicDiskConfig <p>动态硬盘扩容策略</p>
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
                     * 获取<p>系统维护时间</p>
                     * @return SystemMaintenanceTime <p>系统维护时间</p>
                     * 
                     */
                    std::string GetSystemMaintenanceTime() const;

                    /**
                     * 设置<p>系统维护时间</p>
                     * @param _systemMaintenanceTime <p>系统维护时间</p>
                     * 
                     */
                    void SetSystemMaintenanceTime(const std::string& _systemMaintenanceTime);

                    /**
                     * 判断参数 SystemMaintenanceTime 是否已赋值
                     * @return SystemMaintenanceTime 是否已赋值
                     * 
                     */
                    bool SystemMaintenanceTimeHasBeenSet() const;

                    /**
                     * 获取<p>实例级别消息最大大小</p>
                     * @return MaxMessageByte <p>实例级别消息最大大小</p>
                     * 
                     */
                    uint64_t GetMaxMessageByte() const;

                    /**
                     * 设置<p>实例级别消息最大大小</p>
                     * @param _maxMessageByte <p>实例级别消息最大大小</p>
                     * 
                     */
                    void SetMaxMessageByte(const uint64_t& _maxMessageByte);

                    /**
                     * 判断参数 MaxMessageByte 是否已赋值
                     * @return MaxMessageByte 是否已赋值
                     * 
                     */
                    bool MaxMessageByteHasBeenSet() const;

                    /**
                     * 获取<p>实例计费类型  POSTPAID_BY_HOUR 按小时付费; PREPAID 包年包月</p>
                     * @return InstanceChargeType <p>实例计费类型  POSTPAID_BY_HOUR 按小时付费; PREPAID 包年包月</p>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>实例计费类型  POSTPAID_BY_HOUR 按小时付费; PREPAID 包年包月</p>
                     * @param _instanceChargeType <p>实例计费类型  POSTPAID_BY_HOUR 按小时付费; PREPAID 包年包月</p>
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
                     * 获取<p>是否开启弹性带宽白名单 <br />1:已开启弹性带宽白名单;0:未开启弹性带宽白名单;</p>
                     * @return ElasticBandwidthSwitch <p>是否开启弹性带宽白名单 <br />1:已开启弹性带宽白名单;0:未开启弹性带宽白名单;</p>
                     * 
                     */
                    int64_t GetElasticBandwidthSwitch() const;

                    /**
                     * 设置<p>是否开启弹性带宽白名单 <br />1:已开启弹性带宽白名单;0:未开启弹性带宽白名单;</p>
                     * @param _elasticBandwidthSwitch <p>是否开启弹性带宽白名单 <br />1:已开启弹性带宽白名单;0:未开启弹性带宽白名单;</p>
                     * 
                     */
                    void SetElasticBandwidthSwitch(const int64_t& _elasticBandwidthSwitch);

                    /**
                     * 判断参数 ElasticBandwidthSwitch 是否已赋值
                     * @return ElasticBandwidthSwitch 是否已赋值
                     * 
                     */
                    bool ElasticBandwidthSwitchHasBeenSet() const;

                    /**
                     * 获取<p>弹性带宽开通状态1:未开启弹性带宽;16: 开启弹性带宽中;32:开启弹性带宽成功;33:关闭弹性带宽中;34:关闭弹性带宽成功;64:开启弹性带宽失败;65:关闭弹性带宽失败;</p>
                     * @return ElasticBandwidthOpenStatus <p>弹性带宽开通状态1:未开启弹性带宽;16: 开启弹性带宽中;32:开启弹性带宽成功;33:关闭弹性带宽中;34:关闭弹性带宽成功;64:开启弹性带宽失败;65:关闭弹性带宽失败;</p>
                     * 
                     */
                    int64_t GetElasticBandwidthOpenStatus() const;

                    /**
                     * 设置<p>弹性带宽开通状态1:未开启弹性带宽;16: 开启弹性带宽中;32:开启弹性带宽成功;33:关闭弹性带宽中;34:关闭弹性带宽成功;64:开启弹性带宽失败;65:关闭弹性带宽失败;</p>
                     * @param _elasticBandwidthOpenStatus <p>弹性带宽开通状态1:未开启弹性带宽;16: 开启弹性带宽中;32:开启弹性带宽成功;33:关闭弹性带宽中;34:关闭弹性带宽成功;64:开启弹性带宽失败;65:关闭弹性带宽失败;</p>
                     * 
                     */
                    void SetElasticBandwidthOpenStatus(const int64_t& _elasticBandwidthOpenStatus);

                    /**
                     * 判断参数 ElasticBandwidthOpenStatus 是否已赋值
                     * @return ElasticBandwidthOpenStatus 是否已赋值
                     * 
                     */
                    bool ElasticBandwidthOpenStatusHasBeenSet() const;

                    /**
                     * 获取<p>集群类型<br />CLOUD_IDC IDC集群CLOUD_CVM_SHARE CVM共享集群CLOUD_CVM_YUNTI 云梯CVM集群CLOUD_CVM    CVM集群CLOUD_CDC CDC集群CLOUD_EKS_TSE EKS集群</p>
                     * @return ClusterType <p>集群类型<br />CLOUD_IDC IDC集群CLOUD_CVM_SHARE CVM共享集群CLOUD_CVM_YUNTI 云梯CVM集群CLOUD_CVM    CVM集群CLOUD_CDC CDC集群CLOUD_EKS_TSE EKS集群</p>
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置<p>集群类型<br />CLOUD_IDC IDC集群CLOUD_CVM_SHARE CVM共享集群CLOUD_CVM_YUNTI 云梯CVM集群CLOUD_CVM    CVM集群CLOUD_CDC CDC集群CLOUD_EKS_TSE EKS集群</p>
                     * @param _clusterType <p>集群类型<br />CLOUD_IDC IDC集群CLOUD_CVM_SHARE CVM共享集群CLOUD_CVM_YUNTI 云梯CVM集群CLOUD_CVM    CVM集群CLOUD_CDC CDC集群CLOUD_EKS_TSE EKS集群</p>
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
                     * 获取<p>免费分区数量</p>
                     * @return FreePartitionNumber <p>免费分区数量</p>
                     * 
                     */
                    int64_t GetFreePartitionNumber() const;

                    /**
                     * 设置<p>免费分区数量</p>
                     * @param _freePartitionNumber <p>免费分区数量</p>
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
                     * 获取<p>弹性带宽上浮值</p>
                     * @return ElasticFloatBandwidth <p>弹性带宽上浮值</p>
                     * 
                     */
                    int64_t GetElasticFloatBandwidth() const;

                    /**
                     * 设置<p>弹性带宽上浮值</p>
                     * @param _elasticFloatBandwidth <p>弹性带宽上浮值</p>
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
                     * 获取<p>ssl自定义证书id  仅自定义证书实例集群返回</p>
                     * @return CustomCertId <p>ssl自定义证书id  仅自定义证书实例集群返回</p>
                     * 
                     */
                    std::string GetCustomCertId() const;

                    /**
                     * 设置<p>ssl自定义证书id  仅自定义证书实例集群返回</p>
                     * @param _customCertId <p>ssl自定义证书id  仅自定义证书实例集群返回</p>
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
                     * 获取<p>集群topic默认 unclean.leader.election.enable配置: 1 开启 0 关闭</p>
                     * @return UncleanLeaderElectionEnable <p>集群topic默认 unclean.leader.election.enable配置: 1 开启 0 关闭</p>
                     * 
                     */
                    int64_t GetUncleanLeaderElectionEnable() const;

                    /**
                     * 设置<p>集群topic默认 unclean.leader.election.enable配置: 1 开启 0 关闭</p>
                     * @param _uncleanLeaderElectionEnable <p>集群topic默认 unclean.leader.election.enable配置: 1 开启 0 关闭</p>
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
                     * 获取<p>实例删除保护开关: 1 开启 0 关闭</p>
                     * @return DeleteProtectionEnable <p>实例删除保护开关: 1 开启 0 关闭</p>
                     * 
                     */
                    int64_t GetDeleteProtectionEnable() const;

                    /**
                     * 设置<p>实例删除保护开关: 1 开启 0 关闭</p>
                     * @param _deleteProtectionEnable <p>实例删除保护开关: 1 开启 0 关闭</p>
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
                     * <p>ckafka集群实例Id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>ckafka集群实例Name</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>接入点 VIP 列表信息</p>
                     */
                    std::vector<VipEntity> m_vipList;
                    bool m_vipListHasBeenSet;

                    /**
                     * <p>虚拟IP</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>虚拟端口</p>
                     */
                    std::string m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>实例的状态。0: 创建中，1: 运行中，2: 删除中,  3: 已删除,  5: 隔离中,  7: 升级中,  -1: 创建失败 </p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>实例带宽，单位：Mbps</p>
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * <p>实例的存储大小，单位：GB</p>
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>可用区</p>
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>VPC 的 ID，为空表示是基础网络</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网 ID， 为空表示基础网络</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>实例健康状态， 1：健康，2：告警，3：异常</p>
                     */
                    int64_t m_healthy;
                    bool m_healthyHasBeenSet;

                    /**
                     * <p>实例健康信息，当前会展示磁盘利用率，最大长度为256</p>
                     */
                    std::string m_healthyMessage;
                    bool m_healthyMessageHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>消息保存时间,单位为分钟</p>
                     */
                    int64_t m_msgRetentionTime;
                    bool m_msgRetentionTimeHasBeenSet;

                    /**
                     * <p>自动创建 Topic 配置， 若该字段为空，则表示未开启自动创建</p>
                     */
                    InstanceConfigDO m_config;
                    bool m_configHasBeenSet;

                    /**
                     * <p>剩余创建分区数</p>
                     */
                    int64_t m_remainderPartitions;
                    bool m_remainderPartitionsHasBeenSet;

                    /**
                     * <p>剩余创建主题数</p>
                     */
                    int64_t m_remainderTopics;
                    bool m_remainderTopicsHasBeenSet;

                    /**
                     * <p>当前创建分区数</p>
                     */
                    int64_t m_createdPartitions;
                    bool m_createdPartitionsHasBeenSet;

                    /**
                     * <p>当前创建主题数</p>
                     */
                    int64_t m_createdTopics;
                    bool m_createdTopicsHasBeenSet;

                    /**
                     * <p>标签数组</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>过期时间</p>
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>可用区列表</p>
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * <p>ckafka集群实例版本</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>最大分组数</p>
                     */
                    int64_t m_maxGroupNum;
                    bool m_maxGroupNumHasBeenSet;

                    /**
                     * <p>售卖类型,0:标准版,1:专业版</p>
                     */
                    int64_t m_cvm;
                    bool m_cvmHasBeenSet;

                    /**
                     * <p>实例类型  枚举列表: profession  :专业版  <br />standards2  :标准版premium   :高级版serverless  :serverless版</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>表示该实例支持的特性。FEATURE_SUBNET_ACL:表示acl策略支持设置子网。</p>
                     */
                    std::vector<std::string> m_features;
                    bool m_featuresHasBeenSet;

                    /**
                     * <p>动态消息保留策略</p>
                     */
                    DynamicRetentionTime m_retentionTimeConfig;
                    bool m_retentionTimeConfigHasBeenSet;

                    /**
                     * <p>最大连接数</p>
                     */
                    uint64_t m_maxConnection;
                    bool m_maxConnectionHasBeenSet;

                    /**
                     * <p>公网带宽</p>
                     */
                    int64_t m_publicNetwork;
                    bool m_publicNetworkHasBeenSet;

                    /**
                     * <p>该字段已废弃,无实际含义</p>
                     */
                    std::string m_deleteRouteTimestamp;
                    bool m_deleteRouteTimestampHasBeenSet;

                    /**
                     * <p>剩余创建分区数</p>
                     */
                    int64_t m_remainingPartitions;
                    bool m_remainingPartitionsHasBeenSet;

                    /**
                     * <p>剩余创建主题数</p>
                     */
                    int64_t m_remainingTopics;
                    bool m_remainingTopicsHasBeenSet;

                    /**
                     * <p>动态硬盘扩容策略</p>
                     */
                    DynamicDiskConfig m_dynamicDiskConfig;
                    bool m_dynamicDiskConfigHasBeenSet;

                    /**
                     * <p>系统维护时间</p>
                     */
                    std::string m_systemMaintenanceTime;
                    bool m_systemMaintenanceTimeHasBeenSet;

                    /**
                     * <p>实例级别消息最大大小</p>
                     */
                    uint64_t m_maxMessageByte;
                    bool m_maxMessageByteHasBeenSet;

                    /**
                     * <p>实例计费类型  POSTPAID_BY_HOUR 按小时付费; PREPAID 包年包月</p>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>是否开启弹性带宽白名单 <br />1:已开启弹性带宽白名单;0:未开启弹性带宽白名单;</p>
                     */
                    int64_t m_elasticBandwidthSwitch;
                    bool m_elasticBandwidthSwitchHasBeenSet;

                    /**
                     * <p>弹性带宽开通状态1:未开启弹性带宽;16: 开启弹性带宽中;32:开启弹性带宽成功;33:关闭弹性带宽中;34:关闭弹性带宽成功;64:开启弹性带宽失败;65:关闭弹性带宽失败;</p>
                     */
                    int64_t m_elasticBandwidthOpenStatus;
                    bool m_elasticBandwidthOpenStatusHasBeenSet;

                    /**
                     * <p>集群类型<br />CLOUD_IDC IDC集群CLOUD_CVM_SHARE CVM共享集群CLOUD_CVM_YUNTI 云梯CVM集群CLOUD_CVM    CVM集群CLOUD_CDC CDC集群CLOUD_EKS_TSE EKS集群</p>
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <p>免费分区数量</p>
                     */
                    int64_t m_freePartitionNumber;
                    bool m_freePartitionNumberHasBeenSet;

                    /**
                     * <p>弹性带宽上浮值</p>
                     */
                    int64_t m_elasticFloatBandwidth;
                    bool m_elasticFloatBandwidthHasBeenSet;

                    /**
                     * <p>ssl自定义证书id  仅自定义证书实例集群返回</p>
                     */
                    std::string m_customCertId;
                    bool m_customCertIdHasBeenSet;

                    /**
                     * <p>集群topic默认 unclean.leader.election.enable配置: 1 开启 0 关闭</p>
                     */
                    int64_t m_uncleanLeaderElectionEnable;
                    bool m_uncleanLeaderElectionEnableHasBeenSet;

                    /**
                     * <p>实例删除保护开关: 1 开启 0 关闭</p>
                     */
                    int64_t m_deleteProtectionEnable;
                    bool m_deleteProtectionEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEATTRIBUTESRESPONSE_H_
