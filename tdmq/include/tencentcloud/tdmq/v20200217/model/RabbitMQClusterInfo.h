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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQCLUSTERINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQCLUSTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/VpcEndpointInfo.h>
#include <tencentcloud/tdmq/v20200217/model/Tag.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RabbitMQ 集群基本信息
                */
                class RabbitMQClusterInfo : public AbstractModel
                {
                public:
                    RabbitMQClusterInfo();
                    ~RabbitMQClusterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>集群 ID</p>
                     * @return ClusterId <p>集群 ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群 ID</p>
                     * @param _clusterId <p>集群 ID</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>集群名称</p>
                     * @return ClusterName <p>集群名称</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名称</p>
                     * @param _clusterName <p>集群名称</p>
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>地域信息</p>
                     * @return Region <p>地域信息</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域信息</p>
                     * @param _region <p>地域信息</p>
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
                     * 获取<p>创建时间，毫秒为单位。unix 时间戳</p>
                     * @return CreateTime <p>创建时间，毫秒为单位。unix 时间戳</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间，毫秒为单位。unix 时间戳</p>
                     * @param _createTime <p>创建时间，毫秒为单位。unix 时间戳</p>
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
                     * 获取<p>集群说明信息</p>
                     * @return Remark <p>集群说明信息</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>集群说明信息</p>
                     * @param _remark <p>集群说明信息</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>VPC及网络信息</p>
                     * @return Vpcs <p>VPC及网络信息</p>
                     * 
                     */
                    std::vector<VpcEndpointInfo> GetVpcs() const;

                    /**
                     * 设置<p>VPC及网络信息</p>
                     * @param _vpcs <p>VPC及网络信息</p>
                     * 
                     */
                    void SetVpcs(const std::vector<VpcEndpointInfo>& _vpcs);

                    /**
                     * 判断参数 Vpcs 是否已赋值
                     * @return Vpcs 是否已赋值
                     * 
                     */
                    bool VpcsHasBeenSet() const;

                    /**
                     * 获取<p>可用区信息</p>
                     * @return ZoneIds <p>可用区信息</p>
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置<p>可用区信息</p>
                     * @param _zoneIds <p>可用区信息</p>
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
                     * 获取<p>虚拟主机数量</p>
                     * @return VirtualHostNumber <p>虚拟主机数量</p>
                     * 
                     */
                    int64_t GetVirtualHostNumber() const;

                    /**
                     * 设置<p>虚拟主机数量</p>
                     * @param _virtualHostNumber <p>虚拟主机数量</p>
                     * 
                     */
                    void SetVirtualHostNumber(const int64_t& _virtualHostNumber);

                    /**
                     * 判断参数 VirtualHostNumber 是否已赋值
                     * @return VirtualHostNumber 是否已赋值
                     * 
                     */
                    bool VirtualHostNumberHasBeenSet() const;

                    /**
                     * 获取<p>队列数量</p>
                     * @return QueueNumber <p>队列数量</p>
                     * 
                     */
                    int64_t GetQueueNumber() const;

                    /**
                     * 设置<p>队列数量</p>
                     * @param _queueNumber <p>队列数量</p>
                     * 
                     */
                    void SetQueueNumber(const int64_t& _queueNumber);

                    /**
                     * 判断参数 QueueNumber 是否已赋值
                     * @return QueueNumber 是否已赋值
                     * 
                     */
                    bool QueueNumberHasBeenSet() const;

                    /**
                     * 获取<p>每秒生产消息数 单位：条/秒</p>
                     * @return MessagePublishRate <p>每秒生产消息数 单位：条/秒</p>
                     * 
                     */
                    double GetMessagePublishRate() const;

                    /**
                     * 设置<p>每秒生产消息数 单位：条/秒</p>
                     * @param _messagePublishRate <p>每秒生产消息数 单位：条/秒</p>
                     * 
                     */
                    void SetMessagePublishRate(const double& _messagePublishRate);

                    /**
                     * 判断参数 MessagePublishRate 是否已赋值
                     * @return MessagePublishRate 是否已赋值
                     * 
                     */
                    bool MessagePublishRateHasBeenSet() const;

                    /**
                     * 获取<p>堆积消息数 单位：条</p>
                     * @return MessageStackNumber <p>堆积消息数 单位：条</p>
                     * 
                     */
                    int64_t GetMessageStackNumber() const;

                    /**
                     * 设置<p>堆积消息数 单位：条</p>
                     * @param _messageStackNumber <p>堆积消息数 单位：条</p>
                     * 
                     */
                    void SetMessageStackNumber(const int64_t& _messageStackNumber);

                    /**
                     * 判断参数 MessageStackNumber 是否已赋值
                     * @return MessageStackNumber 是否已赋值
                     * 
                     */
                    bool MessageStackNumberHasBeenSet() const;

                    /**
                     * 获取<p>实例到期时间，按量付费的资源该值为 0，毫秒为单位。unix 时间戳</p>
                     * @return ExpireTime <p>实例到期时间，按量付费的资源该值为 0，毫秒为单位。unix 时间戳</p>
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置<p>实例到期时间，按量付费的资源该值为 0，毫秒为单位。unix 时间戳</p>
                     * @param _expireTime <p>实例到期时间，按量付费的资源该值为 0，毫秒为单位。unix 时间戳</p>
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
                     * 获取<p>Channel数量</p>
                     * @return ChannelNumber <p>Channel数量</p>
                     * 
                     */
                    int64_t GetChannelNumber() const;

                    /**
                     * 设置<p>Channel数量</p>
                     * @param _channelNumber <p>Channel数量</p>
                     * 
                     */
                    void SetChannelNumber(const int64_t& _channelNumber);

                    /**
                     * 判断参数 ChannelNumber 是否已赋值
                     * @return ChannelNumber 是否已赋值
                     * 
                     */
                    bool ChannelNumberHasBeenSet() const;

                    /**
                     * 获取<p>Connection数量</p>
                     * @return ConnectionNumber <p>Connection数量</p>
                     * 
                     */
                    int64_t GetConnectionNumber() const;

                    /**
                     * 设置<p>Connection数量</p>
                     * @param _connectionNumber <p>Connection数量</p>
                     * 
                     */
                    void SetConnectionNumber(const int64_t& _connectionNumber);

                    /**
                     * 判断参数 ConnectionNumber 是否已赋值
                     * @return ConnectionNumber 是否已赋值
                     * 
                     */
                    bool ConnectionNumberHasBeenSet() const;

                    /**
                     * 获取<p>Consumer数量</p>
                     * @return ConsumerNumber <p>Consumer数量</p>
                     * 
                     */
                    int64_t GetConsumerNumber() const;

                    /**
                     * 设置<p>Consumer数量</p>
                     * @param _consumerNumber <p>Consumer数量</p>
                     * 
                     */
                    void SetConsumerNumber(const int64_t& _consumerNumber);

                    /**
                     * 判断参数 ConsumerNumber 是否已赋值
                     * @return ConsumerNumber 是否已赋值
                     * 
                     */
                    bool ConsumerNumberHasBeenSet() const;

                    /**
                     * 获取<p>Exchang数量</p>
                     * @return ExchangeNumber <p>Exchang数量</p>
                     * 
                     */
                    int64_t GetExchangeNumber() const;

                    /**
                     * 设置<p>Exchang数量</p>
                     * @param _exchangeNumber <p>Exchang数量</p>
                     * 
                     */
                    void SetExchangeNumber(const int64_t& _exchangeNumber);

                    /**
                     * 判断参数 ExchangeNumber 是否已赋值
                     * @return ExchangeNumber 是否已赋值
                     * 
                     */
                    bool ExchangeNumberHasBeenSet() const;

                    /**
                     * 获取<p>集群异常信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExceptionInformation <p>集群异常信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExceptionInformation() const;

                    /**
                     * 设置<p>集群异常信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _exceptionInformation <p>集群异常信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExceptionInformation(const std::string& _exceptionInformation);

                    /**
                     * 判断参数 ExceptionInformation 是否已赋值
                     * @return ExceptionInformation 是否已赋值
                     * 
                     */
                    bool ExceptionInformationHasBeenSet() const;

                    /**
                     * 获取<p>实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败</p>
                     * @return ClusterStatus <p>实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败</p>
                     * 
                     */
                    int64_t GetClusterStatus() const;

                    /**
                     * 设置<p>实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败</p>
                     * @param _clusterStatus <p>实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败</p>
                     * 
                     */
                    void SetClusterStatus(const int64_t& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     * 
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取<p>自动续费标记，0表示默认状态(用户未设置，即初始状态即手动续费)， 1表示自动续费，2表示明确不自动续费(用户设置)</p>
                     * @return AutoRenewFlag <p>自动续费标记，0表示默认状态(用户未设置，即初始状态即手动续费)， 1表示自动续费，2表示明确不自动续费(用户设置)</p>
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>自动续费标记，0表示默认状态(用户未设置，即初始状态即手动续费)， 1表示自动续费，2表示明确不自动续费(用户设置)</p>
                     * @param _autoRenewFlag <p>自动续费标记，0表示默认状态(用户未设置，即初始状态即手动续费)， 1表示自动续费，2表示明确不自动续费(用户设置)</p>
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>是否开启镜像队列策略。1表示开启，0表示没开启。</p>
                     * @return MirrorQueuePolicyFlag <p>是否开启镜像队列策略。1表示开启，0表示没开启。</p>
                     * 
                     */
                    int64_t GetMirrorQueuePolicyFlag() const;

                    /**
                     * 设置<p>是否开启镜像队列策略。1表示开启，0表示没开启。</p>
                     * @param _mirrorQueuePolicyFlag <p>是否开启镜像队列策略。1表示开启，0表示没开启。</p>
                     * 
                     */
                    void SetMirrorQueuePolicyFlag(const int64_t& _mirrorQueuePolicyFlag);

                    /**
                     * 判断参数 MirrorQueuePolicyFlag 是否已赋值
                     * @return MirrorQueuePolicyFlag 是否已赋值
                     * 
                     */
                    bool MirrorQueuePolicyFlagHasBeenSet() const;

                    /**
                     * 获取<p>每秒消费消息数 单位：条/秒</p>
                     * @return MessageConsumeRate <p>每秒消费消息数 单位：条/秒</p>
                     * 
                     */
                    double GetMessageConsumeRate() const;

                    /**
                     * 设置<p>每秒消费消息数 单位：条/秒</p>
                     * @param _messageConsumeRate <p>每秒消费消息数 单位：条/秒</p>
                     * 
                     */
                    void SetMessageConsumeRate(const double& _messageConsumeRate);

                    /**
                     * 判断参数 MessageConsumeRate 是否已赋值
                     * @return MessageConsumeRate 是否已赋值
                     * 
                     */
                    bool MessageConsumeRateHasBeenSet() const;

                    /**
                     * 获取<p>集群版本信息</p>
                     * @return ClusterVersion <p>集群版本信息</p>
                     * 
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置<p>集群版本信息</p>
                     * @param _clusterVersion <p>集群版本信息</p>
                     * 
                     */
                    void SetClusterVersion(const std::string& _clusterVersion);

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     * 
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取<p>计费模式，0-后付费，1-预付费</p>
                     * @return PayMode <p>计费模式，0-后付费，1-预付费</p>
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置<p>计费模式，0-后付费，1-预付费</p>
                     * @param _payMode <p>计费模式，0-后付费，1-预付费</p>
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
                     * 获取<p>实例类型，0 专享版、1 Serverless 版</p>
                     * @return InstanceType <p>实例类型，0 专享版、1 Serverless 版</p>
                     * 
                     */
                    uint64_t GetInstanceType() const;

                    /**
                     * 设置<p>实例类型，0 专享版、1 Serverless 版</p>
                     * @param _instanceType <p>实例类型，0 专享版、1 Serverless 版</p>
                     * 
                     */
                    void SetInstanceType(const uint64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>开始隔离时间。unix 时间戳</p>
                     * @return IsolatedTime <p>开始隔离时间。unix 时间戳</p>
                     * 
                     */
                    int64_t GetIsolatedTime() const;

                    /**
                     * 设置<p>开始隔离时间。unix 时间戳</p>
                     * @param _isolatedTime <p>开始隔离时间。unix 时间戳</p>
                     * 
                     */
                    void SetIsolatedTime(const int64_t& _isolatedTime);

                    /**
                     * 判断参数 IsolatedTime 是否已赋值
                     * @return IsolatedTime 是否已赋值
                     * 
                     */
                    bool IsolatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否为容器实例，默认 true</p>
                     * @return Container <p>是否为容器实例，默认 true</p>
                     * 
                     */
                    bool GetContainer() const;

                    /**
                     * 设置<p>是否为容器实例，默认 true</p>
                     * @param _container <p>是否为容器实例，默认 true</p>
                     * 
                     */
                    void SetContainer(const bool& _container);

                    /**
                     * 判断参数 Container 是否已赋值
                     * @return Container 是否已赋值
                     * 
                     */
                    bool ContainerHasBeenSet() const;

                    /**
                     * 获取<p>标签列表</p>
                     * @return Tags <p>标签列表</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _tags <p>标签列表</p>
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
                     * 获取<p>是否已开启删除保护</p>
                     * @return EnableDeletionProtection <p>是否已开启删除保护</p>
                     * 
                     */
                    bool GetEnableDeletionProtection() const;

                    /**
                     * 设置<p>是否已开启删除保护</p>
                     * @param _enableDeletionProtection <p>是否已开启删除保护</p>
                     * 
                     */
                    void SetEnableDeletionProtection(const bool& _enableDeletionProtection);

                    /**
                     * 判断参数 EnableDeletionProtection 是否已赋值
                     * @return EnableDeletionProtection 是否已赋值
                     * 
                     */
                    bool EnableDeletionProtectionHasBeenSet() const;

                    /**
                     * 获取<p>是否有vhost未开启镜像队列风险</p>
                     * @return MirroredQueueRisk <p>是否有vhost未开启镜像队列风险</p>
                     * 
                     */
                    bool GetMirroredQueueRisk() const;

                    /**
                     * 设置<p>是否有vhost未开启镜像队列风险</p>
                     * @param _mirroredQueueRisk <p>是否有vhost未开启镜像队列风险</p>
                     * 
                     */
                    void SetMirroredQueueRisk(const bool& _mirroredQueueRisk);

                    /**
                     * 判断参数 MirroredQueueRisk 是否已赋值
                     * @return MirroredQueueRisk 是否已赋值
                     * 
                     */
                    bool MirroredQueueRiskHasBeenSet() const;

                    /**
                     * 获取<p>是否提示风险</p>
                     * @return EnableRiskWarning <p>是否提示风险</p>
                     * 
                     */
                    bool GetEnableRiskWarning() const;

                    /**
                     * 设置<p>是否提示风险</p>
                     * @param _enableRiskWarning <p>是否提示风险</p>
                     * 
                     */
                    void SetEnableRiskWarning(const bool& _enableRiskWarning);

                    /**
                     * 判断参数 EnableRiskWarning 是否已赋值
                     * @return EnableRiskWarning 是否已赋值
                     * 
                     */
                    bool EnableRiskWarningHasBeenSet() const;

                    /**
                     * 获取<p>消费超时时间</p>
                     * @return ConsumeTimeout <p>消费超时时间</p>
                     * 
                     */
                    uint64_t GetConsumeTimeout() const;

                    /**
                     * 设置<p>消费超时时间</p>
                     * @param _consumeTimeout <p>消费超时时间</p>
                     * 
                     */
                    void SetConsumeTimeout(const uint64_t& _consumeTimeout);

                    /**
                     * 判断参数 ConsumeTimeout 是否已赋值
                     * @return ConsumeTimeout 是否已赋值
                     * 
                     */
                    bool ConsumeTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>最大Channel数</p>
                     * @return ChannelMax <p>最大Channel数</p>
                     * 
                     */
                    uint64_t GetChannelMax() const;

                    /**
                     * 设置<p>最大Channel数</p>
                     * @param _channelMax <p>最大Channel数</p>
                     * 
                     */
                    void SetChannelMax(const uint64_t& _channelMax);

                    /**
                     * 判断参数 ChannelMax 是否已赋值
                     * @return ChannelMax 是否已赋值
                     * 
                     */
                    bool ChannelMaxHasBeenSet() const;

                    /**
                     * 获取<p>集群类型</p><p>枚举值：</p><ul><li>NORMAL： 公有云</li><li>CDC： 本地专用集群</li></ul>
                     * @return ClusterType <p>集群类型</p><p>枚举值：</p><ul><li>NORMAL： 公有云</li><li>CDC： 本地专用集群</li></ul>
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置<p>集群类型</p><p>枚举值：</p><ul><li>NORMAL： 公有云</li><li>CDC： 本地专用集群</li></ul>
                     * @param _clusterType <p>集群类型</p><p>枚举值：</p><ul><li>NORMAL： 公有云</li><li>CDC： 本地专用集群</li></ul>
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
                     * 获取<p>CDC集群ID</p>
                     * @return CdcClusterId <p>CDC集群ID</p>
                     * 
                     */
                    std::string GetCdcClusterId() const;

                    /**
                     * 设置<p>CDC集群ID</p>
                     * @param _cdcClusterId <p>CDC集群ID</p>
                     * 
                     */
                    void SetCdcClusterId(const std::string& _cdcClusterId);

                    /**
                     * 判断参数 CdcClusterId 是否已赋值
                     * @return CdcClusterId 是否已赋值
                     * 
                     */
                    bool CdcClusterIdHasBeenSet() const;

                private:

                    /**
                     * <p>集群 ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>集群名称</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>地域信息</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>创建时间，毫秒为单位。unix 时间戳</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>集群说明信息</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>VPC及网络信息</p>
                     */
                    std::vector<VpcEndpointInfo> m_vpcs;
                    bool m_vpcsHasBeenSet;

                    /**
                     * <p>可用区信息</p>
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * <p>虚拟主机数量</p>
                     */
                    int64_t m_virtualHostNumber;
                    bool m_virtualHostNumberHasBeenSet;

                    /**
                     * <p>队列数量</p>
                     */
                    int64_t m_queueNumber;
                    bool m_queueNumberHasBeenSet;

                    /**
                     * <p>每秒生产消息数 单位：条/秒</p>
                     */
                    double m_messagePublishRate;
                    bool m_messagePublishRateHasBeenSet;

                    /**
                     * <p>堆积消息数 单位：条</p>
                     */
                    int64_t m_messageStackNumber;
                    bool m_messageStackNumberHasBeenSet;

                    /**
                     * <p>实例到期时间，按量付费的资源该值为 0，毫秒为单位。unix 时间戳</p>
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>Channel数量</p>
                     */
                    int64_t m_channelNumber;
                    bool m_channelNumberHasBeenSet;

                    /**
                     * <p>Connection数量</p>
                     */
                    int64_t m_connectionNumber;
                    bool m_connectionNumberHasBeenSet;

                    /**
                     * <p>Consumer数量</p>
                     */
                    int64_t m_consumerNumber;
                    bool m_consumerNumberHasBeenSet;

                    /**
                     * <p>Exchang数量</p>
                     */
                    int64_t m_exchangeNumber;
                    bool m_exchangeNumberHasBeenSet;

                    /**
                     * <p>集群异常信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_exceptionInformation;
                    bool m_exceptionInformationHasBeenSet;

                    /**
                     * <p>实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败</p>
                     */
                    int64_t m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * <p>自动续费标记，0表示默认状态(用户未设置，即初始状态即手动续费)， 1表示自动续费，2表示明确不自动续费(用户设置)</p>
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>是否开启镜像队列策略。1表示开启，0表示没开启。</p>
                     */
                    int64_t m_mirrorQueuePolicyFlag;
                    bool m_mirrorQueuePolicyFlagHasBeenSet;

                    /**
                     * <p>每秒消费消息数 单位：条/秒</p>
                     */
                    double m_messageConsumeRate;
                    bool m_messageConsumeRateHasBeenSet;

                    /**
                     * <p>集群版本信息</p>
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * <p>计费模式，0-后付费，1-预付费</p>
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>实例类型，0 专享版、1 Serverless 版</p>
                     */
                    uint64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>开始隔离时间。unix 时间戳</p>
                     */
                    int64_t m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                    /**
                     * <p>是否为容器实例，默认 true</p>
                     */
                    bool m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>是否已开启删除保护</p>
                     */
                    bool m_enableDeletionProtection;
                    bool m_enableDeletionProtectionHasBeenSet;

                    /**
                     * <p>是否有vhost未开启镜像队列风险</p>
                     */
                    bool m_mirroredQueueRisk;
                    bool m_mirroredQueueRiskHasBeenSet;

                    /**
                     * <p>是否提示风险</p>
                     */
                    bool m_enableRiskWarning;
                    bool m_enableRiskWarningHasBeenSet;

                    /**
                     * <p>消费超时时间</p>
                     */
                    uint64_t m_consumeTimeout;
                    bool m_consumeTimeoutHasBeenSet;

                    /**
                     * <p>最大Channel数</p>
                     */
                    uint64_t m_channelMax;
                    bool m_channelMaxHasBeenSet;

                    /**
                     * <p>集群类型</p><p>枚举值：</p><ul><li>NORMAL： 公有云</li><li>CDC： 本地专用集群</li></ul>
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <p>CDC集群ID</p>
                     */
                    std::string m_cdcClusterId;
                    bool m_cdcClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQCLUSTERINFO_H_
