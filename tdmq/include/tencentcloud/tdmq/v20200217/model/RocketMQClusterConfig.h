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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCLUSTERCONFIG_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCLUSTERCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RocketMQTopicDistribution.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RocketMQ集群配置
                */
                class RocketMQClusterConfig : public AbstractModel
                {
                public:
                    RocketMQClusterConfig();
                    ~RocketMQClusterConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取单命名空间TPS上限
                     * @return MaxTpsPerNamespace 单命名空间TPS上限
                     * @deprecated
                     */
                    uint64_t GetMaxTpsPerNamespace() const;

                    /**
                     * 设置单命名空间TPS上限
                     * @param _maxTpsPerNamespace 单命名空间TPS上限
                     * @deprecated
                     */
                    void SetMaxTpsPerNamespace(const uint64_t& _maxTpsPerNamespace);

                    /**
                     * 判断参数 MaxTpsPerNamespace 是否已赋值
                     * @return MaxTpsPerNamespace 是否已赋值
                     * @deprecated
                     */
                    bool MaxTpsPerNamespaceHasBeenSet() const;

                    /**
                     * 获取最大命名空间数量
                     * @return MaxNamespaceNum 最大命名空间数量
                     * 
                     */
                    uint64_t GetMaxNamespaceNum() const;

                    /**
                     * 设置最大命名空间数量
                     * @param _maxNamespaceNum 最大命名空间数量
                     * 
                     */
                    void SetMaxNamespaceNum(const uint64_t& _maxNamespaceNum);

                    /**
                     * 判断参数 MaxNamespaceNum 是否已赋值
                     * @return MaxNamespaceNum 是否已赋值
                     * 
                     */
                    bool MaxNamespaceNumHasBeenSet() const;

                    /**
                     * 获取已使用命名空间数量
                     * @return UsedNamespaceNum 已使用命名空间数量
                     * 
                     */
                    uint64_t GetUsedNamespaceNum() const;

                    /**
                     * 设置已使用命名空间数量
                     * @param _usedNamespaceNum 已使用命名空间数量
                     * 
                     */
                    void SetUsedNamespaceNum(const uint64_t& _usedNamespaceNum);

                    /**
                     * 判断参数 UsedNamespaceNum 是否已赋值
                     * @return UsedNamespaceNum 是否已赋值
                     * 
                     */
                    bool UsedNamespaceNumHasBeenSet() const;

                    /**
                     * 获取最大Topic数量
                     * @return MaxTopicNum 最大Topic数量
                     * 
                     */
                    uint64_t GetMaxTopicNum() const;

                    /**
                     * 设置最大Topic数量
                     * @param _maxTopicNum 最大Topic数量
                     * 
                     */
                    void SetMaxTopicNum(const uint64_t& _maxTopicNum);

                    /**
                     * 判断参数 MaxTopicNum 是否已赋值
                     * @return MaxTopicNum 是否已赋值
                     * 
                     */
                    bool MaxTopicNumHasBeenSet() const;

                    /**
                     * 获取已使用Topic数量
                     * @return UsedTopicNum 已使用Topic数量
                     * 
                     */
                    uint64_t GetUsedTopicNum() const;

                    /**
                     * 设置已使用Topic数量
                     * @param _usedTopicNum 已使用Topic数量
                     * 
                     */
                    void SetUsedTopicNum(const uint64_t& _usedTopicNum);

                    /**
                     * 判断参数 UsedTopicNum 是否已赋值
                     * @return UsedTopicNum 是否已赋值
                     * 
                     */
                    bool UsedTopicNumHasBeenSet() const;

                    /**
                     * 获取最大Group数量
                     * @return MaxGroupNum 最大Group数量
                     * 
                     */
                    uint64_t GetMaxGroupNum() const;

                    /**
                     * 设置最大Group数量
                     * @param _maxGroupNum 最大Group数量
                     * 
                     */
                    void SetMaxGroupNum(const uint64_t& _maxGroupNum);

                    /**
                     * 判断参数 MaxGroupNum 是否已赋值
                     * @return MaxGroupNum 是否已赋值
                     * 
                     */
                    bool MaxGroupNumHasBeenSet() const;

                    /**
                     * 获取已使用Group数量
                     * @return UsedGroupNum 已使用Group数量
                     * 
                     */
                    uint64_t GetUsedGroupNum() const;

                    /**
                     * 设置已使用Group数量
                     * @param _usedGroupNum 已使用Group数量
                     * 
                     */
                    void SetUsedGroupNum(const uint64_t& _usedGroupNum);

                    /**
                     * 判断参数 UsedGroupNum 是否已赋值
                     * @return UsedGroupNum 是否已赋值
                     * 
                     */
                    bool UsedGroupNumHasBeenSet() const;

                    /**
                     * 获取消息最大保留时间，以毫秒为单位
                     * @return MaxRetentionTime 消息最大保留时间，以毫秒为单位
                     * 
                     */
                    uint64_t GetMaxRetentionTime() const;

                    /**
                     * 设置消息最大保留时间，以毫秒为单位
                     * @param _maxRetentionTime 消息最大保留时间，以毫秒为单位
                     * 
                     */
                    void SetMaxRetentionTime(const uint64_t& _maxRetentionTime);

                    /**
                     * 判断参数 MaxRetentionTime 是否已赋值
                     * @return MaxRetentionTime 是否已赋值
                     * 
                     */
                    bool MaxRetentionTimeHasBeenSet() const;

                    /**
                     * 获取消息最长延时，以毫秒为单位
                     * @return MaxLatencyTime 消息最长延时，以毫秒为单位
                     * 
                     */
                    uint64_t GetMaxLatencyTime() const;

                    /**
                     * 设置消息最长延时，以毫秒为单位
                     * @param _maxLatencyTime 消息最长延时，以毫秒为单位
                     * 
                     */
                    void SetMaxLatencyTime(const uint64_t& _maxLatencyTime);

                    /**
                     * 判断参数 MaxLatencyTime 是否已赋值
                     * @return MaxLatencyTime 是否已赋值
                     * 
                     */
                    bool MaxLatencyTimeHasBeenSet() const;

                    /**
                     * 获取单个主题最大队列数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxQueuesPerTopic 单个主题最大队列数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMaxQueuesPerTopic() const;

                    /**
                     * 设置单个主题最大队列数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxQueuesPerTopic 单个主题最大队列数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxQueuesPerTopic(const uint64_t& _maxQueuesPerTopic);

                    /**
                     * 判断参数 MaxQueuesPerTopic 是否已赋值
                     * @return MaxQueuesPerTopic 是否已赋值
                     * 
                     */
                    bool MaxQueuesPerTopicHasBeenSet() const;

                    /**
                     * 获取topic分布
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicDistribution topic分布
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RocketMQTopicDistribution> GetTopicDistribution() const;

                    /**
                     * 设置topic分布
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicDistribution topic分布
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopicDistribution(const std::vector<RocketMQTopicDistribution>& _topicDistribution);

                    /**
                     * 判断参数 TopicDistribution 是否已赋值
                     * @return TopicDistribution 是否已赋值
                     * 
                     */
                    bool TopicDistributionHasBeenSet() const;

                    /**
                     * 获取最大角色数量
                     * @return MaxRoleNum 最大角色数量
                     * 
                     */
                    int64_t GetMaxRoleNum() const;

                    /**
                     * 设置最大角色数量
                     * @param _maxRoleNum 最大角色数量
                     * 
                     */
                    void SetMaxRoleNum(const int64_t& _maxRoleNum);

                    /**
                     * 判断参数 MaxRoleNum 是否已赋值
                     * @return MaxRoleNum 是否已赋值
                     * 
                     */
                    bool MaxRoleNumHasBeenSet() const;

                    /**
                     * 获取TPS限额
                     * @return MaxTpsLimit TPS限额
                     * 
                     */
                    int64_t GetMaxTpsLimit() const;

                    /**
                     * 设置TPS限额
                     * @param _maxTpsLimit TPS限额
                     * 
                     */
                    void SetMaxTpsLimit(const int64_t& _maxTpsLimit);

                    /**
                     * 判断参数 MaxTpsLimit 是否已赋值
                     * @return MaxTpsLimit 是否已赋值
                     * 
                     */
                    bool MaxTpsLimitHasBeenSet() const;

                private:

                    /**
                     * 单命名空间TPS上限
                     */
                    uint64_t m_maxTpsPerNamespace;
                    bool m_maxTpsPerNamespaceHasBeenSet;

                    /**
                     * 最大命名空间数量
                     */
                    uint64_t m_maxNamespaceNum;
                    bool m_maxNamespaceNumHasBeenSet;

                    /**
                     * 已使用命名空间数量
                     */
                    uint64_t m_usedNamespaceNum;
                    bool m_usedNamespaceNumHasBeenSet;

                    /**
                     * 最大Topic数量
                     */
                    uint64_t m_maxTopicNum;
                    bool m_maxTopicNumHasBeenSet;

                    /**
                     * 已使用Topic数量
                     */
                    uint64_t m_usedTopicNum;
                    bool m_usedTopicNumHasBeenSet;

                    /**
                     * 最大Group数量
                     */
                    uint64_t m_maxGroupNum;
                    bool m_maxGroupNumHasBeenSet;

                    /**
                     * 已使用Group数量
                     */
                    uint64_t m_usedGroupNum;
                    bool m_usedGroupNumHasBeenSet;

                    /**
                     * 消息最大保留时间，以毫秒为单位
                     */
                    uint64_t m_maxRetentionTime;
                    bool m_maxRetentionTimeHasBeenSet;

                    /**
                     * 消息最长延时，以毫秒为单位
                     */
                    uint64_t m_maxLatencyTime;
                    bool m_maxLatencyTimeHasBeenSet;

                    /**
                     * 单个主题最大队列数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxQueuesPerTopic;
                    bool m_maxQueuesPerTopicHasBeenSet;

                    /**
                     * topic分布
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RocketMQTopicDistribution> m_topicDistribution;
                    bool m_topicDistributionHasBeenSet;

                    /**
                     * 最大角色数量
                     */
                    int64_t m_maxRoleNum;
                    bool m_maxRoleNumHasBeenSet;

                    /**
                     * TPS限额
                     */
                    int64_t m_maxTpsLimit;
                    bool m_maxTpsLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCLUSTERCONFIG_H_
