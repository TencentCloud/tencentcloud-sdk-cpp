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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQGROUP_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RocketMQ消费组信息
                */
                class RocketMQGroup : public AbstractModel
                {
                public:
                    RocketMQGroup();
                    ~RocketMQGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消费组名称
                     * @return Name 消费组名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置消费组名称
                     * @param Name 消费组名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取在线消费者数量
                     * @return ConsumerNum 在线消费者数量
                     */
                    uint64_t GetConsumerNum() const;

                    /**
                     * 设置在线消费者数量
                     * @param ConsumerNum 在线消费者数量
                     */
                    void SetConsumerNum(const uint64_t& _consumerNum);

                    /**
                     * 判断参数 ConsumerNum 是否已赋值
                     * @return ConsumerNum 是否已赋值
                     */
                    bool ConsumerNumHasBeenSet() const;

                    /**
                     * 获取消费TPS
                     * @return TPS 消费TPS
                     */
                    uint64_t GetTPS() const;

                    /**
                     * 设置消费TPS
                     * @param TPS 消费TPS
                     */
                    void SetTPS(const uint64_t& _tPS);

                    /**
                     * 判断参数 TPS 是否已赋值
                     * @return TPS 是否已赋值
                     */
                    bool TPSHasBeenSet() const;

                    /**
                     * 获取总堆积数量
                     * @return TotalAccumulative 总堆积数量
                     */
                    int64_t GetTotalAccumulative() const;

                    /**
                     * 设置总堆积数量
                     * @param TotalAccumulative 总堆积数量
                     */
                    void SetTotalAccumulative(const int64_t& _totalAccumulative);

                    /**
                     * 判断参数 TotalAccumulative 是否已赋值
                     * @return TotalAccumulative 是否已赋值
                     */
                    bool TotalAccumulativeHasBeenSet() const;

                    /**
                     * 获取0表示集群消费模式，1表示广播消费模式，-1表示未知
                     * @return ConsumptionMode 0表示集群消费模式，1表示广播消费模式，-1表示未知
                     */
                    int64_t GetConsumptionMode() const;

                    /**
                     * 设置0表示集群消费模式，1表示广播消费模式，-1表示未知
                     * @param ConsumptionMode 0表示集群消费模式，1表示广播消费模式，-1表示未知
                     */
                    void SetConsumptionMode(const int64_t& _consumptionMode);

                    /**
                     * 判断参数 ConsumptionMode 是否已赋值
                     * @return ConsumptionMode 是否已赋值
                     */
                    bool ConsumptionModeHasBeenSet() const;

                    /**
                     * 获取是否允许消费
                     * @return ReadEnabled 是否允许消费
                     */
                    bool GetReadEnabled() const;

                    /**
                     * 设置是否允许消费
                     * @param ReadEnabled 是否允许消费
                     */
                    void SetReadEnabled(const bool& _readEnabled);

                    /**
                     * 判断参数 ReadEnabled 是否已赋值
                     * @return ReadEnabled 是否已赋值
                     */
                    bool ReadEnabledHasBeenSet() const;

                    /**
                     * 获取重试队列分区数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetryPartitionNum 重试队列分区数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRetryPartitionNum() const;

                    /**
                     * 设置重试队列分区数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RetryPartitionNum 重试队列分区数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRetryPartitionNum(const uint64_t& _retryPartitionNum);

                    /**
                     * 判断参数 RetryPartitionNum 是否已赋值
                     * @return RetryPartitionNum 是否已赋值
                     */
                    bool RetryPartitionNumHasBeenSet() const;

                    /**
                     * 获取创建时间，以毫秒为单位
                     * @return CreateTime 创建时间，以毫秒为单位
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间，以毫秒为单位
                     * @param CreateTime 创建时间，以毫秒为单位
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间，以毫秒为单位
                     * @return UpdateTime 修改时间，以毫秒为单位
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置修改时间，以毫秒为单位
                     * @param UpdateTime 修改时间，以毫秒为单位
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取客户端协议
                     * @return ClientProtocol 客户端协议
                     */
                    std::string GetClientProtocol() const;

                    /**
                     * 设置客户端协议
                     * @param ClientProtocol 客户端协议
                     */
                    void SetClientProtocol(const std::string& _clientProtocol);

                    /**
                     * 判断参数 ClientProtocol 是否已赋值
                     * @return ClientProtocol 是否已赋值
                     */
                    bool ClientProtocolHasBeenSet() const;

                    /**
                     * 获取说明信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 说明信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置说明信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Remark 说明信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取消费者类型，枚举值ACTIVELY, PASSIVELY
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConsumerType 消费者类型，枚举值ACTIVELY, PASSIVELY
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetConsumerType() const;

                    /**
                     * 设置消费者类型，枚举值ACTIVELY, PASSIVELY
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConsumerType 消费者类型，枚举值ACTIVELY, PASSIVELY
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConsumerType(const std::string& _consumerType);

                    /**
                     * 判断参数 ConsumerType 是否已赋值
                     * @return ConsumerType 是否已赋值
                     */
                    bool ConsumerTypeHasBeenSet() const;

                    /**
                     * 获取是否开启广播消费
                     * @return BroadcastEnabled 是否开启广播消费
                     */
                    bool GetBroadcastEnabled() const;

                    /**
                     * 设置是否开启广播消费
                     * @param BroadcastEnabled 是否开启广播消费
                     */
                    void SetBroadcastEnabled(const bool& _broadcastEnabled);

                    /**
                     * 判断参数 BroadcastEnabled 是否已赋值
                     * @return BroadcastEnabled 是否已赋值
                     */
                    bool BroadcastEnabledHasBeenSet() const;

                    /**
                     * 获取Group类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupType Group类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置Group类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GroupType Group类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetryMaxTimes 重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRetryMaxTimes() const;

                    /**
                     * 设置重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RetryMaxTimes 重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRetryMaxTimes(const uint64_t& _retryMaxTimes);

                    /**
                     * 判断参数 RetryMaxTimes 是否已赋值
                     * @return RetryMaxTimes 是否已赋值
                     */
                    bool RetryMaxTimesHasBeenSet() const;

                private:

                    /**
                     * 消费组名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 在线消费者数量
                     */
                    uint64_t m_consumerNum;
                    bool m_consumerNumHasBeenSet;

                    /**
                     * 消费TPS
                     */
                    uint64_t m_tPS;
                    bool m_tPSHasBeenSet;

                    /**
                     * 总堆积数量
                     */
                    int64_t m_totalAccumulative;
                    bool m_totalAccumulativeHasBeenSet;

                    /**
                     * 0表示集群消费模式，1表示广播消费模式，-1表示未知
                     */
                    int64_t m_consumptionMode;
                    bool m_consumptionModeHasBeenSet;

                    /**
                     * 是否允许消费
                     */
                    bool m_readEnabled;
                    bool m_readEnabledHasBeenSet;

                    /**
                     * 重试队列分区数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_retryPartitionNum;
                    bool m_retryPartitionNumHasBeenSet;

                    /**
                     * 创建时间，以毫秒为单位
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间，以毫秒为单位
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 客户端协议
                     */
                    std::string m_clientProtocol;
                    bool m_clientProtocolHasBeenSet;

                    /**
                     * 说明信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 消费者类型，枚举值ACTIVELY, PASSIVELY
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_consumerType;
                    bool m_consumerTypeHasBeenSet;

                    /**
                     * 是否开启广播消费
                     */
                    bool m_broadcastEnabled;
                    bool m_broadcastEnabledHasBeenSet;

                    /**
                     * Group类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * 重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_retryMaxTimes;
                    bool m_retryMaxTimesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQGROUP_H_
