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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQCLUSTERINFO_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQCLUSTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trabbit/v20230418/model/VpcEndpointInfo.h>
#include <tencentcloud/trabbit/v20230418/model/RabbitMQServerlessTag.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * RabbiteMQ集群基本信息
                */
                class RabbitMQClusterInfo : public AbstractModel
                {
                public:
                    RabbitMQClusterInfo();
                    ~RabbitMQClusterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterId <p>集群ID</p>
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
                     * 获取<p>创建时间，毫秒为单位</p>
                     * @return CreateTime <p>创建时间，毫秒为单位</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间，毫秒为单位</p>
                     * @param _createTime <p>创建时间，毫秒为单位</p>
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
                     * 获取<p>过期时间</p>
                     * @return ExpireTime <p>过期时间</p>
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置<p>过期时间</p>
                     * @param _expireTime <p>过期时间</p>
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
                     * @return ExceptionInformation <p>集群异常信息</p>
                     * 
                     */
                    std::string GetExceptionInformation() const;

                    /**
                     * 设置<p>集群异常信息</p>
                     * @param _exceptionInformation <p>集群异常信息</p>
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
                     * 获取<p>集群类型</p>
                     * @return InstanceType <p>集群类型</p>
                     * 
                     */
                    uint64_t GetInstanceType() const;

                    /**
                     * 设置<p>集群类型</p>
                     * @param _instanceType <p>集群类型</p>
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
                     * 获取<p>消息保留时间，单位小时</p>
                     * @return MessageRetainTime <p>消息保留时间，单位小时</p>
                     * 
                     */
                    uint64_t GetMessageRetainTime() const;

                    /**
                     * 设置<p>消息保留时间，单位小时</p>
                     * @param _messageRetainTime <p>消息保留时间，单位小时</p>
                     * 
                     */
                    void SetMessageRetainTime(const uint64_t& _messageRetainTime);

                    /**
                     * 判断参数 MessageRetainTime 是否已赋值
                     * @return MessageRetainTime 是否已赋值
                     * 
                     */
                    bool MessageRetainTimeHasBeenSet() const;

                    /**
                     * 获取<p>发送消息流量比例</p>
                     * @return SendReceiveRatio <p>发送消息流量比例</p>
                     * 
                     */
                    double GetSendReceiveRatio() const;

                    /**
                     * 设置<p>发送消息流量比例</p>
                     * @param _sendReceiveRatio <p>发送消息流量比例</p>
                     * 
                     */
                    void SetSendReceiveRatio(const double& _sendReceiveRatio);

                    /**
                     * 判断参数 SendReceiveRatio 是否已赋值
                     * @return SendReceiveRatio 是否已赋值
                     * 
                     */
                    bool SendReceiveRatioHasBeenSet() const;

                    /**
                     * 获取<p>消息轨迹保留时间，单位小时</p>
                     * @return TraceTime <p>消息轨迹保留时间，单位小时</p>
                     * 
                     */
                    uint64_t GetTraceTime() const;

                    /**
                     * 设置<p>消息轨迹保留时间，单位小时</p>
                     * @param _traceTime <p>消息轨迹保留时间，单位小时</p>
                     * 
                     */
                    void SetTraceTime(const uint64_t& _traceTime);

                    /**
                     * 判断参数 TraceTime 是否已赋值
                     * @return TraceTime 是否已赋值
                     * 
                     */
                    bool TraceTimeHasBeenSet() const;

                    /**
                     * 获取<p>实例标签列表</p>
                     * @return Tags <p>实例标签列表</p>
                     * 
                     */
                    std::vector<RabbitMQServerlessTag> GetTags() const;

                    /**
                     * 设置<p>实例标签列表</p>
                     * @param _tags <p>实例标签列表</p>
                     * 
                     */
                    void SetTags(const std::vector<RabbitMQServerlessTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>是否开启弹性tps</p>
                     * @return ElasticTpsFlag <p>是否开启弹性tps</p>
                     * 
                     */
                    bool GetElasticTpsFlag() const;

                    /**
                     * 设置<p>是否开启弹性tps</p>
                     * @param _elasticTpsFlag <p>是否开启弹性tps</p>
                     * 
                     */
                    void SetElasticTpsFlag(const bool& _elasticTpsFlag);

                    /**
                     * 判断参数 ElasticTpsFlag 是否已赋值
                     * @return ElasticTpsFlag 是否已赋值
                     * 
                     */
                    bool ElasticTpsFlagHasBeenSet() const;

                    /**
                     * 获取<p>弹性tps倍数，默认弹1倍</p>
                     * @return ElasticTpsRatio <p>弹性tps倍数，默认弹1倍</p>
                     * 
                     */
                    double GetElasticTpsRatio() const;

                    /**
                     * 设置<p>弹性tps倍数，默认弹1倍</p>
                     * @param _elasticTpsRatio <p>弹性tps倍数，默认弹1倍</p>
                     * 
                     */
                    void SetElasticTpsRatio(const double& _elasticTpsRatio);

                    /**
                     * 判断参数 ElasticTpsRatio 是否已赋值
                     * @return ElasticTpsRatio 是否已赋值
                     * 
                     */
                    bool ElasticTpsRatioHasBeenSet() const;

                    /**
                     * 获取<p>最大重投次数</p>
                     * @return MaxRedeliverCount <p>最大重投次数</p>
                     * 
                     */
                    uint64_t GetMaxRedeliverCount() const;

                    /**
                     * 设置<p>最大重投次数</p>
                     * @param _maxRedeliverCount <p>最大重投次数</p>
                     * 
                     */
                    void SetMaxRedeliverCount(const uint64_t& _maxRedeliverCount);

                    /**
                     * 判断参数 MaxRedeliverCount 是否已赋值
                     * @return MaxRedeliverCount 是否已赋值
                     * 
                     */
                    bool MaxRedeliverCountHasBeenSet() const;

                    /**
                     * 获取<p>消费超时时间，单位min</p>
                     * @return ConsumerTimeout <p>消费超时时间，单位min</p>
                     * 
                     */
                    uint64_t GetConsumerTimeout() const;

                    /**
                     * 设置<p>消费超时时间，单位min</p>
                     * @param _consumerTimeout <p>消费超时时间，单位min</p>
                     * 
                     */
                    void SetConsumerTimeout(const uint64_t& _consumerTimeout);

                    /**
                     * 判断参数 ConsumerTimeout 是否已赋值
                     * @return ConsumerTimeout 是否已赋值
                     * 
                     */
                    bool ConsumerTimeoutHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p>
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
                     * <p>创建时间，毫秒为单位</p>
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
                     * <p>过期时间</p>
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
                     * <p>集群类型</p>
                     */
                    uint64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>消息保留时间，单位小时</p>
                     */
                    uint64_t m_messageRetainTime;
                    bool m_messageRetainTimeHasBeenSet;

                    /**
                     * <p>发送消息流量比例</p>
                     */
                    double m_sendReceiveRatio;
                    bool m_sendReceiveRatioHasBeenSet;

                    /**
                     * <p>消息轨迹保留时间，单位小时</p>
                     */
                    uint64_t m_traceTime;
                    bool m_traceTimeHasBeenSet;

                    /**
                     * <p>实例标签列表</p>
                     */
                    std::vector<RabbitMQServerlessTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>是否开启弹性tps</p>
                     */
                    bool m_elasticTpsFlag;
                    bool m_elasticTpsFlagHasBeenSet;

                    /**
                     * <p>弹性tps倍数，默认弹1倍</p>
                     */
                    double m_elasticTpsRatio;
                    bool m_elasticTpsRatioHasBeenSet;

                    /**
                     * <p>最大重投次数</p>
                     */
                    uint64_t m_maxRedeliverCount;
                    bool m_maxRedeliverCountHasBeenSet;

                    /**
                     * <p>消费超时时间，单位min</p>
                     */
                    uint64_t m_consumerTimeout;
                    bool m_consumerTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQCLUSTERINFO_H_
